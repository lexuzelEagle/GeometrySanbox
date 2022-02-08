// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometrySanbox/Public/SandboxPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSandboxPlayerController() {}
// Cross Module References
	GEOMETRYSANBOX_API UClass* Z_Construct_UClass_ASandboxPlayerController_NoRegister();
	GEOMETRYSANBOX_API UClass* Z_Construct_UClass_ASandboxPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_GeometrySanbox();
// End Cross Module References
	void ASandboxPlayerController::StaticRegisterNativesASandboxPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ASandboxPlayerController_NoRegister()
	{
		return ASandboxPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASandboxPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASandboxPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySanbox,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASandboxPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SandboxPlayerController.h" },
		{ "ModuleRelativePath", "Public/SandboxPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASandboxPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASandboxPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASandboxPlayerController_Statics::ClassParams = {
		&ASandboxPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASandboxPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASandboxPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASandboxPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASandboxPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASandboxPlayerController, 1127412763);
	template<> GEOMETRYSANBOX_API UClass* StaticClass<ASandboxPlayerController>()
	{
		return ASandboxPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASandboxPlayerController(Z_Construct_UClass_ASandboxPlayerController, &ASandboxPlayerController::StaticClass, TEXT("/Script/GeometrySanbox"), TEXT("ASandboxPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASandboxPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
