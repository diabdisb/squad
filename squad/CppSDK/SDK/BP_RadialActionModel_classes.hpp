#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RadialActionModel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_RadialItemModel_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RadialActionModel.BP_RadialActionModel_C
// 0x0010 (0x00A8 - 0x0098)
class UBP_RadialActionModel_C : public UBP_RadialItemModel_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_RadialActionModel_C;             // 0x0098(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 Action;                                            // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_RadialActionModel(int32 EntryPoint);
	void OnClicked(class UBaseRadialMenu_C* Radial);
	void IsInVehicle(class AController* Controller, bool* IsInVehicle_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RadialActionModel_C">();
	}
	static class UBP_RadialActionModel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RadialActionModel_C>();
	}
};
static_assert(alignof(UBP_RadialActionModel_C) == 0x000008, "Wrong alignment on UBP_RadialActionModel_C");
static_assert(sizeof(UBP_RadialActionModel_C) == 0x0000A8, "Wrong size on UBP_RadialActionModel_C");
static_assert(offsetof(UBP_RadialActionModel_C, UberGraphFrame_BP_RadialActionModel_C) == 0x000098, "Member 'UBP_RadialActionModel_C::UberGraphFrame_BP_RadialActionModel_C' has a wrong offset!");
static_assert(offsetof(UBP_RadialActionModel_C, Action) == 0x0000A0, "Member 'UBP_RadialActionModel_C::Action' has a wrong offset!");

}

