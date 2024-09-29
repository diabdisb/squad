#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HUDMenu

#include "Basic.hpp"

#include "BP_HUDMenu_classes.hpp"
#include "BP_HUDMenu_parameters.hpp"


namespace SDK
{

// Function BP_HUDMenu.BP_HUDMenu_C.ExecuteUbergraph_BP_HUDMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HUDMenu_C::ExecuteUbergraph_BP_HUDMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUDMenu_C", "ExecuteUbergraph_BP_HUDMenu");

	Params::BP_HUDMenu_C_ExecuteUbergraph_BP_HUDMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HUDMenu.BP_HUDMenu_C.GameDiscoveryComplete
// (BlueprintCallable, BlueprintEvent)

void ABP_HUDMenu_C::GameDiscoveryComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUDMenu_C", "GameDiscoveryComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HUDMenu.BP_HUDMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HUDMenu_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUDMenu_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HUDMenu.BP_HUDMenu_C.Check Cursor
// (BlueprintCallable, BlueprintEvent)

void ABP_HUDMenu_C::Check_Cursor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUDMenu_C", "Check Cursor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HUDMenu.BP_HUDMenu_C.CreateMainMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HUDMenu_C::CreateMainMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUDMenu_C", "CreateMainMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HUDMenu.BP_HUDMenu_C.CreateEmoteMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*                OutputPin                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HUDMenu_C::CreateEmoteMenu(class UBaseRadialMenu_C** OutputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUDMenu_C", "CreateEmoteMenu");

	Params::BP_HUDMenu_C_CreateEmoteMenu Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = Parms.OutputPin;
}


// Function BP_HUDMenu.BP_HUDMenu_C.CreateRadialMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InputPin1                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          InputPin2                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bCenterMouse                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBaseRadialMenu_C*                OutputPin                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HUDMenu_C::CreateRadialMenu(class UClass* InputPin, class FName InputPin1, class UObject* InputPin2, bool bCenterMouse, class UBaseRadialMenu_C** OutputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUDMenu_C", "CreateRadialMenu");

	Params::BP_HUDMenu_C_CreateRadialMenu Parms{};

	Parms.InputPin = InputPin;
	Parms.InputPin1 = InputPin1;
	Parms.InputPin2 = InputPin2;
	Parms.bCenterMouse = bCenterMouse;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = Parms.OutputPin;
}


// Function BP_HUDMenu.BP_HUDMenu_C.DestroyEmoteMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HUDMenu_C::DestroyEmoteMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUDMenu_C", "DestroyEmoteMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HUDMenu.BP_HUDMenu_C.Get Showing Main Menu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Showing                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HUDMenu_C::Get_Showing_Main_Menu(bool* Showing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUDMenu_C", "Get Showing Main Menu");

	Params::BP_HUDMenu_C_Get_Showing_Main_Menu Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Showing != nullptr)
		*Showing = Parms.Showing;
}


// Function BP_HUDMenu.BP_HUDMenu_C.Get Interactable Widget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQInteractableWidgetList*        Interact_Widget                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HUDMenu_C::Get_Interactable_Widget(class USQInteractableWidgetList** Interact_Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUDMenu_C", "Get Interactable Widget");

	Params::BP_HUDMenu_C_Get_Interactable_Widget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Interact_Widget != nullptr)
		*Interact_Widget = Parms.Interact_Widget;
}


// Function BP_HUDMenu.BP_HUDMenu_C.Get UI Input Stacks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSQInputState>            Input_Stacks                                           (Parm, OutParm, ContainsInstancedReference)

void ABP_HUDMenu_C::Get_UI_Input_Stacks(TArray<struct FSQInputState>* Input_Stacks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUDMenu_C", "Get UI Input Stacks");

	Params::BP_HUDMenu_C_Get_UI_Input_Stacks Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Input_Stacks != nullptr)
		*Input_Stacks = std::move(Parms.Input_Stacks);
}


