#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeployableGhost

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_DeployableGhost.BP_DeployableGhost_C.ExecuteUbergraph_BP_DeployableGhost
// 0x00E0 (0x00E0 - 0x0000)
struct BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsSQDeployable;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SpawnIfReady_ReturnValue;                 // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SpawnableDeployableItem_C*          K2Node_DynamicCast_AsBP_Spawnable_Deployable_Item; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_LoadClassAsset_Blocking_ReturnValue;      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetFinalTransform_Transform;              // 0x0040(0x0030)(IsPlainOldData, NoDestructor)
	class UClass*                                 K2Node_ClassDynamicCast_AsSQDeployable_1;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_1;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_RebaseTransformLocalOriginOntoZero_ReturnValue; // 0x0080(0x0030)(IsPlainOldData, NoDestructor)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBP_SpawnableDeployableItem_C*          K2Node_DynamicCast_AsBP_Spawnable_Deployable_Item_1; // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate;              // 0x00C4(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost) == 0x000010, "Wrong alignment on BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost");
static_assert(sizeof(BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost) == 0x0000E0, "Wrong size on BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost");
static_assert(offsetof(BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost, EntryPoint) == 0x000000, "Member 'BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost, Temp_class_Variable) == 0x000008, "Member 'BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost, K2Node_ClassDynamicCast_AsSQDeployable) == 0x000010, "Member 'BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost::K2Node_ClassDynamicCast_AsSQDeployable' has a wrong offset!");
static_assert(offsetof(BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost, K2Node_ClassDynamicCast_bSuccess) == 0x000018, "Member 'BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost, CallFunc_SpawnIfReady_ReturnValue) == 0x000019, "Member 'BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost::CallFunc_SpawnIfReady_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost, K2Node_DynamicCast_AsBP_Spawnable_Deployable_Item) == 0x000020, "Member 'BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost::K2Node_DynamicCast_AsBP_Spawnable_Deployable_Item' has a wrong offset!");
static_assert(offsetof(BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost, CallFunc_LoadClassAsset_Blocking_ReturnValue) == 0x000030, "Member 'BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost::CallFunc_LoadClassAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost, CallFunc_GetFinalTransform_Transform) == 0x000040, "Member 'BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost::CallFunc_GetFinalTransform_Transform' has a wrong offset!");
static_assert(offsetof(BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost, K2Node_ClassDynamicCast_AsSQDeployable_1) == 0x000070, "Member 'BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost::K2Node_ClassDynamicCast_AsSQDeployable_1' has a wrong offset!");
static_assert(offsetof(BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost, K2Node_ClassDynamicCast_bSuccess_1) == 0x000078, "Member 'BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost::K2Node_ClassDynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost, CallFunc_RebaseTransformLocalOriginOntoZero_ReturnValue) == 0x000080, "Member 'BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost::CallFunc_RebaseTransformLocalOriginOntoZero_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost, K2Node_CustomEvent_Loaded) == 0x0000B0, "Member 'BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost, K2Node_DynamicCast_AsBP_Spawnable_Deployable_Item_1) == 0x0000B8, "Member 'BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost::K2Node_DynamicCast_AsBP_Spawnable_Deployable_Item_1' has a wrong offset!");
static_assert(offsetof(BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost, K2Node_DynamicCast_bSuccess_1) == 0x0000C0, "Member 'BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost, K2Node_CreateDelegate_OutputDelegate) == 0x0000C4, "Member 'BP_DeployableGhost_C_ExecuteUbergraph_BP_DeployableGhost::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_DeployableGhost.BP_DeployableGhost_C.OnLoaded_ADD952194FEA03C93E994296421D683E
// 0x0008 (0x0008 - 0x0000)
struct BP_DeployableGhost_C_OnLoaded_ADD952194FEA03C93E994296421D683E final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_DeployableGhost_C_OnLoaded_ADD952194FEA03C93E994296421D683E) == 0x000008, "Wrong alignment on BP_DeployableGhost_C_OnLoaded_ADD952194FEA03C93E994296421D683E");
static_assert(sizeof(BP_DeployableGhost_C_OnLoaded_ADD952194FEA03C93E994296421D683E) == 0x000008, "Wrong size on BP_DeployableGhost_C_OnLoaded_ADD952194FEA03C93E994296421D683E");
static_assert(offsetof(BP_DeployableGhost_C_OnLoaded_ADD952194FEA03C93E994296421D683E, Loaded) == 0x000000, "Member 'BP_DeployableGhost_C_OnLoaded_ADD952194FEA03C93E994296421D683E::Loaded' has a wrong offset!");

// Function BP_DeployableGhost.BP_DeployableGhost_C.GetFinalTransform
// 0x00A0 (0x00A0 - 0x0000)
struct BP_DeployableGhost_C_GetFinalTransform final
{
public:
	struct FTransform                             Transform;                                         // 0x0000(0x0030)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0030(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_GetTransform_ReturnValue_1;               // 0x0060(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DeployableGhost_C_GetFinalTransform) == 0x000010, "Wrong alignment on BP_DeployableGhost_C_GetFinalTransform");
static_assert(sizeof(BP_DeployableGhost_C_GetFinalTransform) == 0x0000A0, "Wrong size on BP_DeployableGhost_C_GetFinalTransform");
static_assert(offsetof(BP_DeployableGhost_C_GetFinalTransform, Transform) == 0x000000, "Member 'BP_DeployableGhost_C_GetFinalTransform::Transform' has a wrong offset!");
static_assert(offsetof(BP_DeployableGhost_C_GetFinalTransform, CallFunc_GetTransform_ReturnValue) == 0x000030, "Member 'BP_DeployableGhost_C_GetFinalTransform::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeployableGhost_C_GetFinalTransform, CallFunc_GetTransform_ReturnValue_1) == 0x000060, "Member 'BP_DeployableGhost_C_GetFinalTransform::CallFunc_GetTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DeployableGhost_C_GetFinalTransform, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'BP_DeployableGhost_C_GetFinalTransform::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

