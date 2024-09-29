#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_VoipOwningPlayer

#include "Basic.hpp"

#include "W_VoipOwningPlayer_classes.hpp"
#include "W_VoipOwningPlayer_parameters.hpp"


namespace SDK
{

// Function W_VoipOwningPlayer.W_VoipOwningPlayer_C.ExecuteUbergraph_W_VoipOwningPlayer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_VoipOwningPlayer_C::ExecuteUbergraph_W_VoipOwningPlayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_VoipOwningPlayer_C", "ExecuteUbergraph_W_VoipOwningPlayer");

	Params::W_VoipOwningPlayer_C_ExecuteUbergraph_W_VoipOwningPlayer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_VoipOwningPlayer.W_VoipOwningPlayer_C.Update Microphone Volume
// (BlueprintCallable, BlueprintEvent)

void UW_VoipOwningPlayer_C::Update_Microphone_Volume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_VoipOwningPlayer_C", "Update Microphone Volume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_VoipOwningPlayer.W_VoipOwningPlayer_C.Refresh Voip
// (BlueprintCallable, BlueprintEvent)

void UW_VoipOwningPlayer_C::Refresh_Voip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_VoipOwningPlayer_C", "Refresh Voip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_VoipOwningPlayer.W_VoipOwningPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_VoipOwningPlayer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_VoipOwningPlayer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_VoipOwningPlayer.W_VoipOwningPlayer_C.Get Squad Leader Name
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UW_VoipOwningPlayer_C::Get_Squad_Leader_Name()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_VoipOwningPlayer_C", "Get Squad Leader Name");

	Params::W_VoipOwningPlayer_C_Get_Squad_Leader_Name Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

