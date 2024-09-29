#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Ruleset_Vehicle

#include "Basic.hpp"

#include "BP_Ruleset_Vehicle_classes.hpp"
#include "BP_Ruleset_Vehicle_parameters.hpp"


namespace SDK
{

// Function BP_Ruleset_Vehicle.BP_Ruleset_Vehicle_C.ExecuteUbergraph_BP_Ruleset_Vehicle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ruleset_Vehicle_C::ExecuteUbergraph_BP_Ruleset_Vehicle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ruleset_Vehicle_C", "ExecuteUbergraph_BP_Ruleset_Vehicle");

	Params::BP_Ruleset_Vehicle_C_ExecuteUbergraph_BP_Ruleset_Vehicle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ruleset_Vehicle.BP_Ruleset_Vehicle_C.VehicleDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASQPlayerController*              Killer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerController*              Victim                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQVehicle*                       DestroyedVehicle                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ruleset_Vehicle_C::VehicleDestroyed(class ASQPlayerController* Killer, class ASQPlayerController* Victim, class ASQVehicle* DestroyedVehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ruleset_Vehicle_C", "VehicleDestroyed");

	Params::BP_Ruleset_Vehicle_C_VehicleDestroyed Parms{};

	Parms.Killer = Killer;
	Parms.Victim = Victim;
	Parms.DestroyedVehicle = DestroyedVehicle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ruleset_Vehicle.BP_Ruleset_Vehicle_C.ApplyRules
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVehicleRuleElement>      In_Vehicle_Rule                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBP_SQVehicleSettings_C*          In_Vehicle_Settings                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerController*              In_Killer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQTeamState*                     In_Victim_TeamState                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQTeamState*                     In_Kill_Instigator_TeamState                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQVehicle*                       Vehicle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ruleset_Vehicle_C::ApplyRules(TArray<struct FVehicleRuleElement>& In_Vehicle_Rule, class UBP_SQVehicleSettings_C* In_Vehicle_Settings, class ASQPlayerController* In_Killer, class ASQTeamState* In_Victim_TeamState, class ASQTeamState* In_Kill_Instigator_TeamState, class ASQVehicle* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ruleset_Vehicle_C", "ApplyRules");

	Params::BP_Ruleset_Vehicle_C_ApplyRules Parms{};

	Parms.In_Vehicle_Rule = std::move(In_Vehicle_Rule);
	Parms.In_Vehicle_Settings = In_Vehicle_Settings;
	Parms.In_Killer = In_Killer;
	Parms.In_Victim_TeamState = In_Victim_TeamState;
	Parms.In_Kill_Instigator_TeamState = In_Kill_Instigator_TeamState;
	Parms.Vehicle = Vehicle;

	UObject::ProcessEvent(Func, &Parms);

	In_Vehicle_Rule = std::move(Parms.In_Vehicle_Rule);
}


// Function BP_Ruleset_Vehicle.BP_Ruleset_Vehicle_C.GetInstigatorTeamState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerController*              In_Killer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerController*              In_Victim                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQVehicle*                       In_Vehicle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Out_Success                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASQTeamState*                     Out_TeamState                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ruleset_Vehicle_C::GetInstigatorTeamState(class ASQPlayerController* In_Killer, class ASQPlayerController* In_Victim, class ASQVehicle* In_Vehicle, bool* Out_Success, class ASQTeamState** Out_TeamState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ruleset_Vehicle_C", "GetInstigatorTeamState");

	Params::BP_Ruleset_Vehicle_C_GetInstigatorTeamState Parms{};

	Parms.In_Killer = In_Killer;
	Parms.In_Victim = In_Victim;
	Parms.In_Vehicle = In_Vehicle;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Success != nullptr)
		*Out_Success = Parms.Out_Success;

	if (Out_TeamState != nullptr)
		*Out_TeamState = Parms.Out_TeamState;
}


// Function BP_Ruleset_Vehicle.BP_Ruleset_Vehicle_C.GetVictimTeamState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerController*              In_Killer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerController*              In_Victim                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQVehicle*                       In_Vehicle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Out_Success                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASQTeamState*                     Out_TeamState                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ruleset_Vehicle_C::GetVictimTeamState(class ASQPlayerController* In_Killer, class ASQPlayerController* In_Victim, class ASQVehicle* In_Vehicle, bool* Out_Success, class ASQTeamState** Out_TeamState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ruleset_Vehicle_C", "GetVictimTeamState");

	Params::BP_Ruleset_Vehicle_C_GetVictimTeamState Parms{};

	Parms.In_Killer = In_Killer;
	Parms.In_Victim = In_Victim;
	Parms.In_Vehicle = In_Vehicle;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Success != nullptr)
		*Out_Success = Parms.Out_Success;

	if (Out_TeamState != nullptr)
		*Out_TeamState = Parms.Out_TeamState;
}


