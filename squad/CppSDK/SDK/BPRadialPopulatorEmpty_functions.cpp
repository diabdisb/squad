#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPRadialPopulatorEmpty

#include "Basic.hpp"

#include "BPRadialPopulatorEmpty_classes.hpp"
#include "BPRadialPopulatorEmpty_parameters.hpp"


namespace SDK
{

// Function BPRadialPopulatorEmpty.BPRadialPopulatorEmpty_C.ExecuteUbergraph_BPRadialPopulatorEmpty
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPRadialPopulatorEmpty_C::ExecuteUbergraph_BPRadialPopulatorEmpty(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPRadialPopulatorEmpty_C", "ExecuteUbergraph_BPRadialPopulatorEmpty");

	Params::BPRadialPopulatorEmpty_C_ExecuteUbergraph_BPRadialPopulatorEmpty Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPRadialPopulatorEmpty.BPRadialPopulatorEmpty_C.InitialSetup
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQUserWidget*                    Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RadialItemModel_C*            Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseRadialMenu_C*                RadialMenu                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPRadialPopulatorEmpty_C::InitialSetup(class USQUserWidget* Widget, class UBP_RadialItemModel_C* Model, class UBaseRadialMenu_C* RadialMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPRadialPopulatorEmpty_C", "InitialSetup");

	Params::BPRadialPopulatorEmpty_C_InitialSetup Parms{};

	Parms.Widget = Widget;
	Parms.Model = Model;
	Parms.RadialMenu = RadialMenu;

	UObject::ProcessEvent(Func, &Parms);
}

}

