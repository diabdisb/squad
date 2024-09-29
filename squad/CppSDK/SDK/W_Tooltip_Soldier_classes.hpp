#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Tooltip_Soldier

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Squad_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Tooltip_Soldier.W_Tooltip_Soldier_C
// 0x0078 (0x02D8 - 0x0260)
class UW_Tooltip_Soldier_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_Main;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CommanderStar;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             FT_Text;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Kit_Image;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayerName_Text;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Rank;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SquadID_SizeBox;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SquadID_Text;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SquadLeaderBG;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSQSoldierInfo                         Soldier_Info;                                      // 0x02B0(0x0028)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_W_Tooltip_Soldier(int32 EntryPoint);
	void Update_Info(const struct FSQSoldierInfo& Soldier_Info_0);
	void Construct();
	void UpdateKitVisuals();
	void UpdateSquadVisuals();
	void Update_Tint_Color(const struct FLinearColor& Color);
	void Update_Rank();
	void Update_Fireteam();
	void ShowHideCommanderStar();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Tooltip_Soldier_C">();
	}
	static class UW_Tooltip_Soldier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Tooltip_Soldier_C>();
	}
};
static_assert(alignof(UW_Tooltip_Soldier_C) == 0x000008, "Wrong alignment on UW_Tooltip_Soldier_C");
static_assert(sizeof(UW_Tooltip_Soldier_C) == 0x0002D8, "Wrong size on UW_Tooltip_Soldier_C");
static_assert(offsetof(UW_Tooltip_Soldier_C, UberGraphFrame) == 0x000260, "Member 'UW_Tooltip_Soldier_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Tooltip_Soldier_C, Border_Main) == 0x000268, "Member 'UW_Tooltip_Soldier_C::Border_Main' has a wrong offset!");
static_assert(offsetof(UW_Tooltip_Soldier_C, CommanderStar) == 0x000270, "Member 'UW_Tooltip_Soldier_C::CommanderStar' has a wrong offset!");
static_assert(offsetof(UW_Tooltip_Soldier_C, FT_Text) == 0x000278, "Member 'UW_Tooltip_Soldier_C::FT_Text' has a wrong offset!");
static_assert(offsetof(UW_Tooltip_Soldier_C, Kit_Image) == 0x000280, "Member 'UW_Tooltip_Soldier_C::Kit_Image' has a wrong offset!");
static_assert(offsetof(UW_Tooltip_Soldier_C, PlayerName_Text) == 0x000288, "Member 'UW_Tooltip_Soldier_C::PlayerName_Text' has a wrong offset!");
static_assert(offsetof(UW_Tooltip_Soldier_C, Rank) == 0x000290, "Member 'UW_Tooltip_Soldier_C::Rank' has a wrong offset!");
static_assert(offsetof(UW_Tooltip_Soldier_C, SquadID_SizeBox) == 0x000298, "Member 'UW_Tooltip_Soldier_C::SquadID_SizeBox' has a wrong offset!");
static_assert(offsetof(UW_Tooltip_Soldier_C, SquadID_Text) == 0x0002A0, "Member 'UW_Tooltip_Soldier_C::SquadID_Text' has a wrong offset!");
static_assert(offsetof(UW_Tooltip_Soldier_C, SquadLeaderBG) == 0x0002A8, "Member 'UW_Tooltip_Soldier_C::SquadLeaderBG' has a wrong offset!");
static_assert(offsetof(UW_Tooltip_Soldier_C, Soldier_Info) == 0x0002B0, "Member 'UW_Tooltip_Soldier_C::Soldier_Info' has a wrong offset!");

}