// Function BP_HUDMenu.BP_HUDMenu_C.Get Scoreboard
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQScoreboard*                    ScoreBoard_0                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HUDMenu_C::Get_Scoreboard(class USQScoreboard** ScoreBoard_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUDMenu_C", "Get Scoreboard");

	Params::BP_HUDMenu_C_Get_Scoreboard Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ScoreBoard_0 != nullptr)
		*ScoreBoard_0 = Parms.ScoreBoard_0;
}


// Function BP_HUDMenu.BP_HUDMenu_C.Get Map Component
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQCoreStateMapComponent*         Map_Component                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HUDMenu_C::Get_Map_Component(class USQCoreStateMapComponent** Map_Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUDMenu_C", "Get Map Component");

	Params::BP_HUDMenu_C_Get_Map_Component Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Map_Component != nullptr)
		*Map_Component = Parms.Map_Component;
}


// Function BP_HUDMenu.BP_HUDMenu_C.Get Map Core
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SQMapCore_C*                   Map_Core                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HUDMenu_C::Get_Map_Core(class UW_SQMapCore_C** Map_Core)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUDMenu_C", "Get Map Core");

	Params::BP_HUDMenu_C_Get_Map_Core Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Map_Core != nullptr)
		*Map_Core = Parms.Map_Core;
}


// Function BP_HUDMenu.BP_HUDMenu_C.Get Is Showing Settings Menu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Showing_Main_Menu                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HUDMenu_C::Get_Is_Showing_Settings_Menu(bool* Showing_Main_Menu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUDMenu_C", "Get Is Showing Settings Menu");

	Params::BP_HUDMenu_C_Get_Is_Showing_Settings_Menu Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Showing_Main_Menu != nullptr)
		*Showing_Main_Menu = Parms.Showing_Main_Menu;
}


// Function BP_HUDMenu.BP_HUDMenu_C.Get Main Menus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_MenuBase_C*                  Deployment                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_MenuBase_C*                  Command                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_MenuBase_C*                  Roaming                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HUDMenu_C::Get_Main_Menus(class UUMG_MenuBase_C** Deployment, class UUMG_MenuBase_C** Command, class UUMG_MenuBase_C** Roaming)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUDMenu_C", "Get Main Menus");

	Params::BP_HUDMenu_C_Get_Main_Menus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Deployment != nullptr)
		*Deployment = Parms.Deployment;

	if (Command != nullptr)
		*Command = Parms.Command;

	if (Roaming != nullptr)
		*Roaming = Parms.Roaming;
}


// Function BP_HUDMenu.BP_HUDMenu_C.Get Radial Menu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*                Radial_Menu                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HUDMenu_C::Get_Radial_Menu(class UBaseRadialMenu_C** Radial_Menu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUDMenu_C", "Get Radial Menu");

	Params::BP_HUDMenu_C_Get_Radial_Menu Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Radial_Menu != nullptr)
		*Radial_Menu = Parms.Radial_Menu;
}


// Function BP_HUDMenu.BP_HUDMenu_C.DisplayPolicy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShowClose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HUDMenu_C::DisplayPolicy(bool bShowClose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUDMenu_C", "DisplayPolicy");

	Params::BP_HUDMenu_C_DisplayPolicy Parms{};

	Parms.bShowClose = bShowClose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HUDMenu.BP_HUDMenu_C.OnPlayerDataReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerData                      PlayerData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_HUDMenu_C::OnPlayerDataReady(const struct FPlayerData& PlayerData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUDMenu_C", "OnPlayerDataReady");

	Params::BP_HUDMenu_C_OnPlayerDataReady Parms{};

	Parms.PlayerData = std::move(PlayerData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HUDMenu.BP_HUDMenu_C.CreateFTUESplashScreen
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HUDMenu_C::CreateFTUESplashScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUDMenu_C", "CreateFTUESplashScreen");

	UObject::ProcessEvent(Func, nullptr);
}

}

