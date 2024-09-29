#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModDetails

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ModdingRuntime_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ModDetails.ModDetails_C.ExecuteUbergraph_ModDetails
// 0x00C8 (0x00C8 - 0x0000)
struct ModDetails_C_ExecuteUbergraph_ModDetails final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         Temp_float_Variable;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2DDynamic*                      K2Node_CustomEvent_Texture_1;                      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UTexture2DDynamic* Texture)> K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	class UTexture2DDynamic*                      K2Node_CustomEvent_Texture;                        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UTexture2DDynamic* Texture)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	class UTexture2DDynamic*                      Temp_object_Variable;                              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72[0x2];                                       // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_1;                           // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bSelected_2;            // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMainMenu_Button_C*                     K2Node_ComponentBoundEvent_Button_2;               // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_Select_Default_2;                           // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bSelected_1;            // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMainMenu_Button_C*                     K2Node_ComponentBoundEvent_Button_1;               // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bSelected;              // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMainMenu_Button_C*                     K2Node_ComponentBoundEvent_Button;                 // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAsyncTaskDownloadImage*                CallFunc_DownloadImage_ReturnValue;                // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ModDetails_C_ExecuteUbergraph_ModDetails) == 0x000008, "Wrong alignment on ModDetails_C_ExecuteUbergraph_ModDetails");
static_assert(sizeof(ModDetails_C_ExecuteUbergraph_ModDetails) == 0x0000C8, "Wrong size on ModDetails_C_ExecuteUbergraph_ModDetails");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, EntryPoint) == 0x000000, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::EntryPoint' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, Temp_bool_Variable) == 0x000004, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, Temp_byte_Variable) == 0x000005, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, Temp_byte_Variable_1) == 0x000006, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, Temp_bool_Variable_1) == 0x000007, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, Temp_float_Variable) == 0x000008, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, Temp_float_Variable_1) == 0x00000C, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, Temp_bool_Variable_2) == 0x000010, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, K2Node_MakeStruct_Margin) == 0x000014, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, K2Node_MakeStruct_Margin_1) == 0x000024, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, K2Node_CustomEvent_Texture_1) == 0x000038, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::K2Node_CustomEvent_Texture_1' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, K2Node_CustomEvent_Texture) == 0x000050, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::K2Node_CustomEvent_Texture' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, K2Node_CreateDelegate_OutputDelegate_1) == 0x000058, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, Temp_object_Variable) == 0x000068, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, CallFunc_Not_PreBool_ReturnValue) == 0x000070, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, K2Node_Select_Default) == 0x000071, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, K2Node_Select_Default_1) == 0x000074, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, K2Node_ComponentBoundEvent_bSelected_2) == 0x000078, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::K2Node_ComponentBoundEvent_bSelected_2' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, K2Node_ComponentBoundEvent_Button_2) == 0x000080, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, K2Node_Select_Default_2) == 0x000088, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, K2Node_ComponentBoundEvent_bSelected_1) == 0x000098, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::K2Node_ComponentBoundEvent_bSelected_1' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, K2Node_ComponentBoundEvent_Button_1) == 0x0000A0, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, K2Node_ComponentBoundEvent_bSelected) == 0x0000A8, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::K2Node_ComponentBoundEvent_bSelected' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, K2Node_ComponentBoundEvent_Button) == 0x0000B0, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, CallFunc_DownloadImage_ReturnValue) == 0x0000B8, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::CallFunc_DownloadImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0000C0, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModDetails_C_ExecuteUbergraph_ModDetails, CallFunc_IsValid_ReturnValue) == 0x0000C1, "Member 'ModDetails_C_ExecuteUbergraph_ModDetails::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ModDetails.ModDetails_C.BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct ModDetails_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMainMenu_Button_C*                     Button;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ModDetails_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on ModDetails_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature");
static_assert(sizeof(ModDetails_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature) == 0x000010, "Wrong size on ModDetails_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature");
static_assert(offsetof(ModDetails_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature, bSelected) == 0x000000, "Member 'ModDetails_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature::bSelected' has a wrong offset!");
static_assert(offsetof(ModDetails_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature, Button) == 0x000008, "Member 'ModDetails_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function ModDetails.ModDetails_C.BndEvt__ButtonDISLIKE_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct ModDetails_C_BndEvt__ButtonDISLIKE_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMainMenu_Button_C*                     Button;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ModDetails_C_BndEvt__ButtonDISLIKE_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on ModDetails_C_BndEvt__ButtonDISLIKE_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature");
static_assert(sizeof(ModDetails_C_BndEvt__ButtonDISLIKE_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature) == 0x000010, "Wrong size on ModDetails_C_BndEvt__ButtonDISLIKE_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature");
static_assert(offsetof(ModDetails_C_BndEvt__ButtonDISLIKE_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature, bSelected) == 0x000000, "Member 'ModDetails_C_BndEvt__ButtonDISLIKE_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature::bSelected' has a wrong offset!");
static_assert(offsetof(ModDetails_C_BndEvt__ButtonDISLIKE_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature, Button) == 0x000008, "Member 'ModDetails_C_BndEvt__ButtonDISLIKE_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function ModDetails.ModDetails_C.BndEvt__ButtonLIKE_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct ModDetails_C_BndEvt__ButtonLIKE_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMainMenu_Button_C*                     Button;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ModDetails_C_BndEvt__ButtonLIKE_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on ModDetails_C_BndEvt__ButtonLIKE_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");
static_assert(sizeof(ModDetails_C_BndEvt__ButtonLIKE_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature) == 0x000010, "Wrong size on ModDetails_C_BndEvt__ButtonLIKE_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");
static_assert(offsetof(ModDetails_C_BndEvt__ButtonLIKE_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature, bSelected) == 0x000000, "Member 'ModDetails_C_BndEvt__ButtonLIKE_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature::bSelected' has a wrong offset!");
static_assert(offsetof(ModDetails_C_BndEvt__ButtonLIKE_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature, Button) == 0x000008, "Member 'ModDetails_C_BndEvt__ButtonLIKE_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function ModDetails.ModDetails_C.OnSuccess_D99CC5A5414F1A0E142CABB84BB5A40B
// 0x0008 (0x0008 - 0x0000)
struct ModDetails_C_OnSuccess_D99CC5A5414F1A0E142CABB84BB5A40B final
{
public:
	class UTexture2DDynamic*                      Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ModDetails_C_OnSuccess_D99CC5A5414F1A0E142CABB84BB5A40B) == 0x000008, "Wrong alignment on ModDetails_C_OnSuccess_D99CC5A5414F1A0E142CABB84BB5A40B");
