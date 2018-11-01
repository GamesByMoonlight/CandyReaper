// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "CandyReaperGameMode.h"
#include "CandyReaperPlayerController.h"
#include "CandyReaperCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACandyReaperGameMode::ACandyReaperGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACandyReaperPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	//if (PlayerPawnBPClass.Class != NULL)
	//{
	//	DefaultPawnClass = PlayerPawnBPClass.Class;
	//}
}