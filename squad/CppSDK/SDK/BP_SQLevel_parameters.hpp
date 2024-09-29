#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SQLevel

#include "Basic.hpp"

#include "ESQBiome_structs.hpp"
#include "SQLevelEntry_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_SQLevel.BP_SQLevel_C.TryGetLevelEntry
// 0x0280 (0x0280 - 0x0000)
struct BP_SQLevel_C_TryGetLevelEntry final
{
public:
	bool                                          Success;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSQLevelEntry                          LevelEntry;                                        // 0x0008(0x0138)(Parm, OutParm, HasGetValueTypeHash)
	struct FSQLevelEntry                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x0140(0x0138)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SQLevel_C_TryGetLevelEntry) == 0x000008, "Wrong alignment on BP_SQLevel_C_TryGetLevelEntry");
static_assert(sizeof(BP_SQLevel_C_TryGetLevelEntry) == 0x000280, "Wrong size on BP_SQLevel_C_TryGetLevelEntry");
static_assert(offsetof(BP_SQLevel_C_TryGetLevelEntry, Success) == 0x000000, "Member 'BP_SQLevel_C_TryGetLevelEntry::Success' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLevelEntry, LevelEntry) == 0x000008, "Member 'BP_SQLevel_C_TryGetLevelEntry::LevelEntry' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLevelEntry, CallFunc_GetDataTableRowFromName_OutRow) == 0x000140, "Member 'BP_SQLevel_C_TryGetLevelEntry::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLevelEntry, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000278, "Member 'BP_SQLevel_C_TryGetLevelEntry::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function BP_SQLevel.BP_SQLevel_C.TryGetLoadingScreen
// 0x01D0 (0x01D0 - 0x0000)
struct BP_SQLevel_C_TryGetLoadingScreen final
{
public:
	TSoftObjectPtr<class UTexture2D>              OutLoadingScreen;                                  // 0x0000(0x0028)(Parm, OutParm, UObjectWrapper, HasGetValueTypeHash)
	struct FVector2D                              InViewportSize;                                    // 0x0028(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x2];                                       // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUltraWideResolution_ReturnValue;        // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TryGetLevelEntry_Success;                 // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSQLevelEntry                          CallFunc_TryGetLevelEntry_LevelEntry;              // 0x0040(0x0138)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x017A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x017B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_17C[0x4];                                      // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default;                             // 0x0180(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default_1;                           // 0x01A8(0x0028)(HasGetValueTypeHash)
};
static_assert(alignof(BP_SQLevel_C_TryGetLoadingScreen) == 0x000008, "Wrong alignment on BP_SQLevel_C_TryGetLoadingScreen");
static_assert(sizeof(BP_SQLevel_C_TryGetLoadingScreen) == 0x0001D0, "Wrong size on BP_SQLevel_C_TryGetLoadingScreen");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingScreen, OutLoadingScreen) == 0x000000, "Member 'BP_SQLevel_C_TryGetLoadingScreen::OutLoadingScreen' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingScreen, InViewportSize) == 0x000028, "Member 'BP_SQLevel_C_TryGetLoadingScreen::InViewportSize' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingScreen, ReturnValue) == 0x000030, "Member 'BP_SQLevel_C_TryGetLoadingScreen::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingScreen, Temp_bool_Variable) == 0x000031, "Member 'BP_SQLevel_C_TryGetLoadingScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingScreen, CallFunc_BreakVector2D_X) == 0x000034, "Member 'BP_SQLevel_C_TryGetLoadingScreen::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingScreen, CallFunc_BreakVector2D_Y) == 0x000038, "Member 'BP_SQLevel_C_TryGetLoadingScreen::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingScreen, CallFunc_IsUltraWideResolution_ReturnValue) == 0x00003C, "Member 'BP_SQLevel_C_TryGetLoadingScreen::CallFunc_IsUltraWideResolution_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingScreen, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00003D, "Member 'BP_SQLevel_C_TryGetLoadingScreen::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingScreen, Temp_bool_Variable_1) == 0x00003E, "Member 'BP_SQLevel_C_TryGetLoadingScreen::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingScreen, CallFunc_TryGetLevelEntry_Success) == 0x00003F, "Member 'BP_SQLevel_C_TryGetLoadingScreen::CallFunc_TryGetLevelEntry_Success' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingScreen, CallFunc_TryGetLevelEntry_LevelEntry) == 0x000040, "Member 'BP_SQLevel_C_TryGetLoadingScreen::CallFunc_TryGetLevelEntry_LevelEntry' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingScreen, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000178, "Member 'BP_SQLevel_C_TryGetLoadingScreen::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingScreen, CallFunc_IsValidSoftObjectReference_ReturnValue_1) == 0x000179, "Member 'BP_SQLevel_C_TryGetLoadingScreen::CallFunc_IsValidSoftObjectReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingScreen, CallFunc_BooleanAND_ReturnValue) == 0x00017A, "Member 'BP_SQLevel_C_TryGetLoadingScreen::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingScreen, CallFunc_BooleanAND_ReturnValue_1) == 0x00017B, "Member 'BP_SQLevel_C_TryGetLoadingScreen::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingScreen, K2Node_Select_Default) == 0x000180, "Member 'BP_SQLevel_C_TryGetLoadingScreen::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingScreen, K2Node_Select_Default_1) == 0x0001A8, "Member 'BP_SQLevel_C_TryGetLoadingScreen::K2Node_Select_Default_1' has a wrong offset!");

