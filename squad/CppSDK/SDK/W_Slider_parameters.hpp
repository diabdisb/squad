#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Slider

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "ColoredTextRangeStruct_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function W_Slider.W_Slider_C.OnValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct W_Slider_C_OnValueChanged__DelegateSignature final
{
public:
	float                                         NewParam;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Slider_C_OnValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on W_Slider_C_OnValueChanged__DelegateSignature");
static_assert(sizeof(W_Slider_C_OnValueChanged__DelegateSignature) == 0x000004, "Wrong size on W_Slider_C_OnValueChanged__DelegateSignature");
static_assert(offsetof(W_Slider_C_OnValueChanged__DelegateSignature, NewParam) == 0x000000, "Member 'W_Slider_C_OnValueChanged__DelegateSignature::NewParam' has a wrong offset!");

// Function W_Slider.W_Slider_C.OnCaptureEnd__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct W_Slider_C_OnCaptureEnd__DelegateSignature final
{
public:
	float                                         Value_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Slider_C_OnCaptureEnd__DelegateSignature) == 0x000004, "Wrong alignment on W_Slider_C_OnCaptureEnd__DelegateSignature");
static_assert(sizeof(W_Slider_C_OnCaptureEnd__DelegateSignature) == 0x000004, "Wrong size on W_Slider_C_OnCaptureEnd__DelegateSignature");
static_assert(offsetof(W_Slider_C_OnCaptureEnd__DelegateSignature, Value_0) == 0x000000, "Member 'W_Slider_C_OnCaptureEnd__DelegateSignature::Value_0' has a wrong offset!");

