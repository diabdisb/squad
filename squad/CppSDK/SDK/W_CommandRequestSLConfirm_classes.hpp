#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CommandRequestSLConfirm

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "W_FloatingWidget_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_CommandRequestSLConfirm.W_CommandRequestSLConfirm_C
// 0x0050 (0x02C8 - 0x0278)
class UW_CommandRequestSLConfirm_C final : public UW_FloatingWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_W_CommandRequestSLConfirm_C;        // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_Timer;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                     Button_Accept;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                     Button_Deny;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        MainSwitch;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TB_Timer;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Available;                                         // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQPlayerController*                    My_PC;                                             // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQMapWidgetMapMarkerSelectable*        Map_Marker_Widget;                                 // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_MapMarker_CommandMaster_C*          SL_Command_Request_Marker;                         // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_CommandRequestSLConfirm(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void BndEvt__Button_Deny_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_CommandRequestSLConfirm_C">();
	}
	static class UW_CommandRequestSLConfirm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_CommandRequestSLConfirm_C>();
	}
};
static_assert(alignof(UW_CommandRequestSLConfirm_C) == 0x000008, "Wrong alignment on UW_CommandRequestSLConfirm_C");
static_assert(sizeof(UW_CommandRequestSLConfirm_C) == 0x0002C8, "Wrong size on UW_CommandRequestSLConfirm_C");
static_assert(offsetof(UW_CommandRequestSLConfirm_C, UberGraphFrame_W_CommandRequestSLConfirm_C) == 0x000278, "Member 'UW_CommandRequestSLConfirm_C::UberGraphFrame_W_CommandRequestSLConfirm_C' has a wrong offset!");
static_assert(offsetof(UW_CommandRequestSLConfirm_C, Border_Timer) == 0x000280, "Member 'UW_CommandRequestSLConfirm_C::Border_Timer' has a wrong offset!");
static_assert(offsetof(UW_CommandRequestSLConfirm_C, Button_Accept) == 0x000288, "Member 'UW_CommandRequestSLConfirm_C::Button_Accept' has a wrong offset!");
static_assert(offsetof(UW_CommandRequestSLConfirm_C, Button_Deny) == 0x000290, "Member 'UW_CommandRequestSLConfirm_C::Button_Deny' has a wrong offset!");
static_assert(offsetof(UW_CommandRequestSLConfirm_C, MainSwitch) == 0x000298, "Member 'UW_CommandRequestSLConfirm_C::MainSwitch' has a wrong offset!");
static_assert(offsetof(UW_CommandRequestSLConfirm_C, TB_Timer) == 0x0002A0, "Member 'UW_CommandRequestSLConfirm_C::TB_Timer' has a wrong offset!");
static_assert(offsetof(UW_CommandRequestSLConfirm_C, Available) == 0x0002A8, "Member 'UW_CommandRequestSLConfirm_C::Available' has a wrong offset!");
static_assert(offsetof(UW_CommandRequestSLConfirm_C, My_PC) == 0x0002B0, "Member 'UW_CommandRequestSLConfirm_C::My_PC' has a wrong offset!");
static_assert(offsetof(UW_CommandRequestSLConfirm_C, Map_Marker_Widget) == 0x0002B8, "Member 'UW_CommandRequestSLConfirm_C::Map_Marker_Widget' has a wrong offset!");
static_assert(offsetof(UW_CommandRequestSLConfirm_C, SL_Command_Request_Marker) == 0x0002C0, "Member 'UW_CommandRequestSLConfirm_C::SL_Command_Request_Marker' has a wrong offset!");

}

