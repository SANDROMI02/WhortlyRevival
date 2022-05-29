// Kamikadze Studios 2022


#include "GhostAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "CharacterClass.h"


void AGhostAIController::BeginPlay()
{
    Super::BeginPlay();

    if(AIBehavior != nullptr)
    {
         RunBehaviorTree(AIBehavior);

        APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

       
        GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), GetPawn()->GetActorLocation());
    }    
}

void AGhostAIController::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
}

bool AGhostAIController::IsDead() const
{
   ACharacterClass* ControlledCharacter = Cast<ACharacterClass>(GetPawn());
    if(ControlledCharacter != nullptr)
    {
        return ControlledCharacter->IsDead();
    }

    return true;
}