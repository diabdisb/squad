#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_ScoreboardPlayer

#include "Basic.hpp"

#include "UMG_ScoreboardPlayer_classes.hpp"
#include "UMG_ScoreboardPlayer_parameters.hpp"


namespace SDK
{

// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.ExecuteUbergraph_UMG_ScoreboardPlayer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ScoreboardPlayer_C::ExecuteUbergraph_UMG_ScoreboardPlayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ScoreboardPlayer_C", "ExecuteUbergraph_UMG_ScoreboardPlayer");

	Params::UMG_ScoreboardPlayer_C_ExecuteUbergraph_UMG_ScoreboardPlayer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ScoreboardPlayer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ScoreboardPlayer_C", "PreConstruct");

	Params::UMG_ScoreboardPlayer_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.UpdateState
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUMG_ScoreboardPlayer_C::UpdateState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ScoreboardPlayer_C", "UpdateState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.BPInit
// (Event, Public, BlueprintEvent)

void UUMG_ScoreboardPlayer_C::BPInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ScoreboardPlayer_C", "BPInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_ScoreboardPlayer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ScoreboardPlayer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.Same Squad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUMG_ScoreboardPlayer_C::Same_Squad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ScoreboardPlayer_C", "Same Squad");

	Params::UMG_ScoreboardPlayer_C_Same_Squad Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.Leader Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UUMG_ScoreboardPlayer_C::Leader_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ScoreboardPlayer_C", "Leader Text");

	Params::UMG_ScoreboardPlayer_C_Leader_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.FT Color
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UUMG_ScoreboardPlayer_C::FT_Color()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ScoreboardPlayer_C", "FT Color");

	Params::UMG_ScoreboardPlayer_C_FT_Color Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.Get Position
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UUMG_ScoreboardPlayer_C::Get_Position()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ScoreboardPlayer_C", "Get Position");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.GetRoleIcon
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UUMG_ScoreboardPlayer_C::GetRoleIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ScoreboardPlayer_C", "GetRoleIcon");

	Params::UMG_ScoreboardPlayer_C_GetRoleIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.UpdateStatSpace
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_ScoreboardPlayer_C::UpdateStatSpace()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ScoreboardPlayer_C", "UpdateStatSpace");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.SwitchToEndMatchMode
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUMG_ScoreboardPlayer_C::SwitchToEndMatchMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ScoreboardPlayer_C", "SwitchToEndMatchMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.ShowHealhIconTooltip
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUMG_ScoreboardPlayer_C::ShowHealhIconTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ScoreboardPlayer_C", "ShowHealhIconTooltip");

	Params::UMG_ScoreboardPlayer_C_ShowHealhIconTooltip Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.SetTooltipWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_Tooltip_C*                   InTooltip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ScoreboardPlayer_C::SetTooltipWidget(class UUMG_Tooltip_C* InTooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ScoreboardPlayer_C", "SetTooltipWidget");

	Params::UMG_ScoreboardPlayer_C_SetTooltipWidget Parms{};

	Parms.InTooltip = InTooltip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ScoreboardPlayer.UMG_ScoreboardPlayer_C.RescaleWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewIconSize                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ScoreboardPlayer_C::RescaleWidget(const float& NewIconSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ScoreboardPlayer_C", "RescaleWidget");

	Params::UMG_ScoreboardPlayer_C_RescaleWidget Parms{};

	Parms.NewIconSize = NewIconSize;

	UObject::ProcessEvent(Func, &Parms);
}

}

