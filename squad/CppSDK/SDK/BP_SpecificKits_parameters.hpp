#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpecificKits

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_SpecificKits.BP_SpecificKits_C.ExecuteUbergraph_BP_SpecificKits
// 0x0020 (0x0020 - 0x0000)
struct BP_SpecificKits_C_ExecuteUbergraph_BP_SpecificKits final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBaseRadialMenu_C*                      K2Node_Event_BaseRadialMenu;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SpecificKits_C*                     CallFunc_SpawnObject_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SpecificKits_C_ExecuteUbergraph_BP_SpecificKits) == 0x000008, "Wrong alignment on BP_SpecificKits_C_ExecuteUbergraph_BP_SpecificKits");
static_assert(sizeof(BP_SpecificKits_C_ExecuteUbergraph_BP_SpecificKits) == 0x000020, "Wrong size on BP_SpecificKits_C_ExecuteUbergraph_BP_SpecificKits");
static_assert(offsetof(BP_SpecificKits_C_ExecuteUbergraph_BP_SpecificKits, EntryPoint) == 0x000000, "Member 'BP_SpecificKits_C_ExecuteUbergraph_BP_SpecificKits::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_ExecuteUbergraph_BP_SpecificKits, K2Node_Event_BaseRadialMenu) == 0x000008, "Member 'BP_SpecificKits_C_ExecuteUbergraph_BP_SpecificKits::K2Node_Event_BaseRadialMenu' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_ExecuteUbergraph_BP_SpecificKits, CallFunc_GetObjectClass_ReturnValue) == 0x000010, "Member 'BP_SpecificKits_C_ExecuteUbergraph_BP_SpecificKits::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_ExecuteUbergraph_BP_SpecificKits, CallFunc_SpawnObject_ReturnValue) == 0x000018, "Member 'BP_SpecificKits_C_ExecuteUbergraph_BP_SpecificKits::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

// Function BP_SpecificKits.BP_SpecificKits_C.CreateChildWidgets
// 0x0008 (0x0008 - 0x0000)
struct BP_SpecificKits_C_CreateChildWidgets final
{
public:
	class UBaseRadialMenu_C*                      BaseRadialMenu;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SpecificKits_C_CreateChildWidgets) == 0x000008, "Wrong alignment on BP_SpecificKits_C_CreateChildWidgets");
static_assert(sizeof(BP_SpecificKits_C_CreateChildWidgets) == 0x000008, "Wrong size on BP_SpecificKits_C_CreateChildWidgets");
static_assert(offsetof(BP_SpecificKits_C_CreateChildWidgets, BaseRadialMenu) == 0x000000, "Member 'BP_SpecificKits_C_CreateChildWidgets::BaseRadialMenu' has a wrong offset!");

