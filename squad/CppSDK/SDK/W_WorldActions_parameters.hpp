#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_WorldActions

#include "Basic.hpp"

#include "Squad_structs.hpp"


namespace SDK::Params
{

// Function W_WorldActions.W_WorldActions_C.ExecuteUbergraph_W_WorldActions
// 0x0004 (0x0004 - 0x0000)
struct W_WorldActions_C_ExecuteUbergraph_W_WorldActions final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_WorldActions_C_ExecuteUbergraph_W_WorldActions) == 0x000004, "Wrong alignment on W_WorldActions_C_ExecuteUbergraph_W_WorldActions");
static_assert(sizeof(W_WorldActions_C_ExecuteUbergraph_W_WorldActions) == 0x000004, "Wrong size on W_WorldActions_C_ExecuteUbergraph_W_WorldActions");
static_assert(offsetof(W_WorldActions_C_ExecuteUbergraph_W_WorldActions, EntryPoint) == 0x000000, "Member 'W_WorldActions_C_ExecuteUbergraph_W_WorldActions::EntryPoint' has a wrong offset!");

// Function W_WorldActions.W_WorldActions_C.SetCurrentValues
// 0x0060 (0x0060 - 0x0000)
struct W_WorldActions_C_SetCurrentValues final
{
public:
	struct FSQGameFlags                           CheckFlags;                                        // 0x0000(0x0011)(Edit, BlueprintVisible, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerController*                    K2Node_DynamicCast_AsSQPlayer_Controller;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQPlayerState*                         CallFunc_GetSquadPlayerState_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQTeamState*                           CallFunc_GetTeamState_ReturnValue;                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQGameState*                           K2Node_DynamicCast_AsSQGame_State;                 // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_WorldActions_C_SetCurrentValues) == 0x000008, "Wrong alignment on W_WorldActions_C_SetCurrentValues");
static_assert(sizeof(W_WorldActions_C_SetCurrentValues) == 0x000060, "Wrong size on W_WorldActions_C_SetCurrentValues");
static_assert(offsetof(W_WorldActions_C_SetCurrentValues, CheckFlags) == 0x000000, "Member 'W_WorldActions_C_SetCurrentValues::CheckFlags' has a wrong offset!");
static_assert(offsetof(W_WorldActions_C_SetCurrentValues, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'W_WorldActions_C_SetCurrentValues::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_WorldActions_C_SetCurrentValues, K2Node_DynamicCast_AsSQPlayer_Controller) == 0x000020, "Member 'W_WorldActions_C_SetCurrentValues::K2Node_DynamicCast_AsSQPlayer_Controller' has a wrong offset!");
static_assert(offsetof(W_WorldActions_C_SetCurrentValues, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'W_WorldActions_C_SetCurrentValues::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_WorldActions_C_SetCurrentValues, CallFunc_GetSquadPlayerState_ReturnValue) == 0x000030, "Member 'W_WorldActions_C_SetCurrentValues::CallFunc_GetSquadPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_WorldActions_C_SetCurrentValues, CallFunc_GetTeamState_ReturnValue) == 0x000038, "Member 'W_WorldActions_C_SetCurrentValues::CallFunc_GetTeamState_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_WorldActions_C_SetCurrentValues, CallFunc_Greater_IntInt_ReturnValue) == 0x000040, "Member 'W_WorldActions_C_SetCurrentValues::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_WorldActions_C_SetCurrentValues, CallFunc_GetGameState_ReturnValue) == 0x000048, "Member 'W_WorldActions_C_SetCurrentValues::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_WorldActions_C_SetCurrentValues, K2Node_DynamicCast_AsSQGame_State) == 0x000050, "Member 'W_WorldActions_C_SetCurrentValues::K2Node_DynamicCast_AsSQGame_State' has a wrong offset!");
static_assert(offsetof(W_WorldActions_C_SetCurrentValues, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'W_WorldActions_C_SetCurrentValues::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

