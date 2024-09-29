#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_ScoreboardScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_ScoreboardScreen.UMG_ScoreboardScreen_C
// 0x0058 (0x02B8 - 0x0260)
class UUMG_ScoreboardScreen_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               BottomSB;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BpGameTimeClockImage;                              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BpRemainingGameTimeText;                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                InGameBlackoutBG;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MenuBackgroundCrosses;                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             ScoreboardSlot;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TopOverlay;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Scoreboard_C*                      UMG_Scoreboard;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ServerInfo_C*                        W_ServerInfo;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          SquadVoipOnly;                                     // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UMG_ScoreboardScreen(int32 EntryPoint);
	void Construct();
	void GetScoreboard(class UUMG_Scoreboard_C** ScoreBoard);
	void ShowScoreboard(bool Show);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_ScoreboardScreen_C">();
	}
	static class UUMG_ScoreboardScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_ScoreboardScreen_C>();
	}
};
static_assert(alignof(UUMG_ScoreboardScreen_C) == 0x000008, "Wrong alignment on UUMG_ScoreboardScreen_C");
static_assert(sizeof(UUMG_ScoreboardScreen_C) == 0x0002B8, "Wrong size on UUMG_ScoreboardScreen_C");
static_assert(offsetof(UUMG_ScoreboardScreen_C, UberGraphFrame) == 0x000260, "Member 'UUMG_ScoreboardScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_ScoreboardScreen_C, BottomSB) == 0x000268, "Member 'UUMG_ScoreboardScreen_C::BottomSB' has a wrong offset!");
static_assert(offsetof(UUMG_ScoreboardScreen_C, BpGameTimeClockImage) == 0x000270, "Member 'UUMG_ScoreboardScreen_C::BpGameTimeClockImage' has a wrong offset!");
static_assert(offsetof(UUMG_ScoreboardScreen_C, BpRemainingGameTimeText) == 0x000278, "Member 'UUMG_ScoreboardScreen_C::BpRemainingGameTimeText' has a wrong offset!");
static_assert(offsetof(UUMG_ScoreboardScreen_C, InGameBlackoutBG) == 0x000280, "Member 'UUMG_ScoreboardScreen_C::InGameBlackoutBG' has a wrong offset!");
static_assert(offsetof(UUMG_ScoreboardScreen_C, MenuBackgroundCrosses) == 0x000288, "Member 'UUMG_ScoreboardScreen_C::MenuBackgroundCrosses' has a wrong offset!");
static_assert(offsetof(UUMG_ScoreboardScreen_C, ScoreboardSlot) == 0x000290, "Member 'UUMG_ScoreboardScreen_C::ScoreboardSlot' has a wrong offset!");
static_assert(offsetof(UUMG_ScoreboardScreen_C, TopOverlay) == 0x000298, "Member 'UUMG_ScoreboardScreen_C::TopOverlay' has a wrong offset!");
static_assert(offsetof(UUMG_ScoreboardScreen_C, UMG_Scoreboard) == 0x0002A0, "Member 'UUMG_ScoreboardScreen_C::UMG_Scoreboard' has a wrong offset!");
static_assert(offsetof(UUMG_ScoreboardScreen_C, W_ServerInfo) == 0x0002A8, "Member 'UUMG_ScoreboardScreen_C::W_ServerInfo' has a wrong offset!");
static_assert(offsetof(UUMG_ScoreboardScreen_C, SquadVoipOnly) == 0x0002B0, "Member 'UUMG_ScoreboardScreen_C::SquadVoipOnly' has a wrong offset!");

}

