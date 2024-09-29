#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GoTo_PreviousMenu_Large

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_GoTo_PreviousMenu_Large.BP_GoTo_PreviousMenu_Large_C.ExecuteUbergraph_BP_GoTo_PreviousMenu_Large
// 0x0030 (0x0030 - 0x0000)
struct BP_GoTo_PreviousMenu_Large_C_ExecuteUbergraph_BP_GoTo_PreviousMenu_Large final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBaseRadialMenu_C*                      K2Node_Event_Radial;                               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetDefaultObjectFor_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_BackToPreviousMenuAction_C*         K2Node_DynamicCast_AsBP_Back_to_Previous_Menu_Action; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanClick_CanClick;                        // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GoTo_PreviousMenu_Large_C_ExecuteUbergraph_BP_GoTo_PreviousMenu_Large) == 0x000008, "Wrong alignment on BP_GoTo_PreviousMenu_Large_C_ExecuteUbergraph_BP_GoTo_PreviousMenu_Large");
static_assert(sizeof(BP_GoTo_PreviousMenu_Large_C_ExecuteUbergraph_BP_GoTo_PreviousMenu_Large) == 0x000030, "Wrong size on BP_GoTo_PreviousMenu_Large_C_ExecuteUbergraph_BP_GoTo_PreviousMenu_Large");
static_assert(offsetof(BP_GoTo_PreviousMenu_Large_C_ExecuteUbergraph_BP_GoTo_PreviousMenu_Large, EntryPoint) == 0x000000, "Member 'BP_GoTo_PreviousMenu_Large_C_ExecuteUbergraph_BP_GoTo_PreviousMenu_Large::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GoTo_PreviousMenu_Large_C_ExecuteUbergraph_BP_GoTo_PreviousMenu_Large, K2Node_Event_Radial) == 0x000008, "Member 'BP_GoTo_PreviousMenu_Large_C_ExecuteUbergraph_BP_GoTo_PreviousMenu_Large::K2Node_Event_Radial' has a wrong offset!");
static_assert(offsetof(BP_GoTo_PreviousMenu_Large_C_ExecuteUbergraph_BP_GoTo_PreviousMenu_Large, CallFunc_GetDefaultObjectFor_ReturnValue) == 0x000010, "Member 'BP_GoTo_PreviousMenu_Large_C_ExecuteUbergraph_BP_GoTo_PreviousMenu_Large::CallFunc_GetDefaultObjectFor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GoTo_PreviousMenu_Large_C_ExecuteUbergraph_BP_GoTo_PreviousMenu_Large, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'BP_GoTo_PreviousMenu_Large_C_ExecuteUbergraph_BP_GoTo_PreviousMenu_Large::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GoTo_PreviousMenu_Large_C_ExecuteUbergraph_BP_GoTo_PreviousMenu_Large, K2Node_DynamicCast_AsBP_Back_to_Previous_Menu_Action) == 0x000020, "Member 'BP_GoTo_PreviousMenu_Large_C_ExecuteUbergraph_BP_GoTo_PreviousMenu_Large::K2Node_DynamicCast_AsBP_Back_to_Previous_Menu_Action' has a wrong offset!");
static_assert(offsetof(BP_GoTo_PreviousMenu_Large_C_ExecuteUbergraph_BP_GoTo_PreviousMenu_Large, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_GoTo_PreviousMenu_Large_C_ExecuteUbergraph_BP_GoTo_PreviousMenu_Large::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GoTo_PreviousMenu_Large_C_ExecuteUbergraph_BP_GoTo_PreviousMenu_Large, CallFunc_CanClick_CanClick) == 0x000029, "Member 'BP_GoTo_PreviousMenu_Large_C_ExecuteUbergraph_BP_GoTo_PreviousMenu_Large::CallFunc_CanClick_CanClick' has a wrong offset!");

// Function BP_GoTo_PreviousMenu_Large.BP_GoTo_PreviousMenu_Large_C.OnClicked
// 0x0008 (0x0008 - 0x0000)
struct BP_GoTo_PreviousMenu_Large_C_OnClicked final
{
public:
	class UBaseRadialMenu_C*                      Radial;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GoTo_PreviousMenu_Large_C_OnClicked) == 0x000008, "Wrong alignment on BP_GoTo_PreviousMenu_Large_C_OnClicked");
static_assert(sizeof(BP_GoTo_PreviousMenu_Large_C_OnClicked) == 0x000008, "Wrong size on BP_GoTo_PreviousMenu_Large_C_OnClicked");
static_assert(offsetof(BP_GoTo_PreviousMenu_Large_C_OnClicked, Radial) == 0x000000, "Member 'BP_GoTo_PreviousMenu_Large_C_OnClicked::Radial' has a wrong offset!");

}

