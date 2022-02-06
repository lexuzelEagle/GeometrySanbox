// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseGeometryActor.generated.h"

UCLASS()
class GEOMETRYSANBOX_API ABaseGeometryActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseGeometryActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Weapons");
	int32 WeaponsNum = 4;

	UPROPERTY(EditDefaultsOnly, Category = "Stat");
	int32 KillsNum = 7;

	UPROPERTY(EditInstanceOnly, Category = "Health");
	float Health = 34.54678f;

	UPROPERTY(EditAnywhere, Category = "Health");
	bool IsDead = false;

	UPROPERTY(VisibleAnywhere, Category = "Weapons");
	bool HasWeapon = true;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void printLogs();
	void printStringTypes();

};
