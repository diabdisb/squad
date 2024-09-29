#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InputCapture

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function InputCapture.InputCapture_C.OnInput__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct InputCapture_C_OnInput__DelegateSignature final
{
public:
	struct FKey                                   InputKey;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(InputCapture_C_OnInput__DelegateSignature) == 0x000008, "Wrong alignment on InputCapture_C_OnInput__DelegateSignature");
static_assert(sizeof(InputCapture_C_OnInput__DelegateSignature) == 0x000018, "Wrong size on InputCapture_C_OnInput__DelegateSignature");
static_assert(offsetof(InputCapture_C_OnInput__DelegateSignature, InputKey) == 0x000000, "Member 'InputCapture_C_OnInput__DelegateSignature::InputKey' has a wrong offset!");

// Function InputCapture.InputCapture_C.OnMouseButtonDown
// 0x03A8 (0x03A8 - 0x0000)
struct InputCapture_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x0168(0x0018)(HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0180(0x00B8)()
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0238(0x00B8)()
	struct FEventReply                            K2Node_Select_Default;                             // 0x02F0(0x00B8)()
};
static_assert(alignof(InputCapture_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on InputCapture_C_OnMouseButtonDown");
static_assert(sizeof(InputCapture_C_OnMouseButtonDown) == 0x0003A8, "Wrong size on InputCapture_C_OnMouseButtonDown");
static_assert(offsetof(InputCapture_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'InputCapture_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'InputCapture_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'InputCapture_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseButtonDown, Temp_bool_Variable) == 0x000160, "Member 'InputCapture_C_OnMouseButtonDown::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseButtonDown, CallFunc_PointerEvent_GetEffectingButton_ReturnValue) == 0x000168, "Member 'InputCapture_C_OnMouseButtonDown::CallFunc_PointerEvent_GetEffectingButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000180, "Member 'InputCapture_C_OnMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000238, "Member 'InputCapture_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseButtonDown, K2Node_Select_Default) == 0x0002F0, "Member 'InputCapture_C_OnMouseButtonDown::K2Node_Select_Default' has a wrong offset!");

// Function InputCapture.InputCapture_C.OnMouseWheel
// 0x0398 (0x0398 - 0x0000)
struct InputCapture_C_OnMouseWheel final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x3];                                      // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_PointerEvent_GetWheelDelta_ReturnValue;   // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0170(0x00B8)()
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0228(0x00B8)()
	struct FEventReply                            K2Node_Select_Default;                             // 0x02E0(0x00B8)()
};
static_assert(alignof(InputCapture_C_OnMouseWheel) == 0x000008, "Wrong alignment on InputCapture_C_OnMouseWheel");
static_assert(sizeof(InputCapture_C_OnMouseWheel) == 0x000398, "Wrong size on InputCapture_C_OnMouseWheel");
static_assert(offsetof(InputCapture_C_OnMouseWheel, MyGeometry) == 0x000000, "Member 'InputCapture_C_OnMouseWheel::MyGeometry' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseWheel, MouseEvent) == 0x000038, "Member 'InputCapture_C_OnMouseWheel::MouseEvent' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseWheel, ReturnValue) == 0x0000A8, "Member 'InputCapture_C_OnMouseWheel::ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseWheel, Temp_bool_Variable) == 0x000160, "Member 'InputCapture_C_OnMouseWheel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseWheel, CallFunc_PointerEvent_GetWheelDelta_ReturnValue) == 0x000164, "Member 'InputCapture_C_OnMouseWheel::CallFunc_PointerEvent_GetWheelDelta_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseWheel, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000168, "Member 'InputCapture_C_OnMouseWheel::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseWheel, CallFunc_Unhandled_ReturnValue) == 0x000170, "Member 'InputCapture_C_OnMouseWheel::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseWheel, CallFunc_Handled_ReturnValue) == 0x000228, "Member 'InputCapture_C_OnMouseWheel::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseWheel, K2Node_Select_Default) == 0x0002E0, "Member 'InputCapture_C_OnMouseWheel::K2Node_Select_Default' has a wrong offset!");

