#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TicketDetailProgress

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function W_TicketDetailProgress.W_TicketDetailProgress_C.ExecuteUbergraph_W_TicketDetailProgress
// 0x000C (0x000C - 0x0000)
struct W_TicketDetailProgress_C_ExecuteUbergraph_W_TicketDetailProgress final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TicketDetailProgress_C_ExecuteUbergraph_W_TicketDetailProgress) == 0x000004, "Wrong alignment on W_TicketDetailProgress_C_ExecuteUbergraph_W_TicketDetailProgress");
static_assert(sizeof(W_TicketDetailProgress_C_ExecuteUbergraph_W_TicketDetailProgress) == 0x00000C, "Wrong size on W_TicketDetailProgress_C_ExecuteUbergraph_W_TicketDetailProgress");
static_assert(offsetof(W_TicketDetailProgress_C_ExecuteUbergraph_W_TicketDetailProgress, EntryPoint) == 0x000000, "Member 'W_TicketDetailProgress_C_ExecuteUbergraph_W_TicketDetailProgress::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_TicketDetailProgress_C_ExecuteUbergraph_W_TicketDetailProgress, Temp_bool_Variable) == 0x000004, "Member 'W_TicketDetailProgress_C_ExecuteUbergraph_W_TicketDetailProgress::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_TicketDetailProgress_C_ExecuteUbergraph_W_TicketDetailProgress, Temp_byte_Variable) == 0x000005, "Member 'W_TicketDetailProgress_C_ExecuteUbergraph_W_TicketDetailProgress::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_TicketDetailProgress_C_ExecuteUbergraph_W_TicketDetailProgress, Temp_byte_Variable_1) == 0x000006, "Member 'W_TicketDetailProgress_C_ExecuteUbergraph_W_TicketDetailProgress::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_TicketDetailProgress_C_ExecuteUbergraph_W_TicketDetailProgress, K2Node_Event_IsDesignTime) == 0x000007, "Member 'W_TicketDetailProgress_C_ExecuteUbergraph_W_TicketDetailProgress::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_TicketDetailProgress_C_ExecuteUbergraph_W_TicketDetailProgress, K2Node_Select_Default) == 0x000008, "Member 'W_TicketDetailProgress_C_ExecuteUbergraph_W_TicketDetailProgress::K2Node_Select_Default' has a wrong offset!");

// Function W_TicketDetailProgress.W_TicketDetailProgress_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_TicketDetailProgress_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_TicketDetailProgress_C_PreConstruct) == 0x000001, "Wrong alignment on W_TicketDetailProgress_C_PreConstruct");
static_assert(sizeof(W_TicketDetailProgress_C_PreConstruct) == 0x000001, "Wrong size on W_TicketDetailProgress_C_PreConstruct");
static_assert(offsetof(W_TicketDetailProgress_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_TicketDetailProgress_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_TicketDetailProgress.W_TicketDetailProgress_C.ChangeProgressColor
// 0x0010 (0x0010 - 0x0000)
struct W_TicketDetailProgress_C_ChangeProgressColor final
{
public:
	struct FLinearColor                           NewColor;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TicketDetailProgress_C_ChangeProgressColor) == 0x000004, "Wrong alignment on W_TicketDetailProgress_C_ChangeProgressColor");
static_assert(sizeof(W_TicketDetailProgress_C_ChangeProgressColor) == 0x000010, "Wrong size on W_TicketDetailProgress_C_ChangeProgressColor");
static_assert(offsetof(W_TicketDetailProgress_C_ChangeProgressColor, NewColor) == 0x000000, "Member 'W_TicketDetailProgress_C_ChangeProgressColor::NewColor' has a wrong offset!");

// Function W_TicketDetailProgress.W_TicketDetailProgress_C.SetValue
// 0x0020 (0x0020 - 0x0000)
struct W_TicketDetailProgress_C_SetValue final
{
public:
	int32                                         NewValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(W_TicketDetailProgress_C_SetValue) == 0x000008, "Wrong alignment on W_TicketDetailProgress_C_SetValue");
static_assert(sizeof(W_TicketDetailProgress_C_SetValue) == 0x000020, "Wrong size on W_TicketDetailProgress_C_SetValue");
static_assert(offsetof(W_TicketDetailProgress_C_SetValue, NewValue) == 0x000000, "Member 'W_TicketDetailProgress_C_SetValue::NewValue' has a wrong offset!");
static_assert(offsetof(W_TicketDetailProgress_C_SetValue, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'W_TicketDetailProgress_C_SetValue::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function W_TicketDetailProgress.W_TicketDetailProgress_C.UpdatePercentage
// 0x0010 (0x0010 - 0x0000)
struct W_TicketDetailProgress_C_UpdatePercentage final
{
public:
	int32                                         MaxValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TicketDetailProgress_C_UpdatePercentage) == 0x000004, "Wrong alignment on W_TicketDetailProgress_C_UpdatePercentage");
static_assert(sizeof(W_TicketDetailProgress_C_UpdatePercentage) == 0x000010, "Wrong size on W_TicketDetailProgress_C_UpdatePercentage");
static_assert(offsetof(W_TicketDetailProgress_C_UpdatePercentage, MaxValue) == 0x000000, "Member 'W_TicketDetailProgress_C_UpdatePercentage::MaxValue' has a wrong offset!");
static_assert(offsetof(W_TicketDetailProgress_C_UpdatePercentage, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000004, "Member 'W_TicketDetailProgress_C_UpdatePercentage::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TicketDetailProgress_C_UpdatePercentage, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000008, "Member 'W_TicketDetailProgress_C_UpdatePercentage::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_TicketDetailProgress_C_UpdatePercentage, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00000C, "Member 'W_TicketDetailProgress_C_UpdatePercentage::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");

}

