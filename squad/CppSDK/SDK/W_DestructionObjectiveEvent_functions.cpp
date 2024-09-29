#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_DestructionObjectiveEvent

#include "Basic.hpp"

#include "W_DestructionObjectiveEvent_classes.hpp"
#include "W_DestructionObjectiveEvent_parameters.hpp"


namespace SDK
{

// Function W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C.ExecuteUbergraph_W_DestructionObjectiveEvent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DestructionObjectiveEvent_C::ExecuteUbergraph_W_DestructionObjectiveEvent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_DestructionObjectiveEvent_C", "ExecuteUbergraph_W_DestructionObjectiveEvent");

	Params::W_DestructionObjectiveEvent_C_ExecuteUbergraph_W_DestructionObjectiveEvent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_DestructionObjectiveEvent_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_DestructionObjectiveEvent_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DestructionObjectiveEvent_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_DestructionObjectiveEvent_C", "Tick");

	Params::W_DestructionObjectiveEvent_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C.Play Destroy Animation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Objective_Owner_0                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DestructionObjectiveEvent_C::Play_Destroy_Animation(int32 Objective_Owner_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_DestructionObjectiveEvent_C", "Play Destroy Animation");

	Params::W_DestructionObjectiveEvent_C_Play_Destroy_Animation Parms{};

	Parms.Objective_Owner_0 = Objective_Owner_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C.Setup Fill Image
// (Public, BlueprintCallable, BlueprintEvent)

void UW_DestructionObjectiveEvent_C::Setup_Fill_Image()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_DestructionObjectiveEvent_C", "Setup Fill Image");

	UObject::ProcessEvent(Func, nullptr);
}

}

