// Copyright Epic Games, Inc. All Rights Reserved.


#include "GeometrySanboxGameModeBase.h"
#include "SandboxPlayerController.h"
#include "SandboxPawn.h"

AGeometrySanboxGameModeBase::AGeometrySanboxGameModeBase()
{
	DefaultPawnClass = ASandboxPawn::StaticClass();
	PlayerControllerClass = ASandboxPlayerController::StaticClass();
}