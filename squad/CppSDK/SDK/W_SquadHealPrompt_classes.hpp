#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SquadHealPrompt

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "W_HealPrompt_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SquadHealPrompt.W_SquadHealPrompt_C
// 0x0028 (0x02A0 - 0x0278)
class UW_SquadHealPrompt_C final : public UW_HealPrompt_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_W_SquadHealPrompt_C;                // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BleedFlash;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_SquadHealPrompt(int32 EntryPoint);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Update_Soldier(class ASQSoldier* Soldier_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SquadHealPrompt_C">();
	}
	static class UW_SquadHealPrompt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SquadHealPrompt_C>();
	}
};
static_assert(alignof(UW_SquadHealPrompt_C) == 0x000008, "Wrong alignment on UW_SquadHealPrompt_C");
static_assert(sizeof(UW_SquadHealPrompt_C) == 0x0002A0, "Wrong size on UW_SquadHealPrompt_C");
static_assert(offsetof(UW_SquadHealPrompt_C, UberGraphFrame_W_SquadHealPrompt_C) == 0x000278, "Member 'UW_SquadHealPrompt_C::UberGraphFrame_W_SquadHealPrompt_C' has a wrong offset!");
static_assert(offsetof(UW_SquadHealPrompt_C, BleedFlash) == 0x000280, "Member 'UW_SquadHealPrompt_C::BleedFlash' has a wrong offset!");
static_assert(offsetof(UW_SquadHealPrompt_C, Image_0) == 0x000288, "Member 'UW_SquadHealPrompt_C::Image_0' has a wrong offset!");
static_assert(offsetof(UW_SquadHealPrompt_C, Image_1) == 0x000290, "Member 'UW_SquadHealPrompt_C::Image_1' has a wrong offset!");
static_assert(offsetof(UW_SquadHealPrompt_C, WidgetSwitcher_0) == 0x000298, "Member 'UW_SquadHealPrompt_C::WidgetSwitcher_0' has a wrong offset!");

}

