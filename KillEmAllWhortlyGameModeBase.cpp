// Kamikadze Studios 2022


#include "KillEmAllWhortlyGameModeBase.h"
#include "EngineUtils.h"
#include "GameFramework/Controller.h"
#include "GhostAIController.h"

void AKillEmAllWhortlyGameModeBase::PawnKilled(APawn* PawnKilled)
{
    Super::PawnKilled(PawnKilled);
    
    // APlayerController* PlayerController = Cast<APlayerController>(PawnKilled->GetController());
    // if (PlayerController != nullptr)
    // {
    //    EndGame(false); // PlayerController->GameHasEnded(nullptr, false);
    // }
    
    // for(AShooterAIController* AIController : TActorRange<AShooterAIController>(GetWorld()))
    // {
    //     if(!AIController->IsDead())
    //     {
    //         return;
    //     }
    // }
    // EndGame(true);
}

void AKillEmAllWhortlyGameModeBase::EndGame(bool bIsPlayerWinner)
{
    
    // for  (AController* Controller : TActorRange<AController>(GetWorld())) // it says that we are performing for loop for every controller
    // {
    //     bool bIsWinner = Controller->IsPlayerController() == bIsPlayerWinner;
    //     Controller->GameHasEnded(Controller->GetPawn(),bIsWinner); // focus was on nullptr which could cause problems so now we use GetPawn()
    // }
}
