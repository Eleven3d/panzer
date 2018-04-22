
#include "BDUtilityLibrary.h"

float UBDUtilityLibrary::GetDistanceBetweenPrimitives(UPrimitiveComponent* ThisPrimitive, UPrimitiveComponent* OtherPrimitive)
{
	return ThisPrimitive ? (ThisPrimitive->GetComponentLocation() - OtherPrimitive->GetComponentLocation()).Size() : 0.f;
}

UPrimitiveComponent* UBDUtilityLibrary::GetNearestPrimitive(TArray<UPrimitiveComponent*> Primitives, UPrimitiveComponent* TargetPrimitive)
{
	float Distance = INFINITY;
	UPrimitiveComponent* p = nullptr;
	const int Size = Primitives.Num();

	for (int32 i = 0; i < Size; ++i)
	{
		UPrimitiveComponent* LocalPrimitive = Primitives[i];
		float TargetDistance = GetDistanceBetweenPrimitives(TargetPrimitive, LocalPrimitive);
		if (TargetDistance <= Distance)
		{
			p = LocalPrimitive;
			Distance = TargetDistance;
		}
	}

	return p;

}

FVector UBDUtilityLibrary::GetAverageWorldLocation(TArray<USceneComponent*> Scenecomponents)
{
	FVector AdditiveLocation = FVector();
	for (int16 i = 0; i < Scenecomponents.Num(); i++)
	{
		AdditiveLocation += Scenecomponents[i]->GetComponentLocation();
	}
	
	return AdditiveLocation/Scenecomponents.Num();
}
