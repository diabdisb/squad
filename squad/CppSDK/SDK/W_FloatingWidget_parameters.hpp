#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_FloatingWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function W_FloatingWidget.W_FloatingWidget_C.ExecuteUbergraph_W_FloatingWidget
// 0x00E0 (0x00E0 - 0x0000)
struct W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPointerEvent& Mouse_Event, const struct FVector& World_Location)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_CustomEvent_Mouse_Event;                    // 0x0018(0x0070)()
	struct FVector                                K2Node_CustomEvent_World_Location;                 // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_HUD_C>            K2Node_DynamicCast_AsBPI_HUD;                      // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AWorldSettings*                         CallFunc_GetWorldSettings_ReturnValue;             // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_SQMapCore_C*                         CallFunc_Get_Map_Core_Map_Core;                    // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQWorldSettings*                       K2Node_DynamicCast_AsSQWorld_Settings;             // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget) == 0x000008, "Wrong alignment on W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget");
static_assert(sizeof(W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget) == 0x0000E0, "Wrong size on W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget");
static_assert(offsetof(W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget, EntryPoint) == 0x000000, "Member 'W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget, K2Node_CustomEvent_Mouse_Event) == 0x000018, "Member 'W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget::K2Node_CustomEvent_Mouse_Event' has a wrong offset!");
static_assert(offsetof(W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget, K2Node_CustomEvent_World_Location) == 0x000088, "Member 'W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget::K2Node_CustomEvent_World_Location' has a wrong offset!");
static_assert(offsetof(W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000098, "Member 'W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget, CallFunc_GetHUD_ReturnValue) == 0x0000A0, "Member 'W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget, K2Node_DynamicCast_AsBPI_HUD) == 0x0000A8, "Member 'W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget::K2Node_DynamicCast_AsBPI_HUD' has a wrong offset!");
static_assert(offsetof(W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget, CallFunc_GetWorldSettings_ReturnValue) == 0x0000C0, "Member 'W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget::CallFunc_GetWorldSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget, CallFunc_Get_Map_Core_Map_Core) == 0x0000C8, "Member 'W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget::CallFunc_Get_Map_Core_Map_Core' has a wrong offset!");
static_assert(offsetof(W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget, K2Node_DynamicCast_AsSQWorld_Settings) == 0x0000D0, "Member 'W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget::K2Node_DynamicCast_AsSQWorld_Settings' has a wrong offset!");
static_assert(offsetof(W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget, K2Node_DynamicCast_bSuccess_1) == 0x0000D8, "Member 'W_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function W_FloatingWidget.W_FloatingWidget_C.On Map Mouse Down
// 0x0080 (0x0080 - 0x0000)
struct W_FloatingWidget_C_On_Map_Mouse_Down final
{
public:
	struct FPointerEvent                          Mouse_Event;                                       // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                World_Location;                                    // 0x0070(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_FloatingWidget_C_On_Map_Mouse_Down) == 0x000008, "Wrong alignment on W_FloatingWidget_C_On_Map_Mouse_Down");
static_assert(sizeof(W_FloatingWidget_C_On_Map_Mouse_Down) == 0x000080, "Wrong size on W_FloatingWidget_C_On_Map_Mouse_Down");
static_assert(offsetof(W_FloatingWidget_C_On_Map_Mouse_Down, Mouse_Event) == 0x000000, "Member 'W_FloatingWidget_C_On_Map_Mouse_Down::Mouse_Event' has a wrong offset!");
static_assert(offsetof(W_FloatingWidget_C_On_Map_Mouse_Down, World_Location) == 0x000070, "Member 'W_FloatingWidget_C_On_Map_Mouse_Down::World_Location' has a wrong offset!");

// Function W_FloatingWidget.W_FloatingWidget_C.Validate Action
// 0x0078 (0x0078 - 0x0000)
struct W_FloatingWidget_C_Validate_Action final
{
public:
	struct FPointerEvent                          Mouse_Event;                                       // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Valid;                                             // 0x0070(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_FloatingWidget_C_Validate_Action) == 0x000008, "Wrong alignment on W_FloatingWidget_C_Validate_Action");
static_assert(sizeof(W_FloatingWidget_C_Validate_Action) == 0x000078, "Wrong size on W_FloatingWidget_C_Validate_Action");
static_assert(offsetof(W_FloatingWidget_C_Validate_Action, Mouse_Event) == 0x000000, "Member 'W_FloatingWidget_C_Validate_Action::Mouse_Event' has a wrong offset!");
static_assert(offsetof(W_FloatingWidget_C_Validate_Action, Valid) == 0x000070, "Member 'W_FloatingWidget_C_Validate_Action::Valid' has a wrong offset!");
static_assert(offsetof(W_FloatingWidget_C_Validate_Action, CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue) == 0x000071, "Member 'W_FloatingWidget_C_Validate_Action::CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_FloatingWidget_C_Validate_Action, CallFunc_IsVisible_ReturnValue) == 0x000072, "Member 'W_FloatingWidget_C_Validate_Action::CallFunc_IsVisible_ReturnValue' has a wrong offset!");

}

