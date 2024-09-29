#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_WorldActions_Entry

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_WorldActions_Entry.W_WorldActions_Entry_C.ExecuteUbergraph_W_WorldActions_Entry
// 0x0070 (0x0070 - 0x0000)
struct W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry) == 0x000008, "Wrong alignment on W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry");
static_assert(sizeof(W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry) == 0x000070, "Wrong size on W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry");
static_assert(offsetof(W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry, EntryPoint) == 0x000000, "Member 'W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry, Temp_bool_Variable) == 0x000004, "Member 'W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry, Temp_string_Variable) == 0x000008, "Member 'W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry, Temp_string_Variable_1) == 0x000018, "Member 'W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry, K2Node_ComponentBoundEvent_bIsChecked) == 0x000028, "Member 'W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry, CallFunc_GetOwningPlayer_ReturnValue) == 0x000030, "Member 'W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry, K2Node_Select_Default) == 0x000038, "Member 'W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry, K2Node_Event_IsDesignTime) == 0x000058, "Member 'W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000060, "Member 'W_WorldActions_Entry_C_ExecuteUbergraph_W_WorldActions_Entry::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function W_WorldActions_Entry.W_WorldActions_Entry_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_WorldActions_Entry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_WorldActions_Entry_C_PreConstruct) == 0x000001, "Wrong alignment on W_WorldActions_Entry_C_PreConstruct");
static_assert(sizeof(W_WorldActions_Entry_C_PreConstruct) == 0x000001, "Wrong size on W_WorldActions_Entry_C_PreConstruct");
static_assert(offsetof(W_WorldActions_Entry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_WorldActions_Entry_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_WorldActions_Entry.W_WorldActions_Entry_C.BndEvt__W_WorldActions_Entry_CheckBox_89_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct W_WorldActions_Entry_C_BndEvt__W_WorldActions_Entry_CheckBox_89_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_WorldActions_Entry_C_BndEvt__W_WorldActions_Entry_CheckBox_89_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on W_WorldActions_Entry_C_BndEvt__W_WorldActions_Entry_CheckBox_89_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(W_WorldActions_Entry_C_BndEvt__W_WorldActions_Entry_CheckBox_89_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on W_WorldActions_Entry_C_BndEvt__W_WorldActions_Entry_CheckBox_89_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(W_WorldActions_Entry_C_BndEvt__W_WorldActions_Entry_CheckBox_89_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'W_WorldActions_Entry_C_BndEvt__W_WorldActions_Entry_CheckBox_89_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function W_WorldActions_Entry.W_WorldActions_Entry_C.MarkChecked
// 0x0001 (0x0001 - 0x0000)
struct W_WorldActions_Entry_C_MarkChecked final
{
public:
	bool                                          Checked;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_WorldActions_Entry_C_MarkChecked) == 0x000001, "Wrong alignment on W_WorldActions_Entry_C_MarkChecked");
static_assert(sizeof(W_WorldActions_Entry_C_MarkChecked) == 0x000001, "Wrong size on W_WorldActions_Entry_C_MarkChecked");
static_assert(offsetof(W_WorldActions_Entry_C_MarkChecked, Checked) == 0x000000, "Member 'W_WorldActions_Entry_C_MarkChecked::Checked' has a wrong offset!");

}

