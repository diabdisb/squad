#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MarkerWidget_Cameraman

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.ExecuteUbergraph_BP_MarkerWidget_Cameraman
// 0x0068 (0x0068 - 0x0000)
struct BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x002C(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman) == 0x000008, "Wrong alignment on BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman");
static_assert(sizeof(BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman) == 0x000068, "Wrong size on BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman, EntryPoint) == 0x000000, "Member 'BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000014, "Member 'BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman, CallFunc_BreakRotator_Roll) == 0x000020, "Member 'BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman, CallFunc_BreakRotator_Pitch) == 0x000024, "Member 'BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman, CallFunc_BreakRotator_Yaw) == 0x000028, "Member 'BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman, K2Node_Event_MyGeometry) == 0x00002C, "Member 'BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman, K2Node_Event_InDeltaTime) == 0x000064, "Member 'BP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.Tick
// 0x003C (0x003C - 0x0000)
struct BP_MarkerWidget_Cameraman_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MarkerWidget_Cameraman_C_Tick) == 0x000004, "Wrong alignment on BP_MarkerWidget_Cameraman_C_Tick");
static_assert(sizeof(BP_MarkerWidget_Cameraman_C_Tick) == 0x00003C, "Wrong size on BP_MarkerWidget_Cameraman_C_Tick");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_Tick, MyGeometry) == 0x000000, "Member 'BP_MarkerWidget_Cameraman_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_Tick, InDeltaTime) == 0x000038, "Member 'BP_MarkerWidget_Cameraman_C_Tick::InDeltaTime' has a wrong offset!");

// Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.SetAngle
// 0x0008 (0x0008 - 0x0000)
struct BP_MarkerWidget_Cameraman_C_SetAngle final
{
public:
	float                                         InAngle;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MarkerWidget_Cameraman_C_SetAngle) == 0x000004, "Wrong alignment on BP_MarkerWidget_Cameraman_C_SetAngle");
static_assert(sizeof(BP_MarkerWidget_Cameraman_C_SetAngle) == 0x000008, "Wrong size on BP_MarkerWidget_Cameraman_C_SetAngle");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_SetAngle, InAngle) == 0x000000, "Member 'BP_MarkerWidget_Cameraman_C_SetAngle::InAngle' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_SetAngle, CallFunc_Add_FloatFloat_ReturnValue) == 0x000004, "Member 'BP_MarkerWidget_Cameraman_C_SetAngle::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.GetMarkerVisibility
// 0x0008 (0x0008 - 0x0000)
struct BP_MarkerWidget_Cameraman_C_GetMarkerVisibility final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSelfCameraMan_IsSelfCameraMan;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSelf_IsSelf;                            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MarkerWidget_Cameraman_C_GetMarkerVisibility) == 0x000001, "Wrong alignment on BP_MarkerWidget_Cameraman_C_GetMarkerVisibility");
static_assert(sizeof(BP_MarkerWidget_Cameraman_C_GetMarkerVisibility) == 0x000008, "Wrong size on BP_MarkerWidget_Cameraman_C_GetMarkerVisibility");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_GetMarkerVisibility, ReturnValue) == 0x000000, "Member 'BP_MarkerWidget_Cameraman_C_GetMarkerVisibility::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_GetMarkerVisibility, Temp_bool_Variable) == 0x000001, "Member 'BP_MarkerWidget_Cameraman_C_GetMarkerVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_GetMarkerVisibility, Temp_byte_Variable) == 0x000002, "Member 'BP_MarkerWidget_Cameraman_C_GetMarkerVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_GetMarkerVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'BP_MarkerWidget_Cameraman_C_GetMarkerVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_GetMarkerVisibility, CallFunc_IsSelfCameraMan_IsSelfCameraMan) == 0x000004, "Member 'BP_MarkerWidget_Cameraman_C_GetMarkerVisibility::CallFunc_IsSelfCameraMan_IsSelfCameraMan' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_GetMarkerVisibility, CallFunc_IsSelf_IsSelf) == 0x000005, "Member 'BP_MarkerWidget_Cameraman_C_GetMarkerVisibility::CallFunc_IsSelf_IsSelf' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_GetMarkerVisibility, CallFunc_BooleanOR_ReturnValue) == 0x000006, "Member 'BP_MarkerWidget_Cameraman_C_GetMarkerVisibility::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_GetMarkerVisibility, K2Node_Select_Default) == 0x000007, "Member 'BP_MarkerWidget_Cameraman_C_GetMarkerVisibility::K2Node_Select_Default' has a wrong offset!");

// Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.Get_Player_Image_Brush_0
// 0x0160 (0x0160 - 0x0000)
struct BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0 final
{
public:
	struct FSlateBrush                            ReturnValue;                                       // 0x0000(0x0088)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSameTeam_IsSameTeam;                    // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B[0x1];                                       // 0x008B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x008C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSelf_IsSelf;                            // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00B0(0x0028)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x00D8(0x0088)()
};
static_assert(alignof(BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0) == 0x000008, "Wrong alignment on BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0");
static_assert(sizeof(BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0) == 0x000160, "Wrong size on BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0, ReturnValue) == 0x000000, "Member 'BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0, Temp_bool_Variable) == 0x000088, "Member 'BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0, Temp_bool_Variable_1) == 0x000089, "Member 'BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0, CallFunc_IsSameTeam_IsSameTeam) == 0x00008A, "Member 'BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0::CallFunc_IsSameTeam_IsSameTeam' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0, K2Node_Select_Default) == 0x00008C, "Member 'BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0, CallFunc_IsSelf_IsSelf) == 0x00009C, "Member 'BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0::CallFunc_IsSelf_IsSelf' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0, K2Node_Select_Default_1) == 0x0000A0, "Member 'BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0, K2Node_MakeStruct_SlateColor) == 0x0000B0, "Member 'BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0, K2Node_MakeStruct_SlateBrush) == 0x0000D8, "Member 'BP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_0::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.IsSelf
// 0x0028 (0x0028 - 0x0000)
struct BP_MarkerWidget_Cameraman_C_IsSelf final
{
public:
	bool                                          IsSelf_0;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MarkerWidget_Cameraman_C_IsSelf) == 0x000008, "Wrong alignment on BP_MarkerWidget_Cameraman_C_IsSelf");
