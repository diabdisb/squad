#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPRadialPopulatorMarker

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPRadialPopulatorMarker.BPRadialPopulatorMarker_C.ExecuteUbergraph_BPRadialPopulatorMarker
// 0x0038 (0x0038 - 0x0000)
struct BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USQUserWidget*                          K2Node_Event_Widget;                               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_RadialItemModel_C*                  K2Node_Event_Model;                                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBaseRadialMenu_C*                      K2Node_Event_RadialMenu;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarkerRadialEntry_C*                   K2Node_DynamicCast_AsMarker_Radial_Entry;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker) == 0x000008, "Wrong alignment on BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker");
static_assert(sizeof(BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker) == 0x000038, "Wrong size on BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker");
static_assert(offsetof(BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker, EntryPoint) == 0x000000, "Member 'BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker, K2Node_Event_Widget) == 0x000008, "Member 'BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker::K2Node_Event_Widget' has a wrong offset!");
static_assert(offsetof(BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker, K2Node_Event_Model) == 0x000010, "Member 'BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker::K2Node_Event_Model' has a wrong offset!");
static_assert(offsetof(BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker, K2Node_Event_RadialMenu) == 0x000018, "Member 'BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker::K2Node_Event_RadialMenu' has a wrong offset!");
static_assert(offsetof(BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker, K2Node_DynamicCast_AsMarker_Radial_Entry) == 0x000028, "Member 'BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker::K2Node_DynamicCast_AsMarker_Radial_Entry' has a wrong offset!");
static_assert(offsetof(BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BPRadialPopulatorMarker_C_ExecuteUbergraph_BPRadialPopulatorMarker::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BPRadialPopulatorMarker.BPRadialPopulatorMarker_C.InitialSetup
// 0x0018 (0x0018 - 0x0000)
struct BPRadialPopulatorMarker_C_InitialSetup final
{
public:
	class USQUserWidget*                          Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_RadialItemModel_C*                  Model;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBaseRadialMenu_C*                      RadialMenu;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPRadialPopulatorMarker_C_InitialSetup) == 0x000008, "Wrong alignment on BPRadialPopulatorMarker_C_InitialSetup");
static_assert(sizeof(BPRadialPopulatorMarker_C_InitialSetup) == 0x000018, "Wrong size on BPRadialPopulatorMarker_C_InitialSetup");
static_assert(offsetof(BPRadialPopulatorMarker_C_InitialSetup, Widget) == 0x000000, "Member 'BPRadialPopulatorMarker_C_InitialSetup::Widget' has a wrong offset!");
static_assert(offsetof(BPRadialPopulatorMarker_C_InitialSetup, Model) == 0x000008, "Member 'BPRadialPopulatorMarker_C_InitialSetup::Model' has a wrong offset!");
static_assert(offsetof(BPRadialPopulatorMarker_C_InitialSetup, RadialMenu) == 0x000010, "Member 'BPRadialPopulatorMarker_C_InitialSetup::RadialMenu' has a wrong offset!");

}

