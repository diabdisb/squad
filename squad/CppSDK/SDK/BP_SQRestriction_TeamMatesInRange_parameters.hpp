#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SQRestriction_TeamMatesInRange

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_SQRestriction_TeamMatesInRange.BP_SQRestriction_TeamMatesInRange_C.IsAuthorizedWithPlayerInRange
// 0x0030 (0x0030 - 0x0000)
struct BP_SQRestriction_TeamMatesInRange_C_IsAuthorizedWithPlayerInRange final
{
public:
	class ASQPlayerController*                    InPlayer;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class ASQPlayerState*                   InPlayerInRange;                                   // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USQRoleSettings*                        CallFunc_GetCurrentRole_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SQRoleSettings_C*                   K2Node_DynamicCast_AsBP_SQRole_Settings;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Set_Contains_ReturnValue;                 // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SQRestriction_TeamMatesInRange_C_IsAuthorizedWithPlayerInRange) == 0x000008, "Wrong alignment on BP_SQRestriction_TeamMatesInRange_C_IsAuthorizedWithPlayerInRange");
static_assert(sizeof(BP_SQRestriction_TeamMatesInRange_C_IsAuthorizedWithPlayerInRange) == 0x000030, "Wrong size on BP_SQRestriction_TeamMatesInRange_C_IsAuthorizedWithPlayerInRange");
static_assert(offsetof(BP_SQRestriction_TeamMatesInRange_C_IsAuthorizedWithPlayerInRange, InPlayer) == 0x000000, "Member 'BP_SQRestriction_TeamMatesInRange_C_IsAuthorizedWithPlayerInRange::InPlayer' has a wrong offset!");
static_assert(offsetof(BP_SQRestriction_TeamMatesInRange_C_IsAuthorizedWithPlayerInRange, InPlayerInRange) == 0x000008, "Member 'BP_SQRestriction_TeamMatesInRange_C_IsAuthorizedWithPlayerInRange::InPlayerInRange' has a wrong offset!");
static_assert(offsetof(BP_SQRestriction_TeamMatesInRange_C_IsAuthorizedWithPlayerInRange, ReturnValue) == 0x000010, "Member 'BP_SQRestriction_TeamMatesInRange_C_IsAuthorizedWithPlayerInRange::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SQRestriction_TeamMatesInRange_C_IsAuthorizedWithPlayerInRange, CallFunc_GetCurrentRole_ReturnValue) == 0x000018, "Member 'BP_SQRestriction_TeamMatesInRange_C_IsAuthorizedWithPlayerInRange::CallFunc_GetCurrentRole_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SQRestriction_TeamMatesInRange_C_IsAuthorizedWithPlayerInRange, K2Node_DynamicCast_AsBP_SQRole_Settings) == 0x000020, "Member 'BP_SQRestriction_TeamMatesInRange_C_IsAuthorizedWithPlayerInRange::K2Node_DynamicCast_AsBP_SQRole_Settings' has a wrong offset!");
static_assert(offsetof(BP_SQRestriction_TeamMatesInRange_C_IsAuthorizedWithPlayerInRange, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_SQRestriction_TeamMatesInRange_C_IsAuthorizedWithPlayerInRange::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SQRestriction_TeamMatesInRange_C_IsAuthorizedWithPlayerInRange, CallFunc_Set_Contains_ReturnValue) == 0x000029, "Member 'BP_SQRestriction_TeamMatesInRange_C_IsAuthorizedWithPlayerInRange::CallFunc_Set_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SQRestriction_TeamMatesInRange_C_IsAuthorizedWithPlayerInRange, CallFunc_Not_PreBool_ReturnValue) == 0x00002A, "Member 'BP_SQRestriction_TeamMatesInRange_C_IsAuthorizedWithPlayerInRange::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_SQRestriction_TeamMatesInRange.BP_SQRestriction_TeamMatesInRange_C.IsRestrictedWithPlayersInRange
// 0x0038 (0x0038 - 0x0000)
struct BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange final
{
public:
	class ASQPlayerController*                    InPlayer;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ASQPlayerState*>                 InPlayersInRange;                                  // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQRoleSettings*                        CallFunc_GetCurrentRole_ReturnValue;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SQRoleSettings_C*                   K2Node_DynamicCast_AsBP_SQRole_Settings;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Set_Contains_ReturnValue;                 // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange) == 0x000008, "Wrong alignment on BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange");
static_assert(sizeof(BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange) == 0x000038, "Wrong size on BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange");
static_assert(offsetof(BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange, InPlayer) == 0x000000, "Member 'BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange::InPlayer' has a wrong offset!");
static_assert(offsetof(BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange, InPlayersInRange) == 0x000008, "Member 'BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange::InPlayersInRange' has a wrong offset!");
static_assert(offsetof(BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange, ReturnValue) == 0x000018, "Member 'BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange, CallFunc_GetCurrentRole_ReturnValue) == 0x000020, "Member 'BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange::CallFunc_GetCurrentRole_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange, K2Node_DynamicCast_AsBP_SQRole_Settings) == 0x000028, "Member 'BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange::K2Node_DynamicCast_AsBP_SQRole_Settings' has a wrong offset!");
static_assert(offsetof(BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange, CallFunc_Less_IntInt_ReturnValue) == 0x000031, "Member 'BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange, CallFunc_Set_Contains_ReturnValue) == 0x000032, "Member 'BP_SQRestriction_TeamMatesInRange_C_IsRestrictedWithPlayersInRange::CallFunc_Set_Contains_ReturnValue' has a wrong offset!");

}

