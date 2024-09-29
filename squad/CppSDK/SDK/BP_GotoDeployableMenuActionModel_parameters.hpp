#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GotoDeployableMenuActionModel

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_GotoDeployableMenuActionModel.BP_GotoDeployableMenuActionModel_C.ExecuteUbergraph_BP_GotoDeployableMenuActionModel
// 0x0050 (0x0050 - 0x0000)
struct BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBaseRadialMenu_C*                      K2Node_Event_Radial;                               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetDefaultObjectFor_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_GotoMenuAction_C*                   K2Node_DynamicCast_AsBP_Goto_Menu_Action;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetDefaultObjectFor_ReturnValue_1;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Menu_DeployableChoice_C*            K2Node_DynamicCast_AsBP_Menu_Deployable_Choice;    // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanClick_CanClick;                        // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel) == 0x000008, "Wrong alignment on BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel");
static_assert(sizeof(BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel) == 0x000050, "Wrong size on BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel");
static_assert(offsetof(BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel, EntryPoint) == 0x000000, "Member 'BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel, K2Node_Event_Radial) == 0x000008, "Member 'BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel::K2Node_Event_Radial' has a wrong offset!");
static_assert(offsetof(BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel, CallFunc_GetDefaultObjectFor_ReturnValue) == 0x000010, "Member 'BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel::CallFunc_GetDefaultObjectFor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel, K2Node_DynamicCast_AsBP_Goto_Menu_Action) == 0x000018, "Member 'BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel::K2Node_DynamicCast_AsBP_Goto_Menu_Action' has a wrong offset!");
static_assert(offsetof(BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel, CallFunc_GetDefaultObjectFor_ReturnValue_1) == 0x000028, "Member 'BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel::CallFunc_GetDefaultObjectFor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel, K2Node_DynamicCast_AsBP_Menu_Deployable_Choice) == 0x000030, "Member 'BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel::K2Node_DynamicCast_AsBP_Menu_Deployable_Choice' has a wrong offset!");
static_assert(offsetof(BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel, CallFunc_GetOwningPlayer_ReturnValue) == 0x000040, "Member 'BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel, CallFunc_CanClick_CanClick) == 0x000048, "Member 'BP_GotoDeployableMenuActionModel_C_ExecuteUbergraph_BP_GotoDeployableMenuActionModel::CallFunc_CanClick_CanClick' has a wrong offset!");

// Function BP_GotoDeployableMenuActionModel.BP_GotoDeployableMenuActionModel_C.OnClicked
// 0x0008 (0x0008 - 0x0000)
struct BP_GotoDeployableMenuActionModel_C_OnClicked final
{
public:
	class UBaseRadialMenu_C*                      Radial;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GotoDeployableMenuActionModel_C_OnClicked) == 0x000008, "Wrong alignment on BP_GotoDeployableMenuActionModel_C_OnClicked");
static_assert(sizeof(BP_GotoDeployableMenuActionModel_C_OnClicked) == 0x000008, "Wrong size on BP_GotoDeployableMenuActionModel_C_OnClicked");
static_assert(offsetof(BP_GotoDeployableMenuActionModel_C_OnClicked, Radial) == 0x000000, "Member 'BP_GotoDeployableMenuActionModel_C_OnClicked::Radial' has a wrong offset!");

}

