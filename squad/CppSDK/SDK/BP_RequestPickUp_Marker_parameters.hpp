#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RequestPickUp_Marker

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_RequestPickUp_Marker.BP_RequestPickUp_Marker_C.ExecuteUbergraph_BP_RequestPickUp_Marker
// 0x0068 (0x0068 - 0x0000)
struct BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQPlayerController*                    K2Node_DynamicCast_AsSQPlayer_Controller;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInVehicle_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQVehicle*                             CallFunc_GetCurrentVehicle_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43[0x1];                                       // 0x0043(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker) == 0x000008, "Wrong alignment on BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker");
static_assert(sizeof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker) == 0x000068, "Wrong size on BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, EntryPoint) == 0x000000, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, K2Node_DynamicCast_AsSQPlayer_Controller) == 0x000020, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::K2Node_DynamicCast_AsSQPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, CallFunc_IsInVehicle_ReturnValue) == 0x000029, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::CallFunc_IsInVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, CallFunc_GetCurrentVehicle_ReturnValue) == 0x000030, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::CallFunc_GetCurrentVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000039, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00003A, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00003B, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, CallFunc_BooleanOR_ReturnValue) == 0x00003C, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00003D, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, CallFunc_BooleanOR_ReturnValue_1) == 0x00003E, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x00003F, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, CallFunc_BooleanOR_ReturnValue_2) == 0x000040, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x000041, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, CallFunc_BooleanOR_ReturnValue_3) == 0x000042, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000044, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, CallFunc_BooleanOR_ReturnValue_4) == 0x000050, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000054, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, CallFunc_VSize_ReturnValue) == 0x000060, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000064, "Member 'BP_RequestPickUp_Marker_C_ExecuteUbergraph_BP_RequestPickUp_Marker::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");

}