static_assert(sizeof(ModDetails_C_OnSuccess_D99CC5A5414F1A0E142CABB84BB5A40B) == 0x000008, "Wrong size on ModDetails_C_OnSuccess_D99CC5A5414F1A0E142CABB84BB5A40B");
static_assert(offsetof(ModDetails_C_OnSuccess_D99CC5A5414F1A0E142CABB84BB5A40B, Texture) == 0x000000, "Member 'ModDetails_C_OnSuccess_D99CC5A5414F1A0E142CABB84BB5A40B::Texture' has a wrong offset!");

// Function ModDetails.ModDetails_C.OnFail_D99CC5A5414F1A0E142CABB84BB5A40B
// 0x0008 (0x0008 - 0x0000)
struct ModDetails_C_OnFail_D99CC5A5414F1A0E142CABB84BB5A40B final
{
public:
	class UTexture2DDynamic*                      Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ModDetails_C_OnFail_D99CC5A5414F1A0E142CABB84BB5A40B) == 0x000008, "Wrong alignment on ModDetails_C_OnFail_D99CC5A5414F1A0E142CABB84BB5A40B");
static_assert(sizeof(ModDetails_C_OnFail_D99CC5A5414F1A0E142CABB84BB5A40B) == 0x000008, "Wrong size on ModDetails_C_OnFail_D99CC5A5414F1A0E142CABB84BB5A40B");
static_assert(offsetof(ModDetails_C_OnFail_D99CC5A5414F1A0E142CABB84BB5A40B, Texture) == 0x000000, "Member 'ModDetails_C_OnFail_D99CC5A5414F1A0E142CABB84BB5A40B::Texture' has a wrong offset!");