// Function W_Slider.W_Slider_C.ExecuteUbergraph_W_Slider
// 0x0130 (0x0130 - 0x0000)
struct W_Slider_C_ExecuteUbergraph_W_Slider final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0010(0x0018)()
	float                                         CallFunc_MapRangeUnclamped_ReturnValue;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text_1;                 // 0x0030(0x0018)(ConstParm)
	float                                         CallFunc_RoundingToPower_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_RemovePercentage_OutText;                 // 0x0050(0x0018)()
	float                                         CallFunc_GridSnap_Float_ReturnValue;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNumeric_ReturnValue;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0098(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B2[0x6];                                       // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_RemovePercentage_OutText_1;               // 0x00B8(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_2;          // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_StringToFloat_ReturnValue;           // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNumeric_ReturnValue_1;                  // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EE[0x2];                                       // 0x00EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetValue_ReturnValue;                     // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MapRangeUnclamped_ReturnValue_1;          // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x3];                                       // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x3];                                      // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RoundingToPower_ReturnValue_1;            // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default_2;                           // 0x0110(0x0018)()
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Slider_C_ExecuteUbergraph_W_Slider) == 0x000008, "Wrong alignment on W_Slider_C_ExecuteUbergraph_W_Slider");
static_assert(sizeof(W_Slider_C_ExecuteUbergraph_W_Slider) == 0x000130, "Wrong size on W_Slider_C_ExecuteUbergraph_W_Slider");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, EntryPoint) == 0x000000, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, K2Node_Event_IsDesignTime) == 0x000004, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, K2Node_ComponentBoundEvent_Value) == 0x000008, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, Temp_text_Variable) == 0x000010, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, CallFunc_MapRangeUnclamped_ReturnValue) == 0x000028, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::CallFunc_MapRangeUnclamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, K2Node_ComponentBoundEvent_Text_1) == 0x000030, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::K2Node_ComponentBoundEvent_Text_1' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, CallFunc_RoundingToPower_ReturnValue) == 0x000048, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::CallFunc_RoundingToPower_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, CallFunc_RemovePercentage_OutText) == 0x000050, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::CallFunc_RemovePercentage_OutText' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, CallFunc_GridSnap_Float_ReturnValue) == 0x000068, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::CallFunc_GridSnap_Float_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, CallFunc_TextIsEmpty_ReturnValue) == 0x00006C, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, CallFunc_Conv_TextToString_ReturnValue) == 0x000070, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000080, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, CallFunc_IsNumeric_ReturnValue) == 0x000090, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::CallFunc_IsNumeric_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, CallFunc_Len_ReturnValue) == 0x000094, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, K2Node_ComponentBoundEvent_Text) == 0x000098, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, K2Node_ComponentBoundEvent_CommitMethod) == 0x0000B0, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, CallFunc_Less_IntInt_ReturnValue) == 0x0000B1, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, CallFunc_RemovePercentage_OutText_1) == 0x0000B8, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::CallFunc_RemovePercentage_OutText_1' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, CallFunc_BooleanAND_ReturnValue) == 0x0000D0, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, CallFunc_Conv_TextToString_ReturnValue_2) == 0x0000D8, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::CallFunc_Conv_TextToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, CallFunc_Conv_StringToFloat_ReturnValue) == 0x0000E8, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::CallFunc_Conv_StringToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, CallFunc_IsNumeric_ReturnValue_1) == 0x0000EC, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::CallFunc_IsNumeric_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, Temp_bool_Variable) == 0x0000ED, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, CallFunc_GetValue_ReturnValue) == 0x0000F0, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::CallFunc_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, CallFunc_MapRangeUnclamped_ReturnValue_1) == 0x0000F4, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::CallFunc_MapRangeUnclamped_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, Temp_bool_Variable_1) == 0x0000F8, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, CallFunc_FClamp_ReturnValue) == 0x0000FC, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, Temp_bool_Variable_2) == 0x000100, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, CallFunc_RoundingToPower_ReturnValue_1) == 0x000104, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::CallFunc_RoundingToPower_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, K2Node_Select_Default) == 0x000108, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, K2Node_Select_Default_1) == 0x00010C, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, K2Node_Select_Default_2) == 0x000110, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000128, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_ExecuteUbergraph_W_Slider, CallFunc_Not_PreBool_ReturnValue) == 0x000129, "Member 'W_Slider_C_ExecuteUbergraph_W_Slider::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function W_Slider.W_Slider_C.BndEvt__SliderValue_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct W_Slider_C_BndEvt__SliderValue_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Slider_C_BndEvt__SliderValue_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on W_Slider_C_BndEvt__SliderValue_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature");
static_assert(sizeof(W_Slider_C_BndEvt__SliderValue_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on W_Slider_C_BndEvt__SliderValue_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature");
static_assert(offsetof(W_Slider_C_BndEvt__SliderValue_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'W_Slider_C_BndEvt__SliderValue_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(W_Slider_C_BndEvt__SliderValue_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'W_Slider_C_BndEvt__SliderValue_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function W_Slider.W_Slider_C.BndEvt__SliderValue_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct W_Slider_C_BndEvt__SliderValue_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(W_Slider_C_BndEvt__SliderValue_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on W_Slider_C_BndEvt__SliderValue_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature");
static_assert(sizeof(W_Slider_C_BndEvt__SliderValue_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature) == 0x000018, "Wrong size on W_Slider_C_BndEvt__SliderValue_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature");
static_assert(offsetof(W_Slider_C_BndEvt__SliderValue_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'W_Slider_C_BndEvt__SliderValue_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function W_Slider.W_Slider_C.BndEvt__BaseSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct W_Slider_C_BndEvt__BaseSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Slider_C_BndEvt__BaseSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on W_Slider_C_BndEvt__BaseSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(W_Slider_C_BndEvt__BaseSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on W_Slider_C_BndEvt__BaseSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(W_Slider_C_BndEvt__BaseSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature, Value_0) == 0x000000, "Member 'W_Slider_C_BndEvt__BaseSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature::Value_0' has a wrong offset!");

// Function W_Slider.W_Slider_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_Slider_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Slider_C_PreConstruct) == 0x000001, "Wrong alignment on W_Slider_C_PreConstruct");
static_assert(sizeof(W_Slider_C_PreConstruct) == 0x000001, "Wrong size on W_Slider_C_PreConstruct");
static_assert(offsetof(W_Slider_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_Slider_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_Slider.W_Slider_C.SetValue
// 0x0004 (0x0004 - 0x0000)
struct W_Slider_C_SetValue final
{
public:
	float                                         Value_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Slider_C_SetValue) == 0x000004, "Wrong alignment on W_Slider_C_SetValue");
static_assert(sizeof(W_Slider_C_SetValue) == 0x000004, "Wrong size on W_Slider_C_SetValue");
static_assert(offsetof(W_Slider_C_SetValue, Value_0) == 0x000000, "Member 'W_Slider_C_SetValue::Value_0' has a wrong offset!");

// Function W_Slider.W_Slider_C.UpdateSliderTextValue
// 0x0080 (0x0080 - 0x0000)
struct W_Slider_C_UpdateSliderTextValue final
{
public:
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0000(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0018(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0068(0x0018)()
};
static_assert(alignof(W_Slider_C_UpdateSliderTextValue) == 0x000008, "Wrong alignment on W_Slider_C_UpdateSliderTextValue");
static_assert(sizeof(W_Slider_C_UpdateSliderTextValue) == 0x000080, "Wrong size on W_Slider_C_UpdateSliderTextValue");
static_assert(offsetof(W_Slider_C_UpdateSliderTextValue, CallFunc_Conv_FloatToText_ReturnValue) == 0x000000, "Member 'W_Slider_C_UpdateSliderTextValue::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_UpdateSliderTextValue, K2Node_MakeStruct_FormatArgumentData) == 0x000018, "Member 'W_Slider_C_UpdateSliderTextValue::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(W_Slider_C_UpdateSliderTextValue, K2Node_MakeArray_Array) == 0x000058, "Member 'W_Slider_C_UpdateSliderTextValue::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(W_Slider_C_UpdateSliderTextValue, CallFunc_Format_ReturnValue) == 0x000068, "Member 'W_Slider_C_UpdateSliderTextValue::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function W_Slider.W_Slider_C.UpdateSliderValue
// 0x0008 (0x0008 - 0x0000)
struct W_Slider_C_UpdateSliderValue final
{
public:
	float                                         CallFunc_MapRangeUnclamped_ReturnValue;            // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Slider_C_UpdateSliderValue) == 0x000004, "Wrong alignment on W_Slider_C_UpdateSliderValue");
static_assert(sizeof(W_Slider_C_UpdateSliderValue) == 0x000008, "Wrong size on W_Slider_C_UpdateSliderValue");
static_assert(offsetof(W_Slider_C_UpdateSliderValue, CallFunc_MapRangeUnclamped_ReturnValue) == 0x000000, "Member 'W_Slider_C_UpdateSliderValue::CallFunc_MapRangeUnclamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_UpdateSliderValue, CallFunc_FClamp_ReturnValue) == 0x000004, "Member 'W_Slider_C_UpdateSliderValue::CallFunc_FClamp_ReturnValue' has a wrong offset!");

// Function W_Slider.W_Slider_C.RemovePercentage
// 0x0068 (0x0068 - 0x0000)
struct W_Slider_C_RemovePercentage final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   OutText;                                           // 0x0018(0x0018)(Parm, OutParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
};
static_assert(alignof(W_Slider_C_RemovePercentage) == 0x000008, "Wrong alignment on W_Slider_C_RemovePercentage");
static_assert(sizeof(W_Slider_C_RemovePercentage) == 0x000068, "Wrong size on W_Slider_C_RemovePercentage");
static_assert(offsetof(W_Slider_C_RemovePercentage, InText) == 0x000000, "Member 'W_Slider_C_RemovePercentage::InText' has a wrong offset!");
static_assert(offsetof(W_Slider_C_RemovePercentage, OutText) == 0x000018, "Member 'W_Slider_C_RemovePercentage::OutText' has a wrong offset!");
static_assert(offsetof(W_Slider_C_RemovePercentage, CallFunc_Conv_TextToString_ReturnValue) == 0x000030, "Member 'W_Slider_C_RemovePercentage::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_RemovePercentage, CallFunc_Replace_ReturnValue) == 0x000040, "Member 'W_Slider_C_RemovePercentage::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_RemovePercentage, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'W_Slider_C_RemovePercentage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function W_Slider.W_Slider_C.GetTextColor
// 0x00A8 (0x00A8 - 0x0000)
struct W_Slider_C_GetTextColor final
{
public:
	float                                         Value_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TextColor_0;                                       // 0x0004(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   WarningText;                                       // 0x0018(0x0018)(Parm, OutParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColor_White_ReturnValue;            // 0x003C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FLinearColor>                   CallFunc_Map_Keys_Keys;                            // 0x0050(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Array_Get_Item;                           // 0x0064(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FColoredTextRangeStruct                CallFunc_Map_Find_Value;                           // 0x0078(0x0020)(HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Slider_C_GetTextColor) == 0x000008, "Wrong alignment on W_Slider_C_GetTextColor");
static_assert(sizeof(W_Slider_C_GetTextColor) == 0x0000A8, "Wrong size on W_Slider_C_GetTextColor");
static_assert(offsetof(W_Slider_C_GetTextColor, Value_0) == 0x000000, "Member 'W_Slider_C_GetTextColor::Value_0' has a wrong offset!");
static_assert(offsetof(W_Slider_C_GetTextColor, TextColor_0) == 0x000004, "Member 'W_Slider_C_GetTextColor::TextColor_0' has a wrong offset!");
static_assert(offsetof(W_Slider_C_GetTextColor, WarningText) == 0x000018, "Member 'W_Slider_C_GetTextColor::WarningText' has a wrong offset!");
static_assert(offsetof(W_Slider_C_GetTextColor, Temp_int_Array_Index_Variable) == 0x000030, "Member 'W_Slider_C_GetTextColor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_Slider_C_GetTextColor, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'W_Slider_C_GetTextColor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_Slider_C_GetTextColor, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'W_Slider_C_GetTextColor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_GetTextColor, CallFunc_LinearColor_White_ReturnValue) == 0x00003C, "Member 'W_Slider_C_GetTextColor::CallFunc_LinearColor_White_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_GetTextColor, CallFunc_Map_Keys_Keys) == 0x000050, "Member 'W_Slider_C_GetTextColor::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(W_Slider_C_GetTextColor, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'W_Slider_C_GetTextColor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_GetTextColor, CallFunc_Array_Get_Item) == 0x000064, "Member 'W_Slider_C_GetTextColor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_Slider_C_GetTextColor, CallFunc_Less_IntInt_ReturnValue) == 0x000074, "Member 'W_Slider_C_GetTextColor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_GetTextColor, CallFunc_Map_Find_Value) == 0x000078, "Member 'W_Slider_C_GetTextColor::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(W_Slider_C_GetTextColor, CallFunc_Map_Find_ReturnValue) == 0x000098, "Member 'W_Slider_C_GetTextColor::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_GetTextColor, CallFunc_BreakVector2D_X) == 0x00009C, "Member 'W_Slider_C_GetTextColor::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(W_Slider_C_GetTextColor, CallFunc_BreakVector2D_Y) == 0x0000A0, "Member 'W_Slider_C_GetTextColor::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(W_Slider_C_GetTextColor, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x0000A4, "Member 'W_Slider_C_GetTextColor::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_GetTextColor, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0000A5, "Member 'W_Slider_C_GetTextColor::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_GetTextColor, CallFunc_BooleanAND_ReturnValue) == 0x0000A6, "Member 'W_Slider_C_GetTextColor::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function W_Slider.W_Slider_C.UpdateStyle
// 0x0340 (0x0340 - 0x0000)
struct W_Slider_C_UpdateStyle final
{
public:
	struct FSliderStyle                           CallFunc_UpdateSliderStyle_NewParam;               // 0x0000(0x0340)()
};
static_assert(alignof(W_Slider_C_UpdateStyle) == 0x000008, "Wrong alignment on W_Slider_C_UpdateStyle");
static_assert(sizeof(W_Slider_C_UpdateStyle) == 0x000340, "Wrong size on W_Slider_C_UpdateStyle");
static_assert(offsetof(W_Slider_C_UpdateStyle, CallFunc_UpdateSliderStyle_NewParam) == 0x000000, "Member 'W_Slider_C_UpdateStyle::CallFunc_UpdateSliderStyle_NewParam' has a wrong offset!");

// Function W_Slider.W_Slider_C.RoundingToPower
// 0x001C (0x001C - 0x0000)
struct W_Slider_C_RoundingToPower final
{
public:
	float                                         InputPin;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Log_ReturnValue;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Slider_C_RoundingToPower) == 0x000004, "Wrong alignment on W_Slider_C_RoundingToPower");
static_assert(sizeof(W_Slider_C_RoundingToPower) == 0x00001C, "Wrong size on W_Slider_C_RoundingToPower");
static_assert(offsetof(W_Slider_C_RoundingToPower, InputPin) == 0x000000, "Member 'W_Slider_C_RoundingToPower::InputPin' has a wrong offset!");
static_assert(offsetof(W_Slider_C_RoundingToPower, ReturnValue) == 0x000004, "Member 'W_Slider_C_RoundingToPower::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_RoundingToPower, CallFunc_Log_ReturnValue) == 0x000008, "Member 'W_Slider_C_RoundingToPower::CallFunc_Log_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_RoundingToPower, CallFunc_Round_ReturnValue) == 0x00000C, "Member 'W_Slider_C_RoundingToPower::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_RoundingToPower, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000010, "Member 'W_Slider_C_RoundingToPower::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_RoundingToPower, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000014, "Member 'W_Slider_C_RoundingToPower::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Slider_C_RoundingToPower, CallFunc_FClamp_ReturnValue) == 0x000018, "Member 'W_Slider_C_RoundingToPower::CallFunc_FClamp_ReturnValue' has a wrong offset!");

// Function W_Slider.W_Slider_C.UpdateSliderStyle
// 0x09C0 (0x09C0 - 0x0000)
struct W_Slider_C_UpdateSliderStyle final
{
public:
	struct FSliderStyle                           WidgetStyle;                                       // 0x0000(0x0340)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSliderStyle                           NewParam;                                          // 0x0340(0x0340)(Parm, OutParm)
	struct FSliderStyle                           K2Node_MakeStruct_SliderStyle;                     // 0x0680(0x0340)()
};
static_assert(alignof(W_Slider_C_UpdateSliderStyle) == 0x000008, "Wrong alignment on W_Slider_C_UpdateSliderStyle");
static_assert(sizeof(W_Slider_C_UpdateSliderStyle) == 0x0009C0, "Wrong size on W_Slider_C_UpdateSliderStyle");
static_assert(offsetof(W_Slider_C_UpdateSliderStyle, WidgetStyle) == 0x000000, "Member 'W_Slider_C_UpdateSliderStyle::WidgetStyle' has a wrong offset!");
static_assert(offsetof(W_Slider_C_UpdateSliderStyle, NewParam) == 0x000340, "Member 'W_Slider_C_UpdateSliderStyle::NewParam' has a wrong offset!");
static_assert(offsetof(W_Slider_C_UpdateSliderStyle, K2Node_MakeStruct_SliderStyle) == 0x000680, "Member 'W_Slider_C_UpdateSliderStyle::K2Node_MakeStruct_SliderStyle' has a wrong offset!");

}

