#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_TicketsTimeline

#include "Basic.hpp"

#include "UMG_TicketsTimeline_classes.hpp"
#include "UMG_TicketsTimeline_parameters.hpp"


namespace SDK
{

// Function UMG_TicketsTimeline.UMG_TicketsTimeline_C.ExecuteUbergraph_UMG_TicketsTimeline
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TicketsTimeline_C::ExecuteUbergraph_UMG_TicketsTimeline(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_TicketsTimeline_C", "ExecuteUbergraph_UMG_TicketsTimeline");

	Params::UMG_TicketsTimeline_C_ExecuteUbergraph_UMG_TicketsTimeline Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_TicketsTimeline.UMG_TicketsTimeline_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_TicketsTimeline_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_TicketsTimeline_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_TicketsTimeline.UMG_TicketsTimeline_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TicketsTimeline_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_TicketsTimeline_C", "PreConstruct");

	Params::UMG_TicketsTimeline_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_TicketsTimeline.UMG_TicketsTimeline_C.PrepareData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_TicketsTimeline_C::PrepareData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_TicketsTimeline_C", "PrepareData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_TicketsTimeline.UMG_TicketsTimeline_C.RequestData
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_TicketsTimeline_C::RequestData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_TicketsTimeline_C", "RequestData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_TicketsTimeline.UMG_TicketsTimeline_C.UpdateTeamNames
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_TicketsTimeline_C::UpdateTeamNames()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_TicketsTimeline_C", "UpdateTeamNames");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_TicketsTimeline.UMG_TicketsTimeline_C.CreateTicketsLines
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_TicketsTimeline_C::CreateTicketsLines()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_TicketsTimeline_C", "CreateTicketsLines");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_TicketsTimeline.UMG_TicketsTimeline_C.UpdateTimeLines
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_TicketsTimeline_C::UpdateTimeLines()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_TicketsTimeline_C", "UpdateTimeLines");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_TicketsTimeline.UMG_TicketsTimeline_C.ToGraphPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Tickets                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Pos                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TicketsTimeline_C::ToGraphPosition(float Time, int32 Tickets, struct FVector2D* Pos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_TicketsTimeline_C", "ToGraphPosition");

	Params::UMG_TicketsTimeline_C_ToGraphPosition Parms{};

	Parms.Time = Time;
	Parms.Tickets = Tickets;

	UObject::ProcessEvent(Func, &Parms);

	if (Pos != nullptr)
		*Pos = std::move(Parms.Pos);
}


// Function UMG_TicketsTimeline.UMG_TicketsTimeline_C.AddEventIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSQTicketChangeLinked            TicketChange                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FVector2D                        GraphPos                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TeamIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   EventIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TicketsTimeline_C::AddEventIcon(struct FSQTicketChangeLinked& TicketChange, struct FVector2D& GraphPos, int32 TeamIndex, int32 EventIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_TicketsTimeline_C", "AddEventIcon");

	Params::UMG_TicketsTimeline_C_AddEventIcon Parms{};

	Parms.TicketChange = std::move(TicketChange);
	Parms.GraphPos = std::move(GraphPos);
	Parms.TeamIndex = TeamIndex;
	Parms.EventIndex = EventIndex;

	UObject::ProcessEvent(Func, &Parms);

	TicketChange = std::move(Parms.TicketChange);
	GraphPos = std::move(Parms.GraphPos);
}


// Function UMG_TicketsTimeline.UMG_TicketsTimeline_C.AddVehicleIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_TicketsTimeline_C::AddVehicleIcons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_TicketsTimeline_C", "AddVehicleIcons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_TicketsTimeline.UMG_TicketsTimeline_C.GetDesiredTicketLinesNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TicketsOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TicketsStep                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Num                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TicketsTimeline_C::GetDesiredTicketLinesNum(int32 TicketsOffset, int32 TicketsStep, int32* Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_TicketsTimeline_C", "GetDesiredTicketLinesNum");

	Params::UMG_TicketsTimeline_C_GetDesiredTicketLinesNum Parms{};

	Parms.TicketsOffset = TicketsOffset;
	Parms.TicketsStep = TicketsStep;

	UObject::ProcessEvent(Func, &Parms);

	if (Num != nullptr)
		*Num = Parms.Num;
}

}

