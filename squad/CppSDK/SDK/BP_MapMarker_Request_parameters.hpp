#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapMarker_Request

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_MapMarker_Request.BP_MapMarker_Request_C.ExecuteUbergraph_BP_MapMarker_Request
// 0x0020 (0x0020 - 0x0000)
struct BP_MapMarker_Request_C_ExecuteUbergraph_BP_MapMarker_Request final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_ScaleValue;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetServerWorldTimeSeconds_ReturnValue;    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MapMarker_Request_C_ExecuteUbergraph_BP_MapMarker_Request) == 0x000008, "Wrong alignment on BP_MapMarker_Request_C_ExecuteUbergraph_BP_MapMarker_Request");
static_assert(sizeof(BP_MapMarker_Request_C_ExecuteUbergraph_BP_MapMarker_Request) == 0x000020, "Wrong size on BP_MapMarker_Request_C_ExecuteUbergraph_BP_MapMarker_Request");
static_assert(offsetof(BP_MapMarker_Request_C_ExecuteUbergraph_BP_MapMarker_Request, EntryPoint) == 0x000000, "Member 'BP_MapMarker_Request_C_ExecuteUbergraph_BP_MapMarker_Request::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MapMarker_Request_C_ExecuteUbergraph_BP_MapMarker_Request, K2Node_Event_ScaleValue) == 0x000004, "Member 'BP_MapMarker_Request_C_ExecuteUbergraph_BP_MapMarker_Request::K2Node_Event_ScaleValue' has a wrong offset!");
static_assert(offsetof(BP_MapMarker_Request_C_ExecuteUbergraph_BP_MapMarker_Request, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BP_MapMarker_Request_C_ExecuteUbergraph_BP_MapMarker_Request::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapMarker_Request_C_ExecuteUbergraph_BP_MapMarker_Request, CallFunc_GetGameState_ReturnValue) == 0x000010, "Member 'BP_MapMarker_Request_C_ExecuteUbergraph_BP_MapMarker_Request::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapMarker_Request_C_ExecuteUbergraph_BP_MapMarker_Request, CallFunc_GetServerWorldTimeSeconds_ReturnValue) == 0x000018, "Member 'BP_MapMarker_Request_C_ExecuteUbergraph_BP_MapMarker_Request::CallFunc_GetServerWorldTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapMarker_Request_C_ExecuteUbergraph_BP_MapMarker_Request, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x00001C, "Member 'BP_MapMarker_Request_C_ExecuteUbergraph_BP_MapMarker_Request::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_MapMarker_Request.BP_MapMarker_Request_C.OnScaleChanged
// 0x0004 (0x0004 - 0x0000)
struct BP_MapMarker_Request_C_OnScaleChanged final
{
public:
	float                                         ScaleValue;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapMarker_Request_C_OnScaleChanged) == 0x000004, "Wrong alignment on BP_MapMarker_Request_C_OnScaleChanged");
static_assert(sizeof(BP_MapMarker_Request_C_OnScaleChanged) == 0x000004, "Wrong size on BP_MapMarker_Request_C_OnScaleChanged");
static_assert(offsetof(BP_MapMarker_Request_C_OnScaleChanged, ScaleValue) == 0x000000, "Member 'BP_MapMarker_Request_C_OnScaleChanged::ScaleValue' has a wrong offset!");

}

