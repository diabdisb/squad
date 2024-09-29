#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapMarker_FOB

#include "Basic.hpp"

#include "BP_MapMarker_FOB_classes.hpp"
#include "BP_MapMarker_FOB_parameters.hpp"


namespace SDK
{

// Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.ExecuteUbergraph_BP_MapMarker_FOB
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MapMarker_FOB_C::ExecuteUbergraph_BP_MapMarker_FOB(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapMarker_FOB_C", "ExecuteUbergraph_BP_MapMarker_FOB");

	Params::BP_MapMarker_FOB_C_ExecuteUbergraph_BP_MapMarker_FOB Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.BndEvt__MouseHoverZone_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MapMarker_FOB_C::BndEvt__MouseHoverZone_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapMarker_FOB_C", "BndEvt__MouseHoverZone_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.BndEvt__MouseHoverZone_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MapMarker_FOB_C::BndEvt__MouseHoverZone_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapMarker_FOB_C", "BndEvt__MouseHoverZone_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.OnHasFadedChanged
// (Event, Public, BlueprintEvent)

void UBP_MapMarker_FOB_C::OnHasFadedChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapMarker_FOB_C", "OnHasFadedChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.OnMapCoreChanged
// (BlueprintCallable, BlueprintEvent)

void UBP_MapMarker_FOB_C::OnMapCoreChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapMarker_FOB_C", "OnMapCoreChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.OnMapZoom
// (BlueprintCallable, BlueprintEvent)

void UBP_MapMarker_FOB_C::OnMapZoom()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapMarker_FOB_C", "OnMapZoom");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   ScaleValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MapMarker_FOB_C::OnScaleChanged(float ScaleValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapMarker_FOB_C", "OnScaleChanged");

	Params::BP_MapMarker_FOB_C_OnScaleChanged Parms{};

	Parms.ScaleValue = ScaleValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_MapMarker_FOB_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapMarker_FOB_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.Update Radius Visibility
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MapMarker_FOB_C::Update_Radius_Visibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapMarker_FOB_C", "Update Radius Visibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapMarker_FOB.BP_MapMarker_FOB_C.Update Size
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MapMarker_FOB_C::Update_Size()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapMarker_FOB_C", "Update Size");

	UObject::ProcessEvent(Func, nullptr);
}

}

