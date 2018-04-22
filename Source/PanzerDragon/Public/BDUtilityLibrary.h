
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Classes/Components/PrimitiveComponent.h"
#include "BDUtilityLibrary.generated.h"


UCLASS()
class PANZERDRAGON_API UBDUtilityLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	// primitives based utility functions
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Math|Primitives")
	static float GetDistanceBetweenPrimitives(UPrimitiveComponent* ThisPrimitive, UPrimitiveComponent* OtherPrimitive);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Math|Primitives")
	static UPrimitiveComponent* GetNearestPrimitive(TArray<UPrimitiveComponent*> Primitives, UPrimitiveComponent* TargetPrimitive);


	// scenecomponents based utility functions
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Math|SceneComponents")
	static FVector GetAverageWorldLocation(TArray<USceneComponent*> Scenecomponents);


	// vector based utility functions
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Math|Vector")
	static FVector ClampVector(FVector VectorToClamp, FVector Min, FVector Max);

	// float based utility functions
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Math|Float", meta = (DisplayName = "Invert float", CompactNodeTitle = "*-1", Keywords = "Invert float"))
	static float InvertFloat(float FloatToInvert);

};