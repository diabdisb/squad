#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChaosCloth

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ChaosCloth_structs.hpp"
#include "ClothingSystemRuntimeCommon_structs.hpp"
#include "ClothingSystemRuntimeCommon_classes.hpp"
#include "ClothingSystemRuntimeInterface_classes.hpp"


namespace SDK
{

// Class ChaosCloth.ChaosClothingSimulationInteractor
// 0x0010 (0x00A0 - 0x0090)
class UChaosClothingSimulationInteractor final : public UClothingSimulationInteractor
{
public:
	uint8                                         Pad_90[0x10];                                      // 0x0090(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosClothingSimulationInteractor">();
	}
	static class UChaosClothingSimulationInteractor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosClothingSimulationInteractor>();
	}
};
static_assert(alignof(UChaosClothingSimulationInteractor) == 0x000008, "Wrong alignment on UChaosClothingSimulationInteractor");
static_assert(sizeof(UChaosClothingSimulationInteractor) == 0x0000A0, "Wrong size on UChaosClothingSimulationInteractor");

// Class ChaosCloth.ChaosClothConfig
// 0x00A0 (0x00C8 - 0x0028)
class UChaosClothConfig final : public UClothConfigCommon
{
public:
	EClothMassMode                                MassMode;                                          // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         UniformMass;                                       // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TotalMass;                                         // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Density;                                           // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinPerParticleMass;                                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EdgeStiffness;                                     // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BendingStiffness;                                  // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseBendingElements;                               // 0x0044(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AreaStiffness;                                     // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VolumeStiffness;                                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChaosClothWeightedValue               TetherStiffness;                                   // 0x0050(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         LimitScale;                                        // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseGeodesicDistance;                              // 0x005C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ShapeTargetStiffness;                              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CollisionThickness;                                // 0x0064(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrictionCoefficient;                               // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseCCD;                                           // 0x006C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseSelfCollisions;                                // 0x006D(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6E[0x2];                                       // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SelfCollisionThickness;                            // 0x0070(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseLegacyBackstop;                                // 0x0074(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DampingCoefficient;                                // 0x0078(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUsePointBasedWindModel;                           // 0x007C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_7D[0x3];                                       // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DragCoefficient;                                   // 0x0080(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LiftCoefficient;                                   // 0x0084(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseGravityOverride;                               // 0x0088(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         GravityScale;                                      // 0x008C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Gravity;                                           // 0x0090(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChaosClothWeightedValue               AnimDriveStiffness;                                // 0x009C(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChaosClothWeightedValue               AnimDriveDamping;                                  // 0x00A4(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                LinearVelocityScale;                               // 0x00AC(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AngularVelocityScale;                              // 0x00B8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FictitiousAngularScale;                            // 0x00BC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseTetrahedralConstraints;                        // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseThinShellVolumeConstraints;                    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseContinuousCollisionDetection;                  // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C3[0x5];                                       // 0x00C3(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosClothConfig">();
	}
	static class UChaosClothConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosClothConfig>();
	}
};
static_assert(alignof(UChaosClothConfig) == 0x000008, "Wrong alignment on UChaosClothConfig");
static_assert(sizeof(UChaosClothConfig) == 0x0000C8, "Wrong size on UChaosClothConfig");
static_assert(offsetof(UChaosClothConfig, MassMode) == 0x000028, "Member 'UChaosClothConfig::MassMode' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, UniformMass) == 0x00002C, "Member 'UChaosClothConfig::UniformMass' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, TotalMass) == 0x000030, "Member 'UChaosClothConfig::TotalMass' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, Density) == 0x000034, "Member 'UChaosClothConfig::Density' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, MinPerParticleMass) == 0x000038, "Member 'UChaosClothConfig::MinPerParticleMass' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, EdgeStiffness) == 0x00003C, "Member 'UChaosClothConfig::EdgeStiffness' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, BendingStiffness) == 0x000040, "Member 'UChaosClothConfig::BendingStiffness' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, bUseBendingElements) == 0x000044, "Member 'UChaosClothConfig::bUseBendingElements' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, AreaStiffness) == 0x000048, "Member 'UChaosClothConfig::AreaStiffness' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, VolumeStiffness) == 0x00004C, "Member 'UChaosClothConfig::VolumeStiffness' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, TetherStiffness) == 0x000050, "Member 'UChaosClothConfig::TetherStiffness' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, LimitScale) == 0x000058, "Member 'UChaosClothConfig::LimitScale' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, bUseGeodesicDistance) == 0x00005C, "Member 'UChaosClothConfig::bUseGeodesicDistance' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, ShapeTargetStiffness) == 0x000060, "Member 'UChaosClothConfig::ShapeTargetStiffness' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, CollisionThickness) == 0x000064, "Member 'UChaosClothConfig::CollisionThickness' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, FrictionCoefficient) == 0x000068, "Member 'UChaosClothConfig::FrictionCoefficient' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, bUseCCD) == 0x00006C, "Member 'UChaosClothConfig::bUseCCD' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, bUseSelfCollisions) == 0x00006D, "Member 'UChaosClothConfig::bUseSelfCollisions' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, SelfCollisionThickness) == 0x000070, "Member 'UChaosClothConfig::SelfCollisionThickness' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, bUseLegacyBackstop) == 0x000074, "Member 'UChaosClothConfig::bUseLegacyBackstop' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, DampingCoefficient) == 0x000078, "Member 'UChaosClothConfig::DampingCoefficient' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, bUsePointBasedWindModel) == 0x00007C, "Member 'UChaosClothConfig::bUsePointBasedWindModel' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, DragCoefficient) == 0x000080, "Member 'UChaosClothConfig::DragCoefficient' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, LiftCoefficient) == 0x000084, "Member 'UChaosClothConfig::LiftCoefficient' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, bUseGravityOverride) == 0x000088, "Member 'UChaosClothConfig::bUseGravityOverride' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, GravityScale) == 0x00008C, "Member 'UChaosClothConfig::GravityScale' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, Gravity) == 0x000090, "Member 'UChaosClothConfig::Gravity' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, AnimDriveStiffness) == 0x00009C, "Member 'UChaosClothConfig::AnimDriveStiffness' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, AnimDriveDamping) == 0x0000A4, "Member 'UChaosClothConfig::AnimDriveDamping' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, LinearVelocityScale) == 0x0000AC, "Member 'UChaosClothConfig::LinearVelocityScale' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, AngularVelocityScale) == 0x0000B8, "Member 'UChaosClothConfig::AngularVelocityScale' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, FictitiousAngularScale) == 0x0000BC, "Member 'UChaosClothConfig::FictitiousAngularScale' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, bUseTetrahedralConstraints) == 0x0000C0, "Member 'UChaosClothConfig::bUseTetrahedralConstraints' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, bUseThinShellVolumeConstraints) == 0x0000C1, "Member 'UChaosClothConfig::bUseThinShellVolumeConstraints' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, bUseContinuousCollisionDetection) == 0x0000C2, "Member 'UChaosClothConfig::bUseContinuousCollisionDetection' has a wrong offset!");

