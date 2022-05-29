// Kamikadze Studios 2022


#include "IsFcknDead.h"
#include "AIController.h"
#include "CharacterClass.h"

UIsFcknDead::UIsFcknDead()
{
    NodeName = TEXT("Shoot");
}


EBTNodeResult::Type UIsFcknDead::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp, NodeMemory);

    if(OwnerComp.GetAIOwner()==nullptr)
    {
        return EBTNodeResult::Failed;
    }

    ACharacterClass* Character = Cast<ACharacterClass>(OwnerComp.GetAIOwner()->GetPawn());

    if(Character == nullptr)
    {
        return EBTNodeResult::Failed;
    }

    Character->IsDead();

    return EBTNodeResult::Failed;

}

