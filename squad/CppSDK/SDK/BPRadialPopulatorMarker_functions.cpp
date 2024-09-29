#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPRadialPopulatorMarker

#include "Basic.hpp"

#include "BPRadialPopulatorMarker_classes.hpp"
#include "BPRadialPopulatorMarker_parameters.hpp"


namespace SDK
{

// Function BPRadialPopulatorMarker.BPRadialPopulatorMarker_C.ExecuteUbergraph_BPRadialPopulatorMarker
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPRadialPopulatorMarker_C::ExecuteUbergraph_BPRadialPopulatorMarker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPRadialPopulatorMarker_C", "ExecuteUbergraph_BPRadialPopulatorMarker");

	Params::BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPRadialPopulatorMarker.BPRadialPopulatorMarker_C.InitialSetup
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQUserWidget*                    Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RadialItemModel_C*            Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseRadialMenu_C*                RadialMenu                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPRadialPopulatorMarker_C::InitialSetup(class USQUserWidget* Widget, class UBP_RadialItemModel_C* Model, class UBaseRadialMenu_C* RadialMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPRadialPopulatorMarker_C", "InitialSetup");

	Params::BPRadialPopulatorMarker_C_InitialSetup Parms{};

	Parms.Widget = Widget;
	Parms.Model = Model;
	Parms.RadialMenu = RadialMenu;

	UObject::ProcessEvent(Func, &Parms);
}

}

