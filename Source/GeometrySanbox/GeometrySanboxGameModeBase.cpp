// Copyright Epic Games, Inc. All Rights Reserved.


#include "GeometrySanboxGameModeBase.h"
#include "SandboxPawn.h"

AGeometrySanboxGameModeBase::AGeometrySanboxGameModeBase()
{
	DefaultPawnClass = ASandboxPawn::StaticClass();
}