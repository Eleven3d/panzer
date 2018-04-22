
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Classes/Components/PrimitiveComponent.h"
#include "BDUtilityLibrary.generated.h"


UCLASS()
class PANZERDRAGON_API UBDUtilityLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Math|Primitives")
	static float GetDistanceBetweenPrimitives(UPrimitiveComponent* ThisPrimitive, UPrimitiveComponent* OtherPrimitive);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Math|Primitives")
	static UPrimitiveComponent* GetNearestPrimitive(TArray<UPrimitiveComponent*> Primitives, UPrimitiveComponent* TargetPrimitive);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Math|SceneComponents")
	static FVector GetAverageWorldLocation(TArray<USceneComponent*> Scenecomponents);



};