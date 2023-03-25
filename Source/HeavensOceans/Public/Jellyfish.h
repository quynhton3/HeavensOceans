// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Jellyfish.generated.h"

UCLASS()
class HEAVENSOCEANS_API AJellyfish : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AJellyfish();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	int health;
	double stunDuration;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void deal_damage();
	void stun();

};



