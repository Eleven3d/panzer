// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
struct FVector;
class UPrimitiveComponent;
#ifdef PANZERDRAGON_BDUtilityLibrary_generated_h
#error "BDUtilityLibrary.generated.h already included, missing '#pragma once' in BDUtilityLibrary.h"
#endif
#define PANZERDRAGON_BDUtilityLibrary_generated_h

#define Panzer_Source_PanzerDragon_Public_BDUtilityLibrary_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAverageWorldLocation) \
	{ \
		P_GET_TARRAY(USceneComponent*,Z_Param_Scenecomponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UBDUtilityLibrary::GetAverageWorldLocation(Z_Param_Scenecomponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNearestPrimitive) \
	{ \
		P_GET_TARRAY(UPrimitiveComponent*,Z_Param_Primitives); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TargetPrimitive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=UBDUtilityLibrary::GetNearestPrimitive(Z_Param_Primitives,Z_Param_TargetPrimitive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistanceBetweenPrimitives) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ThisPrimitive); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherPrimitive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UBDUtilityLibrary::GetDistanceBetweenPrimitives(Z_Param_ThisPrimitive,Z_Param_OtherPrimitive); \
		P_NATIVE_END; \
	}


#define Panzer_Source_PanzerDragon_Public_BDUtilityLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAverageWorldLocation) \
	{ \
		P_GET_TARRAY(USceneComponent*,Z_Param_Scenecomponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UBDUtilityLibrary::GetAverageWorldLocation(Z_Param_Scenecomponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNearestPrimitive) \
	{ \
		P_GET_TARRAY(UPrimitiveComponent*,Z_Param_Primitives); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TargetPrimitive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=UBDUtilityLibrary::GetNearestPrimitive(Z_Param_Primitives,Z_Param_TargetPrimitive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistanceBetweenPrimitives) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ThisPrimitive); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherPrimitive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UBDUtilityLibrary::GetDistanceBetweenPrimitives(Z_Param_ThisPrimitive,Z_Param_OtherPrimitive); \
		P_NATIVE_END; \
	}


#define Panzer_Source_PanzerDragon_Public_BDUtilityLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBDUtilityLibrary(); \
	friend PANZERDRAGON_API class UClass* Z_Construct_UClass_UBDUtilityLibrary(); \
public: \
	DECLARE_CLASS(UBDUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PanzerDragon"), NO_API) \
	DECLARE_SERIALIZER(UBDUtilityLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Panzer_Source_PanzerDragon_Public_BDUtilityLibrary_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBDUtilityLibrary(); \
	friend PANZERDRAGON_API class UClass* Z_Construct_UClass_UBDUtilityLibrary(); \
public: \
	DECLARE_CLASS(UBDUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PanzerDragon"), NO_API) \
	DECLARE_SERIALIZER(UBDUtilityLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Panzer_Source_PanzerDragon_Public_BDUtilityLibrary_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBDUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBDUtilityLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBDUtilityLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBDUtilityLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBDUtilityLibrary(UBDUtilityLibrary&&); \
	NO_API UBDUtilityLibrary(const UBDUtilityLibrary&); \
public:


#define Panzer_Source_PanzerDragon_Public_BDUtilityLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBDUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBDUtilityLibrary(UBDUtilityLibrary&&); \
	NO_API UBDUtilityLibrary(const UBDUtilityLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBDUtilityLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBDUtilityLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBDUtilityLibrary)


#define Panzer_Source_PanzerDragon_Public_BDUtilityLibrary_h_13_PRIVATE_PROPERTY_OFFSET
#define Panzer_Source_PanzerDragon_Public_BDUtilityLibrary_h_10_PROLOG
#define Panzer_Source_PanzerDragon_Public_BDUtilityLibrary_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Panzer_Source_PanzerDragon_Public_BDUtilityLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	Panzer_Source_PanzerDragon_Public_BDUtilityLibrary_h_13_RPC_WRAPPERS \
	Panzer_Source_PanzerDragon_Public_BDUtilityLibrary_h_13_INCLASS \
	Panzer_Source_PanzerDragon_Public_BDUtilityLibrary_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Panzer_Source_PanzerDragon_Public_BDUtilityLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Panzer_Source_PanzerDragon_Public_BDUtilityLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	Panzer_Source_PanzerDragon_Public_BDUtilityLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Panzer_Source_PanzerDragon_Public_BDUtilityLibrary_h_13_INCLASS_NO_PURE_DECLS \
	Panzer_Source_PanzerDragon_Public_BDUtilityLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Panzer_Source_PanzerDragon_Public_BDUtilityLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
