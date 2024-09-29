#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_GenericPopupVote

#include "Basic.hpp"

#include "UMG_GenericPopupVote_classes.hpp"
#include "UMG_GenericPopupVote_parameters.hpp"


namespace SDK
{

// Function UMG_GenericPopupVote.UMG_GenericPopupVote_C.ExecuteUbergraph_UMG_GenericPopupVote
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_GenericPopupVote_C::ExecuteUbergraph_UMG_GenericPopupVote(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_GenericPopupVote_C", "ExecuteUbergraph_UMG_GenericPopupVote");

	Params::UMG_GenericPopupVote_C_ExecuteUbergraph_UMG_GenericPopupVote Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_GenericPopupVote.UMG_GenericPopupVote_C.SetVoteScreenActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Activated                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_GenericPopupVote_C::SetVoteScreenActive(bool Activated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_GenericPopupVote_C", "SetVoteScreenActive");

	Params::UMG_GenericPopupVote_C_SetVoteScreenActive Parms{};

	Parms.Activated = Activated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_GenericPopupVote.UMG_GenericPopupVote_C.OnVoteUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQVoteSessionClient*             VoteSession                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PlayerCurrentVoteCount                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_GenericPopupVote_C::OnVoteUpdated(class USQVoteSessionClient* VoteSession, int32 PlayerCurrentVoteCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_GenericPopupVote_C", "OnVoteUpdated");

	Params::UMG_GenericPopupVote_C_OnVoteUpdated Parms{};

	Parms.VoteSession = VoteSession;
	Parms.PlayerCurrentVoteCount = PlayerCurrentVoteCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_GenericPopupVote.UMG_GenericPopupVote_C.OnVoteStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQVoteSessionClient*             VoteSession                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    VotePossible                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_GenericPopupVote_C::OnVoteStarted(class USQVoteSessionClient* VoteSession, bool VotePossible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_GenericPopupVote_C", "OnVoteStarted");

	Params::UMG_GenericPopupVote_C_OnVoteStarted Parms{};

	Parms.VoteSession = VoteSession;
	Parms.VotePossible = VotePossible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_GenericPopupVote.UMG_GenericPopupVote_C.OnVoteEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQVoteSessionClient*             VoteSession                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSQChoice                        Winner                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_GenericPopupVote_C::OnVoteEnded(class USQVoteSessionClient* VoteSession, const struct FSQChoice& Winner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_GenericPopupVote_C", "OnVoteEnded");

	Params::UMG_GenericPopupVote_C_OnVoteEnded Parms{};

	Parms.VoteSession = VoteSession;
	Parms.Winner = std::move(Winner);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_GenericPopupVote.UMG_GenericPopupVote_C.OnVoteUpdatedByID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ChoiceId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_GenericPopupVote_C::OnVoteUpdatedByID(class FName ChoiceId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_GenericPopupVote_C", "OnVoteUpdatedByID");

	Params::UMG_GenericPopupVote_C_OnVoteUpdatedByID Parms{};

	Parms.ChoiceId = ChoiceId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_GenericPopupVote.UMG_GenericPopupVote_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_GenericPopupVote_C::Cleanup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_GenericPopupVote_C", "Cleanup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_GenericPopupVote.UMG_GenericPopupVote_C.ConfigureVoteWindow
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQVoteSession*                   In_Vote_Session                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSQChoice>                Out_Choices                                            (Parm, OutParm)

void UUMG_GenericPopupVote_C::ConfigureVoteWindow(class USQVoteSession* In_Vote_Session, TArray<struct FSQChoice>* Out_Choices)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_GenericPopupVote_C", "ConfigureVoteWindow");

	Params::UMG_GenericPopupVote_C_ConfigureVoteWindow Parms{};

	Parms.In_Vote_Session = In_Vote_Session;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Choices != nullptr)
		*Out_Choices = std::move(Parms.Out_Choices);
}


// Function UMG_GenericPopupVote.UMG_GenericPopupVote_C.ConfigureChoices
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSQChoice>                In_Choices                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class USQVoteSessionClient*             In_Vote_Session                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_GenericPopupVote_C::ConfigureChoices(TArray<struct FSQChoice>& In_Choices, class USQVoteSessionClient* In_Vote_Session)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_GenericPopupVote_C", "ConfigureChoices");

	Params::UMG_GenericPopupVote_C_ConfigureChoices Parms{};

	Parms.In_Choices = std::move(In_Choices);
	Parms.In_Vote_Session = In_Vote_Session;

	UObject::ProcessEvent(Func, &Parms);

	In_Choices = std::move(Parms.In_Choices);
}


// Function UMG_GenericPopupVote.UMG_GenericPopupVote_C.Generate Items
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQVoteSessionClient*             Vote_Session                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_GenericPopupVote_C::Generate_Items(class USQVoteSessionClient* Vote_Session)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_GenericPopupVote_C", "Generate Items");

	Params::UMG_GenericPopupVote_C_Generate_Items Parms{};

	Parms.Vote_Session = Vote_Session;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_GenericPopupVote.UMG_GenericPopupVote_C.Update Choices
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQVoteSessionClient*             Vote_Session                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Player_Current_Vote_Count                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_GenericPopupVote_C::Update_Choices(class USQVoteSessionClient* Vote_Session, int32 Player_Current_Vote_Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_GenericPopupVote_C", "Update Choices");

	Params::UMG_GenericPopupVote_C_Update_Choices Parms{};

	Parms.Vote_Session = Vote_Session;
	Parms.Player_Current_Vote_Count = Player_Current_Vote_Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_GenericPopupVote.UMG_GenericPopupVote_C.Display Result
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQVoteSessionClient*             Vote_Session                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSQChoice                        Winner                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_GenericPopupVote_C::Display_Result(class USQVoteSessionClient* Vote_Session, const struct FSQChoice& Winner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_GenericPopupVote_C", "Display Result");

	Params::UMG_GenericPopupVote_C_Display_Result Parms{};

	Parms.Vote_Session = Vote_Session;
	Parms.Winner = std::move(Winner);

	UObject::ProcessEvent(Func, &Parms);
}

}

