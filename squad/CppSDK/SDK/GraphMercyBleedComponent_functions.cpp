#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GraphMercyBleedComponent

#include "Basic.hpp"

#include "GraphMercyBleedComponent_classes.hpp"
#include "GraphMercyBleedComponent_parameters.hpp"


namespace SDK
{

// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.ExecuteUbergraph_GraphMercyBleedComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGraphMercyBleedComponent_C::ExecuteUbergraph_GraphMercyBleedComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GraphMercyBleedComponent_C", "ExecuteUbergraph_GraphMercyBleedComponent");

	Params::GraphMercyBleedComponent_C_ExecuteUbergraph_GraphMercyBleedComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGraphMercyBleedComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GraphMercyBleedComponent_C", "ReceiveTick");

	Params::GraphMercyBleedComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.OnLatticeUpdated_Event_0
// (BlueprintCallable, BlueprintEvent)

void UGraphMercyBleedComponent_C::OnLatticeUpdated_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GraphMercyBleedComponent_C", "OnLatticeUpdated_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UGraphMercyBleedComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GraphMercyBleedComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.TickBleed
// (Public, BlueprintCallable, BlueprintEvent)

void UGraphMercyBleedComponent_C::TickBleed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GraphMercyBleedComponent_C", "TickBleed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.CountCaptureZonesByTeam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGraphMercyBleedComponent_C::CountCaptureZonesByTeam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GraphMercyBleedComponent_C", "CountCaptureZonesByTeam");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.FindLosers
// (Public, BlueprintCallable, BlueprintEvent)

void UGraphMercyBleedComponent_C::FindLosers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GraphMercyBleedComponent_C", "FindLosers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GraphMercyBleedComponent.GraphMercyBleedComponent_C.IsLoser
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   CaptureZones                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGraphMercyBleedComponent_C::IsLoser(int32 CaptureZones, int32 Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GraphMercyBleedComponent_C", "IsLoser");

	Params::GraphMercyBleedComponent_C_IsLoser Parms{};

	Parms.CaptureZones = CaptureZones;
	Parms.Team = Team;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

