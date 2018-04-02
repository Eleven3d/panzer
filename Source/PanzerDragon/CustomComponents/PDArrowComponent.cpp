// Fill out your copyright notice in the Description page of Project Settings.

#include "PDArrowComponent.h"


// Sets default values for this component's properties
UPDArrowComponent::UPDArrowComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UPDArrowComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPDArrowComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

