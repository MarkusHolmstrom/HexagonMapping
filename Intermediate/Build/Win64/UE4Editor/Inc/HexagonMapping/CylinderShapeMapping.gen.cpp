// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HexagonMapping/Public/Earth/CylinderShapeMapping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCylinderShapeMapping() {}
// Cross Module References
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AShapeMapping_NoRegister();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AShapeMapping();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HexagonMapping();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AShapeMapping::execShootLaser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShootLaser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShapeMapping::execGetAngle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAngle(Z_Param_MaxWidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShapeMapping::execGetHexLocation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxHeight);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxWidth);
		P_GET_PROPERTY(FIntProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetHexLocation(Z_Param_Height,Z_Param_Width,Z_Param_MaxHeight,Z_Param_MaxWidth,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShapeMapping::execSetShape)
	{
		P_GET_UBOOL(Z_Param_Cylinder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShape(Z_Param_Cylinder);
		P_NATIVE_END;
	}
	void AShapeMapping::StaticRegisterNativesAShapeMapping()
	{
		UClass* Class = AShapeMapping::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAngle", &AShapeMapping::execGetAngle },
			{ "GetHexLocation", &AShapeMapping::execGetHexLocation },
			{ "SetShape", &AShapeMapping::execSetShape },
			{ "ShootLaser", &AShapeMapping::execShootLaser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShapeMapping_GetAngle_Statics
	{
		struct ShapeMapping_eventGetAngle_Parms
		{
			int32 MaxWidth;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxWidth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShapeMapping_GetAngle_Statics::NewProp_MaxWidth = { "MaxWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShapeMapping_eventGetAngle_Parms, MaxWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShapeMapping_GetAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShapeMapping_eventGetAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShapeMapping_GetAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShapeMapping_GetAngle_Statics::NewProp_MaxWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShapeMapping_GetAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShapeMapping_GetAngle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/CylinderShapeMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShapeMapping_GetAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShapeMapping, nullptr, "GetAngle", nullptr, nullptr, sizeof(ShapeMapping_eventGetAngle_Parms), Z_Construct_UFunction_AShapeMapping_GetAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShapeMapping_GetAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShapeMapping_GetAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShapeMapping_GetAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShapeMapping_GetAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShapeMapping_GetAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShapeMapping_GetHexLocation_Statics
	{
		struct ShapeMapping_eventGetHexLocation_Parms
		{
			int32 Height;
			int32 Width;
			int32 MaxHeight;
			int32 MaxWidth;
			int32 Radius;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxHeight;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxWidth;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShapeMapping_GetHexLocation_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShapeMapping_eventGetHexLocation_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShapeMapping_GetHexLocation_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShapeMapping_eventGetHexLocation_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShapeMapping_GetHexLocation_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShapeMapping_eventGetHexLocation_Parms, MaxHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShapeMapping_GetHexLocation_Statics::NewProp_MaxWidth = { "MaxWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShapeMapping_eventGetHexLocation_Parms, MaxWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShapeMapping_GetHexLocation_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShapeMapping_eventGetHexLocation_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShapeMapping_GetHexLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShapeMapping_eventGetHexLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShapeMapping_GetHexLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShapeMapping_GetHexLocation_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShapeMapping_GetHexLocation_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShapeMapping_GetHexLocation_Statics::NewProp_MaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShapeMapping_GetHexLocation_Statics::NewProp_MaxWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShapeMapping_GetHexLocation_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShapeMapping_GetHexLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShapeMapping_GetHexLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/CylinderShapeMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShapeMapping_GetHexLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShapeMapping, nullptr, "GetHexLocation", nullptr, nullptr, sizeof(ShapeMapping_eventGetHexLocation_Parms), Z_Construct_UFunction_AShapeMapping_GetHexLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShapeMapping_GetHexLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShapeMapping_GetHexLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShapeMapping_GetHexLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShapeMapping_GetHexLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShapeMapping_GetHexLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShapeMapping_SetShape_Statics
	{
		struct ShapeMapping_eventSetShape_Parms
		{
			bool Cylinder;
		};
		static void NewProp_Cylinder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Cylinder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AShapeMapping_SetShape_Statics::NewProp_Cylinder_SetBit(void* Obj)
	{
		((ShapeMapping_eventSetShape_Parms*)Obj)->Cylinder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShapeMapping_SetShape_Statics::NewProp_Cylinder = { "Cylinder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShapeMapping_eventSetShape_Parms), &Z_Construct_UFunction_AShapeMapping_SetShape_Statics::NewProp_Cylinder_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShapeMapping_SetShape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShapeMapping_SetShape_Statics::NewProp_Cylinder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShapeMapping_SetShape_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/CylinderShapeMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShapeMapping_SetShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShapeMapping, nullptr, "SetShape", nullptr, nullptr, sizeof(ShapeMapping_eventSetShape_Parms), Z_Construct_UFunction_AShapeMapping_SetShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShapeMapping_SetShape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShapeMapping_SetShape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShapeMapping_SetShape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShapeMapping_SetShape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShapeMapping_SetShape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShapeMapping_ShootLaser_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShapeMapping_ShootLaser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/CylinderShapeMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShapeMapping_ShootLaser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShapeMapping, nullptr, "ShootLaser", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShapeMapping_ShootLaser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShapeMapping_ShootLaser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShapeMapping_ShootLaser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShapeMapping_ShootLaser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShapeMapping_NoRegister()
	{
		return AShapeMapping::StaticClass();
	}
	struct Z_Construct_UClass_AShapeMapping_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCylinder_MetaData[];
#endif
		static void NewProp_bCylinder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCylinder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShapeMapping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HexagonMapping,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShapeMapping_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShapeMapping_GetAngle, "GetAngle" }, // 1105508029
		{ &Z_Construct_UFunction_AShapeMapping_GetHexLocation, "GetHexLocation" }, // 2821252998
		{ &Z_Construct_UFunction_AShapeMapping_SetShape, "SetShape" }, // 4159179163
		{ &Z_Construct_UFunction_AShapeMapping_ShootLaser, "ShootLaser" }, // 1673007660
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShapeMapping_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Earth/CylinderShapeMapping.h" },
		{ "ModuleRelativePath", "Public/Earth/CylinderShapeMapping.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShapeMapping_Statics::NewProp_bCylinder_MetaData[] = {
		{ "Category", "ShapeMapping" },
		{ "ModuleRelativePath", "Public/Earth/CylinderShapeMapping.h" },
	};
#endif
	void Z_Construct_UClass_AShapeMapping_Statics::NewProp_bCylinder_SetBit(void* Obj)
	{
		((AShapeMapping*)Obj)->bCylinder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShapeMapping_Statics::NewProp_bCylinder = { "bCylinder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShapeMapping), &Z_Construct_UClass_AShapeMapping_Statics::NewProp_bCylinder_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShapeMapping_Statics::NewProp_bCylinder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShapeMapping_Statics::NewProp_bCylinder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShapeMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShapeMapping_Statics::NewProp_bCylinder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShapeMapping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShapeMapping>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShapeMapping_Statics::ClassParams = {
		&AShapeMapping::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShapeMapping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShapeMapping_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShapeMapping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShapeMapping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShapeMapping()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShapeMapping_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShapeMapping, 697925051);
	template<> HEXAGONMAPPING_API UClass* StaticClass<AShapeMapping>()
	{
		return AShapeMapping::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShapeMapping(Z_Construct_UClass_AShapeMapping, &AShapeMapping::StaticClass, TEXT("/Script/HexagonMapping"), TEXT("AShapeMapping"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShapeMapping);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
