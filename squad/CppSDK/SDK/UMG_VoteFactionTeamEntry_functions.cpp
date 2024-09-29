#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_VoteFactionTeamEntry

#include "Basic.hpp"

#include "UMG_VoteFactionTeamEntry_classes.hpp"
#include "UMG_VoteFactionTeamEntry_parameters.hpp"


namespace SDK
{

// Function UMG_VoteFactionTeamEntry.UMG_VoteFactionTeamEntry_C.ExecuteUbergraph_UMG_VoteFactionTeamEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_VoteFactionTeamEntry_C::ExecuteUbergraph_UMG_VoteFactionTeamEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_VoteFactionTeamEntry_C", "ExecuteUbergraph_UMG_VoteFactionTeamEntry");

	Params::UMG_VoteFactionTeamEntry_C_ExecuteUbergraph_UMG_VoteFactionTeamEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_VoteFactionTeamEntry.UMG_VoteFactionTeamEntry_C.InitItem
// (BlueprintCallable, BlueprintEvent)

void UUMG_VoteFactionTeamEntry_C::InitItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_VoteFactionTeamEntry_C", "InitItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_VoteFactionTeamEntry.UMG_VoteFactionTeamEntry_C.OnEndVote
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsWinner                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_VoteFactionTeamEntry_C::OnEndVote(bool IsWinner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_VoteFactionTeamEntry_C", "OnEndVote");

	Params::UMG_VoteFactionTeamEntry_C_OnEndVote Parms{};

	Parms.IsWinner = IsWinner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_VoteFactionTeamEntry.UMG_VoteFactionTeamEntry_C.OnUpdateVote
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   VoteCount_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HasVotedFor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_VoteFactionTeamEntry_C::OnUpdateVote(int32 VoteCount_0, bool HasVotedFor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_VoteFactionTeamEntry_C", "OnUpdateVote");

	Params::UMG_VoteFactionTeamEntry_C_OnUpdateVote Parms{};

	Parms.VoteCount_0 = VoteCount_0;
	Parms.HasVotedFor = HasVotedFor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_VoteFactionTeamEntry.UMG_VoteFactionTeamEntry_C.UpdateStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Vote_Count                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Has_Voted_For                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_VoteFactionTeamEntry_C::UpdateStatus(int32 Vote_Count, bool Has_Voted_For)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_VoteFactionTeamEntry_C", "UpdateStatus");

	Params::UMG_VoteFactionTeamEntry_C_UpdateStatus Parms{};

	Parms.Vote_Count = Vote_Count;
	Parms.Has_Voted_For = Has_Voted_For;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_VoteFactionTeamEntry.UMG_VoteFactionTeamEntry_C.InitDescription
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_VoteFactionTeamEntry_C::InitDescription()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_VoteFactionTeamEntry_C", "InitDescription");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_VoteFactionTeamEntry.UMG_VoteFactionTeamEntry_C.AddTypeWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SQFactionSetup_C*             In_Faction_Setup                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_VoteFactionTeamEntry_C::AddTypeWidget(class UBP_SQFactionSetup_C* In_Faction_Setup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_VoteFactionTeamEntry_C", "AddTypeWidget");

	Params::UMG_VoteFactionTeamEntry_C_AddTypeWidget Parms{};

	Parms.In_Faction_Setup = In_Faction_Setup;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_VoteFactionTeamEntry.UMG_VoteFactionTeamEntry_C.AddTagWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESQFactionSetupTag                      In_Tag                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_VoteFactionTeamEntry_C::AddTagWidget(ESQFactionSetupTag In_Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_VoteFactionTeamEntry_C", "AddTagWidget");

	Params::UMG_VoteFactionTeamEntry_C_AddTagWidget Parms{};

	Parms.In_Tag = In_Tag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_VoteFactionTeamEntry.UMG_VoteFactionTeamEntry_C.GetPlayerTeamId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Out_TeamID                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_VoteFactionTeamEntry_C::GetPlayerTeamId(int32* Out_TeamID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_VoteFactionTeamEntry_C", "GetPlayerTeamId");

	Params::UMG_VoteFactionTeamEntry_C_GetPlayerTeamId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Out_TeamID != nullptr)
		*Out_TeamID = Parms.Out_TeamID;
}


// Function UMG_VoteFactionTeamEntry.UMG_VoteFactionTeamEntry_C.GetVoteTeamId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Out_TeamID                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_VoteFactionTeamEntry_C::GetVoteTeamId(int32* Out_TeamID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_VoteFactionTeamEntry_C", "GetVoteTeamId");

	Params::UMG_VoteFactionTeamEntry_C_GetVoteTeamId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Out_TeamID != nullptr)
		*Out_TeamID = Parms.Out_TeamID;
}

}