// Function ModDetails.ModDetails_C.Refresh
// 0x0208 (0x0208 - 0x0000)
struct ModDetails_C_Refresh final
{
public:
	struct FModdingRuntimeModInfoDetails          New_Info;                                          // 0x0000(0x00A0)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                         CallFunc_MapRangeClamped_ReturnValue;              // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A8(0x0018)()
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00C8(0x0018)()
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E5[0x3];                                       // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x00E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0100(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0118(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0130(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0148(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0188(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01A0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x01B0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01C8(0x0018)()
	TArray<class UImage*>                         K2Node_MakeArray_Array_1;                          // 0x01E0(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UImage*                                 CallFunc_Array_Get_Item;                           // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_201[0x3];                                      // 0x0201(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ModDetails_C_Refresh) == 0x000008, "Wrong alignment on ModDetails_C_Refresh");
static_assert(sizeof(ModDetails_C_Refresh) == 0x000208, "Wrong size on ModDetails_C_Refresh");
static_assert(offsetof(ModDetails_C_Refresh, New_Info) == 0x000000, "Member 'ModDetails_C_Refresh::New_Info' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, CallFunc_MapRangeClamped_ReturnValue) == 0x0000A0, "Member 'ModDetails_C_Refresh::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A8, "Member 'ModDetails_C_Refresh::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, CallFunc_FTrunc_ReturnValue) == 0x0000C0, "Member 'ModDetails_C_Refresh::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000C8, "Member 'ModDetails_C_Refresh::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, Temp_int_Array_Index_Variable) == 0x0000E0, "Member 'ModDetails_C_Refresh::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000E4, "Member 'ModDetails_C_Refresh::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, CallFunc_SelectColor_ReturnValue) == 0x0000E8, "Member 'ModDetails_C_Refresh::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, CallFunc_Add_IntInt_ReturnValue) == 0x0000F8, "Member 'ModDetails_C_Refresh::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000100, "Member 'ModDetails_C_Refresh::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, CallFunc_Conv_IntToText_ReturnValue) == 0x000118, "Member 'ModDetails_C_Refresh::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000130, "Member 'ModDetails_C_Refresh::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, K2Node_MakeStruct_FormatArgumentData) == 0x000148, "Member 'ModDetails_C_Refresh::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000188, "Member 'ModDetails_C_Refresh::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, K2Node_MakeArray_Array) == 0x0001A0, "Member 'ModDetails_C_Refresh::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0001B0, "Member 'ModDetails_C_Refresh::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, CallFunc_Format_ReturnValue) == 0x0001C8, "Member 'ModDetails_C_Refresh::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, K2Node_MakeArray_Array_1) == 0x0001E0, "Member 'ModDetails_C_Refresh::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, CallFunc_Array_Get_Item) == 0x0001F0, "Member 'ModDetails_C_Refresh::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, CallFunc_Array_Length_ReturnValue) == 0x0001F8, "Member 'ModDetails_C_Refresh::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, Temp_int_Loop_Counter_Variable) == 0x0001FC, "Member 'ModDetails_C_Refresh::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, CallFunc_Less_IntInt_ReturnValue) == 0x000200, "Member 'ModDetails_C_Refresh::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModDetails_C_Refresh, CallFunc_Add_IntInt_ReturnValue_1) == 0x000204, "Member 'ModDetails_C_Refresh::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

}

