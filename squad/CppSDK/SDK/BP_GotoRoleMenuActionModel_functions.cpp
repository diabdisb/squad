#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GotoRoleMenuActionModel

#include "Basic.hpp"

#include "BP_GotoRoleMenuActionModel_classes.hpp"
#include "BP_GotoRoleMenuActionModel_parameters.hpp"


namespace SDK
{

// Function BP_GotoRoleMenuActionModel.BP_GotoRoleMenuActionModel_C.ExecuteUbergraph_BP_GotoRoleMenuActionModel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GotoRoleMenuActionModel_C::ExecuteUbergraph_BP_GotoRoleMenuActionModel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GotoRoleMenuActionModel_C", "ExecuteUbergraph_BP_GotoRoleMenuActionModel");

	Params::BP_GotoRoleMenuActionModel_C_ExecuteUbergraph_BP_GotoRoleMenuActionModel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GotoRoleMenuActionModel.BP_GotoRoleMenuActionModel_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*                Radial                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GotoRoleMenuActionModel_C::OnClicked(class UBaseRadialMenu_C* Radial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GotoRoleMenuActionModel_C", "OnClicked");

	Params::BP_GotoRoleMenuActionModel_C_OnClicked Parms{};

	Parms.Radial = Radial;

	UObject::ProcessEvent(Func, &Parms);
}

}

