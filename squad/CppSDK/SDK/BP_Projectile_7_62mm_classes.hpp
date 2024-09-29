#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_7_62mm

#include "Basic.hpp"

#include "Squad_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Projectile_7_62mm.BP_Projectile_7_62mm_C
// 0x0010 (0x0488 - 0x0478)
class ABP_Projectile_7_62mm_C final : public ASQProjectile
{
public:
	class UStaticMesh*                            TracerMesh;                                        // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              TracerMaterial;                                    // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Projectile_7_62mm_C">();
	}
	static class ABP_Projectile_7_62mm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Projectile_7_62mm_C>();
	}
};
static_assert(alignof(ABP_Projectile_7_62mm_C) == 0x000008, "Wrong alignment on ABP_Projectile_7_62mm_C");
static_assert(sizeof(ABP_Projectile_7_62mm_C) == 0x000488, "Wrong size on ABP_Projectile_7_62mm_C");
static_assert(offsetof(ABP_Projectile_7_62mm_C, TracerMesh) == 0x000478, "Member 'ABP_Projectile_7_62mm_C::TracerMesh' has a wrong offset!");
static_assert(offsetof(ABP_Projectile_7_62mm_C, TracerMaterial) == 0x000480, "Member 'ABP_Projectile_7_62mm_C::TracerMaterial' has a wrong offset!");

}