// Function InputCapture.InputCapture_C.OnKeyDown
// 0x0370 (0x0370 - 0x0000)
struct InputCapture_C_OnKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x0130(0x0018)(HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0148(0x00B8)()
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0200(0x00B8)()
	struct FEventReply                            K2Node_Select_Default;                             // 0x02B8(0x00B8)()
};
static_assert(alignof(InputCapture_C_OnKeyDown) == 0x000008, "Wrong alignment on InputCapture_C_OnKeyDown");
static_assert(sizeof(InputCapture_C_OnKeyDown) == 0x000370, "Wrong size on InputCapture_C_OnKeyDown");
static_assert(offsetof(InputCapture_C_OnKeyDown, MyGeometry) == 0x000000, "Member 'InputCapture_C_OnKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnKeyDown, InKeyEvent) == 0x000038, "Member 'InputCapture_C_OnKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnKeyDown, ReturnValue) == 0x000070, "Member 'InputCapture_C_OnKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnKeyDown, Temp_bool_Variable) == 0x000128, "Member 'InputCapture_C_OnKeyDown::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnKeyDown, CallFunc_GetKey_ReturnValue) == 0x000130, "Member 'InputCapture_C_OnKeyDown::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnKeyDown, CallFunc_Unhandled_ReturnValue) == 0x000148, "Member 'InputCapture_C_OnKeyDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnKeyDown, CallFunc_Handled_ReturnValue) == 0x000200, "Member 'InputCapture_C_OnKeyDown::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnKeyDown, K2Node_Select_Default) == 0x0002B8, "Member 'InputCapture_C_OnKeyDown::K2Node_Select_Default' has a wrong offset!");

// Function InputCapture.InputCapture_C.OnMouseMove
// 0x0408 (0x0408 - 0x0000)
struct InputCapture_C_OnMouseMove final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x3];                                      // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_PointerEvent_GetCursorDelta_ReturnValue;  // 0x0164(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   Temp_struct_Variable;                              // 0x0170(0x0018)(HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue_1;                        // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize2D_ReturnValue;                      // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19D[0x3];                                      // 0x019D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Abs_ReturnValue_2;                        // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A5[0x3];                                      // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   Temp_struct_Variable_1;                            // 0x01A8(0x0018)(HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C1[0x7];                                      // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_Select_Default;                             // 0x01C8(0x0018)(HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x01E0(0x00B8)()
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0298(0x00B8)()
	struct FEventReply                            K2Node_Select_Default_1;                           // 0x0350(0x00B8)()
};
static_assert(alignof(InputCapture_C_OnMouseMove) == 0x000008, "Wrong alignment on InputCapture_C_OnMouseMove");
static_assert(sizeof(InputCapture_C_OnMouseMove) == 0x000408, "Wrong size on InputCapture_C_OnMouseMove");
static_assert(offsetof(InputCapture_C_OnMouseMove, MyGeometry) == 0x000000, "Member 'InputCapture_C_OnMouseMove::MyGeometry' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseMove, MouseEvent) == 0x000038, "Member 'InputCapture_C_OnMouseMove::MouseEvent' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseMove, ReturnValue) == 0x0000A8, "Member 'InputCapture_C_OnMouseMove::ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseMove, Temp_bool_Variable) == 0x000160, "Member 'InputCapture_C_OnMouseMove::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseMove, CallFunc_PointerEvent_GetCursorDelta_ReturnValue) == 0x000164, "Member 'InputCapture_C_OnMouseMove::CallFunc_PointerEvent_GetCursorDelta_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseMove, Temp_struct_Variable) == 0x000170, "Member 'InputCapture_C_OnMouseMove::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseMove, CallFunc_BreakVector2D_X) == 0x000188, "Member 'InputCapture_C_OnMouseMove::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseMove, CallFunc_BreakVector2D_Y) == 0x00018C, "Member 'InputCapture_C_OnMouseMove::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseMove, CallFunc_Abs_ReturnValue) == 0x000190, "Member 'InputCapture_C_OnMouseMove::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseMove, CallFunc_Abs_ReturnValue_1) == 0x000194, "Member 'InputCapture_C_OnMouseMove::CallFunc_Abs_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseMove, CallFunc_VSize2D_ReturnValue) == 0x000198, "Member 'InputCapture_C_OnMouseMove::CallFunc_VSize2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseMove, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00019C, "Member 'InputCapture_C_OnMouseMove::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseMove, CallFunc_Abs_ReturnValue_2) == 0x0001A0, "Member 'InputCapture_C_OnMouseMove::CallFunc_Abs_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseMove, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x0001A4, "Member 'InputCapture_C_OnMouseMove::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseMove, Temp_struct_Variable_1) == 0x0001A8, "Member 'InputCapture_C_OnMouseMove::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseMove, Temp_bool_Variable_1) == 0x0001C0, "Member 'InputCapture_C_OnMouseMove::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseMove, K2Node_Select_Default) == 0x0001C8, "Member 'InputCapture_C_OnMouseMove::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseMove, CallFunc_Unhandled_ReturnValue) == 0x0001E0, "Member 'InputCapture_C_OnMouseMove::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseMove, CallFunc_Handled_ReturnValue) == 0x000298, "Member 'InputCapture_C_OnMouseMove::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnMouseMove, K2Node_Select_Default_1) == 0x000350, "Member 'InputCapture_C_OnMouseMove::K2Node_Select_Default_1' has a wrong offset!");

