// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/Pawn.h"
#include "CharacterClass.generated.h"


UCLASS()
class GAMEJAMWHORTLY_API ACharacterClass : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterClass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	UFUNCTION(BlueprintPure)
	bool IsDead() const;

	UFUNCTION(BLueprintPure)
	float GetHealthPercent() const;

	
	virtual void Tick(float DeltaTime) override;


	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//virtual void TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;


		
private:

	void Forward(float AxisValue);

	void MoveRight(float AxisValue);

	void LookUp(float AxisValue);

	void LookUpRate(float AxisValue);
	
	void LookRight(float AxisValue);

	void LookRightRate(float AxisValue);





	UPROPERTY(EditAnywhere)
	float RotationRate = 10;

	UPROPERTY(EditDefaultsOnly)
	float MaxHealth = 100;

	UPROPERTY(VisibleAnywhere)
	float Health;

};
