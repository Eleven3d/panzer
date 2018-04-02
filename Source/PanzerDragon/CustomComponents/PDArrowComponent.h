// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "PDArrowComponent.generated.h"


UCLASS( Blueprintable )
class PANZERDRAGON_API UPDArrowComponent : public UArrowComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPDArrowComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
