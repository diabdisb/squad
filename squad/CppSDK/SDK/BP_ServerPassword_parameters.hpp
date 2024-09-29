#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ServerPassword

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BP_ServerPassword.BP_ServerPassword_C.Password Entered__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BP_ServerPassword_C_Password_Entered__DelegateSignature final
{
public:
	class FString                                 Password;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UBP_ServerPassword_C*                   Sender;                                            // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ServerPassword_C_Password_Entered__DelegateSignature) == 0x000008, "Wrong alignment on BP_ServerPassword_C_Password_Entered__DelegateSignature");
static_assert(sizeof(BP_ServerPassword_C_Password_Entered__DelegateSignature) == 0x000018, "Wrong size on BP_ServerPassword_C_Password_Entered__DelegateSignature");
static_assert(offsetof(BP_ServerPassword_C_Password_Entered__DelegateSignature, Password) == 0x000000, "Member 'BP_ServerPassword_C_Password_Entered__DelegateSignature::Password' has a wrong offset!");
static_assert(offsetof(BP_ServerPassword_C_Password_Entered__DelegateSignature, Sender) == 0x000010, "Member 'BP_ServerPassword_C_Password_Entered__DelegateSignature::Sender' has a wrong offset!");

// Function BP_ServerPassword.BP_ServerPassword_C.ExecuteUbergraph_BP_ServerPassword
// 0x0078 (0x0078 - 0x0000)
struct BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bSelected;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_MainMenuButton_C*                    K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bSelected_1;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMainMenu_Button_C*                     K2Node_ComponentBoundEvent_Button_1;               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0020(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0040(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword) == 0x000008, "Wrong alignment on BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword");
static_assert(sizeof(BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword) == 0x000078, "Wrong size on BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword");
static_assert(offsetof(BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword, EntryPoint) == 0x000000, "Member 'BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword, K2Node_ComponentBoundEvent_bSelected) == 0x000004, "Member 'BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword::K2Node_ComponentBoundEvent_bSelected' has a wrong offset!");
static_assert(offsetof(BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword, K2Node_ComponentBoundEvent_bSelected_1) == 0x000010, "Member 'BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword::K2Node_ComponentBoundEvent_bSelected_1' has a wrong offset!");
static_assert(offsetof(BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword, K2Node_ComponentBoundEvent_Button_1) == 0x000018, "Member 'BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword, K2Node_ComponentBoundEvent_Text) == 0x000020, "Member 'BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword, K2Node_ComponentBoundEvent_CommitMethod) == 0x000038, "Member 'BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000039, "Member 'BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword, CallFunc_GetText_ReturnValue) == 0x000040, "Member 'BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword, CallFunc_Conv_TextToString_ReturnValue) == 0x000058, "Member 'BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000068, "Member 'BP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");

// Function BP_ServerPassword.BP_ServerPassword_C.BndEvt__BP_ServerPassword_AcceptButton_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_ServerPassword_C_BndEvt__BP_ServerPassword_AcceptButton_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_MainMenuButton_C*                    Button;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ServerPassword_C_BndEvt__BP_ServerPassword_AcceptButton_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_ServerPassword_C_BndEvt__BP_ServerPassword_AcceptButton_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
static_assert(sizeof(BP_ServerPassword_C_BndEvt__BP_ServerPassword_AcceptButton_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature) == 0x000010, "Wrong size on BP_ServerPassword_C_BndEvt__BP_ServerPassword_AcceptButton_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
static_assert(offsetof(BP_ServerPassword_C_BndEvt__BP_ServerPassword_AcceptButton_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature, bSelected) == 0x000000, "Member 'BP_ServerPassword_C_BndEvt__BP_ServerPassword_AcceptButton_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature::bSelected' has a wrong offset!");
static_assert(offsetof(BP_ServerPassword_C_BndEvt__BP_ServerPassword_AcceptButton_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature, Button) == 0x000008, "Member 'BP_ServerPassword_C_BndEvt__BP_ServerPassword_AcceptButton_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function BP_ServerPassword.BP_ServerPassword_C.BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_ServerPassword_C_BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ServerPassword_C_BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on BP_ServerPassword_C_BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature");
static_assert(sizeof(BP_ServerPassword_C_BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on BP_ServerPassword_C_BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature");
static_assert(offsetof(BP_ServerPassword_C_BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'BP_ServerPassword_C_BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(BP_ServerPassword_C_BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'BP_ServerPassword_C_BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function BP_ServerPassword.BP_ServerPassword_C.BndEvt__DenyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_ServerPassword_C_BndEvt__DenyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMainMenu_Button_C*                     Button;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ServerPassword_C_BndEvt__DenyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_ServerPassword_C_BndEvt__DenyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(sizeof(BP_ServerPassword_C_BndEvt__DenyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000010, "Wrong size on BP_ServerPassword_C_BndEvt__DenyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(offsetof(BP_ServerPassword_C_BndEvt__DenyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature, bSelected) == 0x000000, "Member 'BP_ServerPassword_C_BndEvt__DenyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature::bSelected' has a wrong offset!");
static_assert(offsetof(BP_ServerPassword_C_BndEvt__DenyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature, Button) == 0x000008, "Member 'BP_ServerPassword_C_BndEvt__DenyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature::Button' has a wrong offset!");

}

