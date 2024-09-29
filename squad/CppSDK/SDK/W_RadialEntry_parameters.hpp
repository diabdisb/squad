#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_RadialEntry

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_RadialEntry.W_RadialEntry_C.ExecuteUbergraph_W_RadialEntry
// 0x0030 (0x0030 - 0x0000)
struct W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry) == 0x000008, "Wrong alignment on W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry");
static_assert(sizeof(W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry) == 0x000030, "Wrong size on W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry");
static_assert(offsetof(W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry, EntryPoint) == 0x000000, "Member 'W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry, K2Node_Event_IsDesignTime) == 0x000004, "Member 'W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry, CallFunc_Divide_IntInt_ReturnValue) == 0x000010, "Member 'W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000014, "Member 'W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000018, "Member 'W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x00001C, "Member 'W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000020, "Member 'W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000024, "Member 'W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000028, "Member 'W_RadialEntry_C_ExecuteUbergraph_W_RadialEntry::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");

// Function W_RadialEntry.W_RadialEntry_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_RadialEntry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_RadialEntry_C_PreConstruct) == 0x000001, "Wrong alignment on W_RadialEntry_C_PreConstruct");
static_assert(sizeof(W_RadialEntry_C_PreConstruct) == 0x000001, "Wrong size on W_RadialEntry_C_PreConstruct");
static_assert(offsetof(W_RadialEntry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_RadialEntry_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

