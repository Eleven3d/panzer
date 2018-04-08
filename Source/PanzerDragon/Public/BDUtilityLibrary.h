
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BDUtilityLibrary.generated.h"


UCLASS()
class PANZERDRAGON_API UBDUtilityLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Math|Primitives")
	static float GetDistanceBetweenPrimitives(UPrimitiveComponent* ThisPrimitive, UPrimitiveComponent* OtherPrimitive);
	
};
