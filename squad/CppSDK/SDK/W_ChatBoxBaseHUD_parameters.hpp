#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ChatBoxBaseHUD

#include "Basic.hpp"

#include "Squad_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C.ExecuteUbergraph_W_ChatBoxBaseHUD
// 0x0080 (0x0080 - 0x0000)
struct W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FString& PlayerName, class FString& Message, ESQChat Channel, const struct FLinearColor& Color, ESQNotificationTypes NotificationType)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQHUD*                                 K2Node_DynamicCast_AsSQHUD;                        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD) == 0x000008, "Wrong alignment on W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD");
static_assert(sizeof(W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD) == 0x000080, "Wrong size on W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD");
static_assert(offsetof(W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD, EntryPoint) == 0x000000, "Member 'W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD, CallFunc_GetOwningPlayer_ReturnValue) == 0x000028, "Member 'W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD, CallFunc_GetHUD_ReturnValue) == 0x000030, "Member 'W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD, K2Node_DynamicCast_AsSQHUD) == 0x000038, "Member 'W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD::K2Node_DynamicCast_AsSQHUD' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD, K2Node_CreateDelegate_OutputDelegate_2) == 0x000044, "Member 'W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000058, "Member 'W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000060, "Member 'W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000068, "Member 'W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD, CallFunc_PlayAnimationForward_ReturnValue) == 0x000070, "Member 'W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000079, "Member 'W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x00007A, "Member 'W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x00007B, "Member 'W_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C.Update Save Visibility
// 0x0018 (0x0018 - 0x0000)
struct W_ChatBoxBaseHUD_C_Update_Save_Visibility final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USaveData_UI_C*                         CallFunc_Get_UI_Save_Data_UI_Save_Data;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ChatBoxBaseHUD_C_Update_Save_Visibility) == 0x000008, "Wrong alignment on W_ChatBoxBaseHUD_C_Update_Save_Visibility");
static_assert(sizeof(W_ChatBoxBaseHUD_C_Update_Save_Visibility) == 0x000018, "Wrong size on W_ChatBoxBaseHUD_C_Update_Save_Visibility");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Update_Save_Visibility, Temp_bool_Variable) == 0x000000, "Member 'W_ChatBoxBaseHUD_C_Update_Save_Visibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Update_Save_Visibility, Temp_byte_Variable) == 0x000001, "Member 'W_ChatBoxBaseHUD_C_Update_Save_Visibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Update_Save_Visibility, Temp_byte_Variable_1) == 0x000002, "Member 'W_ChatBoxBaseHUD_C_Update_Save_Visibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Update_Save_Visibility, CallFunc_Get_UI_Save_Data_UI_Save_Data) == 0x000008, "Member 'W_ChatBoxBaseHUD_C_Update_Save_Visibility::CallFunc_Get_UI_Save_Data_UI_Save_Data' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Update_Save_Visibility, K2Node_Select_Default) == 0x000010, "Member 'W_ChatBoxBaseHUD_C_Update_Save_Visibility::K2Node_Select_Default' has a wrong offset!");

// Function W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C.Add New Chat
// 0x0088 (0x0088 - 0x0000)
struct W_ChatBoxBaseHUD_C_Add_New_Chat final
{
public:
	class FString                                 PlayerName;                                        // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Message;                                           // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESQChat                                       Channel;                                           // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Color;                                             // 0x0024(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESQNotificationTypes                          NotificationType;                                  // 0x0034(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37[0x1];                                       // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ChatEntry_C*                         CallFunc_Create_ReturnValue;                       // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USaveData_UI_C*                         CallFunc_Get_UI_Save_Data_UI_Save_Data;            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73[0x5];                                       // 0x0073(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScrollOffset_ReturnValue;              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ChatBoxBaseHUD_C_Add_New_Chat) == 0x000008, "Wrong alignment on W_ChatBoxBaseHUD_C_Add_New_Chat");
static_assert(sizeof(W_ChatBoxBaseHUD_C_Add_New_Chat) == 0x000088, "Wrong size on W_ChatBoxBaseHUD_C_Add_New_Chat");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Add_New_Chat, PlayerName) == 0x000000, "Member 'W_ChatBoxBaseHUD_C_Add_New_Chat::PlayerName' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Add_New_Chat, Message) == 0x000010, "Member 'W_ChatBoxBaseHUD_C_Add_New_Chat::Message' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Add_New_Chat, Channel) == 0x000020, "Member 'W_ChatBoxBaseHUD_C_Add_New_Chat::Channel' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Add_New_Chat, Color) == 0x000024, "Member 'W_ChatBoxBaseHUD_C_Add_New_Chat::Color' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Add_New_Chat, NotificationType) == 0x000034, "Member 'W_ChatBoxBaseHUD_C_Add_New_Chat::NotificationType' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Add_New_Chat, CallFunc_IsEmpty_ReturnValue) == 0x000035, "Member 'W_ChatBoxBaseHUD_C_Add_New_Chat::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Add_New_Chat, CallFunc_Contains_ReturnValue) == 0x000036, "Member 'W_ChatBoxBaseHUD_C_Add_New_Chat::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Add_New_Chat, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'W_ChatBoxBaseHUD_C_Add_New_Chat::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Add_New_Chat, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000050, "Member 'W_ChatBoxBaseHUD_C_Add_New_Chat::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Add_New_Chat, CallFunc_GetOwningPlayer_ReturnValue) == 0x000058, "Member 'W_ChatBoxBaseHUD_C_Add_New_Chat::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Add_New_Chat, CallFunc_Create_ReturnValue) == 0x000060, "Member 'W_ChatBoxBaseHUD_C_Add_New_Chat::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Add_New_Chat, CallFunc_Get_UI_Save_Data_UI_Save_Data) == 0x000068, "Member 'W_ChatBoxBaseHUD_C_Add_New_Chat::CallFunc_Get_UI_Save_Data_UI_Save_Data' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Add_New_Chat, CallFunc_Not_PreBool_ReturnValue) == 0x000070, "Member 'W_ChatBoxBaseHUD_C_Add_New_Chat::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Add_New_Chat, CallFunc_BooleanAND_ReturnValue) == 0x000071, "Member 'W_ChatBoxBaseHUD_C_Add_New_Chat::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Add_New_Chat, CallFunc_BooleanAND_ReturnValue_1) == 0x000072, "Member 'W_ChatBoxBaseHUD_C_Add_New_Chat::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Add_New_Chat, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000078, "Member 'W_ChatBoxBaseHUD_C_Add_New_Chat::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Add_New_Chat, CallFunc_GetScrollOffset_ReturnValue) == 0x000080, "Member 'W_ChatBoxBaseHUD_C_Add_New_Chat::CallFunc_GetScrollOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChatBoxBaseHUD_C_Add_New_Chat, CallFunc_Add_FloatFloat_ReturnValue) == 0x000084, "Member 'W_ChatBoxBaseHUD_C_Add_New_Chat::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

}

