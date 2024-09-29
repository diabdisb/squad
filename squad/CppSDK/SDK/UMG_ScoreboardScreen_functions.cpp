#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_ScoreboardScreen

#include "Basic.hpp"

#include "UMG_ScoreboardScreen_classes.hpp"
#include "UMG_ScoreboardScreen_parameters.hpp"


namespace SDK
{

// Function UMG_ScoreboardScreen.UMG_ScoreboardScreen_C.ExecuteUbergraph_UMG_ScoreboardScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ScoreboardScreen_C::ExecuteUbergraph_UMG_ScoreboardScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ScoreboardScreen_C", "ExecuteUbergraph_UMG_ScoreboardScreen");

	Params::UMG_ScoreboardScreen_C_ExecuteUbergraph_UMG_ScoreboardScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ScoreboardScreen.UMG_ScoreboardScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_ScoreboardScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ScoreboardScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ScoreboardScreen.UMG_ScoreboardScreen_C.GetScoreboard
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_Scoreboard_C*                ScoreBoard                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ScoreboardScreen_C::GetScoreboard(class UUMG_Scoreboard_C** ScoreBoard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ScoreboardScreen_C", "GetScoreboard");

	Params::UMG_ScoreboardScreen_C_GetScoreboard Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ScoreBoard != nullptr)
		*ScoreBoard = Parms.ScoreBoard;
}


// Function UMG_ScoreboardScreen.UMG_ScoreboardScreen_C.ShowScoreboard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ScoreboardScreen_C::ShowScoreboard(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ScoreboardScreen_C", "ShowScoreboard");

	Params::UMG_ScoreboardScreen_C_ShowScoreboard Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}

}

