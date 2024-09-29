#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_VoipPlayer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FSQRoleEntry_structs.hpp"
#include "UMG_structs.hpp"
#include "Squad_structs.hpp"
#include "SquadVoice_structs.hpp"


namespace SDK::Params
{

// Function W_VoipPlayer.W_VoipPlayer_C.ExecuteUbergraph_W_VoipPlayer
// 0x0028 (0x0028 - 0x0000)
struct W_VoipPlayer_C_ExecuteUbergraph_W_VoipPlayer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQPlayerController*                    K2Node_DynamicCast_AsSQPlayer_Controller;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_VoipPlayer_C_ExecuteUbergraph_W_VoipPlayer) == 0x000008, "Wrong alignment on W_VoipPlayer_C_ExecuteUbergraph_W_VoipPlayer");
static_assert(sizeof(W_VoipPlayer_C_ExecuteUbergraph_W_VoipPlayer) == 0x000028, "Wrong size on W_VoipPlayer_C_ExecuteUbergraph_W_VoipPlayer");
static_assert(offsetof(W_VoipPlayer_C_ExecuteUbergraph_W_VoipPlayer, EntryPoint) == 0x000000, "Member 'W_VoipPlayer_C_ExecuteUbergraph_W_VoipPlayer::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_ExecuteUbergraph_W_VoipPlayer, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'W_VoipPlayer_C_ExecuteUbergraph_W_VoipPlayer::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_ExecuteUbergraph_W_VoipPlayer, K2Node_Event_IsDesignTime) == 0x000010, "Member 'W_VoipPlayer_C_ExecuteUbergraph_W_VoipPlayer::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_ExecuteUbergraph_W_VoipPlayer, K2Node_DynamicCast_AsSQPlayer_Controller) == 0x000018, "Member 'W_VoipPlayer_C_ExecuteUbergraph_W_VoipPlayer::K2Node_DynamicCast_AsSQPlayer_Controller' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_ExecuteUbergraph_W_VoipPlayer, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'W_VoipPlayer_C_ExecuteUbergraph_W_VoipPlayer::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function W_VoipPlayer.W_VoipPlayer_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_VoipPlayer_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_VoipPlayer_C_PreConstruct) == 0x000001, "Wrong alignment on W_VoipPlayer_C_PreConstruct");
static_assert(sizeof(W_VoipPlayer_C_PreConstruct) == 0x000001, "Wrong size on W_VoipPlayer_C_PreConstruct");
static_assert(offsetof(W_VoipPlayer_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_VoipPlayer_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_VoipPlayer.W_VoipPlayer_C.Refresh Speaker
// 0x02F0 (0x02F0 - 0x0000)
struct W_VoipPlayer_C_Refresh_Speaker final
{
public:
	struct FSQRemoteTalkerDisplayInfo             Speaker_Info;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          IsEnemy;                                           // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Direct_Command_Color;                              // 0x0014(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESQVoiceChannel                               Temp_byte_Variable_2;                              // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27[0x1];                                       // 0x0027(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_6;                              // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTexture2D*                             Temp_object_Variable;                              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0058(0x0018)()
	class ASQTeamState*                           CallFunc_GetTeamState_ReturnValue;                 // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_1;                              // 0x0080(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x0098(0x0018)()
	int32                                         CallFunc_GetFireTeamIndex_ReturnValue;             // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x00C0(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USQColorsDataAsset*                     CallFunc_Get_SQHUD_Colors_ColorsDataAsset;         // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetColor_ReturnValue;                     // 0x00E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCommander_ReturnValue;                  // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x3];                                       // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetColor_ReturnValue_1;                   // 0x00FC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_BoolToInt_ReturnValue;               // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetColor_ReturnValue_2;                   // 0x0110(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetColor_ReturnValue_3;                   // 0x0120(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetColor_ReturnValue_4;                   // 0x0130(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SQRoleSettings_C*                   K2Node_DynamicCast_AsBP_SQRole_Settings;           // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetRoleEntry_Success;                     // 0x0152(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_153[0x5];                                      // 0x0153(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFSQRoleEntry                          CallFunc_GetRoleEntry_RoleEntry;                   // 0x0158(0x00C0)(HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21A[0x6];                                      // 0x021A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0220(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFireTeamLeader_ReturnValue;             // 0x023A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSquadLeader_ReturnValue;                // 0x023B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23C[0x4];                                      // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default_3;                           // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetFullPlayerName_ReturnValue;            // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25C[0x4];                                      // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Mid_ReturnValue;                          // 0x0260(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_271[0x7];                                      // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_LeftChop_ReturnValue;                     // 0x0278(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_299[0x7];                                      // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default_4;                           // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x02B0(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_5;                           // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C9[0x3];                                      // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default_6;                           // 0x02CC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_7;                           // 0x02DC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_VoipPlayer_C_Refresh_Speaker) == 0x000008, "Wrong alignment on W_VoipPlayer_C_Refresh_Speaker");
static_assert(sizeof(W_VoipPlayer_C_Refresh_Speaker) == 0x0002F0, "Wrong size on W_VoipPlayer_C_Refresh_Speaker");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Speaker_Info) == 0x000000, "Member 'W_VoipPlayer_C_Refresh_Speaker::Speaker_Info' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, IsEnemy) == 0x000010, "Member 'W_VoipPlayer_C_Refresh_Speaker::IsEnemy' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Direct_Command_Color) == 0x000014, "Member 'W_VoipPlayer_C_Refresh_Speaker::Direct_Command_Color' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Temp_byte_Variable) == 0x000024, "Member 'W_VoipPlayer_C_Refresh_Speaker::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Temp_byte_Variable_1) == 0x000025, "Member 'W_VoipPlayer_C_Refresh_Speaker::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Temp_byte_Variable_2) == 0x000026, "Member 'W_VoipPlayer_C_Refresh_Speaker::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Temp_struct_Variable) == 0x000028, "Member 'W_VoipPlayer_C_Refresh_Speaker::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Temp_bool_Variable) == 0x000038, "Member 'W_VoipPlayer_C_Refresh_Speaker::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Temp_byte_Variable_3) == 0x000039, "Member 'W_VoipPlayer_C_Refresh_Speaker::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Temp_byte_Variable_4) == 0x00003A, "Member 'W_VoipPlayer_C_Refresh_Speaker::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Temp_bool_Variable_1) == 0x00003B, "Member 'W_VoipPlayer_C_Refresh_Speaker::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Temp_byte_Variable_5) == 0x00003C, "Member 'W_VoipPlayer_C_Refresh_Speaker::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Temp_byte_Variable_6) == 0x00003D, "Member 'W_VoipPlayer_C_Refresh_Speaker::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Temp_bool_Variable_2) == 0x00003E, "Member 'W_VoipPlayer_C_Refresh_Speaker::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Temp_bool_Variable_3) == 0x00003F, "Member 'W_VoipPlayer_C_Refresh_Speaker::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Temp_object_Variable) == 0x000040, "Member 'W_VoipPlayer_C_Refresh_Speaker::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Temp_object_Variable_1) == 0x000048, "Member 'W_VoipPlayer_C_Refresh_Speaker::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Temp_bool_Variable_4) == 0x000050, "Member 'W_VoipPlayer_C_Refresh_Speaker::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Temp_text_Variable) == 0x000058, "Member 'W_VoipPlayer_C_Refresh_Speaker::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_GetTeamState_ReturnValue) == 0x000070, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_GetTeamState_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000079, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Temp_text_Variable_1) == 0x000080, "Member 'W_VoipPlayer_C_Refresh_Speaker::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Temp_text_Variable_2) == 0x000098, "Member 'W_VoipPlayer_C_Refresh_Speaker::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_GetFireTeamIndex_ReturnValue) == 0x0000B0, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_GetFireTeamIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Temp_int_Variable) == 0x0000B4, "Member 'W_VoipPlayer_C_Refresh_Speaker::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000B8, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, K2Node_Select_Default) == 0x0000C0, "Member 'W_VoipPlayer_C_Refresh_Speaker::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, K2Node_Select_Default_1) == 0x0000D8, "Member 'W_VoipPlayer_C_Refresh_Speaker::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, Temp_bool_Variable_5) == 0x0000D9, "Member 'W_VoipPlayer_C_Refresh_Speaker::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_Get_SQHUD_Colors_ColorsDataAsset) == 0x0000E0, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_Get_SQHUD_Colors_ColorsDataAsset' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_GetColor_ReturnValue) == 0x0000E8, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_GetColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_IsCommander_ReturnValue) == 0x0000F8, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_IsCommander_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_GetColor_ReturnValue_1) == 0x0000FC, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_GetColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_Conv_BoolToInt_ReturnValue) == 0x00010C, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_Conv_BoolToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_GetColor_ReturnValue_2) == 0x000110, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_GetColor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_GetColor_ReturnValue_3) == 0x000120, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_GetColor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_GetColor_ReturnValue_4) == 0x000130, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_GetColor_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_IsValid_ReturnValue_1) == 0x000140, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, K2Node_DynamicCast_AsBP_SQRole_Settings) == 0x000148, "Member 'W_VoipPlayer_C_Refresh_Speaker::K2Node_DynamicCast_AsBP_SQRole_Settings' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, K2Node_DynamicCast_bSuccess) == 0x000150, "Member 'W_VoipPlayer_C_Refresh_Speaker::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_IsValid_ReturnValue_2) == 0x000151, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_GetRoleEntry_Success) == 0x000152, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_GetRoleEntry_Success' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_GetRoleEntry_RoleEntry) == 0x000158, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_GetRoleEntry_RoleEntry' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_BooleanAND_ReturnValue) == 0x000218, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_BooleanAND_ReturnValue_1) == 0x000219, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_Conv_IntToText_ReturnValue) == 0x000220, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_IsValid_ReturnValue_3) == 0x000238, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, K2Node_Select_Default_2) == 0x000239, "Member 'W_VoipPlayer_C_Refresh_Speaker::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_IsFireTeamLeader_ReturnValue) == 0x00023A, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_IsFireTeamLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_IsSquadLeader_ReturnValue) == 0x00023B, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_IsSquadLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, K2Node_Select_Default_3) == 0x000240, "Member 'W_VoipPlayer_C_Refresh_Speaker::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_GetFullPlayerName_ReturnValue) == 0x000248, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_GetFullPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_Len_ReturnValue) == 0x000258, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_Mid_ReturnValue) == 0x000260, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_Mid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_Greater_IntInt_ReturnValue) == 0x000270, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_LeftChop_ReturnValue) == 0x000278, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_LeftChop_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_Concat_StrStr_ReturnValue) == 0x000288, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_BooleanOR_ReturnValue) == 0x000298, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, K2Node_Select_Default_4) == 0x0002A0, "Member 'W_VoipPlayer_C_Refresh_Speaker::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, CallFunc_Conv_StringToText_ReturnValue) == 0x0002B0, "Member 'W_VoipPlayer_C_Refresh_Speaker::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, K2Node_Select_Default_5) == 0x0002C8, "Member 'W_VoipPlayer_C_Refresh_Speaker::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, K2Node_Select_Default_6) == 0x0002CC, "Member 'W_VoipPlayer_C_Refresh_Speaker::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Refresh_Speaker, K2Node_Select_Default_7) == 0x0002DC, "Member 'W_VoipPlayer_C_Refresh_Speaker::K2Node_Select_Default_7' has a wrong offset!");

