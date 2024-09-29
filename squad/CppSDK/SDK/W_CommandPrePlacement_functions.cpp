#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CommandPrePlacement

#include "Basic.hpp"

#include "W_CommandPrePlacement_classes.hpp"
#include "W_CommandPrePlacement_parameters.hpp"


namespace SDK
{

// Function W_CommandPrePlacement.W_CommandPrePlacement_C.Created Command Control Widget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Command_ActionControl_C*       Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandPrePlacement_C::Created_Command_Control_Widget__DelegateSignature(class UW_Command_ActionControl_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CommandPrePlacement_C", "Created Command Control Widget__DelegateSignature");

	Params::W_CommandPrePlacement_C_Created_Command_Control_Widget__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CommandPrePlacement.W_CommandPrePlacement_C.ExecuteUbergraph_W_CommandPrePlacement
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandPrePlacement_C::ExecuteUbergraph_W_CommandPrePlacement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CommandPrePlacement_C", "ExecuteUbergraph_W_CommandPrePlacement");

	Params::W_CommandPrePlacement_C_ExecuteUbergraph_W_CommandPrePlacement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CommandPrePlacement.W_CommandPrePlacement_C.Reset Use
// (BlueprintCallable, BlueprintEvent)

void UW_CommandPrePlacement_C::Reset_Use()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CommandPrePlacement_C", "Reset Use");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CommandPrePlacement.W_CommandPrePlacement_C.On Map Mouse Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    Mouse_Event                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                          World_Location                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandPrePlacement_C::On_Map_Mouse_Down(const struct FPointerEvent& Mouse_Event, const struct FVector& World_Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CommandPrePlacement_C", "On Map Mouse Down");

	Params::W_CommandPrePlacement_C_On_Map_Mouse_Down Parms{};

	Parms.Mouse_Event = std::move(Mouse_Event);
	Parms.World_Location = std::move(World_Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CommandPrePlacement.W_CommandPrePlacement_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandPrePlacement_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CommandPrePlacement_C", "Tick");

	Params::W_CommandPrePlacement_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CommandPrePlacement.W_CommandPrePlacement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_CommandPrePlacement_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CommandPrePlacement_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CommandPrePlacement.W_CommandPrePlacement_C.Set Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           SQAction_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandPrePlacement_C::Set_Action(class UClass* SQAction_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CommandPrePlacement_C", "Set Action");

	Params::W_CommandPrePlacement_C_Set_Action Parms{};

	Parms.SQAction_0 = SQAction_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CommandPrePlacement.W_CommandPrePlacement_C.Get Traced Map Location
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Zero                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Local                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandPrePlacement_C::Get_Traced_Map_Location(struct FVector* Zero, struct FVector* Local)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CommandPrePlacement_C", "Get Traced Map Location");

	Params::W_CommandPrePlacement_C_Get_Traced_Map_Location Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Zero != nullptr)
		*Zero = std::move(Parms.Zero);

	if (Local != nullptr)
		*Local = std::move(Parms.Local);
}


// Function W_CommandPrePlacement.W_CommandPrePlacement_C.Cache Local World Location
// (Public, BlueprintCallable, BlueprintEvent)

void UW_CommandPrePlacement_C::Cache_Local_World_Location()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CommandPrePlacement_C", "Cache Local World Location");

	UObject::ProcessEvent(Func, nullptr);
}

}

