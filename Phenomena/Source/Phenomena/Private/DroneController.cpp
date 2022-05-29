// Fill out your copyright notice in the Description page of Project Settings.


#include "DroneController.h"

ADroneController::ADroneController() {

}

void ADroneController::BeginPlay()
{
	Super::BeginPlay();

}

void ADroneController::Tick(float DeltaTime)
{
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("TICK CONTROLLER"));
	}
	Super::Tick(DeltaTime);

}