#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_VoteLevel

#include "Basic.hpp"

#include "UMG_VoteBase_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_VoteLevel.UMG_VoteLevel_C
// 0x0028 (0x0298 - 0x0270)
class UUMG_VoteLevel_C final : public UUMG_VoteBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UMG_VoteLevel_C;                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTileView*                              Grid;                                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             VoteTitle;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UVoteScreenListItem_C*>          Choices;                                           // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_UMG_VoteLevel(int32 EntryPoint);
	void OnSetup(const class FText& TeamName, class FName PlayerName_0);
	void SetVoteScreenActive(bool Activated);
	void OnVoteEnded(class USQVoteSessionClient* VoteSession, const struct FSQChoice& Winner);
	void OnVoteUpdated(class USQVoteSessionClient* VoteSession, int32 PlayerCurrentVoteCount);
	void OnVoteStarted(class USQVoteSessionClient* VoteSession, bool VotePossible);
	void Generate_Items(class USQVoteSessionClient* Vote_Session);
	void Update_Choices(class USQVoteSessionClient* VoteSession, int32 Player_Current_Votes_Count);
	void Display_Result(class USQVoteSessionClient* Vote_Session, const struct FSQChoice& Winner);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_VoteLevel_C">();
	}
	static class UUMG_VoteLevel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_VoteLevel_C>();
	}
};
static_assert(alignof(UUMG_VoteLevel_C) == 0x000008, "Wrong alignment on UUMG_VoteLevel_C");
static_assert(sizeof(UUMG_VoteLevel_C) == 0x000298, "Wrong size on UUMG_VoteLevel_C");
static_assert(offsetof(UUMG_VoteLevel_C, UberGraphFrame_UMG_VoteLevel_C) == 0x000270, "Member 'UUMG_VoteLevel_C::UberGraphFrame_UMG_VoteLevel_C' has a wrong offset!");
static_assert(offsetof(UUMG_VoteLevel_C, Grid) == 0x000278, "Member 'UUMG_VoteLevel_C::Grid' has a wrong offset!");
static_assert(offsetof(UUMG_VoteLevel_C, VoteTitle) == 0x000280, "Member 'UUMG_VoteLevel_C::VoteTitle' has a wrong offset!");
static_assert(offsetof(UUMG_VoteLevel_C, Choices) == 0x000288, "Member 'UUMG_VoteLevel_C::Choices' has a wrong offset!");

}

