#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_TimelineTooltip

#include "Basic.hpp"

#include "UMG_TimelineTooltip_classes.hpp"
#include "UMG_TimelineTooltip_parameters.hpp"


namespace SDK
{

// Function UMG_TimelineTooltip.UMG_TimelineTooltip_C.UpdateListNumber
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLinearColor>             Colors                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_TimelineTooltip_C::UpdateListNumber(TArray<struct FLinearColor>& Colors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_TimelineTooltip_C", "UpdateListNumber");

	Params::UMG_TimelineTooltip_C_UpdateListNumber Parms{};

	Parms.Colors = std::move(Colors);

	UObject::ProcessEvent(Func, &Parms);

	Colors = std::move(Parms.Colors);
}


// Function UMG_TimelineTooltip.UMG_TimelineTooltip_C.UpdateTicketsNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TeamIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Tickets                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TimelineTooltip_C::UpdateTicketsNum(int32 TeamIndex, int32 Tickets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_TimelineTooltip_C", "UpdateTicketsNum");

	Params::UMG_TimelineTooltip_C_UpdateTicketsNum Parms{};

	Parms.TeamIndex = TeamIndex;
	Parms.Tickets = Tickets;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_TimelineTooltip.UMG_TimelineTooltip_C.ChangeLIstVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           VisibleIndexes                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_TimelineTooltip_C::ChangeLIstVisibility(TArray<int32>& VisibleIndexes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_TimelineTooltip_C", "ChangeLIstVisibility");

	Params::UMG_TimelineTooltip_C_ChangeLIstVisibility Parms{};

	Parms.VisibleIndexes = std::move(VisibleIndexes);

	UObject::ProcessEvent(Func, &Parms);

	VisibleIndexes = std::move(Parms.VisibleIndexes);
}


// Function UMG_TimelineTooltip.UMG_TimelineTooltip_C.FillEvents
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TeamId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           Events                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class USQEndStatsComponent*             EndRoundComp                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TicketsPoint                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LineIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   GameTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TimelineTooltip_C::FillEvents(int32& TeamId, TArray<int32>& Events, class USQEndStatsComponent*& EndRoundComp, int32 TicketsPoint, int32& LineIndex, float& GameTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_TimelineTooltip_C", "FillEvents");

	Params::UMG_TimelineTooltip_C_FillEvents Parms{};

	Parms.TeamId = TeamId;
	Parms.Events = std::move(Events);
	Parms.EndRoundComp = EndRoundComp;
	Parms.TicketsPoint = TicketsPoint;
	Parms.LineIndex = LineIndex;
	Parms.GameTime = GameTime;

	UObject::ProcessEvent(Func, &Parms);

	TeamId = Parms.TeamId;
	Events = std::move(Parms.Events);
	EndRoundComp = Parms.EndRoundComp;
	LineIndex = Parms.LineIndex;
	GameTime = Parms.GameTime;
}

}

