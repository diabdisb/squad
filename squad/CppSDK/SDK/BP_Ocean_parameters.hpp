#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Ocean

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SQWater_structs.hpp"


namespace SDK::Params
{

// Function BP_Ocean.BP_Ocean_C.ExecuteUbergraph_BP_Ocean
// 0x0230 (0x0230 - 0x0000)
struct BP_Ocean_C_ExecuteUbergraph_BP_Ocean final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class USQGameUserSettings* UserSettings)> K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_OriginLocation;                 // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USQGameInstance*                        K2Node_DynamicCast_AsSQGame_Instance;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USQGameUserSettings*                    CallFunc_GetSquadGameUserSettings_ReturnValue;     // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USQGameUserSettings*              K2Node_CustomEvent_UserSettings;                   // 0x0070(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x009C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_125[0x3];                                      // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12D[0x3];                                      // 0x012D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_RebaseLocalOriginOntoZero_ReturnValue;    // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x013C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14D[0x3];                                      // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 K2Node_Event_InPackedData;                         // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15A[0x6];                                      // 0x015A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AWorldSettings*                         CallFunc_GetWorldSettings_ReturnValue;             // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQWorldSettings*                       K2Node_DynamicCast_AsSQWorld_Settings;             // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_179[0x3];                                      // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x017C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0188(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0194(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x01A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_GetAbs_ReturnValue;                // 0x01AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorFloat_ReturnValue;           // 0x01B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x01D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_2;                          // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_2;                          // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_2;                          // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_2;                   // 0x01EC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FC[0x4];                                      // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FODKMaskingVolume>              K2Node_MakeArray_Array;                            // 0x0200(0x0010)(ReferenceParm)
	TDelegate<void(const struct FVector& OriginLocation)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0210(0x0010)(ZeroConstructor, NoDestructor)
	TArray<struct FODKMaskingVolume>              K2Node_MakeArray_Array_1;                          // 0x0220(0x0010)(ReferenceParm)
};
static_assert(alignof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean) == 0x000008, "Wrong alignment on BP_Ocean_C_ExecuteUbergraph_BP_Ocean");
static_assert(sizeof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean) == 0x000230, "Wrong size on BP_Ocean_C_ExecuteUbergraph_BP_Ocean");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, EntryPoint) == 0x000000, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, Temp_bool_Variable) == 0x000005, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, Temp_float_Variable) == 0x000008, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, Temp_float_Variable_1) == 0x00000C, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, K2Node_MakeStruct_LinearColor) == 0x000010, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, K2Node_MakeStruct_LinearColor_1) == 0x000020, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_GetGameInstance_ReturnValue) == 0x000040, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, K2Node_CustomEvent_OriginLocation) == 0x000048, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::K2Node_CustomEvent_OriginLocation' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, K2Node_DynamicCast_AsSQGame_Instance) == 0x000058, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::K2Node_DynamicCast_AsSQGame_Instance' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_GetSquadGameUserSettings_ReturnValue) == 0x000068, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_GetSquadGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, K2Node_CustomEvent_UserSettings) == 0x000070, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::K2Node_CustomEvent_UserSettings' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000078, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_BreakVector_X) == 0x000084, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_BreakVector_Y) == 0x000088, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_BreakVector_Z) == 0x00008C, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_MakeVector_ReturnValue) == 0x000090, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x00009C, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000124, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, K2Node_Select_Default) == 0x000128, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_Not_PreBool_ReturnValue) == 0x00012C, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_RebaseLocalOriginOntoZero_ReturnValue) == 0x000130, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_RebaseLocalOriginOntoZero_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x00013C, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, K2Node_Event_EndPlayReason) == 0x00014C, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, K2Node_Event_InPackedData) == 0x000150, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::K2Node_Event_InPackedData' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_IsDedicatedServer_ReturnValue) == 0x000158, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_IsValid_ReturnValue_1) == 0x000159, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_GetWorldSettings_ReturnValue) == 0x000160, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_GetWorldSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_IsValid_ReturnValue_2) == 0x000168, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, K2Node_DynamicCast_AsSQWorld_Settings) == 0x000170, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::K2Node_DynamicCast_AsSQWorld_Settings' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, K2Node_DynamicCast_bSuccess_1) == 0x000178, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x00017C, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000188, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000194, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_Add_VectorVector_ReturnValue) == 0x0001A0, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_Vector_GetAbs_ReturnValue) == 0x0001AC, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_Vector_GetAbs_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_Divide_VectorFloat_ReturnValue) == 0x0001B8, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_Divide_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_BreakVector_X_1) == 0x0001C4, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_BreakVector_Y_1) == 0x0001C8, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_BreakVector_Z_1) == 0x0001CC, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0001D0, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_FMax_ReturnValue) == 0x0001DC, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_BreakVector_X_2) == 0x0001E0, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_BreakVector_Y_2) == 0x0001E4, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, CallFunc_BreakVector_Z_2) == 0x0001E8, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, K2Node_MakeStruct_LinearColor_2) == 0x0001EC, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::K2Node_MakeStruct_LinearColor_2' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, K2Node_MakeArray_Array) == 0x000200, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, K2Node_CreateDelegate_OutputDelegate_1) == 0x000210, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_ExecuteUbergraph_BP_Ocean, K2Node_MakeArray_Array_1) == 0x000220, "Member 'BP_Ocean_C_ExecuteUbergraph_BP_Ocean::K2Node_MakeArray_Array_1' has a wrong offset!");

