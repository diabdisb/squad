#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ModDownloadWindow

#include "Basic.hpp"

#include "ModdingRuntime_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_ModDownloadWindow.W_ModDownloadWindow_C.ExecuteUbergraph_W_ModDownloadWindow
// 0x0068 (0x0068 - 0x0000)
struct W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bSelected_1;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMainMenu_Button_C*                     K2Node_ComponentBoundEvent_Button_1;               // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bSelected;              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMainMenu_Button_C*                     K2Node_ComponentBoundEvent_Button;                 // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_Download_Successful_Result;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Finished_Loading_Result;               // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow) == 0x000008, "Wrong alignment on W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow");
static_assert(sizeof(W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow) == 0x000068, "Wrong size on W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow");
static_assert(offsetof(W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow, EntryPoint) == 0x000000, "Member 'W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow, K2Node_Event_MyGeometry) == 0x000004, "Member 'W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow, K2Node_ComponentBoundEvent_bSelected_1) == 0x000040, "Member 'W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow::K2Node_ComponentBoundEvent_bSelected_1' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow, K2Node_ComponentBoundEvent_Button_1) == 0x000048, "Member 'W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow, K2Node_ComponentBoundEvent_bSelected) == 0x000050, "Member 'W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow::K2Node_ComponentBoundEvent_bSelected' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow, K2Node_ComponentBoundEvent_Button) == 0x000058, "Member 'W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow, CallFunc_Is_Download_Successful_Result) == 0x000060, "Member 'W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow::CallFunc_Is_Download_Successful_Result' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow, CallFunc_Is_Finished_Loading_Result) == 0x000061, "Member 'W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow::CallFunc_Is_Finished_Loading_Result' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow, CallFunc_BooleanAND_ReturnValue) == 0x000062, "Member 'W_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function W_ModDownloadWindow.W_ModDownloadWindow_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct W_ModDownloadWindow_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMainMenu_Button_C*                     Button;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ModDownloadWindow_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on W_ModDownloadWindow_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
static_assert(sizeof(W_ModDownloadWindow_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature) == 0x000010, "Wrong size on W_ModDownloadWindow_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
static_assert(offsetof(W_ModDownloadWindow_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature, bSelected) == 0x000000, "Member 'W_ModDownloadWindow_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature::bSelected' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature, Button) == 0x000008, "Member 'W_ModDownloadWindow_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function W_ModDownloadWindow.W_ModDownloadWindow_C.BndEvt__Button_Download_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct W_ModDownloadWindow_C_BndEvt__Button_Download_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMainMenu_Button_C*                     Button;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ModDownloadWindow_C_BndEvt__Button_Download_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on W_ModDownloadWindow_C_BndEvt__Button_Download_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
static_assert(sizeof(W_ModDownloadWindow_C_BndEvt__Button_Download_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature) == 0x000010, "Wrong size on W_ModDownloadWindow_C_BndEvt__Button_Download_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
static_assert(offsetof(W_ModDownloadWindow_C_BndEvt__Button_Download_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature, bSelected) == 0x000000, "Member 'W_ModDownloadWindow_C_BndEvt__Button_Download_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature::bSelected' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_BndEvt__Button_Download_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature, Button) == 0x000008, "Member 'W_ModDownloadWindow_C_BndEvt__Button_Download_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function W_ModDownloadWindow.W_ModDownloadWindow_C.Tick
// 0x003C (0x003C - 0x0000)
struct W_ModDownloadWindow_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ModDownloadWindow_C_Tick) == 0x000004, "Wrong alignment on W_ModDownloadWindow_C_Tick");
static_assert(sizeof(W_ModDownloadWindow_C_Tick) == 0x00003C, "Wrong size on W_ModDownloadWindow_C_Tick");
static_assert(offsetof(W_ModDownloadWindow_C_Tick, MyGeometry) == 0x000000, "Member 'W_ModDownloadWindow_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Tick, InDeltaTime) == 0x000038, "Member 'W_ModDownloadWindow_C_Tick::InDeltaTime' has a wrong offset!");

// Function W_ModDownloadWindow.W_ModDownloadWindow_C.Is Finished Loading
// 0x0038 (0x0038 - 0x0000)
struct W_ModDownloadWindow_C_Is_Finished_Loading final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSQModLoadProgress                     CallFunc_Array_Get_Item;                           // 0x0010(0x0020)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_ModDownloadWindow_C_Is_Finished_Loading) == 0x000008, "Wrong alignment on W_ModDownloadWindow_C_Is_Finished_Loading");
static_assert(sizeof(W_ModDownloadWindow_C_Is_Finished_Loading) == 0x000038, "Wrong size on W_ModDownloadWindow_C_Is_Finished_Loading");
static_assert(offsetof(W_ModDownloadWindow_C_Is_Finished_Loading, Result) == 0x000000, "Member 'W_ModDownloadWindow_C_Is_Finished_Loading::Result' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Is_Finished_Loading, Temp_int_Array_Index_Variable) == 0x000004, "Member 'W_ModDownloadWindow_C_Is_Finished_Loading::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Is_Finished_Loading, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'W_ModDownloadWindow_C_Is_Finished_Loading::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Is_Finished_Loading, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'W_ModDownloadWindow_C_Is_Finished_Loading::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Is_Finished_Loading, CallFunc_Array_Get_Item) == 0x000010, "Member 'W_ModDownloadWindow_C_Is_Finished_Loading::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Is_Finished_Loading, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'W_ModDownloadWindow_C_Is_Finished_Loading::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Is_Finished_Loading, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'W_ModDownloadWindow_C_Is_Finished_Loading::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function W_ModDownloadWindow.W_ModDownloadWindow_C.Is Download Successful
// 0x0038 (0x0038 - 0x0000)
struct W_ModDownloadWindow_C_Is_Download_Successful final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSQModLoadProgress                     CallFunc_Array_Get_Item;                           // 0x0010(0x0020)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_ModDownloadWindow_C_Is_Download_Successful) == 0x000008, "Wrong alignment on W_ModDownloadWindow_C_Is_Download_Successful");
static_assert(sizeof(W_ModDownloadWindow_C_Is_Download_Successful) == 0x000038, "Wrong size on W_ModDownloadWindow_C_Is_Download_Successful");
static_assert(offsetof(W_ModDownloadWindow_C_Is_Download_Successful, Result) == 0x000000, "Member 'W_ModDownloadWindow_C_Is_Download_Successful::Result' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Is_Download_Successful, Temp_int_Array_Index_Variable) == 0x000004, "Member 'W_ModDownloadWindow_C_Is_Download_Successful::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Is_Download_Successful, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'W_ModDownloadWindow_C_Is_Download_Successful::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Is_Download_Successful, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'W_ModDownloadWindow_C_Is_Download_Successful::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Is_Download_Successful, CallFunc_Array_Get_Item) == 0x000010, "Member 'W_ModDownloadWindow_C_Is_Download_Successful::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Is_Download_Successful, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'W_ModDownloadWindow_C_Is_Download_Successful::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Is_Download_Successful, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'W_ModDownloadWindow_C_Is_Download_Successful::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function W_ModDownloadWindow.W_ModDownloadWindow_C.Update Mod Download Window
// 0x0170 (0x0170 - 0x0000)
struct W_ModDownloadWindow_C_Update_Mod_Download_Window final
{
public:
	bool                                          ModsCached;                                        // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0020(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_2;                              // 0x0040(0x0018)()
	class FText                                   Temp_text_Variable_3;                              // 0x0058(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_4;                              // 0x0078(0x0018)()
	bool                                          Temp_bool_Variable_2;                              // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_5;                              // 0x0098(0x0018)()
	bool                                          Temp_bool_Variable_3;                              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_6;                              // 0x00B8(0x0018)()
	bool                                          CallFunc_Is_Download_Aborted_Result;               // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D2[0x6];                                       // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USQGameInstance*                        CallFunc_GetSquadGameInstance_ReturnValue;         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Download_Successful_Result;            // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E2[0x6];                                       // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x00E8(0x0018)()
	bool                                          Temp_bool_Variable_4;                              // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Finished_Loading_Result;               // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_102[0x6];                                      // 0x0102(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_1;                           // 0x0108(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Download_Successful_Result_1;          // 0x0122(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Finished_Loading_Result_1;             // 0x0123(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_125[0x3];                                      // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_2;                           // 0x0128(0x0018)()
	class FText                                   K2Node_Select_Default_3;                           // 0x0140(0x0018)()
	class FText                                   K2Node_Select_Default_4;                           // 0x0158(0x0018)()
};
static_assert(alignof(W_ModDownloadWindow_C_Update_Mod_Download_Window) == 0x000008, "Wrong alignment on W_ModDownloadWindow_C_Update_Mod_Download_Window");
static_assert(sizeof(W_ModDownloadWindow_C_Update_Mod_Download_Window) == 0x000170, "Wrong size on W_ModDownloadWindow_C_Update_Mod_Download_Window");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, ModsCached) == 0x000000, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::ModsCached' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, Temp_text_Variable) == 0x000008, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, Temp_text_Variable_1) == 0x000020, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, Temp_bool_Variable) == 0x000038, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, Temp_text_Variable_2) == 0x000040, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, Temp_text_Variable_3) == 0x000058, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, Temp_bool_Variable_1) == 0x000070, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, Temp_text_Variable_4) == 0x000078, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, Temp_bool_Variable_2) == 0x000090, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, Temp_text_Variable_5) == 0x000098, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::Temp_text_Variable_5' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, Temp_bool_Variable_3) == 0x0000B0, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, Temp_text_Variable_6) == 0x0000B8, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::Temp_text_Variable_6' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, CallFunc_Is_Download_Aborted_Result) == 0x0000D0, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::CallFunc_Is_Download_Aborted_Result' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, CallFunc_Not_PreBool_ReturnValue) == 0x0000D1, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, CallFunc_GetSquadGameInstance_ReturnValue) == 0x0000D8, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::CallFunc_GetSquadGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, CallFunc_IsValid_ReturnValue) == 0x0000E0, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, CallFunc_Is_Download_Successful_Result) == 0x0000E1, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::CallFunc_Is_Download_Successful_Result' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, K2Node_Select_Default) == 0x0000E8, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, Temp_bool_Variable_4) == 0x000100, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, CallFunc_Is_Finished_Loading_Result) == 0x000101, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::CallFunc_Is_Finished_Loading_Result' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, K2Node_Select_Default_1) == 0x000108, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, CallFunc_BooleanAND_ReturnValue) == 0x000120, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, CallFunc_BooleanAND_ReturnValue_1) == 0x000121, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, CallFunc_Is_Download_Successful_Result_1) == 0x000122, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::CallFunc_Is_Download_Successful_Result_1' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, CallFunc_Is_Finished_Loading_Result_1) == 0x000123, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::CallFunc_Is_Finished_Loading_Result_1' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, CallFunc_BooleanAND_ReturnValue_2) == 0x000124, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, K2Node_Select_Default_2) == 0x000128, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, K2Node_Select_Default_3) == 0x000140, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Update_Mod_Download_Window, K2Node_Select_Default_4) == 0x000158, "Member 'W_ModDownloadWindow_C_Update_Mod_Download_Window::K2Node_Select_Default_4' has a wrong offset!");

