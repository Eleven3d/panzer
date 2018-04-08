// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CustomComponents/PDArrowComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDArrowComponent() {}
// Cross Module References
	PANZERDRAGON_API UClass* Z_Construct_UClass_UPDArrowComponent_NoRegister();
	PANZERDRAGON_API UClass* Z_Construct_UClass_UPDArrowComponent();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent();
	UPackage* Z_Construct_UPackage__Script_PanzerDragon();
// End Cross Module References
	void UPDArrowComponent::StaticRegisterNativesUPDArrowComponent()
	{
	}
	UClass* Z_Construct_UClass_UPDArrowComponent_NoRegister()
	{
		return UPDArrowComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UPDArrowComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UArrowComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_PanzerDragon,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Mobility Trigger" },
				{ "IncludePath", "CustomComponents/PDArrowComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "CustomComponents/PDArrowComponent.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPDArrowComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPDArrowComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UPDArrowComponent, 2334011444);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPDArrowComponent(Z_Construct_UClass_UPDArrowComponent, &UPDArrowComponent::StaticClass, TEXT("/Script/PanzerDragon"), TEXT("UPDArrowComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPDArrowComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
