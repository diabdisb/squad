#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SquadList_HUD_Player

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Squad_classes.hpp"
#include "SquadVoice_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SquadList_HUD_Player.W_SquadList_HUD_Player_C
// 0x00D8 (0x03C0 - 0x02E8)
class UW_SquadList_HUD_Player_C final : public USQCoreStateSquadMemberWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_Colour;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CommandVoipIcon;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FireTeam_Indicator;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconRole;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconStatus;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconVehicle;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProximityDot;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TBName;                                            // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VoipIcon;                                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        VoipIconSwitcher;                                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASQPlayerController*                    My_PC;                                             // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                         Current_Font;                                      // 0x0348(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsInVehicle;                                      // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A1[0x7];                                      // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_SquadList_HUD_SquadItem_C*           ParentSquadList;                                   // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ProximityDotRange;                                 // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Audible;                                        // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_W_SquadList_HUD_Player(int32 EntryPoint);
	void OnSquadIdChanged();
	void OnIsFireTeamLeaderChanged();
	void OnFireTeamIndexChanged();
	void OnDeployRoleChanged();
	void OnIsSquadLeaderChanged();
	void OnIsAliveChanged();
	void OnIsPossessingPawnChanged();
	void OnIsWoundedChanged();
	void OnIsBleedingChanged();
	void OnCurrentVehicleDataChanged();
	void OnIsMutedChanged();
	void OnVoipChannelChanged();
	void Construct();
	void UpdateFireteamColours();
	void UpdatePlayerName();
	void UpdateBorderColour();
	void UpdateMuteIcon();
	void UpdateMemberItem();
	void SetRole();
	void UpdateRank();
	void SelfSquad(bool* Is_SelfSquad);
	void GetParentSquadList(class UW_SquadList_HUD_SquadItem_C** AsW_Squad_List_HUD_Squad_Item);
	void Update_Proximity_Dot();
	struct FLinearColor Get_Channel_Color();
	void Update_Role_Icon();
	void Is_Current_Channel_Audible(bool* Audible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SquadList_HUD_Player_C">();
	}
	static class UW_SquadList_HUD_Player_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SquadList_HUD_Player_C>();
	}
};
static_assert(alignof(UW_SquadList_HUD_Player_C) == 0x000008, "Wrong alignment on UW_SquadList_HUD_Player_C");
static_assert(sizeof(UW_SquadList_HUD_Player_C) == 0x0003C0, "Wrong size on UW_SquadList_HUD_Player_C");
static_assert(offsetof(UW_SquadList_HUD_Player_C, UberGraphFrame) == 0x0002E8, "Member 'UW_SquadList_HUD_Player_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_SquadList_HUD_Player_C, Border_Colour) == 0x0002F0, "Member 'UW_SquadList_HUD_Player_C::Border_Colour' has a wrong offset!");
static_assert(offsetof(UW_SquadList_HUD_Player_C, CommandVoipIcon) == 0x0002F8, "Member 'UW_SquadList_HUD_Player_C::CommandVoipIcon' has a wrong offset!");
static_assert(offsetof(UW_SquadList_HUD_Player_C, FireTeam_Indicator) == 0x000300, "Member 'UW_SquadList_HUD_Player_C::FireTeam_Indicator' has a wrong offset!");
static_assert(offsetof(UW_SquadList_HUD_Player_C, IconRole) == 0x000308, "Member 'UW_SquadList_HUD_Player_C::IconRole' has a wrong offset!");
static_assert(offsetof(UW_SquadList_HUD_Player_C, IconStatus) == 0x000310, "Member 'UW_SquadList_HUD_Player_C::IconStatus' has a wrong offset!");
static_assert(offsetof(UW_SquadList_HUD_Player_C, IconVehicle) == 0x000318, "Member 'UW_SquadList_HUD_Player_C::IconVehicle' has a wrong offset!");
static_assert(offsetof(UW_SquadList_HUD_Player_C, ProximityDot) == 0x000320, "Member 'UW_SquadList_HUD_Player_C::ProximityDot' has a wrong offset!");
static_assert(offsetof(UW_SquadList_HUD_Player_C, TBName) == 0x000328, "Member 'UW_SquadList_HUD_Player_C::TBName' has a wrong offset!");
static_assert(offsetof(UW_SquadList_HUD_Player_C, VoipIcon) == 0x000330, "Member 'UW_SquadList_HUD_Player_C::VoipIcon' has a wrong offset!");
static_assert(offsetof(UW_SquadList_HUD_Player_C, VoipIconSwitcher) == 0x000338, "Member 'UW_SquadList_HUD_Player_C::VoipIconSwitcher' has a wrong offset!");
static_assert(offsetof(UW_SquadList_HUD_Player_C, My_PC) == 0x000340, "Member 'UW_SquadList_HUD_Player_C::My_PC' has a wrong offset!");
static_assert(offsetof(UW_SquadList_HUD_Player_C, Current_Font) == 0x000348, "Member 'UW_SquadList_HUD_Player_C::Current_Font' has a wrong offset!");
static_assert(offsetof(UW_SquadList_HUD_Player_C, bIsInVehicle) == 0x0003A0, "Member 'UW_SquadList_HUD_Player_C::bIsInVehicle' has a wrong offset!");
static_assert(offsetof(UW_SquadList_HUD_Player_C, ParentSquadList) == 0x0003A8, "Member 'UW_SquadList_HUD_Player_C::ParentSquadList' has a wrong offset!");
static_assert(offsetof(UW_SquadList_HUD_Player_C, ProximityDotRange) == 0x0003B0, "Member 'UW_SquadList_HUD_Player_C::ProximityDotRange' has a wrong offset!");
static_assert(offsetof(UW_SquadList_HUD_Player_C, Is_Audible) == 0x0003B8, "Member 'UW_SquadList_HUD_Player_C::Is_Audible' has a wrong offset!");

}

