#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapWidgetMapMarkerWaypointFT

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Squad_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BP_MapWidgetMapMarkerWaypointFT.BP_MapWidgetMapMarkerWaypointFT_C.ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT
// 0x0088 (0x0088 - 0x0000)
struct BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGameTimeSinceCreation_ReturnValue;     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_PlayerController_C> K2Node_DynamicCast_AsBPI_Player_Controller;        // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerController*                    K2Node_DynamicCast_AsSQPlayer_Controller;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_UniformScale;                         // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetAlphabetLetterString_ReturnValue;      // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
};
static_assert(alignof(BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT) == 0x000008, "Wrong alignment on BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT");
static_assert(sizeof(BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT) == 0x000088, "Wrong size on BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT, EntryPoint) == 0x000000, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT, CallFunc_GetGameTimeSinceCreation_ReturnValue) == 0x000020, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT::CallFunc_GetGameTimeSinceCreation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT, CallFunc_Less_FloatFloat_ReturnValue) == 0x000024, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT, CallFunc_GetOwningPlayer_ReturnValue) == 0x000028, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT, K2Node_DynamicCast_AsBPI_Player_Controller) == 0x000030, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT::K2Node_DynamicCast_AsBPI_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000048, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT, K2Node_DynamicCast_AsSQPlayer_Controller) == 0x000050, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT::K2Node_DynamicCast_AsSQPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT, K2Node_Event_UniformScale) == 0x00005C, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT::K2Node_Event_UniformScale' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT, CallFunc_GetAlphabetLetterString_ReturnValue) == 0x000060, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT::CallFunc_GetAlphabetLetterString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_ExecuteUbergraph_BP_MapWidgetMapMarkerWaypointFT::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function BP_MapWidgetMapMarkerWaypointFT.BP_MapWidgetMapMarkerWaypointFT_C.OnScaleChanged
// 0x0004 (0x0004 - 0x0000)
struct BP_MapWidgetMapMarkerWaypointFT_C_OnScaleChanged final
{
public:
	float                                         UniformScale;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapWidgetMapMarkerWaypointFT_C_OnScaleChanged) == 0x000004, "Wrong alignment on BP_MapWidgetMapMarkerWaypointFT_C_OnScaleChanged");
static_assert(sizeof(BP_MapWidgetMapMarkerWaypointFT_C_OnScaleChanged) == 0x000004, "Wrong size on BP_MapWidgetMapMarkerWaypointFT_C_OnScaleChanged");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_OnScaleChanged, UniformScale) == 0x000000, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_OnScaleChanged::UniformScale' has a wrong offset!");

// Function BP_MapWidgetMapMarkerWaypointFT.BP_MapWidgetMapMarkerWaypointFT_C.Update Waypoint Visibility
// 0x0008 (0x0008 - 0x0000)
struct BP_MapWidgetMapMarkerWaypointFT_C_Update_Waypoint_Visibility final
{
public:
	class USaveData_UI_C*                         CallFunc_Get_UI_Save_Data_UI_Save_Data;            // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapWidgetMapMarkerWaypointFT_C_Update_Waypoint_Visibility) == 0x000008, "Wrong alignment on BP_MapWidgetMapMarkerWaypointFT_C_Update_Waypoint_Visibility");
static_assert(sizeof(BP_MapWidgetMapMarkerWaypointFT_C_Update_Waypoint_Visibility) == 0x000008, "Wrong size on BP_MapWidgetMapMarkerWaypointFT_C_Update_Waypoint_Visibility");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Update_Waypoint_Visibility, CallFunc_Get_UI_Save_Data_UI_Save_Data) == 0x000000, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Update_Waypoint_Visibility::CallFunc_Get_UI_Save_Data_UI_Save_Data' has a wrong offset!");

// Function BP_MapWidgetMapMarkerWaypointFT.BP_MapWidgetMapMarkerWaypointFT_C.Update Visual
// 0x0060 (0x0060 - 0x0000)
struct BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual final
{
public:
	bool                                          L_Local_Squad;                                     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESQMapWidgetTint                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESQMapWidgetTint                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESQMapWidgetTint                              Temp_byte_Variable_2;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Get_Same_Squad_ID_Same;                   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESQMapWidgetTint                              K2Node_Select_Default;                             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESQMapWidgetTint                              K2Node_Select_Default_1;                           // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USQColorsDataAsset*                     CallFunc_Get_SQHUD_Colors_ColorsDataAsset;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetColor_ReturnValue;                     // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0038(0x0028)()
};
static_assert(alignof(BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual) == 0x000008, "Wrong alignment on BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual");
static_assert(sizeof(BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual) == 0x000060, "Wrong size on BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual, L_Local_Squad) == 0x000000, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual::L_Local_Squad' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual, Temp_bool_Variable) == 0x000001, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual, Temp_byte_Variable) == 0x000002, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual, Temp_byte_Variable_1) == 0x000003, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual, Temp_bool_Variable_1) == 0x000004, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual, Temp_byte_Variable_2) == 0x000005, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual, CallFunc_Less_IntInt_ReturnValue) == 0x000010, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual, CallFunc_Get_Same_Squad_ID_Same) == 0x000011, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual::CallFunc_Get_Same_Squad_ID_Same' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual, K2Node_Select_Default) == 0x000012, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual, K2Node_Select_Default_1) == 0x000013, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual, CallFunc_Get_SQHUD_Colors_ColorsDataAsset) == 0x000018, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual::CallFunc_Get_SQHUD_Colors_ColorsDataAsset' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual, CallFunc_Max_ReturnValue) == 0x000020, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual, CallFunc_GetColor_ReturnValue) == 0x000024, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual::CallFunc_GetColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual, K2Node_MakeStruct_SlateColor) == 0x000038, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Update_Visual::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function BP_MapWidgetMapMarkerWaypointFT.BP_MapWidgetMapMarkerWaypointFT_C.Set Visibility
// 0x0005 (0x0005 - 0x0000)
struct BP_MapWidgetMapMarkerWaypointFT_C_Set_Visibility final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Same_Squad_ID_Same;                   // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapWidgetMapMarkerWaypointFT_C_Set_Visibility) == 0x000001, "Wrong alignment on BP_MapWidgetMapMarkerWaypointFT_C_Set_Visibility");
static_assert(sizeof(BP_MapWidgetMapMarkerWaypointFT_C_Set_Visibility) == 0x000005, "Wrong size on BP_MapWidgetMapMarkerWaypointFT_C_Set_Visibility");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Set_Visibility, Temp_bool_Variable) == 0x000000, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Set_Visibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Set_Visibility, Temp_byte_Variable) == 0x000001, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Set_Visibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Set_Visibility, Temp_byte_Variable_1) == 0x000002, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Set_Visibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Set_Visibility, CallFunc_Get_Same_Squad_ID_Same) == 0x000003, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Set_Visibility::CallFunc_Get_Same_Squad_ID_Same' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Set_Visibility, K2Node_Select_Default) == 0x000004, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Set_Visibility::K2Node_Select_Default' has a wrong offset!");

