#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapMarker_Request

#include "Basic.hpp"

#include "BP_MapMarker_Request_classes.hpp"
#include "BP_MapMarker_Request_parameters.hpp"


namespace SDK
{

// Function BP_MapMarker_Request.BP_MapMarker_Request_C.ExecuteUbergraph_BP_MapMarker_Request
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MapMarker_Request_C::ExecuteUbergraph_BP_MapMarker_Request(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapMarker_Request_C", "ExecuteUbergraph_BP_MapMarker_Request");

	Params::BP_MapMarker_Request_C_ExecuteUbergraph_BP_MapMarker_Request Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapMarker_Request.BP_MapMarker_Request_C.OnHasFadedChanged
// (Event, Public, BlueprintEvent)

void UBP_MapMarker_Request_C::OnHasFadedChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapMarker_Request_C", "OnHasFadedChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapMarker_Request.BP_MapMarker_Request_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   ScaleValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MapMarker_Request_C::OnScaleChanged(float ScaleValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapMarker_Request_C", "OnScaleChanged");

	Params::BP_MapMarker_Request_C_OnScaleChanged Parms{};

	Parms.ScaleValue = ScaleValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapMarker_Request.BP_MapMarker_Request_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_MapMarker_Request_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapMarker_Request_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

