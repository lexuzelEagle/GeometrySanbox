// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef GEOMETRYSANBOX_BaseGeometryActor_generated_h
#error "BaseGeometryActor.generated.h already included, missing '#pragma once' in BaseGeometryActor.h"
#endif
#define GEOMETRYSANBOX_BaseGeometryActor_generated_h

#define GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryData_Statics; \
	GEOMETRYSANBOX_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYSANBOX_API UScriptStruct* StaticStruct<struct FGeometryData>();

#define GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_11_DELEGATE \
struct _Script_GeometrySanbox_eventOnColorChanged_Parms \
{ \
	FLinearColor Color; \
	FString Name; \
}; \
static inline void FOnColorChanged_DelegateWrapper(const FMulticastScriptDelegate& OnColorChanged, FLinearColor const& Color, const FString& Name) \
{ \
	_Script_GeometrySanbox_eventOnColorChanged_Parms Parms; \
	Parms.Color=Color; \
	Parms.Name=Name; \
	OnColorChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_47_SPARSE_DATA
#define GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_47_RPC_WRAPPERS
#define GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_47_RPC_WRAPPERS_NO_PURE_DECLS
#define GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseGeometryActor(); \
	friend struct Z_Construct_UClass_ABaseGeometryActor_Statics; \
public: \
	DECLARE_CLASS(ABaseGeometryActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometrySanbox"), NO_API) \
	DECLARE_SERIALIZER(ABaseGeometryActor)


#define GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_47_INCLASS \
private: \
	static void StaticRegisterNativesABaseGeometryActor(); \
	friend struct Z_Construct_UClass_ABaseGeometryActor_Statics; \
public: \
	DECLARE_CLASS(ABaseGeometryActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometrySanbox"), NO_API) \
	DECLARE_SERIALIZER(ABaseGeometryActor)


#define GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGeometryActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGeometryActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGeometryActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGeometryActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGeometryActor(ABaseGeometryActor&&); \
	NO_API ABaseGeometryActor(const ABaseGeometryActor&); \
public:


#define GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGeometryActor(ABaseGeometryActor&&); \
	NO_API ABaseGeometryActor(const ABaseGeometryActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGeometryActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGeometryActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseGeometryActor)


#define GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_47_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GeometryData() { return STRUCT_OFFSET(ABaseGeometryActor, GeometryData); } \
	FORCEINLINE static uint32 __PPO__WeaponsNum() { return STRUCT_OFFSET(ABaseGeometryActor, WeaponsNum); } \
	FORCEINLINE static uint32 __PPO__KillsNum() { return STRUCT_OFFSET(ABaseGeometryActor, KillsNum); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(ABaseGeometryActor, Health); } \
	FORCEINLINE static uint32 __PPO__IsDead() { return STRUCT_OFFSET(ABaseGeometryActor, IsDead); } \
	FORCEINLINE static uint32 __PPO__HasWeapon() { return STRUCT_OFFSET(ABaseGeometryActor, HasWeapon); }


#define GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_44_PROLOG
#define GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_47_PRIVATE_PROPERTY_OFFSET \
	GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_47_SPARSE_DATA \
	GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_47_RPC_WRAPPERS \
	GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_47_INCLASS \
	GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_47_PRIVATE_PROPERTY_OFFSET \
	GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_47_SPARSE_DATA \
	GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_47_INCLASS_NO_PURE_DECLS \
	GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSANBOX_API UClass* StaticClass<class ABaseGeometryActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GeometrySanbox_Source_GeometrySanbox_Public_BaseGeometryActor_h


#define FOREACH_ENUM_EMOVEMENTTYPE(op) \
	op(EMovementType::Sin) \
	op(EMovementType::Static) 

enum class EMovementType : uint8;
template<> GEOMETRYSANBOX_API UEnum* StaticEnum<EMovementType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
