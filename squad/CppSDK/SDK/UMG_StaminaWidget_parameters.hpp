#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_StaminaWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UMG_StaminaWidget.UMG_StaminaWidget_C.ExecuteUbergraph_UMG_StaminaWidget
// 0x0090 (0x0090 - 0x0000)
struct UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Get_PercentageBar_Percent_0_ReturnValue;  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAdminCamera_ReturnValue;                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInVehicle_ReturnValue;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQPlayerController*                    K2Node_DynamicCast_AsSQPlayer_Controller;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B[0x5];                                       // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Get_PercentageBar_Percent_0_ReturnValue_1; // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQSoldier*                             K2Node_DynamicCast_AsSQSoldier;                    // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Get_PercentageBar_Percent_0_ReturnValue_2; // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MapRangeClamped_ReturnValue;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F[0x1];                                       // 0x006F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Get_PercentageBar_Percent_0_ReturnValue_3; // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0074(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0088(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget) == 0x000008, "Wrong alignment on UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget");
static_assert(sizeof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget) == 0x000090, "Wrong size on UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, EntryPoint) == 0x000000, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_Get_PercentageBar_Percent_0_ReturnValue) == 0x000004, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_Get_PercentageBar_Percent_0_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_IsAdminCamera_ReturnValue) == 0x000009, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_IsAdminCamera_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_IsInVehicle_ReturnValue) == 0x00000A, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_IsInVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_BooleanOR_ReturnValue) == 0x00000B, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000028, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, K2Node_DynamicCast_AsSQPlayer_Controller) == 0x000030, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::K2Node_DynamicCast_AsSQPlayer_Controller' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_Not_PreBool_ReturnValue) == 0x000039, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_BooleanAND_ReturnValue) == 0x00003A, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000040, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_Get_PercentageBar_Percent_0_ReturnValue_1) == 0x000048, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_Get_PercentageBar_Percent_0_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, K2Node_DynamicCast_AsSQSoldier) == 0x000050, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::K2Node_DynamicCast_AsSQSoldier' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_IsValid_ReturnValue_1) == 0x000059, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_Not_PreBool_ReturnValue_1) == 0x00005A, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00005B, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_BooleanOR_ReturnValue_1) == 0x00005C, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_Get_PercentageBar_Percent_0_ReturnValue_2) == 0x000060, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_Get_PercentageBar_Percent_0_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_SelectFloat_ReturnValue) == 0x000064, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_MapRangeClamped_ReturnValue) == 0x000068, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_Less_FloatFloat_ReturnValue) == 0x00006C, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_Less_FloatFloat_ReturnValue_1) == 0x00006D, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_Less_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_BooleanOR_ReturnValue_2) == 0x00006E, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_Get_PercentageBar_Percent_0_ReturnValue_3) == 0x000070, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_Get_PercentageBar_Percent_0_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000074, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000088, "Member 'UMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function UMG_StaminaWidget.UMG_StaminaWidget_C.Get_StaminaPercent_Text_0
// 0x0098 (0x0098 - 0x0000)
struct UMG_StaminaWidget_C_Get_StaminaPercent_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   Result;                                            // 0x0018(0x0018)(Edit, BlueprintVisible)
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQSoldier*                             K2Node_DynamicCast_AsSQSoldier;                    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0048(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0080(0x0018)()
};
static_assert(alignof(UMG_StaminaWidget_C_Get_StaminaPercent_Text_0) == 0x000008, "Wrong alignment on UMG_StaminaWidget_C_Get_StaminaPercent_Text_0");
static_assert(sizeof(UMG_StaminaWidget_C_Get_StaminaPercent_Text_0) == 0x000098, "Wrong size on UMG_StaminaWidget_C_Get_StaminaPercent_Text_0");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaPercent_Text_0, ReturnValue) == 0x000000, "Member 'UMG_StaminaWidget_C_Get_StaminaPercent_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaPercent_Text_0, Result) == 0x000018, "Member 'UMG_StaminaWidget_C_Get_StaminaPercent_Text_0::Result' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaPercent_Text_0, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000030, "Member 'UMG_StaminaWidget_C_Get_StaminaPercent_Text_0::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaPercent_Text_0, K2Node_DynamicCast_AsSQSoldier) == 0x000038, "Member 'UMG_StaminaWidget_C_Get_StaminaPercent_Text_0::K2Node_DynamicCast_AsSQSoldier' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaPercent_Text_0, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'UMG_StaminaWidget_C_Get_StaminaPercent_Text_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaPercent_Text_0, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'UMG_StaminaWidget_C_Get_StaminaPercent_Text_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaPercent_Text_0, CallFunc_Conv_FloatToText_ReturnValue) == 0x000048, "Member 'UMG_StaminaWidget_C_Get_StaminaPercent_Text_0::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaPercent_Text_0, CallFunc_Conv_TextToString_ReturnValue) == 0x000060, "Member 'UMG_StaminaWidget_C_Get_StaminaPercent_Text_0::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaPercent_Text_0, CallFunc_Concat_StrStr_ReturnValue) == 0x000070, "Member 'UMG_StaminaWidget_C_Get_StaminaPercent_Text_0::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaPercent_Text_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000080, "Member 'UMG_StaminaWidget_C_Get_StaminaPercent_Text_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function UMG_StaminaWidget.UMG_StaminaWidget_C.Get_StaminaBar_FillColorAndOpacity
// 0x00B0 (0x00B0 - 0x0000)
struct UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity final
{
public:
	struct FLinearColor                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Result;                                            // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerController*                    K2Node_DynamicCast_AsSQPlayer_Controller;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQVehicle*                             CallFunc_GetCurrentVehicle_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQSoldier*                             K2Node_DynamicCast_AsSQSoldier;                    // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_NormalizeToRange_ReturnValue;             // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_NormalizeToRange_ReturnValue_1;           // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerpUsingHSV_ReturnValue;      // 0x0074(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerpUsingHSV_ReturnValue_1;    // 0x008C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x009C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity) == 0x000008, "Wrong alignment on UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity");
static_assert(sizeof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity) == 0x0000B0, "Wrong size on UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, ReturnValue) == 0x000000, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, Result) == 0x000010, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::Result' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, K2Node_DynamicCast_AsSQPlayer_Controller) == 0x000028, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::K2Node_DynamicCast_AsSQPlayer_Controller' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, Temp_bool_Variable) == 0x000031, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, CallFunc_GetCurrentVehicle_ReturnValue) == 0x000038, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::CallFunc_GetCurrentVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000040, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, K2Node_DynamicCast_AsSQSoldier) == 0x000050, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::K2Node_DynamicCast_AsSQSoldier' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, CallFunc_IsValid_ReturnValue_1) == 0x000059, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00005C, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, CallFunc_NormalizeToRange_ReturnValue) == 0x000060, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::CallFunc_NormalizeToRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, CallFunc_Less_FloatFloat_ReturnValue) == 0x000064, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000068, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, CallFunc_FClamp_ReturnValue) == 0x00006C, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, CallFunc_NormalizeToRange_ReturnValue_1) == 0x000070, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::CallFunc_NormalizeToRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, CallFunc_LinearColorLerpUsingHSV_ReturnValue) == 0x000074, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::CallFunc_LinearColorLerpUsingHSV_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000084, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, CallFunc_FClamp_ReturnValue_1) == 0x000088, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, CallFunc_LinearColorLerpUsingHSV_ReturnValue_1) == 0x00008C, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::CallFunc_LinearColorLerpUsingHSV_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity, K2Node_Select_Default) == 0x00009C, "Member 'UMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity::K2Node_Select_Default' has a wrong offset!");

// Function UMG_StaminaWidget.UMG_StaminaWidget_C.Get_PercentageBar_Percent_0
// 0x0010 (0x0010 - 0x0000)
struct UMG_StaminaWidget_C_Get_PercentageBar_Percent_0 final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Result;                                            // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B[0x1];                                        // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_StaminaWidget_C_Get_PercentageBar_Percent_0) == 0x000004, "Wrong alignment on UMG_StaminaWidget_C_Get_PercentageBar_Percent_0");
static_assert(sizeof(UMG_StaminaWidget_C_Get_PercentageBar_Percent_0) == 0x000010, "Wrong size on UMG_StaminaWidget_C_Get_PercentageBar_Percent_0");
static_assert(offsetof(UMG_StaminaWidget_C_Get_PercentageBar_Percent_0, ReturnValue) == 0x000000, "Member 'UMG_StaminaWidget_C_Get_PercentageBar_Percent_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_PercentageBar_Percent_0, Result) == 0x000004, "Member 'UMG_StaminaWidget_C_Get_PercentageBar_Percent_0::Result' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_PercentageBar_Percent_0, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'UMG_StaminaWidget_C_Get_PercentageBar_Percent_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_PercentageBar_Percent_0, CallFunc_IsLocallyControlled_ReturnValue) == 0x000009, "Member 'UMG_StaminaWidget_C_Get_PercentageBar_Percent_0::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_PercentageBar_Percent_0, CallFunc_IsValid_ReturnValue_1) == 0x00000A, "Member 'UMG_StaminaWidget_C_Get_PercentageBar_Percent_0::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_StaminaWidget_C_Get_PercentageBar_Percent_0, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00000C, "Member 'UMG_StaminaWidget_C_Get_PercentageBar_Percent_0::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");

}

