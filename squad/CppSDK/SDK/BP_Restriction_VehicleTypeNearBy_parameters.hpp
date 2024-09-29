#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Restriction_VehicleTypeNearBy

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Restriction_VehicleTypeNearBy.BP_Restriction_VehicleTypeNearBy_C.IsAuthorizedWithVehicleInRange
// 0x0030 (0x0030 - 0x0000)
struct BP_Restriction_VehicleTypeNearBy_C_IsAuthorizedWithVehicleInRange final
{
public:
	class ASQPlayerController*                    InPlayer;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class ASQVehicle*                       InVehicleInRange;                                  // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SQVehicleSettings_C*                K2Node_DynamicCast_AsBP_SQVehicle_Settings;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Set_Length_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Contains_ReturnValue;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Restriction_VehicleTypeNearBy_C_IsAuthorizedWithVehicleInRange) == 0x000008, "Wrong alignment on BP_Restriction_VehicleTypeNearBy_C_IsAuthorizedWithVehicleInRange");
static_assert(sizeof(BP_Restriction_VehicleTypeNearBy_C_IsAuthorizedWithVehicleInRange) == 0x000030, "Wrong size on BP_Restriction_VehicleTypeNearBy_C_IsAuthorizedWithVehicleInRange");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsAuthorizedWithVehicleInRange, InPlayer) == 0x000000, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsAuthorizedWithVehicleInRange::InPlayer' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsAuthorizedWithVehicleInRange, InVehicleInRange) == 0x000008, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsAuthorizedWithVehicleInRange::InVehicleInRange' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsAuthorizedWithVehicleInRange, ReturnValue) == 0x000010, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsAuthorizedWithVehicleInRange::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsAuthorizedWithVehicleInRange, K2Node_DynamicCast_AsBP_SQVehicle_Settings) == 0x000018, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsAuthorizedWithVehicleInRange::K2Node_DynamicCast_AsBP_SQVehicle_Settings' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsAuthorizedWithVehicleInRange, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsAuthorizedWithVehicleInRange::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsAuthorizedWithVehicleInRange, CallFunc_Set_Length_ReturnValue) == 0x000024, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsAuthorizedWithVehicleInRange::CallFunc_Set_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsAuthorizedWithVehicleInRange, CallFunc_Set_Contains_ReturnValue) == 0x000028, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsAuthorizedWithVehicleInRange::CallFunc_Set_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsAuthorizedWithVehicleInRange, CallFunc_Greater_IntInt_ReturnValue) == 0x000029, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsAuthorizedWithVehicleInRange::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function BP_Restriction_VehicleTypeNearBy.BP_Restriction_VehicleTypeNearBy_C.IsRestrictedWithVehiclesInRange
// 0x0068 (0x0068 - 0x0000)
struct BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange final
{
public:
	class ASQPlayerController*                    InPlayer;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ASQVehicle*>                     InVehiclesInRange;                                 // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_Counter;                                         // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQVehicle*                             CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SQVehicleSettings_C*                K2Node_DynamicCast_AsBP_SQVehicle_Settings;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Set_Length_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Contains_ReturnValue;                 // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange) == 0x000008, "Wrong alignment on BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange");
static_assert(sizeof(BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange) == 0x000068, "Wrong size on BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange, InPlayer) == 0x000000, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange::InPlayer' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange, InVehiclesInRange) == 0x000008, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange::InVehiclesInRange' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange, ReturnValue) == 0x000018, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange, L_Counter) == 0x00001C, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange::L_Counter' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange, CallFunc_Array_Length_ReturnValue_1) == 0x000024, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange, Temp_int_Array_Index_Variable) == 0x000028, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange, K2Node_DynamicCast_AsBP_SQVehicle_Settings) == 0x000040, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange::K2Node_DynamicCast_AsBP_SQVehicle_Settings' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange, CallFunc_Less_IntInt_ReturnValue) == 0x000049, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange, CallFunc_Less_IntInt_ReturnValue_1) == 0x000050, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange, CallFunc_Set_Length_ReturnValue) == 0x000054, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange::CallFunc_Set_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange, CallFunc_Greater_IntInt_ReturnValue) == 0x000058, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange, CallFunc_Add_IntInt_ReturnValue_1) == 0x00005C, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange, CallFunc_Set_Contains_ReturnValue) == 0x000060, "Member 'BP_Restriction_VehicleTypeNearBy_C_IsRestrictedWithVehiclesInRange::CallFunc_Set_Contains_ReturnValue' has a wrong offset!");

}

