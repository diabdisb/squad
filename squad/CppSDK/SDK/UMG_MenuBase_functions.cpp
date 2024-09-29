#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_MenuBase

#include "Basic.hpp"

#include "UMG_MenuBase_classes.hpp"
#include "UMG_MenuBase_parameters.hpp"


namespace SDK
{

// Function UMG_MenuBase.UMG_MenuBase_C.Team Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQTeamState*                     Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MenuBase_C::Team_Selected__DelegateSignature(class ASQTeamState* Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MenuBase_C", "Team Selected__DelegateSignature");

	Params::UMG_MenuBase_C_Team_Selected__DelegateSignature Parms{};

	Parms.Team = Team;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MenuBase.UMG_MenuBase_C.Started Open__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_MenuBase_C::Started_Open__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MenuBase_C", "Started Open__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MenuBase.UMG_MenuBase_C.Started Close__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_MenuBase_C::Started_Close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MenuBase_C", "Started Close__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MenuBase.UMG_MenuBase_C.Finished Open__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_MenuBase_C::Finished_Open__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MenuBase_C", "Finished Open__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MenuBase.UMG_MenuBase_C.Finished Close__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_MenuBase_C::Finished_Close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MenuBase_C", "Finished Close__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MenuBase.UMG_MenuBase_C.ExecuteUbergraph_UMG_MenuBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MenuBase_C::ExecuteUbergraph_UMG_MenuBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MenuBase_C", "ExecuteUbergraph_UMG_MenuBase");

	Params::UMG_MenuBase_C_ExecuteUbergraph_UMG_MenuBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MenuBase.UMG_MenuBase_C.Closed
// (BlueprintCallable, BlueprintEvent)

void UUMG_MenuBase_C::Closed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MenuBase_C", "Closed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MenuBase.UMG_MenuBase_C.Opened
// (BlueprintCallable, BlueprintEvent)

void UUMG_MenuBase_C::Opened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MenuBase_C", "Opened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MenuBase.UMG_MenuBase_C.Key Action
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MenuBase_C::Key_Action()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MenuBase_C", "Key Action");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MenuBase.UMG_MenuBase_C.Is Open
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Open                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Transitioning                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MenuBase_C::Is_Open(bool* Open, bool* Transitioning)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MenuBase_C", "Is Open");

	Params::UMG_MenuBase_C_Is_Open Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Open != nullptr)
		*Open = Parms.Open;

	if (Transitioning != nullptr)
		*Transitioning = Parms.Transitioning;
}


// Function UMG_MenuBase.UMG_MenuBase_C.Configure Map Elements
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQCoreStateMapComponent*         MapComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USQMapMarkerManagerComponent*     MarkerManager                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MenuBase_C::Configure_Map_Elements(class USQCoreStateMapComponent* MapComponent, class USQMapMarkerManagerComponent* MarkerManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MenuBase_C", "Configure Map Elements");

	Params::UMG_MenuBase_C_Configure_Map_Elements Parms{};

	Parms.MapComponent = MapComponent;
	Parms.MarkerManager = MarkerManager;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MenuBase.UMG_MenuBase_C.On Open
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MenuBase_C::On_Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MenuBase_C", "On Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MenuBase.UMG_MenuBase_C.On Close
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MenuBase_C::On_Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MenuBase_C", "On Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MenuBase.UMG_MenuBase_C.Get Spawn Point Roots
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGridPanel*                       SpawnBase                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridPanel*                       SpawnHab                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridPanel*                       SpawnRally                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MenuBase_C::Get_Spawn_Point_Roots(class UGridPanel** SpawnBase, class UGridPanel** SpawnHab, class UGridPanel** SpawnRally)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MenuBase_C", "Get Spawn Point Roots");

	Params::UMG_MenuBase_C_Get_Spawn_Point_Roots Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnBase != nullptr)
		*SpawnBase = Parms.SpawnBase;

	if (SpawnHab != nullptr)
		*SpawnHab = Parms.SpawnHab;

	if (SpawnRally != nullptr)
		*SpawnRally = Parms.SpawnRally;
}


// Function UMG_MenuBase.UMG_MenuBase_C.Get Squad List Roots
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                     Squad_Panel                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                     Unassigned_Panel                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                     Commander_Panel                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MenuBase_C::Get_Squad_List_Roots(class UPanelWidget** Squad_Panel, class UPanelWidget** Unassigned_Panel, class UPanelWidget** Commander_Panel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MenuBase_C", "Get Squad List Roots");

	Params::UMG_MenuBase_C_Get_Squad_List_Roots Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Squad_Panel != nullptr)
		*Squad_Panel = Parms.Squad_Panel;

	if (Unassigned_Panel != nullptr)
		*Unassigned_Panel = Parms.Unassigned_Panel;

	if (Commander_Panel != nullptr)
		*Commander_Panel = Parms.Commander_Panel;
}


// Function UMG_MenuBase.UMG_MenuBase_C.Get Role List Roots
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                     Squad_Panel                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                     Unassigned_Panel                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MenuBase_C::Get_Role_List_Roots(class UPanelWidget** Squad_Panel, class UPanelWidget** Unassigned_Panel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MenuBase_C", "Get Role List Roots");

	Params::UMG_MenuBase_C_Get_Role_List_Roots Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Squad_Panel != nullptr)
		*Squad_Panel = Parms.Squad_Panel;

	if (Unassigned_Panel != nullptr)
		*Unassigned_Panel = Parms.Unassigned_Panel;
}


// Function UMG_MenuBase.UMG_MenuBase_C.Get Voting Widget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Voting_Widget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MenuBase_C::Get_Voting_Widget(class UUserWidget** Voting_Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MenuBase_C", "Get Voting Widget");

	Params::UMG_MenuBase_C_Get_Voting_Widget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Voting_Widget != nullptr)
		*Voting_Widget = Parms.Voting_Widget;
}


// Function UMG_MenuBase.UMG_MenuBase_C.Close UI Element
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MenuBase_C::Close_UI_Element(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MenuBase_C", "Close UI Element");

	Params::UMG_MenuBase_C_Close_UI_Element Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function UMG_MenuBase.UMG_MenuBase_C.Open UI Element
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQCoreStateMapComponent*         Map_Component                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MenuBase_C::Open_UI_Element(class USQCoreStateMapComponent* Map_Component, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MenuBase_C", "Open UI Element");

	Params::UMG_MenuBase_C_Open_UI_Element Parms{};

	Parms.Map_Component = Map_Component;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}

}

