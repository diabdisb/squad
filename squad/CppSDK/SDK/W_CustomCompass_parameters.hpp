#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CustomCompass

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_CustomCompass.W_CustomCompass_C.ExecuteUbergraph_W_CustomCompass
// 0x0010 (0x0010 - 0x0000)
struct W_CustomCompass_C_ExecuteUbergraph_W_CustomCompass final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CustomCompass_C_ExecuteUbergraph_W_CustomCompass) == 0x000008, "Wrong alignment on W_CustomCompass_C_ExecuteUbergraph_W_CustomCompass");
static_assert(sizeof(W_CustomCompass_C_ExecuteUbergraph_W_CustomCompass) == 0x000010, "Wrong size on W_CustomCompass_C_ExecuteUbergraph_W_CustomCompass");
static_assert(offsetof(W_CustomCompass_C_ExecuteUbergraph_W_CustomCompass, EntryPoint) == 0x000000, "Member 'W_CustomCompass_C_ExecuteUbergraph_W_CustomCompass::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_CustomCompass_C_ExecuteUbergraph_W_CustomCompass, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'W_CustomCompass_C_ExecuteUbergraph_W_CustomCompass::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}

