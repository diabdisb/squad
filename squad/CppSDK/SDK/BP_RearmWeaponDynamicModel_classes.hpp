#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RearmWeaponDynamicModel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_RadialActionModel_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RearmWeaponDynamicModel.BP_RearmWeaponDynamicModel_C
// 0x0018 (0x00C0 - 0x00A8)
class UBP_RearmWeaponDynamicModel_C final : public UBP_RadialActionModel_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_RearmWeaponDynamicModel_C;       // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ASQEquipableItem*                       Equippable;                                        // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cost;                                              // 0x00B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_RearmWeaponDynamicModel(int32 EntryPoint);
	void OnClicked(class UBaseRadialMenu_C* Radial);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RearmWeaponDynamicModel_C">();
	}
	static class UBP_RearmWeaponDynamicModel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RearmWeaponDynamicModel_C>();
	}
};
static_assert(alignof(UBP_RearmWeaponDynamicModel_C) == 0x000008, "Wrong alignment on UBP_RearmWeaponDynamicModel_C");
static_assert(sizeof(UBP_RearmWeaponDynamicModel_C) == 0x0000C0, "Wrong size on UBP_RearmWeaponDynamicModel_C");
static_assert(offsetof(UBP_RearmWeaponDynamicModel_C, UberGraphFrame_BP_RearmWeaponDynamicModel_C) == 0x0000A8, "Member 'UBP_RearmWeaponDynamicModel_C::UberGraphFrame_BP_RearmWeaponDynamicModel_C' has a wrong offset!");
static_assert(offsetof(UBP_RearmWeaponDynamicModel_C, Equippable) == 0x0000B0, "Member 'UBP_RearmWeaponDynamicModel_C::Equippable' has a wrong offset!");
static_assert(offsetof(UBP_RearmWeaponDynamicModel_C, Cost) == 0x0000B8, "Member 'UBP_RearmWeaponDynamicModel_C::Cost' has a wrong offset!");

}

