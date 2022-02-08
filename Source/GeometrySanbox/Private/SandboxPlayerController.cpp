// Fill out your copyright notice in the Description page of Project Settings.


#include "SandboxPlayerController.h"
#include "SandboxPawn.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"

DEFINE_LOG_CATEGORY_STATIC(LogSandboxPlayerController, All, All)

void ASandboxPlayerController::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASandboxPawn::StaticClass(), Pawns);
}

void ASandboxPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (InputComponent)
	{
		InputComponent->BindAction("ChangePawn", IE_Pressed, this, &ASandboxPlayerController::ChangePawn);
	}
}

void ASandboxPlayerController::ChangePawn()
{
	if (Pawns.Num() <= 1) return;

	UE_LOG(LogSandboxPlayerController, Display, TEXT("Pawn changed"));

	ASandboxPawn* CurrentPawn = Cast<ASandboxPawn>(Pawns[CurrentPawnIndex]);
	CurrentPawnIndex = (CurrentPawnIndex + 1) % Pawns.Num();

	if (!CurrentPawn) return;

	Possess(CurrentPawn);
}