// Function W_ModDownloadWindow.W_ModDownloadWindow_C.Init Mod Window
// 0x0020 (0x0020 - 0x0000)
struct W_ModDownloadWindow_C_Init_Mod_Window final
{
public:
	class UW_ModDownloadItem_C*                   CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWrapBoxSlot*                           CallFunc_AddChildToWrapBox_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ModDownloadWindow_C_Init_Mod_Window) == 0x000008, "Wrong alignment on W_ModDownloadWindow_C_Init_Mod_Window");
static_assert(sizeof(W_ModDownloadWindow_C_Init_Mod_Window) == 0x000020, "Wrong size on W_ModDownloadWindow_C_Init_Mod_Window");
static_assert(offsetof(W_ModDownloadWindow_C_Init_Mod_Window, CallFunc_Create_ReturnValue) == 0x000000, "Member 'W_ModDownloadWindow_C_Init_Mod_Window::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Init_Mod_Window, Temp_int_Variable) == 0x000008, "Member 'W_ModDownloadWindow_C_Init_Mod_Window::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Init_Mod_Window, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'W_ModDownloadWindow_C_Init_Mod_Window::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Init_Mod_Window, CallFunc_Array_LastIndex_ReturnValue) == 0x000010, "Member 'W_ModDownloadWindow_C_Init_Mod_Window::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Init_Mod_Window, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000014, "Member 'W_ModDownloadWindow_C_Init_Mod_Window::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Init_Mod_Window, CallFunc_AddChildToWrapBox_ReturnValue) == 0x000018, "Member 'W_ModDownloadWindow_C_Init_Mod_Window::CallFunc_AddChildToWrapBox_ReturnValue' has a wrong offset!");

