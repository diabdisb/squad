#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_FactionNameLine

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_FactionNameLine.UMG_FactionNameLine_C
// 0x0020 (0x0280 - 0x0260)
class UUMG_FactionNameLine_C final : public UUserWidget
{
public:
	class UImage*                                 AttackTeam;                                        // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DefendTeam;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             FactionName;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FlagIcon;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Setup(TSoftObjectPtr<class UTexture2D> Texture, const class FText& DisplayName, bool AttackIcon, bool DefendIcon);
	void EnableAttackIcon(bool Enable);
	void EnableDefendIcon(bool Enable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_FactionNameLine_C">();
	}
	static class UUMG_FactionNameLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_FactionNameLine_C>();
	}
};
static_assert(alignof(UUMG_FactionNameLine_C) == 0x000008, "Wrong alignment on UUMG_FactionNameLine_C");
static_assert(sizeof(UUMG_FactionNameLine_C) == 0x000280, "Wrong size on UUMG_FactionNameLine_C");
static_assert(offsetof(UUMG_FactionNameLine_C, AttackTeam) == 0x000260, "Member 'UUMG_FactionNameLine_C::AttackTeam' has a wrong offset!");
static_assert(offsetof(UUMG_FactionNameLine_C, DefendTeam) == 0x000268, "Member 'UUMG_FactionNameLine_C::DefendTeam' has a wrong offset!");
static_assert(offsetof(UUMG_FactionNameLine_C, FactionName) == 0x000270, "Member 'UUMG_FactionNameLine_C::FactionName' has a wrong offset!");
static_assert(offsetof(UUMG_FactionNameLine_C, FlagIcon) == 0x000278, "Member 'UUMG_FactionNameLine_C::FlagIcon' has a wrong offset!");

}

