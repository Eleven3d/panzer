// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BDUtilityLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBDUtilityLibrary() {}
// Cross Module References
	PANZERDRAGON_API UClass* Z_Construct_UClass_UBDUtilityLibrary_NoRegister();
	PANZERDRAGON_API UClass* Z_Construct_UClass_UBDUtilityLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PanzerDragon();
	PANZERDRAGON_API UFunction* Z_Construct_UFunction_UBDUtilityLibrary_ClampVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PANZERDRAGON_API UFunction* Z_Construct_UFunction_UBDUtilityLibrary_GetAverageWorldLocation();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PANZERDRAGON_API UFunction* Z_Construct_UFunction_UBDUtilityLibrary_GetDistanceBetweenPrimitives();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	PANZERDRAGON_API UFunction* Z_Construct_UFunction_UBDUtilityLibrary_GetNearestPrimitive();
	PANZERDRAGON_API UFunction* Z_Construct_UFunction_UBDUtilityLibrary_InvertFloat();
// End Cross Module References
	void UBDUtilityLibrary::StaticRegisterNativesUBDUtilityLibrary()
	{
		UClass* Class = UBDUtilityLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClampVector", &UBDUtilityLibrary::execClampVector },
			{ "GetAverageWorldLocation", &UBDUtilityLibrary::execGetAverageWorldLocation },
			{ "GetDistanceBetweenPrimitives", &UBDUtilityLibrary::execGetDistanceBetweenPrimitives },
			{ "GetNearestPrimitive", &UBDUtilityLibrary::execGetNearestPrimitive },
			{ "InvertFloat", &UBDUtilityLibrary::execInvertFloat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UBDUtilityLibrary_ClampVector()
	{
		struct BDUtilityLibrary_eventClampVector_Parms
		{
			FVector VectorToClamp;
			FVector Min;
			FVector Max;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BDUtilityLibrary_eventClampVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Max = { UE4CodeGen_Private::EPropertyClass::Struct, "Max", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BDUtilityLibrary_eventClampVector_Parms, Max), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Min = { UE4CodeGen_Private::EPropertyClass::Struct, "Min", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BDUtilityLibrary_eventClampVector_Parms, Min), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorToClamp = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorToClamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BDUtilityLibrary_eventClampVector_Parms, VectorToClamp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Max,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Min,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorToClamp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Vector" },
				{ "ModuleRelativePath", "Public/BDUtilityLibrary.h" },
				{ "ToolTip", "vector based utility functions" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDUtilityLibrary, "ClampVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14842401, sizeof(BDUtilityLibrary_eventClampVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBDUtilityLibrary_GetAverageWorldLocation()
	{
		struct BDUtilityLibrary_eventGetAverageWorldLocation_Parms
		{
			TArray<USceneComponent*> Scenecomponents;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BDUtilityLibrary_eventGetAverageWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scenecomponents_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Scenecomponents = { UE4CodeGen_Private::EPropertyClass::Array, "Scenecomponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(BDUtilityLibrary_eventGetAverageWorldLocation_Parms, Scenecomponents), METADATA_PARAMS(NewProp_Scenecomponents_MetaData, ARRAY_COUNT(NewProp_Scenecomponents_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scenecomponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Scenecomponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080000, 1, nullptr, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scenecomponents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scenecomponents_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|SceneComponents" },
				{ "ModuleRelativePath", "Public/BDUtilityLibrary.h" },
				{ "ToolTip", "scenecomponents based utility functions" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDUtilityLibrary, "GetAverageWorldLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14842401, sizeof(BDUtilityLibrary_eventGetAverageWorldLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBDUtilityLibrary_GetDistanceBetweenPrimitives()
	{
		struct BDUtilityLibrary_eventGetDistanceBetweenPrimitives_Parms
		{
			UPrimitiveComponent* ThisPrimitive;
			UPrimitiveComponent* OtherPrimitive;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BDUtilityLibrary_eventGetDistanceBetweenPrimitives_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherPrimitive_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherPrimitive = { UE4CodeGen_Private::EPropertyClass::Object, "OtherPrimitive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BDUtilityLibrary_eventGetDistanceBetweenPrimitives_Parms, OtherPrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherPrimitive_MetaData, ARRAY_COUNT(NewProp_OtherPrimitive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThisPrimitive_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThisPrimitive = { UE4CodeGen_Private::EPropertyClass::Object, "ThisPrimitive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BDUtilityLibrary_eventGetDistanceBetweenPrimitives_Parms, ThisPrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ThisPrimitive_MetaData, ARRAY_COUNT(NewProp_ThisPrimitive_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherPrimitive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThisPrimitive,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Primitives" },
				{ "ModuleRelativePath", "Public/BDUtilityLibrary.h" },
				{ "ToolTip", "primitives based utility functions" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDUtilityLibrary, "GetDistanceBetweenPrimitives", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(BDUtilityLibrary_eventGetDistanceBetweenPrimitives_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBDUtilityLibrary_GetNearestPrimitive()
	{
		struct BDUtilityLibrary_eventGetNearestPrimitive_Parms
		{
			TArray<UPrimitiveComponent*> Primitives;
			UPrimitiveComponent* TargetPrimitive;
			UPrimitiveComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(BDUtilityLibrary_eventGetNearestPrimitive_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPrimitive_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPrimitive = { UE4CodeGen_Private::EPropertyClass::Object, "TargetPrimitive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BDUtilityLibrary_eventGetNearestPrimitive_Parms, TargetPrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_TargetPrimitive_MetaData, ARRAY_COUNT(NewProp_TargetPrimitive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Primitives_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Primitives = { UE4CodeGen_Private::EPropertyClass::Array, "Primitives", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(BDUtilityLibrary_eventGetNearestPrimitive_Parms, Primitives), METADATA_PARAMS(NewProp_Primitives_MetaData, ARRAY_COUNT(NewProp_Primitives_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Primitives_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Primitives", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080000, 1, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetPrimitive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Primitives,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Primitives_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Primitives" },
				{ "ModuleRelativePath", "Public/BDUtilityLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDUtilityLibrary, "GetNearestPrimitive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(BDUtilityLibrary_eventGetNearestPrimitive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBDUtilityLibrary_InvertFloat()
	{
		struct BDUtilityLibrary_eventInvertFloat_Parms
		{
			float FloatToInvert;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BDUtilityLibrary_eventInvertFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatToInvert = { UE4CodeGen_Private::EPropertyClass::Float, "FloatToInvert", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BDUtilityLibrary_eventInvertFloat_Parms, FloatToInvert), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatToInvert,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Float" },
				{ "CompactNodeTitle", "*-1" },
				{ "DisplayName", "Invert float" },
				{ "Keywords", "Invert float" },
				{ "ModuleRelativePath", "Public/BDUtilityLibrary.h" },
				{ "ToolTip", "float based utility functions" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDUtilityLibrary, "InvertFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(BDUtilityLibrary_eventInvertFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBDUtilityLibrary_NoRegister()
	{
		return UBDUtilityLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UBDUtilityLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_PanzerDragon,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UBDUtilityLibrary_ClampVector, "ClampVector" }, // 3309962605
				{ &Z_Construct_UFunction_UBDUtilityLibrary_GetAverageWorldLocation, "GetAverageWorldLocation" }, // 3059003865
				{ &Z_Construct_UFunction_UBDUtilityLibrary_GetDistanceBetweenPrimitives, "GetDistanceBetweenPrimitives" }, // 317121283
				{ &Z_Construct_UFunction_UBDUtilityLibrary_GetNearestPrimitive, "GetNearestPrimitive" }, // 290535025
				{ &Z_Construct_UFunction_UBDUtilityLibrary_InvertFloat, "InvertFloat" }, // 699593854
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BDUtilityLibrary.h" },
				{ "ModuleRelativePath", "Public/BDUtilityLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBDUtilityLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBDUtilityLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBDUtilityLibrary, 3625533892);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBDUtilityLibrary(Z_Construct_UClass_UBDUtilityLibrary, &UBDUtilityLibrary::StaticClass, TEXT("/Script/PanzerDragon"), TEXT("UBDUtilityLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBDUtilityLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
