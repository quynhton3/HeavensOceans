// Fill out your copyright notice in the Description page of Project Settings.


#include "Jellyfish.h"
#include "HeavensOceansCharacter.h"

// Sets default values
AJellyfish::AJellyfish()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->health = 100; 
	this->stunDuration = 0;


}

// Called when the game starts or when spawned
void AJellyfish::BeginPlay()
{
	Super::BeginPlay();
	
}

void AJellyfish::deal_damage() //amount of clicks to convert back 
{
	this->health -= 10;

}
void AJellyfish::stun()
{
	this->stunDuration = 3;
}

// Called every frame
void AJellyfish::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	this->stunDuration -= DeltaTime;

	if (stunDuration <= 0)
	{

			BP_ThirdPersonCharacter_C->GetCharacterMovement()->MaxWalkSpeed = 0f;
	}
}

// Called to bind functionality to input
void AJellyfish::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