// Function W_ModDownloadWindow.W_ModDownloadWindow_C.Is Download Aborted
// 0x0038 (0x0038 - 0x0000)
struct W_ModDownloadWindow_C_Is_Download_Aborted final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSQModLoadProgress                     CallFunc_Array_Get_Item;                           // 0x0010(0x0020)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_ModDownloadWindow_C_Is_Download_Aborted) == 0x000008, "Wrong alignment on W_ModDownloadWindow_C_Is_Download_Aborted");
static_assert(sizeof(W_ModDownloadWindow_C_Is_Download_Aborted) == 0x000038, "Wrong size on W_ModDownloadWindow_C_Is_Download_Aborted");
static_assert(offsetof(W_ModDownloadWindow_C_Is_Download_Aborted, Result) == 0x000000, "Member 'W_ModDownloadWindow_C_Is_Download_Aborted::Result' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Is_Download_Aborted, Temp_int_Array_Index_Variable) == 0x000004, "Member 'W_ModDownloadWindow_C_Is_Download_Aborted::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Is_Download_Aborted, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'W_ModDownloadWindow_C_Is_Download_Aborted::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Is_Download_Aborted, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'W_ModDownloadWindow_C_Is_Download_Aborted::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Is_Download_Aborted, CallFunc_Array_Get_Item) == 0x000010, "Member 'W_ModDownloadWindow_C_Is_Download_Aborted::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Is_Download_Aborted, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'W_ModDownloadWindow_C_Is_Download_Aborted::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ModDownloadWindow_C_Is_Download_Aborted, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'W_ModDownloadWindow_C_Is_Download_Aborted::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

