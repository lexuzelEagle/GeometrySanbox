// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGeometryActor.h"
#include "Engine/Engine.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "TimerManager.h"

DEFINE_LOG_CATEGORY_STATIC(LogBaseGeometry, All, All)

// Sets default values
ABaseGeometryActor::ABaseGeometryActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>("BaseMesh");
	SetRootComponent(BaseMesh);
}

// Called when the game starts or when spawned
void ABaseGeometryActor::BeginPlay()
{
	Super::BeginPlay();

	InitialLocation = GetActorLocation();

	//printLogs();
	//printStringTypes();
	//printTransform();

	SetColor(GeometryData.Color);
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ABaseGeometryActor::OnTimerFired, GeometryData.TimerRate, true);
}

void ABaseGeometryActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UE_LOG(LogBaseGeometry, Error, TEXT("Actor is destroyed! Name = %s"), *GetName());
	Super::EndPlay(EndPlayReason);
}

// Called every frame
void ABaseGeometryActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	handleMovement();
}

void ABaseGeometryActor::printLogs()
{
	UE_LOG(LogBaseGeometry, Warning, TEXT("Actor name = %s"), *GetName());
	UE_LOG(LogBaseGeometry, Warning, TEXT("WeaponNum = %d; KillsNum = %i"), WeaponsNum, KillsNum);
	UE_LOG(LogBaseGeometry, Warning, TEXT("Health = %f"), Health);
	UE_LOG(LogBaseGeometry, Warning, TEXT("IsDead = %d"), IsDead);
	UE_LOG(LogBaseGeometry, Warning, TEXT("HasWeapon = %d"), static_cast<int>(HasWeapon));
}

void ABaseGeometryActor::printStringTypes()
{
	FString Name = "John Connor";
	UE_LOG(LogBaseGeometry, Display, TEXT("Name = %s"), *Name);

	FString WeaponsNumStr = "Weapons num = " + FString::FromInt(WeaponsNum);
	FString HealthStr = "Health = " + FString::SanitizeFloat(Health);
	FString IsDeadStr = "Is dead = " + FString(IsDead ? "true" : "false");

	FString Stat = FString::Printf(TEXT(" \n == All Stat == \n %s \n %s \n %s \n "), *WeaponsNumStr, *HealthStr, *IsDeadStr);
	UE_LOG(LogBaseGeometry, Warning, TEXT("%s"), *Stat);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, Name, false, FVector2D(1.5f, 1.5f));
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, Stat, false, FVector2D(1.5f, 1.5f));
	}
}

void ABaseGeometryActor::printTransform()
{
	FTransform Transform = GetActorTransform();
	FVector Location = Transform.GetLocation();
	FRotator Ratation = Transform.Rotator();
	FVector Scale = Transform.GetScale3D();

	UE_LOG(LogBaseGeometry, Warning, TEXT("Actor name = %s"), *GetName());
	UE_LOG(LogBaseGeometry, Warning, TEXT("Transform = %s"), *Transform.ToString());
	UE_LOG(LogBaseGeometry, Warning, TEXT("Location = %s"), *Location.ToString());
	UE_LOG(LogBaseGeometry, Warning, TEXT("Rotation = %s"), *Ratation.ToString());
	UE_LOG(LogBaseGeometry, Warning, TEXT("Scale = %s"), *Scale.ToString());

	UE_LOG(LogBaseGeometry, Warning, TEXT("Human Transform = %s"), *Transform.ToHumanReadableString());
}

void ABaseGeometryActor::handleMovement()
{
	switch (GeometryData.MoveType)
	{
		case EMovementType::Sin:
		{
			if (GetWorld())
			{
				FVector CurrentLocation = GetActorLocation();
				float Time = GetWorld()->GetTimeSeconds();
				CurrentLocation.Z = InitialLocation.Z + GeometryData.Amplitude * FMath::Sin(GeometryData.Frequency * Time);
				SetActorLocation(CurrentLocation);
			}

			break;
		}
	
		case EMovementType::Static: break;
		default: break;
	}
}

void ABaseGeometryActor::SetColor(const FLinearColor &Color)
{
	if (!BaseMesh) return;

	UMaterialInstanceDynamic* DynMaterial = BaseMesh->CreateAndSetMaterialInstanceDynamic(0);
	if (DynMaterial)
	{
		DynMaterial->SetVectorParameterValue("Color", Color);
	}
}

void ABaseGeometryActor::OnTimerFired()
{
	if (++TimerCount <= MaxTimerCount)
	{
		const FLinearColor NewColor = FLinearColor::MakeRandomColor();
		UE_LOG(LogBaseGeometry, Warning, TEXT("TimerCount = %i, Color to set up = %s"), TimerCount, *NewColor.ToString());
		SetColor(NewColor);
		OnColorChanged.Broadcast(NewColor, GetName());
	}
	else
	{
		UE_LOG(LogBaseGeometry, Error, TEXT("Timer has been stopped!"));
		GetWorldTimerManager().ClearTimer(TimerHandle);
		OnTimerFinished.Broadcast(this);
	}
}