static_assert(sizeof(BP_MarkerWidget_Cameraman_C_IsSelf) == 0x000028, "Wrong size on BP_MarkerWidget_Cameraman_C_IsSelf");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_IsSelf, IsSelf_0) == 0x000000, "Member 'BP_MarkerWidget_Cameraman_C_IsSelf::IsSelf_0' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_IsSelf, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000008, "Member 'BP_MarkerWidget_Cameraman_C_IsSelf::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_IsSelf, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_MarkerWidget_Cameraman_C_IsSelf::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_IsSelf, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_MarkerWidget_Cameraman_C_IsSelf::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_IsSelf, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000020, "Member 'BP_MarkerWidget_Cameraman_C_IsSelf::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.IsSelfCameraMan
// 0x0020 (0x0020 - 0x0000)
struct BP_MarkerWidget_Cameraman_C_IsSelfCameraMan final
{
public:
	bool                                          IsSelfCameraMan_0;                                 // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQCameraMan*                           K2Node_DynamicCast_AsSQCamera_Man;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MarkerWidget_Cameraman_C_IsSelfCameraMan) == 0x000008, "Wrong alignment on BP_MarkerWidget_Cameraman_C_IsSelfCameraMan");
static_assert(sizeof(BP_MarkerWidget_Cameraman_C_IsSelfCameraMan) == 0x000020, "Wrong size on BP_MarkerWidget_Cameraman_C_IsSelfCameraMan");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_IsSelfCameraMan, IsSelfCameraMan_0) == 0x000000, "Member 'BP_MarkerWidget_Cameraman_C_IsSelfCameraMan::IsSelfCameraMan_0' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_IsSelfCameraMan, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000008, "Member 'BP_MarkerWidget_Cameraman_C_IsSelfCameraMan::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_IsSelfCameraMan, K2Node_DynamicCast_AsSQCamera_Man) == 0x000010, "Member 'BP_MarkerWidget_Cameraman_C_IsSelfCameraMan::K2Node_DynamicCast_AsSQCamera_Man' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_IsSelfCameraMan, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_MarkerWidget_Cameraman_C_IsSelfCameraMan::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.IsSameTeam
// 0x0048 (0x0048 - 0x0000)
struct BP_MarkerWidget_Cameraman_C_IsSameTeam final
{
public:
	bool                                          IsSameTeam_0;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerController*                    K2Node_DynamicCast_AsSQPlayer_Controller;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQCameraMan*                           K2Node_DynamicCast_AsSQCamera_Man;                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQPlayerState*                         K2Node_DynamicCast_AsSQPlayer_State;               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MarkerWidget_Cameraman_C_IsSameTeam) == 0x000008, "Wrong alignment on BP_MarkerWidget_Cameraman_C_IsSameTeam");
static_assert(sizeof(BP_MarkerWidget_Cameraman_C_IsSameTeam) == 0x000048, "Wrong size on BP_MarkerWidget_Cameraman_C_IsSameTeam");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_IsSameTeam, IsSameTeam_0) == 0x000000, "Member 'BP_MarkerWidget_Cameraman_C_IsSameTeam::IsSameTeam_0' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_IsSameTeam, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'BP_MarkerWidget_Cameraman_C_IsSameTeam::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_IsSameTeam, K2Node_DynamicCast_AsSQPlayer_Controller) == 0x000010, "Member 'BP_MarkerWidget_Cameraman_C_IsSameTeam::K2Node_DynamicCast_AsSQPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_IsSameTeam, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_MarkerWidget_Cameraman_C_IsSameTeam::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_IsSameTeam, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BP_MarkerWidget_Cameraman_C_IsSameTeam::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_IsSameTeam, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'BP_MarkerWidget_Cameraman_C_IsSameTeam::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_IsSameTeam, K2Node_DynamicCast_AsSQCamera_Man) == 0x000028, "Member 'BP_MarkerWidget_Cameraman_C_IsSameTeam::K2Node_DynamicCast_AsSQCamera_Man' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_IsSameTeam, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_MarkerWidget_Cameraman_C_IsSameTeam::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_IsSameTeam, K2Node_DynamicCast_AsSQPlayer_State) == 0x000038, "Member 'BP_MarkerWidget_Cameraman_C_IsSameTeam::K2Node_DynamicCast_AsSQPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_IsSameTeam, K2Node_DynamicCast_bSuccess_2) == 0x000040, "Member 'BP_MarkerWidget_Cameraman_C_IsSameTeam::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_MarkerWidget_Cameraman_C_IsSameTeam, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000041, "Member 'BP_MarkerWidget_Cameraman_C_IsSameTeam::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

