
#include "BDUtilityLibrary.h"

/** 
Declarations
*/
float UBDUtilityLibrary::GetDistanceBetweenPrimitives(UPrimitiveComponent* ThisPrimitive, UPrimitiveComponent* OtherPrimitive)
{
	return 0.f;
}
/*
UPrimitiveComponent* UBDUtilityLibrary::GetNearestPrimitive(TArray<UPrimitiveComponent>* Primitives, UPrimitiveComponent* TargetPrimitive)
{
	return nullptr;
}
*/
UPrimitiveComponent* UBDUtilityLibrary::GetNearestPrimitive(TArray<UPrimitiveComponent*> Primitives, UPrimitiveComponent* TargetPrimitive)
{
	return nullptr;
}







/**
Implementation
*/
float GetDistanceBetweenPrimitives(UPrimitiveComponent* ThisPrimitive, UPrimitiveComponent* OtherPrimitive)
{
	return ThisPrimitive ? (ThisPrimitive->GetComponentLocation() - OtherPrimitive->GetComponentLocation()).Size() : 0.f;
}


UPrimitiveComponent* GetNearestPrimitive(TArray<UPrimitiveComponent*> Primitives, UPrimitiveComponent* TargetPrimitive)
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