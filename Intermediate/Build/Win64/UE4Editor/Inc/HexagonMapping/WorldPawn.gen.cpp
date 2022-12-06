// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HexagonMapping/Public/Earth/WorldPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPawn() {}
// Cross Module References
	HEXAGONMAPPING_API UFunction* Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HexagonMapping();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AWorldPawn_NoRegister();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AWorldPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics
	{
		struct _Script_HexagonMapping_eventOnTileClicked_Parms
		{
			AActor* Tile;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_HexagonMapping_eventOnTileClicked_Parms, Tile), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics::NewProp_Tile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HexagonMapping, nullptr, "OnTileClicked__DelegateSignature", nullptr, nullptr, sizeof(_Script_HexagonMapping_eventOnTileClicked_Parms), Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AWorldPawn::execRemoveLights)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveLights();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldPawn::execSetZooming)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetZooming(Z_Param_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldPawn::execAddPitchInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPitchInput(Z_Param_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldPawn::execAddYawInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddYawInput(Z_Param_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldPawn::execDeActivateRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeActivateRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldPawn::execActivateRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldPawn::execOnTileChosen)
	{
		P_GET_OBJECT(AActor,Z_Param_Tile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTileChosen(Z_Param_Tile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldPawn::execGetTile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTile();
		P_NATIVE_END;
	}
	void AWorldPawn::StaticRegisterNativesAWorldPawn()
	{
		UClass* Class = AWorldPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateRotation", &AWorldPawn::execActivateRotation },
			{ "AddPitchInput", &AWorldPawn::execAddPitchInput },
			{ "AddYawInput", &AWorldPawn::execAddYawInput },
			{ "DeActivateRotation", &AWorldPawn::execDeActivateRotation },
			{ "GetTile", &AWorldPawn::execGetTile },
			{ "OnTileChosen", &AWorldPawn::execOnTileChosen },
			{ "RemoveLights", &AWorldPawn::execRemoveLights },
			{ "SetZooming", &AWorldPawn::execSetZooming },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWorldPawn_ActivateRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldPawn_ActivateRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldPawn_ActivateRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldPawn, nullptr, "ActivateRotation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldPawn_ActivateRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldPawn_ActivateRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldPawn_ActivateRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorldPawn_ActivateRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldPawn_AddPitchInput_Statics
	{
		struct WorldPawn_eventAddPitchInput_Parms
		{
			float Val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWorldPawn_AddPitchInput_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldPawn_eventAddPitchInput_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldPawn_AddPitchInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldPawn_AddPitchInput_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldPawn_AddPitchInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldPawn_AddPitchInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldPawn, nullptr, "AddPitchInput", nullptr, nullptr, sizeof(WorldPawn_eventAddPitchInput_Parms), Z_Construct_UFunction_AWorldPawn_AddPitchInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldPawn_AddPitchInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldPawn_AddPitchInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldPawn_AddPitchInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldPawn_AddPitchInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorldPawn_AddPitchInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldPawn_AddYawInput_Statics
	{
		struct WorldPawn_eventAddYawInput_Parms
		{
			float Val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWorldPawn_AddYawInput_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldPawn_eventAddYawInput_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldPawn_AddYawInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldPawn_AddYawInput_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldPawn_AddYawInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldPawn_AddYawInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldPawn, nullptr, "AddYawInput", nullptr, nullptr, sizeof(WorldPawn_eventAddYawInput_Parms), Z_Construct_UFunction_AWorldPawn_AddYawInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldPawn_AddYawInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldPawn_AddYawInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldPawn_AddYawInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldPawn_AddYawInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorldPawn_AddYawInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldPawn_DeActivateRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldPawn_DeActivateRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldPawn_DeActivateRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldPawn, nullptr, "DeActivateRotation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldPawn_DeActivateRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldPawn_DeActivateRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldPawn_DeActivateRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorldPawn_DeActivateRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldPawn_GetTile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldPawn_GetTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldPawn_GetTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldPawn, nullptr, "GetTile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldPawn_GetTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldPawn_GetTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldPawn_GetTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorldPawn_GetTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldPawn_OnTileChosen_Statics
	{
		struct WorldPawn_eventOnTileChosen_Parms
		{
			AActor* Tile;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldPawn_OnTileChosen_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldPawn_eventOnTileChosen_Parms, Tile), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldPawn_OnTileChosen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldPawn_OnTileChosen_Statics::NewProp_Tile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldPawn_OnTileChosen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldPawn_OnTileChosen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldPawn, nullptr, "OnTileChosen", nullptr, nullptr, sizeof(WorldPawn_eventOnTileChosen_Parms), Z_Construct_UFunction_AWorldPawn_OnTileChosen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldPawn_OnTileChosen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldPawn_OnTileChosen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldPawn_OnTileChosen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldPawn_OnTileChosen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorldPawn_OnTileChosen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldPawn_RemoveLights_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldPawn_RemoveLights_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldPawn_RemoveLights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldPawn, nullptr, "RemoveLights", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldPawn_RemoveLights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldPawn_RemoveLights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldPawn_RemoveLights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorldPawn_RemoveLights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldPawn_SetZooming_Statics
	{
		struct WorldPawn_eventSetZooming_Parms
		{
			float Val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWorldPawn_SetZooming_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldPawn_eventSetZooming_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldPawn_SetZooming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldPawn_SetZooming_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldPawn_SetZooming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldPawn_SetZooming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldPawn, nullptr, "SetZooming", nullptr, nullptr, sizeof(WorldPawn_eventSetZooming_Parms), Z_Construct_UFunction_AWorldPawn_SetZooming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldPawn_SetZooming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldPawn_SetZooming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldPawn_SetZooming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldPawn_SetZooming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorldPawn_SetZooming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWorldPawn_NoRegister()
	{
		return AWorldPawn::StaticClass();
	}
	struct Z_Construct_UClass_AWorldPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Surface_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Surface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarthRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EarthRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanRotate_MetaData[];
#endif
		static void NewProp_CanRotate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanRotate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultCameraFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAXFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MAXFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MINFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MINFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowLightBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ShowLightBP;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShowLights_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowLights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShowLights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTileClicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTileClicked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_HexagonMapping,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWorldPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWorldPawn_ActivateRotation, "ActivateRotation" }, // 595582092
		{ &Z_Construct_UFunction_AWorldPawn_AddPitchInput, "AddPitchInput" }, // 4287630930
		{ &Z_Construct_UFunction_AWorldPawn_AddYawInput, "AddYawInput" }, // 2956730874
		{ &Z_Construct_UFunction_AWorldPawn_DeActivateRotation, "DeActivateRotation" }, // 2909452471
		{ &Z_Construct_UFunction_AWorldPawn_GetTile, "GetTile" }, // 1125233047
		{ &Z_Construct_UFunction_AWorldPawn_OnTileChosen, "OnTileChosen" }, // 993267634
		{ &Z_Construct_UFunction_AWorldPawn_RemoveLights, "RemoveLights" }, // 1917634154
		{ &Z_Construct_UFunction_AWorldPawn_SetZooming, "SetZooming" }, // 2506267318
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Earth/WorldPawn.h" },
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPawn_Statics::NewProp_Surface_MetaData[] = {
		{ "Category", "WorldPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldPawn_Statics::NewProp_Surface = { "Surface", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPawn, Surface), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldPawn_Statics::NewProp_Surface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPawn_Statics::NewProp_Surface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPawn_Statics::NewProp_EarthRadius_MetaData[] = {
		{ "Category", "WorldPawn" },
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWorldPawn_Statics::NewProp_EarthRadius = { "EarthRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPawn, EarthRadius), METADATA_PARAMS(Z_Construct_UClass_AWorldPawn_Statics::NewProp_EarthRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPawn_Statics::NewProp_EarthRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPawn_Statics::NewProp_SphereMesh_MetaData[] = {
		{ "Category", "WorldPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldPawn_Statics::NewProp_SphereMesh = { "SphereMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPawn, SphereMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldPawn_Statics::NewProp_SphereMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPawn_Statics::NewProp_SphereMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPawn_Statics::NewProp_CanRotate_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	void Z_Construct_UClass_AWorldPawn_Statics::NewProp_CanRotate_SetBit(void* Obj)
	{
		((AWorldPawn*)Obj)->CanRotate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldPawn_Statics::NewProp_CanRotate = { "CanRotate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWorldPawn), &Z_Construct_UClass_AWorldPawn_Statics::NewProp_CanRotate_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldPawn_Statics::NewProp_CanRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPawn_Statics::NewProp_CanRotate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPawn_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWorldPawn_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPawn, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_AWorldPawn_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPawn_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPawn_Statics::NewProp_CameraActor_MetaData[] = {
		{ "Category", "WorldPawn" },
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldPawn_Statics::NewProp_CameraActor = { "CameraActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPawn, CameraActor), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldPawn_Statics::NewProp_CameraActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPawn_Statics::NewProp_CameraActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "WorldPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldPawn_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPawn_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPawn_Statics::NewProp_DefaultCameraFOV_MetaData[] = {
		{ "Category", "WorldPawn" },
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldPawn_Statics::NewProp_DefaultCameraFOV = { "DefaultCameraFOV", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPawn, DefaultCameraFOV), METADATA_PARAMS(Z_Construct_UClass_AWorldPawn_Statics::NewProp_DefaultCameraFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPawn_Statics::NewProp_DefaultCameraFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPawn_Statics::NewProp_MAXFOV_MetaData[] = {
		{ "Category", "WorldPawn" },
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldPawn_Statics::NewProp_MAXFOV = { "MAXFOV", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPawn, MAXFOV), METADATA_PARAMS(Z_Construct_UClass_AWorldPawn_Statics::NewProp_MAXFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPawn_Statics::NewProp_MAXFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPawn_Statics::NewProp_MINFOV_MetaData[] = {
		{ "Category", "WorldPawn" },
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldPawn_Statics::NewProp_MINFOV = { "MINFOV", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPawn, MINFOV), METADATA_PARAMS(Z_Construct_UClass_AWorldPawn_Statics::NewProp_MINFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPawn_Statics::NewProp_MINFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPawn_Statics::NewProp_ZoomSpeed_MetaData[] = {
		{ "Category", "WorldPawn" },
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldPawn_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPawn, ZoomSpeed), METADATA_PARAMS(Z_Construct_UClass_AWorldPawn_Statics::NewProp_ZoomSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPawn_Statics::NewProp_ZoomSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPawn_Statics::NewProp_ShowLightBP_MetaData[] = {
		{ "Category", "ShowLight" },
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldPawn_Statics::NewProp_ShowLightBP = { "ShowLightBP", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPawn, ShowLightBP), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWorldPawn_Statics::NewProp_ShowLightBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPawn_Statics::NewProp_ShowLightBP_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldPawn_Statics::NewProp_ShowLights_Inner = { "ShowLights", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPawn_Statics::NewProp_ShowLights_MetaData[] = {
		{ "Category", "ShowLight" },
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldPawn_Statics::NewProp_ShowLights = { "ShowLights", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPawn, ShowLights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldPawn_Statics::NewProp_ShowLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPawn_Statics::NewProp_ShowLights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPawn_Statics::NewProp_OnTileClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWorldPawn_Statics::NewProp_OnTileClicked = { "OnTileClicked", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPawn, OnTileClicked), Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AWorldPawn_Statics::NewProp_OnTileClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPawn_Statics::NewProp_OnTileClicked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPawn_Statics::NewProp_Surface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPawn_Statics::NewProp_EarthRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPawn_Statics::NewProp_SphereMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPawn_Statics::NewProp_CanRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPawn_Statics::NewProp_RotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPawn_Statics::NewProp_CameraActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPawn_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPawn_Statics::NewProp_DefaultCameraFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPawn_Statics::NewProp_MAXFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPawn_Statics::NewProp_MINFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPawn_Statics::NewProp_ZoomSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPawn_Statics::NewProp_ShowLightBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPawn_Statics::NewProp_ShowLights_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPawn_Statics::NewProp_ShowLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPawn_Statics::NewProp_OnTileClicked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWorldPawn_Statics::ClassParams = {
		&AWorldPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWorldPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWorldPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorldPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWorldPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWorldPawn, 1502666671);
	template<> HEXAGONMAPPING_API UClass* StaticClass<AWorldPawn>()
	{
		return AWorldPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorldPawn(Z_Construct_UClass_AWorldPawn, &AWorldPawn::StaticClass, TEXT("/Script/HexagonMapping"), TEXT("AWorldPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
