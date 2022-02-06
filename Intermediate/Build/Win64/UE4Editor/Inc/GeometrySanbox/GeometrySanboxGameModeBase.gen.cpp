// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometrySanbox/GeometrySanboxGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometrySanboxGameModeBase() {}
// Cross Module References
	GEOMETRYSANBOX_API UClass* Z_Construct_UClass_AGeometrySanboxGameModeBase_NoRegister();
	GEOMETRYSANBOX_API UClass* Z_Construct_UClass_AGeometrySanboxGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GeometrySanbox();
// End Cross Module References
	void AGeometrySanboxGameModeBase::StaticRegisterNativesAGeometrySanboxGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGeometrySanboxGameModeBase_NoRegister()
	{
		return AGeometrySanboxGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGeometrySanboxGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometrySanboxGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySanbox,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometrySanboxGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GeometrySanboxGameModeBase.h" },
		{ "ModuleRelativePath", "GeometrySanboxGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometrySanboxGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometrySanboxGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeometrySanboxGameModeBase_Statics::ClassParams = {
		&AGeometrySanboxGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGeometrySanboxGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometrySanboxGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometrySanboxGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeometrySanboxGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeometrySanboxGameModeBase, 91817549);
	template<> GEOMETRYSANBOX_API UClass* StaticClass<AGeometrySanboxGameModeBase>()
	{
		return AGeometrySanboxGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeometrySanboxGameModeBase(Z_Construct_UClass_AGeometrySanboxGameModeBase, &AGeometrySanboxGameModeBase::StaticClass, TEXT("/Script/GeometrySanbox"), TEXT("AGeometrySanboxGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometrySanboxGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
