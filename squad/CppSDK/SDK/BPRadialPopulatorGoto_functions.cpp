#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPRadialPopulatorGoto

#include "Basic.hpp"

#include "BPRadialPopulatorGoto_classes.hpp"
#include "BPRadialPopulatorGoto_parameters.hpp"


namespace SDK
{

// Function BPRadialPopulatorGoto.BPRadialPopulatorGoto_C.ExecuteUbergraph_BPRadialPopulatorGoto
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPRadialPopulatorGoto_C::ExecuteUbergraph_BPRadialPopulatorGoto(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPRadialPopulatorGoto_C", "ExecuteUbergraph_BPRadialPopulatorGoto");

	Params::BPRadialPopulatorGoto_C_ExecuteUbergraph_BPRadialPopulatorGoto Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPRadialPopulatorGoto.BPRadialPopulatorGoto_C.InitialSetup
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQUserWidget*                    Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RadialItemModel_C*            Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseRadialMenu_C*                RadialMenu                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPRadialPopulatorGoto_C::InitialSetup(class USQUserWidget* Widget, class UBP_RadialItemModel_C* Model, class UBaseRadialMenu_C* RadialMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPRadialPopulatorGoto_C", "InitialSetup");

	Params::BPRadialPopulatorGoto_C_InitialSetup Parms{};

	Parms.Widget = Widget;
	Parms.Model = Model;
	Parms.RadialMenu = RadialMenu;

	UObject::ProcessEvent(Func, &Parms);
}

}