// Function InputCapture.InputCapture_C.OnAnalogValueChanged
// 0x03C0 (0x03C0 - 0x0000)
struct InputCapture_C_OnAnalogValueChanged final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FAnalogInputEvent                      InAnalogInputEvent;                                // 0x0038(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0078(0x00B8)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyEvent                              CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue; // 0x0138(0x0038)()
	float                                         CallFunc_GetAnalogValue_ReturnValue;               // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_174[0x4];                                      // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x0178(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Key_IsAxis1D_ReturnValue;                 // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_193[0x5];                                      // 0x0193(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0198(0x00B8)()
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0250(0x00B8)()
	struct FEventReply                            K2Node_Select_Default;                             // 0x0308(0x00B8)()
};
static_assert(alignof(InputCapture_C_OnAnalogValueChanged) == 0x000008, "Wrong alignment on InputCapture_C_OnAnalogValueChanged");
static_assert(sizeof(InputCapture_C_OnAnalogValueChanged) == 0x0003C0, "Wrong size on InputCapture_C_OnAnalogValueChanged");
static_assert(offsetof(InputCapture_C_OnAnalogValueChanged, MyGeometry) == 0x000000, "Member 'InputCapture_C_OnAnalogValueChanged::MyGeometry' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnAnalogValueChanged, InAnalogInputEvent) == 0x000038, "Member 'InputCapture_C_OnAnalogValueChanged::InAnalogInputEvent' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnAnalogValueChanged, ReturnValue) == 0x000078, "Member 'InputCapture_C_OnAnalogValueChanged::ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnAnalogValueChanged, Temp_bool_Variable) == 0x000130, "Member 'InputCapture_C_OnAnalogValueChanged::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnAnalogValueChanged, CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue) == 0x000138, "Member 'InputCapture_C_OnAnalogValueChanged::CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnAnalogValueChanged, CallFunc_GetAnalogValue_ReturnValue) == 0x000170, "Member 'InputCapture_C_OnAnalogValueChanged::CallFunc_GetAnalogValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnAnalogValueChanged, CallFunc_GetKey_ReturnValue) == 0x000178, "Member 'InputCapture_C_OnAnalogValueChanged::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnAnalogValueChanged, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000190, "Member 'InputCapture_C_OnAnalogValueChanged::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnAnalogValueChanged, CallFunc_Key_IsAxis1D_ReturnValue) == 0x000191, "Member 'InputCapture_C_OnAnalogValueChanged::CallFunc_Key_IsAxis1D_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnAnalogValueChanged, CallFunc_BooleanAND_ReturnValue) == 0x000192, "Member 'InputCapture_C_OnAnalogValueChanged::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnAnalogValueChanged, CallFunc_Unhandled_ReturnValue) == 0x000198, "Member 'InputCapture_C_OnAnalogValueChanged::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnAnalogValueChanged, CallFunc_Handled_ReturnValue) == 0x000250, "Member 'InputCapture_C_OnAnalogValueChanged::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputCapture_C_OnAnalogValueChanged, K2Node_Select_Default) == 0x000308, "Member 'InputCapture_C_OnAnalogValueChanged::K2Node_Select_Default' has a wrong offset!");

}

