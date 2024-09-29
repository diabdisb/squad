#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_InventoryItem

#include "Basic.hpp"

#include "UMG_InventoryItem_classes.hpp"
#include "UMG_InventoryItem_parameters.hpp"


namespace SDK
{

// Function UMG_InventoryItem.UMG_InventoryItem_C.ExecuteUbergraph_UMG_InventoryItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_InventoryItem_C::ExecuteUbergraph_UMG_InventoryItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_InventoryItem_C", "ExecuteUbergraph_UMG_InventoryItem");

	Params::UMG_InventoryItem_C_ExecuteUbergraph_UMG_InventoryItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_InventoryItem.UMG_InventoryItem_C.UpdateState
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUMG_InventoryItem_C::UpdateState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_InventoryItem_C", "UpdateState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_InventoryItem.UMG_InventoryItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_InventoryItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_InventoryItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

