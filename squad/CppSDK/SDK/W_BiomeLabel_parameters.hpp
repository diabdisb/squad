#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_BiomeLabel

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_BiomeLabel.W_BiomeLabel_C.ExecuteUbergraph_W_BiomeLabel
// 0x0050 (0x0050 - 0x0000)
struct W_BiomeLabel_C_ExecuteUbergraph_W_BiomeLabel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0020(0x0028)()
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_BiomeLabel_C_ExecuteUbergraph_W_BiomeLabel) == 0x000008, "Wrong alignment on W_BiomeLabel_C_ExecuteUbergraph_W_BiomeLabel");
static_assert(sizeof(W_BiomeLabel_C_ExecuteUbergraph_W_BiomeLabel) == 0x000050, "Wrong size on W_BiomeLabel_C_ExecuteUbergraph_W_BiomeLabel");
static_assert(offsetof(W_BiomeLabel_C_ExecuteUbergraph_W_BiomeLabel, EntryPoint) == 0x000000, "Member 'W_BiomeLabel_C_ExecuteUbergraph_W_BiomeLabel::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_BiomeLabel_C_ExecuteUbergraph_W_BiomeLabel, Temp_bool_Variable) == 0x000004, "Member 'W_BiomeLabel_C_ExecuteUbergraph_W_BiomeLabel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_BiomeLabel_C_ExecuteUbergraph_W_BiomeLabel, Temp_object_Variable) == 0x000008, "Member 'W_BiomeLabel_C_ExecuteUbergraph_W_BiomeLabel::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(W_BiomeLabel_C_ExecuteUbergraph_W_BiomeLabel, Temp_object_Variable_1) == 0x000010, "Member 'W_BiomeLabel_C_ExecuteUbergraph_W_BiomeLabel::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(W_BiomeLabel_C_ExecuteUbergraph_W_BiomeLabel, K2Node_Select_Default) == 0x000018, "Member 'W_BiomeLabel_C_ExecuteUbergraph_W_BiomeLabel::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_BiomeLabel_C_ExecuteUbergraph_W_BiomeLabel, K2Node_MakeStruct_SlateColor) == 0x000020, "Member 'W_BiomeLabel_C_ExecuteUbergraph_W_BiomeLabel::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(W_BiomeLabel_C_ExecuteUbergraph_W_BiomeLabel, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000048, "Member 'W_BiomeLabel_C_ExecuteUbergraph_W_BiomeLabel::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}

