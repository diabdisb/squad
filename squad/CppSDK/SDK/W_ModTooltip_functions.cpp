#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ModTooltip

#include "Basic.hpp"

#include "W_ModTooltip_classes.hpp"
#include "W_ModTooltip_parameters.hpp"


namespace SDK
{

// Function W_ModTooltip.W_ModTooltip_C.Removed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UW_ModTooltip_C::Removed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ModTooltip_C", "Removed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ModTooltip.W_ModTooltip_C.ExecuteUbergraph_W_ModTooltip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ModTooltip_C::ExecuteUbergraph_W_ModTooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ModTooltip_C", "ExecuteUbergraph_W_ModTooltip");

	Params::W_ModTooltip_C_ExecuteUbergraph_W_ModTooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ModTooltip.W_ModTooltip_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_ModTooltip_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ModTooltip_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ModTooltip.W_ModTooltip_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ModTooltip_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ModTooltip_C", "Tick");

	Params::W_ModTooltip_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ModTooltip.W_ModTooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_ModTooltip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ModTooltip_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ModTooltip.W_ModTooltip_C.Display Mods
// (Public, BlueprintCallable, BlueprintEvent)

void UW_ModTooltip_C::Display_Mods()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ModTooltip_C", "Display Mods");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ModTooltip.W_ModTooltip_C.Get_TB_Whitelist_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UW_ModTooltip_C::Get_TB_Whitelist_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ModTooltip_C", "Get_TB_Whitelist_Text_0");

	Params::W_ModTooltip_C_Get_TB_Whitelist_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_ModTooltip.W_ModTooltip_C.Is Whitelisted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Is_Whitelisted_0                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ModTooltip_C::Is_Whitelisted(bool* Is_Whitelisted_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ModTooltip_C", "Is Whitelisted");

	Params::W_ModTooltip_C_Is_Whitelisted Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Whitelisted_0 != nullptr)
		*Is_Whitelisted_0 = Parms.Is_Whitelisted_0;
}


// Function W_ModTooltip.W_ModTooltip_C.Is Modded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UW_ModTooltip_C::Is_Modded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ModTooltip_C", "Is Modded");

	Params::W_ModTooltip_C_Is_Modded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_ModTooltip.W_ModTooltip_C.Set Position
// (Public, BlueprintCallable, BlueprintEvent)

void UW_ModTooltip_C::Set_Position()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ModTooltip_C", "Set Position");

	UObject::ProcessEvent(Func, nullptr);
}

}