// Function BP_MapWidgetMapMarkerWaypointFT.BP_MapWidgetMapMarkerWaypointFT_C.Get Same Squad ID
// 0x0003 (0x0003 - 0x0000)
struct BP_MapWidgetMapMarkerWaypointFT_C_Get_Same_Squad_ID final
{
public:
	bool                                          Same;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Same_Squad_ID) == 0x000001, "Wrong alignment on BP_MapWidgetMapMarkerWaypointFT_C_Get_Same_Squad_ID");
static_assert(sizeof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Same_Squad_ID) == 0x000003, "Wrong size on BP_MapWidgetMapMarkerWaypointFT_C_Get_Same_Squad_ID");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Same_Squad_ID, Same) == 0x000000, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Get_Same_Squad_ID::Same' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Same_Squad_ID, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Get_Same_Squad_ID::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Same_Squad_ID, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000002, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Get_Same_Squad_ID::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_MapWidgetMapMarkerWaypointFT.BP_MapWidgetMapMarkerWaypointFT_C.Get Is My Fireteam
// 0x0020 (0x0020 - 0x0000)
struct BP_MapWidgetMapMarkerWaypointFT_C_Get_Is_My_Fireteam final
{
public:
	bool                                          Same;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQPlayerState*                         K2Node_DynamicCast_AsSQPlayer_State;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetFireTeamIndex_ReturnValue;             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Is_My_Fireteam) == 0x000008, "Wrong alignment on BP_MapWidgetMapMarkerWaypointFT_C_Get_Is_My_Fireteam");
static_assert(sizeof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Is_My_Fireteam) == 0x000020, "Wrong size on BP_MapWidgetMapMarkerWaypointFT_C_Get_Is_My_Fireteam");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Is_My_Fireteam, Same) == 0x000000, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Get_Is_My_Fireteam::Same' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Is_My_Fireteam, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Get_Is_My_Fireteam::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Is_My_Fireteam, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000002, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Get_Is_My_Fireteam::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Is_My_Fireteam, K2Node_DynamicCast_AsSQPlayer_State) == 0x000008, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Get_Is_My_Fireteam::K2Node_DynamicCast_AsSQPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Is_My_Fireteam, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Get_Is_My_Fireteam::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Is_My_Fireteam, CallFunc_GetFireTeamIndex_ReturnValue) == 0x000014, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Get_Is_My_Fireteam::CallFunc_GetFireTeamIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Is_My_Fireteam, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000018, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Get_Is_My_Fireteam::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Is_My_Fireteam, CallFunc_BooleanAND_ReturnValue) == 0x000019, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Get_Is_My_Fireteam::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_MapWidgetMapMarkerWaypointFT.BP_MapWidgetMapMarkerWaypointFT_C.Get Self FTL
// 0x0018 (0x0018 - 0x0000)
struct BP_MapWidgetMapMarkerWaypointFT_C_Get_Self_FTL final
{
public:
	bool                                          Is_FTL;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQPlayerState*                         K2Node_DynamicCast_AsSQPlayer_State;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFireTeamLeader_ReturnValue;             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Self_FTL) == 0x000008, "Wrong alignment on BP_MapWidgetMapMarkerWaypointFT_C_Get_Self_FTL");
static_assert(sizeof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Self_FTL) == 0x000018, "Wrong size on BP_MapWidgetMapMarkerWaypointFT_C_Get_Self_FTL");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Self_FTL, Is_FTL) == 0x000000, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Get_Self_FTL::Is_FTL' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Self_FTL, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Get_Self_FTL::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Self_FTL, K2Node_DynamicCast_AsSQPlayer_State) == 0x000008, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Get_Self_FTL::K2Node_DynamicCast_AsSQPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Self_FTL, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Get_Self_FTL::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerWaypointFT_C_Get_Self_FTL, CallFunc_IsFireTeamLeader_ReturnValue) == 0x000011, "Member 'BP_MapWidgetMapMarkerWaypointFT_C_Get_Self_FTL::CallFunc_IsFireTeamLeader_ReturnValue' has a wrong offset!");

}

