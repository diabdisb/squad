#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_FactionUnitDetailsScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_FactionUnitDetailsScreen.W_FactionUnitDetailsScreen_C
// 0x0040 (0x02A0 - 0x0260)
class UW_FactionUnitDetailsScreen_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                BottomBorder;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                CloseButton;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Reflection;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                TopBorder;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_FactionUnitDetails_C*                W_FactionUnitDetails;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             CloseWidget;                                       // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void CloseWidget__DelegateSignature();
	void ExecuteUbergraph_W_FactionUnitDetailsScreen(int32 EntryPoint);
	void BndEvt__W_FactionUnitDetailsScreen_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void FillFromFaction(class USQFactionSetup* Faction, class USQLayer* Layer, int32 TeamId, bool EnemyTeam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_FactionUnitDetailsScreen_C">();
	}
	static class UW_FactionUnitDetailsScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_FactionUnitDetailsScreen_C>();
	}
};
static_assert(alignof(UW_FactionUnitDetailsScreen_C) == 0x000008, "Wrong alignment on UW_FactionUnitDetailsScreen_C");
static_assert(sizeof(UW_FactionUnitDetailsScreen_C) == 0x0002A0, "Wrong size on UW_FactionUnitDetailsScreen_C");
static_assert(offsetof(UW_FactionUnitDetailsScreen_C, UberGraphFrame) == 0x000260, "Member 'UW_FactionUnitDetailsScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_FactionUnitDetailsScreen_C, BottomBorder) == 0x000268, "Member 'UW_FactionUnitDetailsScreen_C::BottomBorder' has a wrong offset!");
static_assert(offsetof(UW_FactionUnitDetailsScreen_C, CloseButton) == 0x000270, "Member 'UW_FactionUnitDetailsScreen_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UW_FactionUnitDetailsScreen_C, Image_Reflection) == 0x000278, "Member 'UW_FactionUnitDetailsScreen_C::Image_Reflection' has a wrong offset!");
static_assert(offsetof(UW_FactionUnitDetailsScreen_C, TopBorder) == 0x000280, "Member 'UW_FactionUnitDetailsScreen_C::TopBorder' has a wrong offset!");
static_assert(offsetof(UW_FactionUnitDetailsScreen_C, W_FactionUnitDetails) == 0x000288, "Member 'UW_FactionUnitDetailsScreen_C::W_FactionUnitDetails' has a wrong offset!");
static_assert(offsetof(UW_FactionUnitDetailsScreen_C, CloseWidget) == 0x000290, "Member 'UW_FactionUnitDetailsScreen_C::CloseWidget' has a wrong offset!");

}