// Function BP_Ocean.BP_Ocean_C.OnPackedDataUpdated
// 0x0008 (0x0008 - 0x0000)
struct BP_Ocean_C_OnPackedDataUpdated final
{
public:
	class UTextureRenderTarget2D*                 InPackedData;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Ocean_C_OnPackedDataUpdated) == 0x000008, "Wrong alignment on BP_Ocean_C_OnPackedDataUpdated");
static_assert(sizeof(BP_Ocean_C_OnPackedDataUpdated) == 0x000008, "Wrong size on BP_Ocean_C_OnPackedDataUpdated");
static_assert(offsetof(BP_Ocean_C_OnPackedDataUpdated, InPackedData) == 0x000000, "Member 'BP_Ocean_C_OnPackedDataUpdated::InPackedData' has a wrong offset!");

// Function BP_Ocean.BP_Ocean_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_Ocean_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Ocean_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_Ocean_C_ReceiveEndPlay");
static_assert(sizeof(BP_Ocean_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_Ocean_C_ReceiveEndPlay");
static_assert(offsetof(BP_Ocean_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_Ocean_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_Ocean.BP_Ocean_C.OnSettingsChanged
// 0x0008 (0x0008 - 0x0000)
struct BP_Ocean_C_OnSettingsChanged final
{
public:
	const class USQGameUserSettings*              UserSettings;                                      // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Ocean_C_OnSettingsChanged) == 0x000008, "Wrong alignment on BP_Ocean_C_OnSettingsChanged");
static_assert(sizeof(BP_Ocean_C_OnSettingsChanged) == 0x000008, "Wrong size on BP_Ocean_C_OnSettingsChanged");
static_assert(offsetof(BP_Ocean_C_OnSettingsChanged, UserSettings) == 0x000000, "Member 'BP_Ocean_C_OnSettingsChanged::UserSettings' has a wrong offset!");

// Function BP_Ocean.BP_Ocean_C.Rebase
// 0x000C (0x000C - 0x0000)
struct BP_Ocean_C_Rebase final
{
public:
	struct FVector                                OriginLocation;                                    // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Ocean_C_Rebase) == 0x000004, "Wrong alignment on BP_Ocean_C_Rebase");
static_assert(sizeof(BP_Ocean_C_Rebase) == 0x00000C, "Wrong size on BP_Ocean_C_Rebase");
static_assert(offsetof(BP_Ocean_C_Rebase, OriginLocation) == 0x000000, "Member 'BP_Ocean_C_Rebase::OriginLocation' has a wrong offset!");

// Function BP_Ocean.BP_Ocean_C.Set MPC Variables
// 0x004C (0x004C - 0x0000)
struct BP_Ocean_C_Set_MPC_Variables final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0018(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RebaseLocalOriginOntoZero_ReturnValue;    // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Ocean_C_Set_MPC_Variables) == 0x000004, "Wrong alignment on BP_Ocean_C_Set_MPC_Variables");
static_assert(sizeof(BP_Ocean_C_Set_MPC_Variables) == 0x00004C, "Wrong size on BP_Ocean_C_Set_MPC_Variables");
static_assert(offsetof(BP_Ocean_C_Set_MPC_Variables, Temp_bool_Variable) == 0x000000, "Member 'BP_Ocean_C_Set_MPC_Variables::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MPC_Variables, K2Node_MakeStruct_LinearColor) == 0x000004, "Member 'BP_Ocean_C_Set_MPC_Variables::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MPC_Variables, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'BP_Ocean_C_Set_MPC_Variables::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MPC_Variables, K2Node_Select_Default) == 0x000018, "Member 'BP_Ocean_C_Set_MPC_Variables::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MPC_Variables, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'BP_Ocean_C_Set_MPC_Variables::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MPC_Variables, CallFunc_RebaseLocalOriginOntoZero_ReturnValue) == 0x000034, "Member 'BP_Ocean_C_Set_MPC_Variables::CallFunc_RebaseLocalOriginOntoZero_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MPC_Variables, CallFunc_BreakVector_X) == 0x000040, "Member 'BP_Ocean_C_Set_MPC_Variables::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MPC_Variables, CallFunc_BreakVector_Y) == 0x000044, "Member 'BP_Ocean_C_Set_MPC_Variables::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MPC_Variables, CallFunc_BreakVector_Z) == 0x000048, "Member 'BP_Ocean_C_Set_MPC_Variables::CallFunc_BreakVector_Z' has a wrong offset!");

// Function BP_Ocean.BP_Ocean_C.Set MIDs
// 0x05F0 (0x05F0 - 0x0000)
struct BP_Ocean_C_Set_MIDs final
{
public:
	class UMaterialInterface*                     OceanSurface;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     WaterLine_0;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_2;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_3;                             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USQGameUserSettings*                    CallFunc_GetSquadGameUserSettings_ReturnValue;     // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPostProcessingQuality_ReturnValue;     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedBlendable                     K2Node_MakeStruct_WeightedBlendable;               // 0x0058(0x0010)(NoDestructor)
	TArray<struct FWeightedBlendable>             K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm)
	struct FWeightedBlendables                    K2Node_MakeStruct_WeightedBlendables;              // 0x0078(0x0010)()
	uint8                                         Pad_88[0x8];                                       // 0x0088(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   K2Node_MakeStruct_PostProcessSettings;             // 0x0090(0x0560)()
};
static_assert(alignof(BP_Ocean_C_Set_MIDs) == 0x000010, "Wrong alignment on BP_Ocean_C_Set_MIDs");
static_assert(sizeof(BP_Ocean_C_Set_MIDs) == 0x0005F0, "Wrong size on BP_Ocean_C_Set_MIDs");
static_assert(offsetof(BP_Ocean_C_Set_MIDs, OceanSurface) == 0x000000, "Member 'BP_Ocean_C_Set_MIDs::OceanSurface' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MIDs, WaterLine_0) == 0x000008, "Member 'BP_Ocean_C_Set_MIDs::WaterLine_0' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MIDs, Temp_float_Variable) == 0x000010, "Member 'BP_Ocean_C_Set_MIDs::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MIDs, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000018, "Member 'BP_Ocean_C_Set_MIDs::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MIDs, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000020, "Member 'BP_Ocean_C_Set_MIDs::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MIDs, Temp_float_Variable_1) == 0x000028, "Member 'BP_Ocean_C_Set_MIDs::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MIDs, Temp_float_Variable_2) == 0x00002C, "Member 'BP_Ocean_C_Set_MIDs::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MIDs, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x000030, "Member 'BP_Ocean_C_Set_MIDs::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MIDs, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000034, "Member 'BP_Ocean_C_Set_MIDs::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MIDs, Temp_float_Variable_3) == 0x000038, "Member 'BP_Ocean_C_Set_MIDs::Temp_float_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MIDs, Temp_int_Variable) == 0x00003C, "Member 'BP_Ocean_C_Set_MIDs::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MIDs, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BP_Ocean_C_Set_MIDs::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MIDs, CallFunc_GetSquadGameUserSettings_ReturnValue) == 0x000048, "Member 'BP_Ocean_C_Set_MIDs::CallFunc_GetSquadGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MIDs, CallFunc_GetPostProcessingQuality_ReturnValue) == 0x000050, "Member 'BP_Ocean_C_Set_MIDs::CallFunc_GetPostProcessingQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MIDs, K2Node_Select_Default) == 0x000054, "Member 'BP_Ocean_C_Set_MIDs::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MIDs, K2Node_MakeStruct_WeightedBlendable) == 0x000058, "Member 'BP_Ocean_C_Set_MIDs::K2Node_MakeStruct_WeightedBlendable' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MIDs, K2Node_MakeArray_Array) == 0x000068, "Member 'BP_Ocean_C_Set_MIDs::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MIDs, K2Node_MakeStruct_WeightedBlendables) == 0x000078, "Member 'BP_Ocean_C_Set_MIDs::K2Node_MakeStruct_WeightedBlendables' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_Set_MIDs, K2Node_MakeStruct_PostProcessSettings) == 0x000090, "Member 'BP_Ocean_C_Set_MIDs::K2Node_MakeStruct_PostProcessSettings' has a wrong offset!");

// Function BP_Ocean.BP_Ocean_C.SetFFTs
// 0x0010 (0x0010 - 0x0000)
struct BP_Ocean_C_SetFFTs final
{
public:
	class UMaterialInstanceDynamic*               Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SetupNormal;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Ocean_C_SetFFTs) == 0x000008, "Wrong alignment on BP_Ocean_C_SetFFTs");
static_assert(sizeof(BP_Ocean_C_SetFFTs) == 0x000010, "Wrong size on BP_Ocean_C_SetFFTs");
static_assert(offsetof(BP_Ocean_C_SetFFTs, Target) == 0x000000, "Member 'BP_Ocean_C_SetFFTs::Target' has a wrong offset!");
static_assert(offsetof(BP_Ocean_C_SetFFTs, SetupNormal) == 0x000008, "Member 'BP_Ocean_C_SetFFTs::SetupNormal' has a wrong offset!");

}

