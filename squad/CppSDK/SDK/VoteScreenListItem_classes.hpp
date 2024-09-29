#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VoteScreenListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Squad_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass VoteScreenListItem.VoteScreenListItem_C
// 0x0068 (0x0090 - 0x0028)
class UVoteScreenListItem_C final : public UObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USQVoteSessionClient*                   VoteSession;                                       // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSQChoice                              Choice;                                            // 0x0038(0x0018)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	class FName                                   ChoiceId;                                          // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   PlayerName;                                        // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         AllocatedPlayerVotes;                              // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnUpdate;                                          // 0x0068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEnd;                                             // 0x0078(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          VoteEnd;                                           // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Voted;                                             // 0x0089(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A[0x2];                                       // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PlayerCurrentVotes;                                // 0x008C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnUpdate__DelegateSignature(int32 VoteCount, bool HasVotedFor);
	void OnEnd__DelegateSignature(bool IsWinner);
	void ExecuteUbergraph_VoteScreenListItem(int32 EntryPoint);
	void OnVoteEnded(class USQVoteSession* VoteSession_0, class FName WinnerId);
	void OnVoteUpdated(class USQVoteSession* VoteSession_0, int32 PlayerCurrentVotes_0);
	void SendVote(bool* OutVotedDisplayStatus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VoteScreenListItem_C">();
	}
	static class UVoteScreenListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoteScreenListItem_C>();
	}
};
static_assert(alignof(UVoteScreenListItem_C) == 0x000008, "Wrong alignment on UVoteScreenListItem_C");
static_assert(sizeof(UVoteScreenListItem_C) == 0x000090, "Wrong size on UVoteScreenListItem_C");
static_assert(offsetof(UVoteScreenListItem_C, UberGraphFrame) == 0x000028, "Member 'UVoteScreenListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVoteScreenListItem_C, VoteSession) == 0x000030, "Member 'UVoteScreenListItem_C::VoteSession' has a wrong offset!");
static_assert(offsetof(UVoteScreenListItem_C, Choice) == 0x000038, "Member 'UVoteScreenListItem_C::Choice' has a wrong offset!");
static_assert(offsetof(UVoteScreenListItem_C, ChoiceId) == 0x000050, "Member 'UVoteScreenListItem_C::ChoiceId' has a wrong offset!");
static_assert(offsetof(UVoteScreenListItem_C, PlayerName) == 0x000058, "Member 'UVoteScreenListItem_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UVoteScreenListItem_C, AllocatedPlayerVotes) == 0x000060, "Member 'UVoteScreenListItem_C::AllocatedPlayerVotes' has a wrong offset!");
static_assert(offsetof(UVoteScreenListItem_C, OnUpdate) == 0x000068, "Member 'UVoteScreenListItem_C::OnUpdate' has a wrong offset!");
static_assert(offsetof(UVoteScreenListItem_C, OnEnd) == 0x000078, "Member 'UVoteScreenListItem_C::OnEnd' has a wrong offset!");
static_assert(offsetof(UVoteScreenListItem_C, VoteEnd) == 0x000088, "Member 'UVoteScreenListItem_C::VoteEnd' has a wrong offset!");
static_assert(offsetof(UVoteScreenListItem_C, Voted) == 0x000089, "Member 'UVoteScreenListItem_C::Voted' has a wrong offset!");
static_assert(offsetof(UVoteScreenListItem_C, PlayerCurrentVotes) == 0x00008C, "Member 'UVoteScreenListItem_C::PlayerCurrentVotes' has a wrong offset!");

}

