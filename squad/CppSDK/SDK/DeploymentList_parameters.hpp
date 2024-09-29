#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DeploymentList

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function DeploymentList.DeploymentList_C.ExecuteUbergraph_DeploymentList
// 0x0028 (0x0028 - 0x0000)
struct DeploymentList_C_ExecuteUbergraph_DeploymentList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQGameSpawn*                           CallFunc_GetSelectedSpawn_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Hidden;                         // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bSelected;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMainMenu_Button_C*                     K2Node_ComponentBoundEvent_Button;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DeploymentList_C_ExecuteUbergraph_DeploymentList) == 0x000008, "Wrong alignment on DeploymentList_C_ExecuteUbergraph_DeploymentList");
static_assert(sizeof(DeploymentList_C_ExecuteUbergraph_DeploymentList) == 0x000028, "Wrong size on DeploymentList_C_ExecuteUbergraph_DeploymentList");
static_assert(offsetof(DeploymentList_C_ExecuteUbergraph_DeploymentList, EntryPoint) == 0x000000, "Member 'DeploymentList_C_ExecuteUbergraph_DeploymentList::EntryPoint' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_ExecuteUbergraph_DeploymentList, Temp_bool_Variable) == 0x000004, "Member 'DeploymentList_C_ExecuteUbergraph_DeploymentList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_ExecuteUbergraph_DeploymentList, CallFunc_GetSelectedSpawn_ReturnValue) == 0x000008, "Member 'DeploymentList_C_ExecuteUbergraph_DeploymentList::CallFunc_GetSelectedSpawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_ExecuteUbergraph_DeploymentList, Temp_byte_Variable) == 0x000010, "Member 'DeploymentList_C_ExecuteUbergraph_DeploymentList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_ExecuteUbergraph_DeploymentList, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'DeploymentList_C_ExecuteUbergraph_DeploymentList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_ExecuteUbergraph_DeploymentList, Temp_byte_Variable_1) == 0x000012, "Member 'DeploymentList_C_ExecuteUbergraph_DeploymentList::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_ExecuteUbergraph_DeploymentList, K2Node_CustomEvent_Hidden) == 0x000013, "Member 'DeploymentList_C_ExecuteUbergraph_DeploymentList::K2Node_CustomEvent_Hidden' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_ExecuteUbergraph_DeploymentList, K2Node_ComponentBoundEvent_bSelected) == 0x000014, "Member 'DeploymentList_C_ExecuteUbergraph_DeploymentList::K2Node_ComponentBoundEvent_bSelected' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_ExecuteUbergraph_DeploymentList, K2Node_ComponentBoundEvent_Button) == 0x000018, "Member 'DeploymentList_C_ExecuteUbergraph_DeploymentList::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_ExecuteUbergraph_DeploymentList, K2Node_Select_Default) == 0x000020, "Member 'DeploymentList_C_ExecuteUbergraph_DeploymentList::K2Node_Select_Default' has a wrong offset!");

// Function DeploymentList.DeploymentList_C.BndEvt__DeployButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct DeploymentList_C_BndEvt__DeployButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMainMenu_Button_C*                     Button;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DeploymentList_C_BndEvt__DeployButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on DeploymentList_C_BndEvt__DeployButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(sizeof(DeploymentList_C_BndEvt__DeployButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000010, "Wrong size on DeploymentList_C_BndEvt__DeployButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(offsetof(DeploymentList_C_BndEvt__DeployButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature, bSelected) == 0x000000, "Member 'DeploymentList_C_BndEvt__DeployButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature::bSelected' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_BndEvt__DeployButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature, Button) == 0x000008, "Member 'DeploymentList_C_BndEvt__DeployButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function DeploymentList.DeploymentList_C.Set List Visibility
// 0x0001 (0x0001 - 0x0000)
struct DeploymentList_C_Set_List_Visibility final
{
public:
	bool                                          Hidden;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DeploymentList_C_Set_List_Visibility) == 0x000001, "Wrong alignment on DeploymentList_C_Set_List_Visibility");
static_assert(sizeof(DeploymentList_C_Set_List_Visibility) == 0x000001, "Wrong size on DeploymentList_C_Set_List_Visibility");
static_assert(offsetof(DeploymentList_C_Set_List_Visibility, Hidden) == 0x000000, "Member 'DeploymentList_C_Set_List_Visibility::Hidden' has a wrong offset!");

// Function DeploymentList.DeploymentList_C.Auto Select Spawn Point
// 0x0060 (0x0060 - 0x0000)
struct DeploymentList_C_Auto_Select_Spawn_Point final
{
public:
	bool                                          Success;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UGridPanel*>                     K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGridPanel*                             CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SpawnPointsListMemberWidget_C*      K2Node_DynamicCast_AsBP_Spawn_Points_List_Member_Widget; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DeploymentList_C_Auto_Select_Spawn_Point) == 0x000008, "Wrong alignment on DeploymentList_C_Auto_Select_Spawn_Point");
static_assert(sizeof(DeploymentList_C_Auto_Select_Spawn_Point) == 0x000060, "Wrong size on DeploymentList_C_Auto_Select_Spawn_Point");
static_assert(offsetof(DeploymentList_C_Auto_Select_Spawn_Point, Success) == 0x000000, "Member 'DeploymentList_C_Auto_Select_Spawn_Point::Success' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_Auto_Select_Spawn_Point, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'DeploymentList_C_Auto_Select_Spawn_Point::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_Auto_Select_Spawn_Point, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'DeploymentList_C_Auto_Select_Spawn_Point::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_Auto_Select_Spawn_Point, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'DeploymentList_C_Auto_Select_Spawn_Point::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_Auto_Select_Spawn_Point, Temp_int_Variable) == 0x000010, "Member 'DeploymentList_C_Auto_Select_Spawn_Point::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_Auto_Select_Spawn_Point, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'DeploymentList_C_Auto_Select_Spawn_Point::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_Auto_Select_Spawn_Point, K2Node_MakeArray_Array) == 0x000018, "Member 'DeploymentList_C_Auto_Select_Spawn_Point::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_Auto_Select_Spawn_Point, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'DeploymentList_C_Auto_Select_Spawn_Point::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_Auto_Select_Spawn_Point, CallFunc_Array_Get_Item) == 0x000030, "Member 'DeploymentList_C_Auto_Select_Spawn_Point::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_Auto_Select_Spawn_Point, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'DeploymentList_C_Auto_Select_Spawn_Point::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_Auto_Select_Spawn_Point, CallFunc_GetChildAt_ReturnValue) == 0x000040, "Member 'DeploymentList_C_Auto_Select_Spawn_Point::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_Auto_Select_Spawn_Point, K2Node_DynamicCast_AsBP_Spawn_Points_List_Member_Widget) == 0x000048, "Member 'DeploymentList_C_Auto_Select_Spawn_Point::K2Node_DynamicCast_AsBP_Spawn_Points_List_Member_Widget' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_Auto_Select_Spawn_Point, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'DeploymentList_C_Auto_Select_Spawn_Point::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_Auto_Select_Spawn_Point, CallFunc_GetChildrenCount_ReturnValue) == 0x000054, "Member 'DeploymentList_C_Auto_Select_Spawn_Point::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_Auto_Select_Spawn_Point, CallFunc_Subtract_IntInt_ReturnValue) == 0x000058, "Member 'DeploymentList_C_Auto_Select_Spawn_Point::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeploymentList_C_Auto_Select_Spawn_Point, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00005C, "Member 'DeploymentList_C_Auto_Select_Spawn_Point::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

}

