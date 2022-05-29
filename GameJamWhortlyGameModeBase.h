// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameJamWhortlyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class GAMEJAMWHORTLY_API AGameJamWhortlyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn* PawnKilled);
	
};