// Class ChaosCloth.ChaosClothSharedSimConfig
// 0x0010 (0x0038 - 0x0028)
class UChaosClothSharedSimConfig final : public UClothSharedConfigCommon
{
public:
	int32                                         IterationCount;                                    // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SubdivisionCount;                                  // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseLocalSpaceSimulation;                          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseXPBDConstraints;                               // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosClothSharedSimConfig">();
	}
	static class UChaosClothSharedSimConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosClothSharedSimConfig>();
	}
};
static_assert(alignof(UChaosClothSharedSimConfig) == 0x000008, "Wrong alignment on UChaosClothSharedSimConfig");
static_assert(sizeof(UChaosClothSharedSimConfig) == 0x000038, "Wrong size on UChaosClothSharedSimConfig");
static_assert(offsetof(UChaosClothSharedSimConfig, IterationCount) == 0x000028, "Member 'UChaosClothSharedSimConfig::IterationCount' has a wrong offset!");
static_assert(offsetof(UChaosClothSharedSimConfig, SubdivisionCount) == 0x00002C, "Member 'UChaosClothSharedSimConfig::SubdivisionCount' has a wrong offset!");
static_assert(offsetof(UChaosClothSharedSimConfig, bUseLocalSpaceSimulation) == 0x000030, "Member 'UChaosClothSharedSimConfig::bUseLocalSpaceSimulation' has a wrong offset!");
static_assert(offsetof(UChaosClothSharedSimConfig, bUseXPBDConstraints) == 0x000031, "Member 'UChaosClothSharedSimConfig::bUseXPBDConstraints' has a wrong offset!");

// Class ChaosCloth.ChaosClothingSimulationFactory
// 0x0000 (0x0028 - 0x0028)
class UChaosClothingSimulationFactory final : public UClothingSimulationFactory
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosClothingSimulationFactory">();
	}
	static class UChaosClothingSimulationFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosClothingSimulationFactory>();
	}
};
static_assert(alignof(UChaosClothingSimulationFactory) == 0x000008, "Wrong alignment on UChaosClothingSimulationFactory");
static_assert(sizeof(UChaosClothingSimulationFactory) == 0x000028, "Wrong size on UChaosClothingSimulationFactory");

// Class ChaosCloth.ChaosClothingInteractor
// 0x0010 (0x0040 - 0x0030)
class UChaosClothingInteractor final : public UClothingInteractor
{
public:
	uint8                                         Pad_30[0x10];                                      // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ResetAndTeleport(bool bReset, bool bTeleport);
	void SetAerodynamics(float DragCoefficient, float LiftCoefficient, const struct FVector& WindVelocity);
	void SetAnimDrive(const struct FVector2D& AnimDriveStiffness, const struct FVector2D& AnimDriveDamping);
	void SetAnimDriveLinear(float AnimDriveStiffness);
	void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness);
	void SetDamping(float DampingCoefficient);
	void SetGravity(float GravityScale, bool bIsGravityOverridden, const struct FVector& GravityOverride);
	void SetLongRangeAttachment(const struct FVector2D& TetherStiffness);
	void SetLongRangeAttachmentLinear(float TetherStiffness);
	void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness);
	void SetVelocityScale(const struct FVector& LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosClothingInteractor">();
	}
	static class UChaosClothingInteractor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosClothingInteractor>();
	}
};
static_assert(alignof(UChaosClothingInteractor) == 0x000008, "Wrong alignment on UChaosClothingInteractor");
static_assert(sizeof(UChaosClothingInteractor) == 0x000040, "Wrong size on UChaosClothingInteractor");

}

