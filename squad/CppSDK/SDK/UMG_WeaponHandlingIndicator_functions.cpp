#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_WeaponHandlingIndicator

#include "Basic.hpp"

#include "UMG_WeaponHandlingIndicator_classes.hpp"
#include "UMG_WeaponHandlingIndicator_parameters.hpp"


namespace SDK
{

// Function UMG_WeaponHandlingIndicator.UMG_WeaponHandlingIndicator_C.ExecuteUbergraph_UMG_WeaponHandlingIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_WeaponHandlingIndicator_C::ExecuteUbergraph_UMG_WeaponHandlingIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_WeaponHandlingIndicator_C", "ExecuteUbergraph_UMG_WeaponHandlingIndicator");

	Params::UMG_WeaponHandlingIndicator_C_ExecuteUbergraph_UMG_WeaponHandlingIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_WeaponHandlingIndicator.UMG_WeaponHandlingIndicator_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_WeaponHandlingIndicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_WeaponHandlingIndicator_C", "Tick");

	Params::UMG_WeaponHandlingIndicator_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

