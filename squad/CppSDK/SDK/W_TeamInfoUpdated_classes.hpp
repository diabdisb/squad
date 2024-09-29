#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TeamInfoUpdated

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ESQFactionSetupType_structs.hpp"
#include "UMG_classes.hpp"
#include "ESQBiome_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_TeamInfoUpdated.W_TeamInfoUpdated_C
// 0x0170 (0x03D0 - 0x0260)
class UW_TeamInfoUpdated_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnSelected;                                        // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnHover;                                           // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_0;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconPlayers;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_VoteInfoButton_C*                  InfoButton;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_1;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TB_ChangeTeam;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TB_Players;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TB_TeamTitle;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TB_YourTeam;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TeamImage;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TeamNameText;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        TeamStatusWidget;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UnitBadgeImage;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             UnitName;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             UnitType;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             UnitTypeSlot;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           Init_Timer_Handle;                                 // 0x02F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         Team_Index;                                        // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Attacking;                                      // 0x0304(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_305[0x3];                                      // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Current_Tickets;                                   // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Max_Tickets;                                       // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Selected;                                       // 0x0310(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_311[0x3];                                      // 0x0311(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Grayness;                                          // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FlagTime;                                          // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Hovered;                                        // 0x031C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31D[0x3];                                      // 0x031D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnTeamChangePressed;                               // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ASQTeamState*                           Team;                                              // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentSizeValue;                                  // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33C[0x4];                                      // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSizeValueChanged;                                // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         GraySpeed;                                         // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SizeSpeed;                                         // 0x0354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              ClickSound;                                        // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             TeamInfoSelected;                                  // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           RefreshTimerHandle;                                // 0x0370(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_SQFactionSetup_C*                   FactionSetup;                                      // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<ESQFactionSetupType, TSoftObjectPtr<class UTexture2D>> UnitTypeIconMap;                                   // 0x0380(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnTeamChangePressed__DelegateSignature(class ASQTeamState* SelectedTeam);
	void OnSizeValueChanged__DelegateSignature(float NewParam);
	void TeamInfoSelected__DelegateSignature(class USQFactionSetup* FactionSetup_0, int32 TeamId);
	void ExecuteUbergraph_W_TeamInfoUpdated(int32 EntryPoint);
	void BndEvt__W_TeamInfoUpdated_InfoButton_K2Node_ComponentBoundEvent_0_InfoClicked__DelegateSignature();
	void BndEvt__W_TeamInfoUpdated_Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_TeamInfoUpdated_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__W_TeamInfoUpdated_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Refresh_Live_Info();
	void Await_Faction_Setup();
	void Construct();
	void Init_Team(class UBP_SQFactionSetup_C* Faction);
	void Refresh();
	void Get_Team_Image(const struct FSQFactionEntry& Faction_Entry, TSoftObjectPtr<class UTexture2D>* Team_Texture);
	void GetTeamState(class ASQTeamState** Output);
	void OnRep_Is_Selected();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_TeamInfoUpdated_C">();
	}
	static class UW_TeamInfoUpdated_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_TeamInfoUpdated_C>();
	}
};
static_assert(alignof(UW_TeamInfoUpdated_C) == 0x000008, "Wrong alignment on UW_TeamInfoUpdated_C");
static_assert(sizeof(UW_TeamInfoUpdated_C) == 0x0003D0, "Wrong size on UW_TeamInfoUpdated_C");
static_assert(offsetof(UW_TeamInfoUpdated_C, UberGraphFrame) == 0x000260, "Member 'UW_TeamInfoUpdated_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, OnSelected) == 0x000268, "Member 'UW_TeamInfoUpdated_C::OnSelected' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, OnHover) == 0x000270, "Member 'UW_TeamInfoUpdated_C::OnHover' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, Background) == 0x000278, "Member 'UW_TeamInfoUpdated_C::Background' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, Button_0) == 0x000280, "Member 'UW_TeamInfoUpdated_C::Button_0' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, IconPlayers) == 0x000288, "Member 'UW_TeamInfoUpdated_C::IconPlayers' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, InfoButton) == 0x000290, "Member 'UW_TeamInfoUpdated_C::InfoButton' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, SizeBox_1) == 0x000298, "Member 'UW_TeamInfoUpdated_C::SizeBox_1' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, TB_ChangeTeam) == 0x0002A0, "Member 'UW_TeamInfoUpdated_C::TB_ChangeTeam' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, TB_Players) == 0x0002A8, "Member 'UW_TeamInfoUpdated_C::TB_Players' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, TB_TeamTitle) == 0x0002B0, "Member 'UW_TeamInfoUpdated_C::TB_TeamTitle' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, TB_YourTeam) == 0x0002B8, "Member 'UW_TeamInfoUpdated_C::TB_YourTeam' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, TeamImage) == 0x0002C0, "Member 'UW_TeamInfoUpdated_C::TeamImage' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, TeamNameText) == 0x0002C8, "Member 'UW_TeamInfoUpdated_C::TeamNameText' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, TeamStatusWidget) == 0x0002D0, "Member 'UW_TeamInfoUpdated_C::TeamStatusWidget' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, UnitBadgeImage) == 0x0002D8, "Member 'UW_TeamInfoUpdated_C::UnitBadgeImage' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, UnitName) == 0x0002E0, "Member 'UW_TeamInfoUpdated_C::UnitName' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, UnitType) == 0x0002E8, "Member 'UW_TeamInfoUpdated_C::UnitType' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, UnitTypeSlot) == 0x0002F0, "Member 'UW_TeamInfoUpdated_C::UnitTypeSlot' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, Init_Timer_Handle) == 0x0002F8, "Member 'UW_TeamInfoUpdated_C::Init_Timer_Handle' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, Team_Index) == 0x000300, "Member 'UW_TeamInfoUpdated_C::Team_Index' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, Is_Attacking) == 0x000304, "Member 'UW_TeamInfoUpdated_C::Is_Attacking' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, Current_Tickets) == 0x000308, "Member 'UW_TeamInfoUpdated_C::Current_Tickets' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, Max_Tickets) == 0x00030C, "Member 'UW_TeamInfoUpdated_C::Max_Tickets' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, Is_Selected) == 0x000310, "Member 'UW_TeamInfoUpdated_C::Is_Selected' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, Grayness) == 0x000314, "Member 'UW_TeamInfoUpdated_C::Grayness' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, FlagTime) == 0x000318, "Member 'UW_TeamInfoUpdated_C::FlagTime' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, Is_Hovered) == 0x00031C, "Member 'UW_TeamInfoUpdated_C::Is_Hovered' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, OnTeamChangePressed) == 0x000320, "Member 'UW_TeamInfoUpdated_C::OnTeamChangePressed' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, Team) == 0x000330, "Member 'UW_TeamInfoUpdated_C::Team' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, CurrentSizeValue) == 0x000338, "Member 'UW_TeamInfoUpdated_C::CurrentSizeValue' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, OnSizeValueChanged) == 0x000340, "Member 'UW_TeamInfoUpdated_C::OnSizeValueChanged' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, GraySpeed) == 0x000350, "Member 'UW_TeamInfoUpdated_C::GraySpeed' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, SizeSpeed) == 0x000354, "Member 'UW_TeamInfoUpdated_C::SizeSpeed' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, ClickSound) == 0x000358, "Member 'UW_TeamInfoUpdated_C::ClickSound' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, TeamInfoSelected) == 0x000360, "Member 'UW_TeamInfoUpdated_C::TeamInfoSelected' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, RefreshTimerHandle) == 0x000370, "Member 'UW_TeamInfoUpdated_C::RefreshTimerHandle' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, FactionSetup) == 0x000378, "Member 'UW_TeamInfoUpdated_C::FactionSetup' has a wrong offset!");
static_assert(offsetof(UW_TeamInfoUpdated_C, UnitTypeIconMap) == 0x000380, "Member 'UW_TeamInfoUpdated_C::UnitTypeIconMap' has a wrong offset!");

}

