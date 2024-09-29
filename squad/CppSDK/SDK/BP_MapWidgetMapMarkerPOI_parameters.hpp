#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapWidgetMapMarkerPOI

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_MapWidgetMapMarkerPOI.BP_MapWidgetMapMarkerPOI_C.ExecuteUbergraph_BP_MapWidgetMapMarkerPOI
// 0x0228 (0x0228 - 0x0000)
struct BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGameTimeSinceCreation_ReturnValue;     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable;                              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_PlayerController_C> K2Node_DynamicCast_AsBPI_Player_Controller;        // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00A0(0x0018)()
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_HUD_C>            K2Node_DynamicCast_AsBPI_HUD;                      // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_SQMapCore_C*                         CallFunc_Get_Map_Core_Map_Core;                    // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RebaseLocalOriginOntoZero_ReturnValue;    // 0x00FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetNumGridLines_ReturnValue;              // 0x0108(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetMapBoundsScale_ReturnValue;            // 0x0110(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBox2D                                 CallFunc_GetWorldBounds_ReturnValue;               // 0x0118(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	struct FVector2D                              CallFunc_WorldToMapLocation_OutMapLocation;        // 0x012C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_WorldToMapLocation_ReturnValue;           // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_135[0x3];                                      // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_MapLocationToGridCoordinateString_ReturnValue; // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         K2Node_Event_UniformScale;                         // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14C[0x4];                                      // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0150(0x0018)()
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0168(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x01A4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B5[0x3];                                      // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_2;            // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerController*                    K2Node_DynamicCast_AsSQPlayer_Controller;          // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D1[0x3];                                      // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x01D4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1E4[0x4];                                      // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x01E8(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F2[0x6];                                      // 0x01F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQSquadState*                          CallFunc_Array_Get_Item;                           // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_201[0x7];                                      // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default_1;                           // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_2;                           // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0214(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_215[0x3];                                      // 0x0215(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGameTimeSinceCreation_ReturnValue_1;   // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0224(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0225(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI) == 0x000008, "Wrong alignment on BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI");
static_assert(sizeof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI) == 0x000228, "Wrong size on BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, EntryPoint) == 0x000000, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, Temp_bool_Variable) == 0x000004, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, Temp_struct_Variable) == 0x000008, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, Temp_struct_Variable_1) == 0x000018, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000040, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_GetOwner_ReturnValue) == 0x000048, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, Temp_bool_Variable_1) == 0x000050, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_GetGameTimeSinceCreation_ReturnValue) == 0x000054, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_GetGameTimeSinceCreation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, Temp_object_Variable) == 0x000058, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_Less_FloatFloat_ReturnValue) == 0x000060, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, Temp_object_Variable_1) == 0x000068, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, Temp_bool_Variable_2) == 0x000070, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, Temp_float_Variable) == 0x000074, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, Temp_float_Variable_1) == 0x000078, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_GetOwningPlayer_ReturnValue) == 0x000080, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, K2Node_DynamicCast_AsBPI_Player_Controller) == 0x000088, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::K2Node_DynamicCast_AsBPI_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_Conv_IntToText_ReturnValue) == 0x0000A0, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x0000B8, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_GetHUD_ReturnValue) == 0x0000C0, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, K2Node_DynamicCast_AsBPI_HUD) == 0x0000C8, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::K2Node_DynamicCast_AsBPI_HUD' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, K2Node_DynamicCast_bSuccess_1) == 0x0000D8, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_GetOwner_ReturnValue_1) == 0x0000E0, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_Get_Map_Core_Map_Core) == 0x0000E8, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_Get_Map_Core_Map_Core' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000F0, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_RebaseLocalOriginOntoZero_ReturnValue) == 0x0000FC, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_RebaseLocalOriginOntoZero_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_GetNumGridLines_ReturnValue) == 0x000108, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_GetNumGridLines_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_GetMapBoundsScale_ReturnValue) == 0x000110, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_GetMapBoundsScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_GetWorldBounds_ReturnValue) == 0x000118, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_GetWorldBounds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_WorldToMapLocation_OutMapLocation) == 0x00012C, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_WorldToMapLocation_OutMapLocation' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_WorldToMapLocation_ReturnValue) == 0x000134, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_WorldToMapLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_MapLocationToGridCoordinateString_ReturnValue) == 0x000138, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_MapLocationToGridCoordinateString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, K2Node_Event_UniformScale) == 0x000148, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::K2Node_Event_UniformScale' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_Conv_StringToText_ReturnValue) == 0x000150, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, K2Node_Event_MyGeometry) == 0x000168, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, K2Node_Event_InDeltaTime) == 0x0001A0, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, K2Node_Select_Default) == 0x0001A4, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_IsValid_ReturnValue_1) == 0x0001B4, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_PlayAnimation_ReturnValue) == 0x0001B8, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_GetOwningPlayer_ReturnValue_2) == 0x0001C0, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_GetOwningPlayer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, K2Node_DynamicCast_AsSQPlayer_Controller) == 0x0001C8, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::K2Node_DynamicCast_AsSQPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, K2Node_DynamicCast_bSuccess_2) == 0x0001D0, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001D4, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x0001E8, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_IsValid_ReturnValue_2) == 0x0001F0, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_IsValid_ReturnValue_3) == 0x0001F1, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_Array_Get_Item) == 0x0001F8, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_IsValid_ReturnValue_4) == 0x000200, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, K2Node_Select_Default_1) == 0x000208, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, K2Node_Select_Default_2) == 0x000210, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000214, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_GetOwner_ReturnValue_2) == 0x000218, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_GetGameTimeSinceCreation_ReturnValue_1) == 0x000220, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_GetGameTimeSinceCreation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000224, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000225, "Member 'BP_MapWidgetMapMarkerPOI_C_ExecuteUbergraph_BP_MapWidgetMapMarkerPOI::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function BP_MapWidgetMapMarkerPOI.BP_MapWidgetMapMarkerPOI_C.Tick
// 0x003C (0x003C - 0x0000)
struct BP_MapWidgetMapMarkerPOI_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapWidgetMapMarkerPOI_C_Tick) == 0x000004, "Wrong alignment on BP_MapWidgetMapMarkerPOI_C_Tick");
static_assert(sizeof(BP_MapWidgetMapMarkerPOI_C_Tick) == 0x00003C, "Wrong size on BP_MapWidgetMapMarkerPOI_C_Tick");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_Tick, MyGeometry) == 0x000000, "Member 'BP_MapWidgetMapMarkerPOI_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_Tick, InDeltaTime) == 0x000038, "Member 'BP_MapWidgetMapMarkerPOI_C_Tick::InDeltaTime' has a wrong offset!");

// Function BP_MapWidgetMapMarkerPOI.BP_MapWidgetMapMarkerPOI_C.OnScaleChanged
// 0x0004 (0x0004 - 0x0000)
struct BP_MapWidgetMapMarkerPOI_C_OnScaleChanged final
{
public:
	float                                         UniformScale;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapWidgetMapMarkerPOI_C_OnScaleChanged) == 0x000004, "Wrong alignment on BP_MapWidgetMapMarkerPOI_C_OnScaleChanged");
static_assert(sizeof(BP_MapWidgetMapMarkerPOI_C_OnScaleChanged) == 0x000004, "Wrong size on BP_MapWidgetMapMarkerPOI_C_OnScaleChanged");
static_assert(offsetof(BP_MapWidgetMapMarkerPOI_C_OnScaleChanged, UniformScale) == 0x000000, "Member 'BP_MapWidgetMapMarkerPOI_C_OnScaleChanged::UniformScale' has a wrong offset!");

}

