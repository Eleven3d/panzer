// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PanzerDragonGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePanzerDragonGameModeBase() {}
// Cross Module References
	PANZERDRAGON_API UClass* Z_Construct_UClass_APanzerDragonGameModeBase_NoRegister();
	PANZERDRAGON_API UClass* Z_Construct_UClass_APanzerDragonGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PanzerDragon();
// End Cross Module References
	void APanzerDragonGameModeBase::StaticRegisterNativesAPanzerDragonGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APanzerDragonGameModeBase_NoRegister()
	{
		return APanzerDragonGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_APanzerDragonGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_PanzerDragon,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "PanzerDragonGameModeBase.h" },
				{ "ModuleRelativePath", "PanzerDragonGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APanzerDragonGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APanzerDragonGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(APanzerDragonGameModeBase, 4085911074);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APanzerDragonGameModeBase(Z_Construct_UClass_APanzerDragonGameModeBase, &APanzerDragonGameModeBase::StaticClass, TEXT("/Script/PanzerDragon"), TEXT("APanzerDragonGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APanzerDragonGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
