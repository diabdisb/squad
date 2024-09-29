#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VehicleGhost

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_VehicleGhost.BP_VehicleGhost_C.ExecuteUbergraph_BP_VehicleGhost
// 0x0100 (0x0100 - 0x0000)
struct BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UClass*                                 K2Node_ClassDynamicCast_AsSQVehicle;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetDefaultObjectFor_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQVehicle*                             K2Node_DynamicCast_AsSQVehicle;                    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SpawnableVehicleItem_C*             K2Node_DynamicCast_AsBP_Spawnable_Vehicle_Item;    // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SpawnIfReady_ReturnValue;                 // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SpawnableVehicleItem_C*             K2Node_DynamicCast_AsBP_Spawnable_Vehicle_Item_1;  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_LoadClassAsset_Blocking_ReturnValue;      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsSQVehicle_1;             // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_1;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_88[0x8];                                       // 0x0088(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0090(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_RebaseTransformLocalOriginOntoZero_ReturnValue; // 0x00C0(0x0030)(IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost) == 0x000010, "Wrong alignment on BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost");
static_assert(sizeof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost) == 0x000100, "Wrong size on BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost");
static_assert(offsetof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost, EntryPoint) == 0x000000, "Member 'BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost, Temp_class_Variable) == 0x000008, "Member 'BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost, K2Node_ClassDynamicCast_AsSQVehicle) == 0x000020, "Member 'BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost::K2Node_ClassDynamicCast_AsSQVehicle' has a wrong offset!");
static_assert(offsetof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost, K2Node_ClassDynamicCast_bSuccess) == 0x000028, "Member 'BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost, CallFunc_GetDefaultObjectFor_ReturnValue) == 0x000030, "Member 'BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost::CallFunc_GetDefaultObjectFor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost, K2Node_DynamicCast_AsSQVehicle) == 0x000038, "Member 'BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost::K2Node_DynamicCast_AsSQVehicle' has a wrong offset!");
static_assert(offsetof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost, K2Node_DynamicCast_AsBP_Spawnable_Vehicle_Item) == 0x000048, "Member 'BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost::K2Node_DynamicCast_AsBP_Spawnable_Vehicle_Item' has a wrong offset!");
static_assert(offsetof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost, CallFunc_SpawnIfReady_ReturnValue) == 0x000051, "Member 'BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost::CallFunc_SpawnIfReady_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost, K2Node_DynamicCast_AsBP_Spawnable_Vehicle_Item_1) == 0x000058, "Member 'BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost::K2Node_DynamicCast_AsBP_Spawnable_Vehicle_Item_1' has a wrong offset!");
static_assert(offsetof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost, CallFunc_LoadClassAsset_Blocking_ReturnValue) == 0x000068, "Member 'BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost::CallFunc_LoadClassAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost, K2Node_ClassDynamicCast_AsSQVehicle_1) == 0x000070, "Member 'BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost::K2Node_ClassDynamicCast_AsSQVehicle_1' has a wrong offset!");
static_assert(offsetof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost, K2Node_ClassDynamicCast_bSuccess_1) == 0x000078, "Member 'BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost::K2Node_ClassDynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost, K2Node_CustomEvent_Loaded) == 0x000080, "Member 'BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost, CallFunc_GetTransform_ReturnValue) == 0x000090, "Member 'BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost, CallFunc_RebaseTransformLocalOriginOntoZero_ReturnValue) == 0x0000C0, "Member 'BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost::CallFunc_RebaseTransformLocalOriginOntoZero_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost, CallFunc_Conv_IntToByte_ReturnValue) == 0x0000F0, "Member 'BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost, CallFunc_GetValidValue_ReturnValue) == 0x0000F1, "Member 'BP_VehicleGhost_C_ExecuteUbergraph_BP_VehicleGhost::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");

// Function BP_VehicleGhost.BP_VehicleGhost_C.OnLoaded_031AC99D4A39D4B42D8CE89EBD9574C9
// 0x0008 (0x0008 - 0x0000)
struct BP_VehicleGhost_C_OnLoaded_031AC99D4A39D4B42D8CE89EBD9574C9 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_VehicleGhost_C_OnLoaded_031AC99D4A39D4B42D8CE89EBD9574C9) == 0x000008, "Wrong alignment on BP_VehicleGhost_C_OnLoaded_031AC99D4A39D4B42D8CE89EBD9574C9");
static_assert(sizeof(BP_VehicleGhost_C_OnLoaded_031AC99D4A39D4B42D8CE89EBD9574C9) == 0x000008, "Wrong size on BP_VehicleGhost_C_OnLoaded_031AC99D4A39D4B42D8CE89EBD9574C9");
static_assert(offsetof(BP_VehicleGhost_C_OnLoaded_031AC99D4A39D4B42D8CE89EBD9574C9, Loaded) == 0x000000, "Member 'BP_VehicleGhost_C_OnLoaded_031AC99D4A39D4B42D8CE89EBD9574C9::Loaded' has a wrong offset!");

}

