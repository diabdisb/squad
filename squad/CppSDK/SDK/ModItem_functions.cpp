#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModItem

#include "Basic.hpp"

#include "ModItem_classes.hpp"
#include "ModItem_parameters.hpp"


namespace SDK
{

// Function ModItem.ModItem_C.Mod Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModdingRuntimeModInfoDetails    ModInfo_0                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UModItem_C::Mod_Selected__DelegateSignature(const struct FModdingRuntimeModInfoDetails& ModInfo_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModItem_C", "Mod Selected__DelegateSignature");

	Params::ModItem_C_Mod_Selected__DelegateSignature Parms{};

	Parms.ModInfo_0 = std::move(ModInfo_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ModItem.ModItem_C.ExecuteUbergraph_ModItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModItem_C::ExecuteUbergraph_ModItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModItem_C", "ExecuteUbergraph_ModItem");

	Params::ModItem_C_ExecuteUbergraph_ModItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ModItem.ModItem_C.BndEvt__Button_Mod_K2Node_ComponentBoundEvent_236_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UModItem_C::BndEvt__Button_Mod_K2Node_ComponentBoundEvent_236_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModItem_C", "BndEvt__Button_Mod_K2Node_ComponentBoundEvent_236_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ModItem.ModItem_C.BndEvt__Button_Mod_K2Node_ComponentBoundEvent_226_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UModItem_C::BndEvt__Button_Mod_K2Node_ComponentBoundEvent_226_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModItem_C", "BndEvt__Button_Mod_K2Node_ComponentBoundEvent_226_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ModItem.ModItem_C.BndEvt__ButtonLINK_K2Node_ComponentBoundEvent_119_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*               Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModItem_C::BndEvt__ButtonLINK_K2Node_ComponentBoundEvent_119_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModItem_C", "BndEvt__ButtonLINK_K2Node_ComponentBoundEvent_119_OnClicked__DelegateSignature");

	Params::ModItem_C_BndEvt__ButtonLINK_K2Node_ComponentBoundEvent_119_OnClicked__DelegateSignature Parms{};

	Parms.bSelected = bSelected;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ModItem.ModItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UModItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModItem_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ModItem.ModItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UModItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ModItem.ModItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UModItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModItem_C", "PreConstruct");

	Params::ModItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ModItem.ModItem_C.OnSuccess_8A86417A45928AEC81E697912B573E34
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                Texture_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModItem_C::OnSuccess_8A86417A45928AEC81E697912B573E34(class UTexture2DDynamic* Texture_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModItem_C", "OnSuccess_8A86417A45928AEC81E697912B573E34");

	Params::ModItem_C_OnSuccess_8A86417A45928AEC81E697912B573E34 Parms{};

	Parms.Texture_0 = Texture_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ModItem.ModItem_C.OnFail_8A86417A45928AEC81E697912B573E34
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                Texture_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModItem_C::OnFail_8A86417A45928AEC81E697912B573E34(class UTexture2DDynamic* Texture_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModItem_C", "OnFail_8A86417A45928AEC81E697912B573E34");

	Params::ModItem_C_OnFail_8A86417A45928AEC81E697912B573E34 Parms{};

	Parms.Texture_0 = Texture_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ModItem.ModItem_C.Refresh Mod
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UModItem_C::Refresh_Mod()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModItem_C", "Refresh Mod");

	UObject::ProcessEvent(Func, nullptr);
}

}

