#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CommandUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_MenuBase_classes.hpp"
#include "Squad_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_CommandUI.W_CommandUI_C
// 0x00D8 (0x03B8 - 0x02E0)
class UW_CommandUI_C final : public UUMG_MenuBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_W_CommandUI_C;                      // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       CommandOpenCloseAnim;                              // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundBlur*                        BackgroundBlur_0;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChallengeWindow_C*                     ChallengeGiveUp;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SlideComponent_C*                    ChatSlide;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SlideComponent_C*                    CommandSlide;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               GiveupPanel;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         MainObject;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SQMapCore_C*                         MapCoreWidget;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                     NAV_ROLES;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                     NAV_SQUADS;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Slideimage;                                        // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SquadBox;                                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                SquadsSlideButton;                                 // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ControlledCameraList_C*              W_ControlledCameraList;                            // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_GameTime_C*                          W_GameTime;                                        // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_GiveUp_C*                            W_GiveUp;                                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MapControls_C*                       W_MapControls;                                     // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MarkedPosition_C*                    W_MarkedPosition;                                  // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PlayerPosition_C*                    W_PlayerPosition;                                  // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SquadList_C*                         W_SquadList;                                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TeamTickets_C*                       W_TeamTickets;                                     // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TerritoryControl_Bar_C*              W_TerritoryControl_Bar;                            // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_VoipOwningPlayer_C*                  W_VoipOwningPlayer;                                // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASQPlayerController*                    My_PC;                                             // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Always_Allow_Action;                               // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A9[0x7];                                      // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_CommandActionList_C*                 Command_List_Widget;                               // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_CommandUI(int32 EntryPoint);
	void BndEvt__SquadsSlideButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Command_Changed(class ASQPlayerState* OldCommander, class ASQPlayerState* NewCommander);
	void Bind_Commander_Changed();
	void Closed();
	void Opened();
	void Open_Chat_Slide(ESQChat Channel);
	void Construct();
	void BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_485_Hide_Confirmation__DelegateSignature();
	void BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_313_GiveUpPressed__DelegateSignature();
	void BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_202_OnRightButtonClicked__DelegateSignature();
	void BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_183_OnLeftButtonClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Get_Squad_List_Roots(class UPanelWidget** Squad_Panel, class UPanelWidget** Unassigned_Panel, class UPanelWidget** Commander_Panel);
	void Get_Voting_Widget(class UUserWidget** Voting_Widget);
	void Set_Command_Slide_Visibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_CommandUI_C">();
	}
	static class UW_CommandUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_CommandUI_C>();
	}
};
static_assert(alignof(UW_CommandUI_C) == 0x000008, "Wrong alignment on UW_CommandUI_C");
static_assert(sizeof(UW_CommandUI_C) == 0x0003B8, "Wrong size on UW_CommandUI_C");
static_assert(offsetof(UW_CommandUI_C, UberGraphFrame_W_CommandUI_C) == 0x0002E0, "Member 'UW_CommandUI_C::UberGraphFrame_W_CommandUI_C' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, CommandOpenCloseAnim) == 0x0002E8, "Member 'UW_CommandUI_C::CommandOpenCloseAnim' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, BackgroundBlur_0) == 0x0002F0, "Member 'UW_CommandUI_C::BackgroundBlur_0' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, ChallengeGiveUp) == 0x0002F8, "Member 'UW_CommandUI_C::ChallengeGiveUp' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, ChatSlide) == 0x000300, "Member 'UW_CommandUI_C::ChatSlide' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, CommandSlide) == 0x000308, "Member 'UW_CommandUI_C::CommandSlide' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, GiveupPanel) == 0x000310, "Member 'UW_CommandUI_C::GiveupPanel' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, MainObject) == 0x000318, "Member 'UW_CommandUI_C::MainObject' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, MapCoreWidget) == 0x000320, "Member 'UW_CommandUI_C::MapCoreWidget' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, NAV_ROLES) == 0x000328, "Member 'UW_CommandUI_C::NAV_ROLES' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, NAV_SQUADS) == 0x000330, "Member 'UW_CommandUI_C::NAV_SQUADS' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, Slideimage) == 0x000338, "Member 'UW_CommandUI_C::Slideimage' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, SquadBox) == 0x000340, "Member 'UW_CommandUI_C::SquadBox' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, SquadsSlideButton) == 0x000348, "Member 'UW_CommandUI_C::SquadsSlideButton' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, W_ControlledCameraList) == 0x000350, "Member 'UW_CommandUI_C::W_ControlledCameraList' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, W_GameTime) == 0x000358, "Member 'UW_CommandUI_C::W_GameTime' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, W_GiveUp) == 0x000360, "Member 'UW_CommandUI_C::W_GiveUp' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, W_MapControls) == 0x000368, "Member 'UW_CommandUI_C::W_MapControls' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, W_MarkedPosition) == 0x000370, "Member 'UW_CommandUI_C::W_MarkedPosition' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, W_PlayerPosition) == 0x000378, "Member 'UW_CommandUI_C::W_PlayerPosition' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, W_SquadList) == 0x000380, "Member 'UW_CommandUI_C::W_SquadList' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, W_TeamTickets) == 0x000388, "Member 'UW_CommandUI_C::W_TeamTickets' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, W_TerritoryControl_Bar) == 0x000390, "Member 'UW_CommandUI_C::W_TerritoryControl_Bar' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, W_VoipOwningPlayer) == 0x000398, "Member 'UW_CommandUI_C::W_VoipOwningPlayer' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, My_PC) == 0x0003A0, "Member 'UW_CommandUI_C::My_PC' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, Always_Allow_Action) == 0x0003A8, "Member 'UW_CommandUI_C::Always_Allow_Action' has a wrong offset!");
static_assert(offsetof(UW_CommandUI_C, Command_List_Widget) == 0x0003B0, "Member 'UW_CommandUI_C::Command_List_Widget' has a wrong offset!");

}

