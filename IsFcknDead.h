// Kamikadze Studios 2022

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "IsFcknDead.generated.h"

/**
 * 
 */
UCLASS()
class GAMEJAMWHORTLY_API UIsFcknDead : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
 UIsFcknDead();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
