// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DroneController.generated.h"

/**
 * 
 */
UCLASS()
class ADroneController : public APlayerController
{
	GENERATED_BODY()
	
public:
	// Sets default values for this character's properties
	ADroneController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
// Called every frame
virtual void Tick(float DeltaTime) override;
};