// Function BP_SQLevel.BP_SQLevel_C.TryGetDescription
// 0x0158 (0x0158 - 0x0000)
struct BP_SQLevel_C_TryGetDescription final
{
public:
	class FText                                   OutDescription;                                    // 0x0000(0x0018)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TryGetLevelEntry_Success;                 // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSQLevelEntry                          CallFunc_TryGetLevelEntry_LevelEntry;              // 0x0020(0x0138)(HasGetValueTypeHash)
};
static_assert(alignof(BP_SQLevel_C_TryGetDescription) == 0x000008, "Wrong alignment on BP_SQLevel_C_TryGetDescription");
static_assert(sizeof(BP_SQLevel_C_TryGetDescription) == 0x000158, "Wrong size on BP_SQLevel_C_TryGetDescription");
static_assert(offsetof(BP_SQLevel_C_TryGetDescription, OutDescription) == 0x000000, "Member 'BP_SQLevel_C_TryGetDescription::OutDescription' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetDescription, ReturnValue) == 0x000018, "Member 'BP_SQLevel_C_TryGetDescription::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetDescription, CallFunc_TryGetLevelEntry_Success) == 0x000019, "Member 'BP_SQLevel_C_TryGetDescription::CallFunc_TryGetLevelEntry_Success' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetDescription, CallFunc_TryGetLevelEntry_LevelEntry) == 0x000020, "Member 'BP_SQLevel_C_TryGetDescription::CallFunc_TryGetLevelEntry_LevelEntry' has a wrong offset!");

// Function BP_SQLevel.BP_SQLevel_C.TryGetDisplayName
// 0x0158 (0x0158 - 0x0000)
struct BP_SQLevel_C_TryGetDisplayName final
{
public:
	class FText                                   OutDisplayName;                                    // 0x0000(0x0018)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TryGetLevelEntry_Success;                 // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSQLevelEntry                          CallFunc_TryGetLevelEntry_LevelEntry;              // 0x0020(0x0138)(HasGetValueTypeHash)
};
static_assert(alignof(BP_SQLevel_C_TryGetDisplayName) == 0x000008, "Wrong alignment on BP_SQLevel_C_TryGetDisplayName");
static_assert(sizeof(BP_SQLevel_C_TryGetDisplayName) == 0x000158, "Wrong size on BP_SQLevel_C_TryGetDisplayName");
static_assert(offsetof(BP_SQLevel_C_TryGetDisplayName, OutDisplayName) == 0x000000, "Member 'BP_SQLevel_C_TryGetDisplayName::OutDisplayName' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetDisplayName, ReturnValue) == 0x000018, "Member 'BP_SQLevel_C_TryGetDisplayName::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetDisplayName, CallFunc_TryGetLevelEntry_Success) == 0x000019, "Member 'BP_SQLevel_C_TryGetDisplayName::CallFunc_TryGetLevelEntry_Success' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetDisplayName, CallFunc_TryGetLevelEntry_LevelEntry) == 0x000020, "Member 'BP_SQLevel_C_TryGetDisplayName::CallFunc_TryGetLevelEntry_LevelEntry' has a wrong offset!");

// Function BP_SQLevel.BP_SQLevel_C.TryGetLoadingMusic
// 0x0160 (0x0160 - 0x0000)
struct BP_SQLevel_C_TryGetLoadingMusic final
{
public:
	class USoundBase*                             OutLoadingMusic;                                   // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TryGetLevelEntry_Success;                 // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSQLevelEntry                          CallFunc_TryGetLevelEntry_LevelEntry;              // 0x0010(0x0138)(HasGetValueTypeHash)
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             K2Node_DynamicCast_AsSound_Base;                   // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SQLevel_C_TryGetLoadingMusic) == 0x000008, "Wrong alignment on BP_SQLevel_C_TryGetLoadingMusic");
static_assert(sizeof(BP_SQLevel_C_TryGetLoadingMusic) == 0x000160, "Wrong size on BP_SQLevel_C_TryGetLoadingMusic");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingMusic, OutLoadingMusic) == 0x000000, "Member 'BP_SQLevel_C_TryGetLoadingMusic::OutLoadingMusic' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingMusic, ReturnValue) == 0x000008, "Member 'BP_SQLevel_C_TryGetLoadingMusic::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingMusic, CallFunc_TryGetLevelEntry_Success) == 0x000009, "Member 'BP_SQLevel_C_TryGetLoadingMusic::CallFunc_TryGetLevelEntry_Success' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingMusic, CallFunc_TryGetLevelEntry_LevelEntry) == 0x000010, "Member 'BP_SQLevel_C_TryGetLoadingMusic::CallFunc_TryGetLevelEntry_LevelEntry' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingMusic, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x000148, "Member 'BP_SQLevel_C_TryGetLoadingMusic::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingMusic, K2Node_DynamicCast_AsSound_Base) == 0x000150, "Member 'BP_SQLevel_C_TryGetLoadingMusic::K2Node_DynamicCast_AsSound_Base' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_TryGetLoadingMusic, K2Node_DynamicCast_bSuccess) == 0x000158, "Member 'BP_SQLevel_C_TryGetLoadingMusic::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_SQLevel.BP_SQLevel_C.CanFactionOperate
// 0x0048 (0x0048 - 0x0000)
struct BP_SQLevel_C_CanFactionOperate final
{
public:
	class USQFactionSetup*                        FactionSetup;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQLayer*                               Layer;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SQFactionSetup_C*                   K2Node_DynamicCast_AsBP_SQFaction_Setup;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetOuterFaction_Out_Success;              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SQFaction_C*                        CallFunc_GetOuterFaction_OuterFaction;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SQLayer_C*                          K2Node_DynamicCast_AsBP_SQLayer;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Set_Contains_ReturnValue;                 // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Set_Contains_ReturnValue_1;               // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B[0x1];                                       // 0x003B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Set_Length_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SQLevel_C_CanFactionOperate) == 0x000008, "Wrong alignment on BP_SQLevel_C_CanFactionOperate");
static_assert(sizeof(BP_SQLevel_C_CanFactionOperate) == 0x000048, "Wrong size on BP_SQLevel_C_CanFactionOperate");
static_assert(offsetof(BP_SQLevel_C_CanFactionOperate, FactionSetup) == 0x000000, "Member 'BP_SQLevel_C_CanFactionOperate::FactionSetup' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_CanFactionOperate, Layer) == 0x000008, "Member 'BP_SQLevel_C_CanFactionOperate::Layer' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_CanFactionOperate, ReturnValue) == 0x000010, "Member 'BP_SQLevel_C_CanFactionOperate::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_CanFactionOperate, K2Node_DynamicCast_AsBP_SQFaction_Setup) == 0x000018, "Member 'BP_SQLevel_C_CanFactionOperate::K2Node_DynamicCast_AsBP_SQFaction_Setup' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_CanFactionOperate, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_SQLevel_C_CanFactionOperate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_CanFactionOperate, CallFunc_GetOuterFaction_Out_Success) == 0x000021, "Member 'BP_SQLevel_C_CanFactionOperate::CallFunc_GetOuterFaction_Out_Success' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_CanFactionOperate, CallFunc_GetOuterFaction_OuterFaction) == 0x000028, "Member 'BP_SQLevel_C_CanFactionOperate::CallFunc_GetOuterFaction_OuterFaction' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_CanFactionOperate, K2Node_DynamicCast_AsBP_SQLayer) == 0x000030, "Member 'BP_SQLevel_C_CanFactionOperate::K2Node_DynamicCast_AsBP_SQLayer' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_CanFactionOperate, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'BP_SQLevel_C_CanFactionOperate::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_CanFactionOperate, CallFunc_Set_Contains_ReturnValue) == 0x000039, "Member 'BP_SQLevel_C_CanFactionOperate::CallFunc_Set_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_CanFactionOperate, CallFunc_Set_Contains_ReturnValue_1) == 0x00003A, "Member 'BP_SQLevel_C_CanFactionOperate::CallFunc_Set_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_CanFactionOperate, CallFunc_Set_Length_ReturnValue) == 0x00003C, "Member 'BP_SQLevel_C_CanFactionOperate::CallFunc_Set_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_CanFactionOperate, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000040, "Member 'BP_SQLevel_C_CanFactionOperate::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_SQLevel.BP_SQLevel_C.GetBiomeId
// 0x002C (0x002C - 0x0000)
struct BP_SQLevel_C_GetBiomeId final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESQBiome                                      Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SQLevel_C_GetBiomeId) == 0x000004, "Wrong alignment on BP_SQLevel_C_GetBiomeId");
static_assert(sizeof(BP_SQLevel_C_GetBiomeId) == 0x00002C, "Wrong size on BP_SQLevel_C_GetBiomeId");
static_assert(offsetof(BP_SQLevel_C_GetBiomeId, ReturnValue) == 0x000000, "Member 'BP_SQLevel_C_GetBiomeId::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_GetBiomeId, Temp_byte_Variable) == 0x000008, "Member 'BP_SQLevel_C_GetBiomeId::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_GetBiomeId, Temp_name_Variable) == 0x00000C, "Member 'BP_SQLevel_C_GetBiomeId::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_GetBiomeId, Temp_name_Variable_1) == 0x000014, "Member 'BP_SQLevel_C_GetBiomeId::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_GetBiomeId, Temp_name_Variable_2) == 0x00001C, "Member 'BP_SQLevel_C_GetBiomeId::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SQLevel_C_GetBiomeId, K2Node_Select_Default) == 0x000024, "Member 'BP_SQLevel_C_GetBiomeId::K2Node_Select_Default' has a wrong offset!");

}

