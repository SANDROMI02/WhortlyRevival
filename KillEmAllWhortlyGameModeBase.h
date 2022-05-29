// Kamikadze Studios 2022

#pragma once

#include "CoreMinimal.h"
#include "GameJamWhortlyGameModeBase.h"
#include "KillEmAllWhortlyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class GAMEJAMWHORTLY_API AKillEmAllWhortlyGameModeBase : public AGameJamWhortlyGameModeBase
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn* PawnKilled) override;

private:

	void EndGame(bool bIsPlayerWinner);

	
};
