
#include "BDUtilityLibrary.h"
#include "Classes/Components/PrimitiveComponent.h"

/** 
Declarations
*/
float UBDUtilityLibrary::GetDistanceBetweenPrimitives(UPrimitiveComponent * ThisPrimitive, UPrimitiveComponent * OtherPrimitive)
{
	return 0.0f;
}


/**
Implementation
*/
float GetDistanceBetweenPrimitives(UPrimitiveComponent* ThisPrimitive, UPrimitiveComponent* OtherPrimitive)
{
	return ThisPrimitive ? (ThisPrimitive->GetComponentLocation() - OtherPrimitive->GetComponentLocation()).Size() : 0.f;
}
