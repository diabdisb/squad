#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_RoleIcon

#include "Basic.hpp"

#include "W_RoleIcon_classes.hpp"
#include "W_RoleIcon_parameters.hpp"


namespace SDK
{

// Function W_RoleIcon.W_RoleIcon_C.ExecuteUbergraph_W_RoleIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RoleIcon_C::ExecuteUbergraph_W_RoleIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_RoleIcon_C", "ExecuteUbergraph_W_RoleIcon");

	Params::W_RoleIcon_C_ExecuteUbergraph_W_RoleIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_RoleIcon.W_RoleIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_RoleIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_RoleIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_RoleIcon.W_RoleIcon_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_RoleIcon_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_RoleIcon_C", "GetToolTipWidget_0");

	Params::W_RoleIcon_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