// Function W_VoipPlayer.W_VoipPlayer_C.Fade Out
// 0x0018 (0x0018 - 0x0000)
struct W_VoipPlayer_C_Fade_Out final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_VoipPlayer_C_Fade_Out) == 0x000008, "Wrong alignment on W_VoipPlayer_C_Fade_Out");
static_assert(sizeof(W_VoipPlayer_C_Fade_Out) == 0x000018, "Wrong size on W_VoipPlayer_C_Fade_Out");
static_assert(offsetof(W_VoipPlayer_C_Fade_Out, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'W_VoipPlayer_C_Fade_Out::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Fade_Out, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'W_VoipPlayer_C_Fade_Out::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Fade_Out, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000002, "Member 'W_VoipPlayer_C_Fade_Out::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Fade_Out, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'W_VoipPlayer_C_Fade_Out::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Fade_Out, CallFunc_BooleanAND_ReturnValue) == 0x000010, "Member 'W_VoipPlayer_C_Fade_Out::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function W_VoipPlayer.W_VoipPlayer_C.Fade Fast
// 0x0018 (0x0018 - 0x0000)
struct W_VoipPlayer_C_Fade_Fast final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_VoipPlayer_C_Fade_Fast) == 0x000008, "Wrong alignment on W_VoipPlayer_C_Fade_Fast");
static_assert(sizeof(W_VoipPlayer_C_Fade_Fast) == 0x000018, "Wrong size on W_VoipPlayer_C_Fade_Fast");
static_assert(offsetof(W_VoipPlayer_C_Fade_Fast, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'W_VoipPlayer_C_Fade_Fast::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Fade_Fast, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'W_VoipPlayer_C_Fade_Fast::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Fade_Fast, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000002, "Member 'W_VoipPlayer_C_Fade_Fast::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Fade_Fast, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'W_VoipPlayer_C_Fade_Fast::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VoipPlayer_C_Fade_Fast, CallFunc_BooleanAND_ReturnValue) == 0x000010, "Member 'W_VoipPlayer_C_Fade_Fast::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

