#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SQCountParameter_TeamMate

#include "Basic.hpp"

#include "SQCountParameter_TeamMate_classes.hpp"
#include "SQCountParameter_TeamMate_parameters.hpp"


namespace SDK
{

// Function SQCountParameter_TeamMate.SQCountParameter_TeamMate_C.TryGetInputValueForTeam
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ASQTeam*                          InTeam                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OutValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool USQCountParameter_TeamMate_C::TryGetInputValueForTeam(const class ASQTeam* InTeam, float* OutValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SQCountParameter_TeamMate_C", "TryGetInputValueForTeam");

	Params::SQCountParameter_TeamMate_C_TryGetInputValueForTeam Parms{};

	Parms.InTeam = InTeam;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;
}

}

