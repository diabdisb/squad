#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SubRoleOptions

#include "Basic.hpp"

#include "W_SubRoleOptions_classes.hpp"
#include "W_SubRoleOptions_parameters.hpp"


namespace SDK
{

// Function W_SubRoleOptions.W_SubRoleOptions_C.ExecuteUbergraph_W_SubRoleOptions
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SubRoleOptions_C::ExecuteUbergraph_W_SubRoleOptions(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SubRoleOptions_C", "ExecuteUbergraph_W_SubRoleOptions");

	Params::W_SubRoleOptions_C_ExecuteUbergraph_W_SubRoleOptions Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SubRoleOptions.W_SubRoleOptions_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_SubRoleOptions_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SubRoleOptions_C", "OnMouseLeave");

	Params::W_SubRoleOptions_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SubRoleOptions.W_SubRoleOptions_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_SubRoleOptions_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SubRoleOptions_C", "OnMouseEnter");

	Params::W_SubRoleOptions_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SubRoleOptions.W_SubRoleOptions_C.OnRoleChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRoleSettings*                  In_Current_Role                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SubRoleOptions_C::OnRoleChange(class USQRoleSettings* In_Current_Role)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SubRoleOptions_C", "OnRoleChange");

	Params::W_SubRoleOptions_C_OnRoleChange Parms{};

	Parms.In_Current_Role = In_Current_Role;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SubRoleOptions.W_SubRoleOptions_C.Clear
// (BlueprintCallable, BlueprintEvent)

void UW_SubRoleOptions_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SubRoleOptions_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SubRoleOptions.W_SubRoleOptions_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SubRoleOptions_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SubRoleOptions_C", "PreConstruct");

	Params::W_SubRoleOptions_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SubRoleOptions.W_SubRoleOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_SubRoleOptions_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SubRoleOptions_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SubRoleOptions.W_SubRoleOptions_C.MoveUnderMouse
// (Public, BlueprintCallable, BlueprintEvent)

void UW_SubRoleOptions_C::MoveUnderMouse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SubRoleOptions_C", "MoveUnderMouse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SubRoleOptions.W_SubRoleOptions_C.PopulateSubRoles
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>                  Content                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UW_SubRoleOptions_C::PopulateSubRoles(TArray<class UWidget*>& Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SubRoleOptions_C", "PopulateSubRoles");

	Params::W_SubRoleOptions_C_PopulateSubRoles Parms{};

	Parms.Content = std::move(Content);

	UObject::ProcessEvent(Func, &Parms);

	Content = std::move(Parms.Content);
}

}

