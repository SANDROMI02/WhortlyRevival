// Kamikadze Studios 2022

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "GhostAIController.generated.h"

/**
 * 
 */
UCLASS()
class GAMEJAMWHORTLY_API AGhostAIController : public AAIController
{
	GENERATED_BODY()
	
public:

	virtual void Tick(float DeltaSeconds) override;
	bool IsDead() const;

private:

	virtual void BeginPlay() override;

protected:

	UPROPERTY(EditAnywhere)
	class UBehaviorTree* AIBehavior;

};