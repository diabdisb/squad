#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_InteractableItem_SelfHeal

#include "Basic.hpp"

#include "W_InteractableItem_SelfHeal_classes.hpp"
#include "W_InteractableItem_SelfHeal_parameters.hpp"


namespace SDK
{

// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.ExecuteUbergraph_W_InteractableItem_SelfHeal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_InteractableItem_SelfHeal_C::ExecuteUbergraph_W_InteractableItem_SelfHeal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_InteractableItem_SelfHeal_C", "ExecuteUbergraph_W_InteractableItem_SelfHeal");

	Params::W_InteractableItem_SelfHeal_C_ExecuteUbergraph_W_InteractableItem_SelfHeal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_InteractableItem_SelfHeal_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_InteractableItem_SelfHeal_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Get Format Box
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHorizontalBox*                   FormatBox_0                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_InteractableItem_SelfHeal_C::Get_Format_Box(class UHorizontalBox** FormatBox_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_InteractableItem_SelfHeal_C", "Get Format Box");

	Params::W_InteractableItem_SelfHeal_C_Get_Format_Box Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FormatBox_0 != nullptr)
		*FormatBox_0 = Parms.FormatBox_0;
}


// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Update Self Heal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_InteractableItem_SelfHeal_C::Update_Self_Heal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_InteractableItem_SelfHeal_C", "Update Self Heal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Has Healing Item
// (Public, BlueprintCallable, BlueprintEvent)

void UW_InteractableItem_SelfHeal_C::Has_Healing_Item()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_InteractableItem_SelfHeal_C", "Has Healing Item");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Set Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_InteractableItem_SelfHeal_C::Set_Visibility(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_InteractableItem_SelfHeal_C", "Set Visibility");

	Params::W_InteractableItem_SelfHeal_C_Set_Visibility Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Has Field Dressings
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASQSoldier*                       Inventory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Has_Dressing                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Slot_0                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_InteractableItem_SelfHeal_C::Has_Field_Dressings(class ASQSoldier* Inventory, bool* Has_Dressing, int32* Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_InteractableItem_SelfHeal_C", "Has Field Dressings");

	Params::W_InteractableItem_SelfHeal_C_Has_Field_Dressings Parms{};

	Parms.Inventory = Inventory;

	UObject::ProcessEvent(Func, &Parms);

	if (Has_Dressing != nullptr)
		*Has_Dressing = Parms.Has_Dressing;

	if (Slot_0 != nullptr)
		*Slot_0 = Parms.Slot_0;
}

}