// Function BP_SpecificKits.BP_SpecificKits_C.Create Widgets
// 0x00B8 (0x00B8 - 0x0000)
struct BP_SpecificKits_C_Create_Widgets final
{
public:
	class UBaseRadialMenu_C*                      Base_Radial;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URadialCenterRole_C*                    L_Center_Role;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPRadialPopulatorChangeRole_C*         L_Role_Populator;                                  // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USQRoleSettings*>                L_Roles_to_create;                                 // 0x0018(0x0010)(Edit, BlueprintVisible)
	class USQTeamInfo*                            L_Team_Info;                                       // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQRoleSettings*                        CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_DynamicRoleChangeModel_C*           CallFunc_SpawnObject_ReturnValue;                  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetDefaultObjectFor_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPRadialPopulatorChangeRole_C*         K2Node_DynamicCast_AsBPRadial_Populator_Change_Role; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USQUserWidget*                          CallFunc_CreateRadialChildWidget_CreatedWidget;    // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_RadialItemModel_C*                  CallFunc_GetModelReferencesFromClass_AsBP_Radial_Item_Model; // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPRadialPopulatorIcon_C*               CallFunc_GetModelReferencesFromClass_AsBPRadial_Populator_Icon; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQUserWidget*                          CallFunc_CreateRadialChildWidget_CreatedWidget_1;  // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_RadialItemModel_C*                  CallFunc_GetModelReferencesFromClass_AsBP_Radial_Item_Model_1; // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPRadialPopulatorIcon_C*               CallFunc_GetModelReferencesFromClass_AsBPRadial_Populator_Icon_1; // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQUserWidget*                          CallFunc_CreateRadialChildWidget_CreatedWidget_2;  // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URadialCenterRole_C*                    K2Node_DynamicCast_AsRadial_Center_Role;           // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SpecificKits_C_Create_Widgets) == 0x000008, "Wrong alignment on BP_SpecificKits_C_Create_Widgets");
static_assert(sizeof(BP_SpecificKits_C_Create_Widgets) == 0x0000B8, "Wrong size on BP_SpecificKits_C_Create_Widgets");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, Base_Radial) == 0x000000, "Member 'BP_SpecificKits_C_Create_Widgets::Base_Radial' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, L_Center_Role) == 0x000008, "Member 'BP_SpecificKits_C_Create_Widgets::L_Center_Role' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, L_Role_Populator) == 0x000010, "Member 'BP_SpecificKits_C_Create_Widgets::L_Role_Populator' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, L_Roles_to_create) == 0x000018, "Member 'BP_SpecificKits_C_Create_Widgets::L_Roles_to_create' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, L_Team_Info) == 0x000028, "Member 'BP_SpecificKits_C_Create_Widgets::L_Team_Info' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'BP_SpecificKits_C_Create_Widgets::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'BP_SpecificKits_C_Create_Widgets::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'BP_SpecificKits_C_Create_Widgets::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, Temp_int_Array_Index_Variable) == 0x00003C, "Member 'BP_SpecificKits_C_Create_Widgets::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_SpecificKits_C_Create_Widgets::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, CallFunc_Array_Length_ReturnValue_1) == 0x000048, "Member 'BP_SpecificKits_C_Create_Widgets::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'BP_SpecificKits_C_Create_Widgets::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, CallFunc_SpawnObject_ReturnValue) == 0x000050, "Member 'BP_SpecificKits_C_Create_Widgets::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, CallFunc_GetDefaultObjectFor_ReturnValue) == 0x000058, "Member 'BP_SpecificKits_C_Create_Widgets::CallFunc_GetDefaultObjectFor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, K2Node_DynamicCast_AsBPRadial_Populator_Change_Role) == 0x000060, "Member 'BP_SpecificKits_C_Create_Widgets::K2Node_DynamicCast_AsBPRadial_Populator_Change_Role' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'BP_SpecificKits_C_Create_Widgets::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, CallFunc_CreateRadialChildWidget_CreatedWidget) == 0x000070, "Member 'BP_SpecificKits_C_Create_Widgets::CallFunc_CreateRadialChildWidget_CreatedWidget' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, CallFunc_GetModelReferencesFromClass_AsBP_Radial_Item_Model) == 0x000078, "Member 'BP_SpecificKits_C_Create_Widgets::CallFunc_GetModelReferencesFromClass_AsBP_Radial_Item_Model' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, CallFunc_GetModelReferencesFromClass_AsBPRadial_Populator_Icon) == 0x000080, "Member 'BP_SpecificKits_C_Create_Widgets::CallFunc_GetModelReferencesFromClass_AsBPRadial_Populator_Icon' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, CallFunc_CreateRadialChildWidget_CreatedWidget_1) == 0x000088, "Member 'BP_SpecificKits_C_Create_Widgets::CallFunc_CreateRadialChildWidget_CreatedWidget_1' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, CallFunc_GetModelReferencesFromClass_AsBP_Radial_Item_Model_1) == 0x000090, "Member 'BP_SpecificKits_C_Create_Widgets::CallFunc_GetModelReferencesFromClass_AsBP_Radial_Item_Model_1' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, CallFunc_GetModelReferencesFromClass_AsBPRadial_Populator_Icon_1) == 0x000098, "Member 'BP_SpecificKits_C_Create_Widgets::CallFunc_GetModelReferencesFromClass_AsBPRadial_Populator_Icon_1' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, CallFunc_CreateRadialChildWidget_CreatedWidget_2) == 0x0000A0, "Member 'BP_SpecificKits_C_Create_Widgets::CallFunc_CreateRadialChildWidget_CreatedWidget_2' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, K2Node_DynamicCast_AsRadial_Center_Role) == 0x0000A8, "Member 'BP_SpecificKits_C_Create_Widgets::K2Node_DynamicCast_AsRadial_Center_Role' has a wrong offset!");
static_assert(offsetof(BP_SpecificKits_C_Create_Widgets, K2Node_DynamicCast_bSuccess_1) == 0x0000B0, "Member 'BP_SpecificKits_C_Create_Widgets::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