// Function BP_Ruleset_Vehicle.BP_Ruleset_Vehicle_C.FindRuleList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   In_TeamId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESQTeamRelationShip                     In_Relationship                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Out_Found                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTeamVehicleRuleElement          Out_Rule                                               (Parm, OutParm, HasGetValueTypeHash)

void ABP_Ruleset_Vehicle_C::FindRuleList(int32 In_TeamId, ESQTeamRelationShip In_Relationship, bool* Out_Found, struct FTeamVehicleRuleElement* Out_Rule) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ruleset_Vehicle_C", "FindRuleList");

	Params::BP_Ruleset_Vehicle_C_FindRuleList Parms{};

	Parms.In_TeamId = In_TeamId;
	Parms.In_Relationship = In_Relationship;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Found != nullptr)
		*Out_Found = Parms.Out_Found;

	if (Out_Rule != nullptr)
		*Out_Rule = std::move(Parms.Out_Rule);
}


// Function BP_Ruleset_Vehicle.BP_Ruleset_Vehicle_C.FindRules
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTeamVehicleRuleElement          In_Team_Rule                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UBP_SQVehicleSettings_C*          In_Vehicle_Setting                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVehicleRuleElement>      Out_Rules                                              (Parm, OutParm)

void ABP_Ruleset_Vehicle_C::FindRules(const struct FTeamVehicleRuleElement& In_Team_Rule, class UBP_SQVehicleSettings_C* In_Vehicle_Setting, TArray<struct FVehicleRuleElement>* Out_Rules) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ruleset_Vehicle_C", "FindRules");

	Params::BP_Ruleset_Vehicle_C_FindRules Parms{};

	Parms.In_Team_Rule = std::move(In_Team_Rule);
	Parms.In_Vehicle_Setting = In_Vehicle_Setting;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Rules != nullptr)
		*Out_Rules = std::move(Parms.Out_Rules);
}


// Function BP_Ruleset_Vehicle.BP_Ruleset_Vehicle_C.GetPointsForVehicleKill
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   In_TeamId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SQVehicleSettings_C*          In_Vehicle_Settings                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Out_Points                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ruleset_Vehicle_C::GetPointsForVehicleKill(int32 In_TeamId, class UBP_SQVehicleSettings_C* In_Vehicle_Settings, int32* Out_Points) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ruleset_Vehicle_C", "GetPointsForVehicleKill");

	Params::BP_Ruleset_Vehicle_C_GetPointsForVehicleKill Parms{};

	Parms.In_TeamId = In_TeamId;
	Parms.In_Vehicle_Settings = In_Vehicle_Settings;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Points != nullptr)
		*Out_Points = Parms.Out_Points;
}


// Function BP_Ruleset_Vehicle.BP_Ruleset_Vehicle_C.SelectRules
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   In_Kill_Instigator_Team_ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   In_Victim_Team_ID                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SQVehicleSettings_C*          In_Vehicle_Settings                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVehicleRuleElement>      Out_Rules                                              (Parm, OutParm)

void ABP_Ruleset_Vehicle_C::SelectRules(int32 In_Kill_Instigator_Team_ID, int32 In_Victim_Team_ID, class UBP_SQVehicleSettings_C* In_Vehicle_Settings, TArray<struct FVehicleRuleElement>* Out_Rules) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ruleset_Vehicle_C", "SelectRules");

	Params::BP_Ruleset_Vehicle_C_SelectRules Parms{};

	Parms.In_Kill_Instigator_Team_ID = In_Kill_Instigator_Team_ID;
	Parms.In_Victim_Team_ID = In_Victim_Team_ID;
	Parms.In_Vehicle_Settings = In_Vehicle_Settings;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Rules != nullptr)
		*Out_Rules = std::move(Parms.Out_Rules);
}


// Function BP_Ruleset_Vehicle.BP_Ruleset_Vehicle_C.GetTicketsForVehicleKill
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   In_TeamId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SQVehicleSettings_C*          In_Vehicle_Settings                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Out_Tickets                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ruleset_Vehicle_C::GetTicketsForVehicleKill(int32 In_TeamId, class UBP_SQVehicleSettings_C* In_Vehicle_Settings, int32* Out_Tickets) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ruleset_Vehicle_C", "GetTicketsForVehicleKill");

	Params::BP_Ruleset_Vehicle_C_GetTicketsForVehicleKill Parms{};

	Parms.In_TeamId = In_TeamId;
	Parms.In_Vehicle_Settings = In_Vehicle_Settings;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Tickets != nullptr)
		*Out_Tickets = Parms.Out_Tickets;
}

}

