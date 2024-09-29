#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ServerRules

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_ServerRules.W_ServerRules_C.ExecuteUbergraph_W_ServerRules
// 0x0018 (0x0018 - 0x0000)
struct W_ServerRules_C_ExecuteUbergraph_W_ServerRules final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQGameState*                           CallFunc_GetSquadGameState_Return_Value;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_ServerRules_C_ExecuteUbergraph_W_ServerRules) == 0x000008, "Wrong alignment on W_ServerRules_C_ExecuteUbergraph_W_ServerRules");
static_assert(sizeof(W_ServerRules_C_ExecuteUbergraph_W_ServerRules) == 0x000018, "Wrong size on W_ServerRules_C_ExecuteUbergraph_W_ServerRules");
static_assert(offsetof(W_ServerRules_C_ExecuteUbergraph_W_ServerRules, EntryPoint) == 0x000000, "Member 'W_ServerRules_C_ExecuteUbergraph_W_ServerRules::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_ServerRules_C_ExecuteUbergraph_W_ServerRules, CallFunc_GetSquadGameState_Return_Value) == 0x000008, "Member 'W_ServerRules_C_ExecuteUbergraph_W_ServerRules::CallFunc_GetSquadGameState_Return_Value' has a wrong offset!");
static_assert(offsetof(W_ServerRules_C_ExecuteUbergraph_W_ServerRules, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'W_ServerRules_C_ExecuteUbergraph_W_ServerRules::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function W_ServerRules.W_ServerRules_C.DisplayMessageOfTheDay
// 0x0070 (0x0070 - 0x0000)
struct W_ServerRules_C_DisplayMessageOfTheDay final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class USQGameUserSettings*                    CallFunc_GetSquadGameUserSettings_ReturnValue;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStreamerModeEnabledForLevel_ReturnValue; // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQGameState*                           CallFunc_GetSquadGameState_Return_Value;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0058(0x0018)()
};
static_assert(alignof(W_ServerRules_C_DisplayMessageOfTheDay) == 0x000008, "Wrong alignment on W_ServerRules_C_DisplayMessageOfTheDay");
static_assert(sizeof(W_ServerRules_C_DisplayMessageOfTheDay) == 0x000070, "Wrong size on W_ServerRules_C_DisplayMessageOfTheDay");
static_assert(offsetof(W_ServerRules_C_DisplayMessageOfTheDay, Temp_bool_Variable) == 0x000000, "Member 'W_ServerRules_C_DisplayMessageOfTheDay::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_ServerRules_C_DisplayMessageOfTheDay, Temp_text_Variable) == 0x000008, "Member 'W_ServerRules_C_DisplayMessageOfTheDay::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(W_ServerRules_C_DisplayMessageOfTheDay, CallFunc_GetSquadGameUserSettings_ReturnValue) == 0x000020, "Member 'W_ServerRules_C_DisplayMessageOfTheDay::CallFunc_GetSquadGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerRules_C_DisplayMessageOfTheDay, CallFunc_GetStreamerModeEnabledForLevel_ReturnValue) == 0x000028, "Member 'W_ServerRules_C_DisplayMessageOfTheDay::CallFunc_GetStreamerModeEnabledForLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerRules_C_DisplayMessageOfTheDay, CallFunc_GetSquadGameState_Return_Value) == 0x000030, "Member 'W_ServerRules_C_DisplayMessageOfTheDay::CallFunc_GetSquadGameState_Return_Value' has a wrong offset!");
static_assert(offsetof(W_ServerRules_C_DisplayMessageOfTheDay, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'W_ServerRules_C_DisplayMessageOfTheDay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerRules_C_DisplayMessageOfTheDay, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'W_ServerRules_C_DisplayMessageOfTheDay::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerRules_C_DisplayMessageOfTheDay, K2Node_Select_Default) == 0x000058, "Member 'W_ServerRules_C_DisplayMessageOfTheDay::K2Node_Select_Default' has a wrong offset!");

// Function W_ServerRules.W_ServerRules_C.Get_TB_ServerName_Text_0
// 0x0088 (0x0088 - 0x0000)
struct W_ServerRules_C_Get_TB_ServerName_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0020(0x0018)()
	class USQGameUserSettings*                    CallFunc_GetSquadGameUserSettings_ReturnValue;     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQGameState*                           CallFunc_GetSquadGameState_Return_Value;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStreamerModeEnabledForLevel_ReturnValue; // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0070(0x0018)()
};
static_assert(alignof(W_ServerRules_C_Get_TB_ServerName_Text_0) == 0x000008, "Wrong alignment on W_ServerRules_C_Get_TB_ServerName_Text_0");
static_assert(sizeof(W_ServerRules_C_Get_TB_ServerName_Text_0) == 0x000088, "Wrong size on W_ServerRules_C_Get_TB_ServerName_Text_0");
static_assert(offsetof(W_ServerRules_C_Get_TB_ServerName_Text_0, ReturnValue) == 0x000000, "Member 'W_ServerRules_C_Get_TB_ServerName_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerRules_C_Get_TB_ServerName_Text_0, Temp_bool_Variable) == 0x000018, "Member 'W_ServerRules_C_Get_TB_ServerName_Text_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_ServerRules_C_Get_TB_ServerName_Text_0, Temp_text_Variable) == 0x000020, "Member 'W_ServerRules_C_Get_TB_ServerName_Text_0::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(W_ServerRules_C_Get_TB_ServerName_Text_0, CallFunc_GetSquadGameUserSettings_ReturnValue) == 0x000038, "Member 'W_ServerRules_C_Get_TB_ServerName_Text_0::CallFunc_GetSquadGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerRules_C_Get_TB_ServerName_Text_0, CallFunc_GetSquadGameState_Return_Value) == 0x000040, "Member 'W_ServerRules_C_Get_TB_ServerName_Text_0::CallFunc_GetSquadGameState_Return_Value' has a wrong offset!");
static_assert(offsetof(W_ServerRules_C_Get_TB_ServerName_Text_0, CallFunc_GetStreamerModeEnabledForLevel_ReturnValue) == 0x000048, "Member 'W_ServerRules_C_Get_TB_ServerName_Text_0::CallFunc_GetStreamerModeEnabledForLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerRules_C_Get_TB_ServerName_Text_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'W_ServerRules_C_Get_TB_ServerName_Text_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerRules_C_Get_TB_ServerName_Text_0, CallFunc_TextIsEmpty_ReturnValue) == 0x000068, "Member 'W_ServerRules_C_Get_TB_ServerName_Text_0::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerRules_C_Get_TB_ServerName_Text_0, K2Node_Select_Default) == 0x000070, "Member 'W_ServerRules_C_Get_TB_ServerName_Text_0::K2Node_Select_Default' has a wrong offset!");

}

