// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterClass.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"


ACharacterClass::ACharacterClass()
{
 	
	PrimaryActorTick.bCanEverTick = true;

}

void ACharacterClass::BeginPlay()
{
	Super::BeginPlay();

	Health = MaxHealth;
	
}

void ACharacterClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ACharacterClass::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Forward"), this, &ACharacterClass::Forward);

	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ACharacterClass::LookUp);  //we can also use APawn::AddControllerPitchInput

	PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &ACharacterClass::LookRight);

	PlayerInputComponent->BindAxis(TEXT("LookUpRate"), this, &ACharacterClass::LookUpRate);

	PlayerInputComponent->BindAxis(TEXT("LookRightRate"), this, &ACharacterClass::LookRightRate);

	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &ACharacterClass::MoveRight);

	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ACharacter::Jump);

	//Interact

	//Shoot

}



// void ACharacterClass::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
// {
	
// }

bool ACharacterClass::IsDead() const
{
	return Health <=0;
}

 float ACharacterClass::GetHealthPercent() const
 {
	return Health / MaxHealth;
 }

void ACharacterClass::Forward(float AxisValue)
{
	AddMovementInput(GetActorForwardVector() * AxisValue); 
	
}

void ACharacterClass::MoveRight(float AxisValue)
{
	AddMovementInput(GetActorRightVector() * AxisValue);
}

void ACharacterClass::LookUp(float AxisValue)
{
	AddControllerPitchInput(AxisValue);
}

void ACharacterClass::LookUpRate(float AxisValue)
{
	AddControllerPitchInput(AxisValue * RotationRate * GetWorld()->GetDeltaSeconds());
}

void ACharacterClass::LookRight(float AxisValue)
{
	AddControllerYawInput(AxisValue);
}

void ACharacterClass::LookRightRate(float AxisValue)
{
	AddControllerYawInput(AxisValue * RotationRate * GetWorld()->GetDeltaSeconds());
}

