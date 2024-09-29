#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PopupButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_PopupButton.W_PopupButton_C.Clicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct W_PopupButton_C_Clicked__DelegateSignature final
{
public:
	int32                                         ID_0;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PopupButton_C_Clicked__DelegateSignature) == 0x000004, "Wrong alignment on W_PopupButton_C_Clicked__DelegateSignature");
static_assert(sizeof(W_PopupButton_C_Clicked__DelegateSignature) == 0x000004, "Wrong size on W_PopupButton_C_Clicked__DelegateSignature");
static_assert(offsetof(W_PopupButton_C_Clicked__DelegateSignature, ID_0) == 0x000000, "Member 'W_PopupButton_C_Clicked__DelegateSignature::ID_0' has a wrong offset!");

// Function W_PopupButton.W_PopupButton_C.ExecuteUbergraph_W_PopupButton
// 0x0010 (0x0010 - 0x0000)
struct W_PopupButton_C_ExecuteUbergraph_W_PopupButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bSelected;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMainMenu_Button_C*                     K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PopupButton_C_ExecuteUbergraph_W_PopupButton) == 0x000008, "Wrong alignment on W_PopupButton_C_ExecuteUbergraph_W_PopupButton");
static_assert(sizeof(W_PopupButton_C_ExecuteUbergraph_W_PopupButton) == 0x000010, "Wrong size on W_PopupButton_C_ExecuteUbergraph_W_PopupButton");
static_assert(offsetof(W_PopupButton_C_ExecuteUbergraph_W_PopupButton, EntryPoint) == 0x000000, "Member 'W_PopupButton_C_ExecuteUbergraph_W_PopupButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_PopupButton_C_ExecuteUbergraph_W_PopupButton, K2Node_Event_IsDesignTime) == 0x000004, "Member 'W_PopupButton_C_ExecuteUbergraph_W_PopupButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_PopupButton_C_ExecuteUbergraph_W_PopupButton, K2Node_ComponentBoundEvent_bSelected) == 0x000005, "Member 'W_PopupButton_C_ExecuteUbergraph_W_PopupButton::K2Node_ComponentBoundEvent_bSelected' has a wrong offset!");
static_assert(offsetof(W_PopupButton_C_ExecuteUbergraph_W_PopupButton, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'W_PopupButton_C_ExecuteUbergraph_W_PopupButton::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

// Function W_PopupButton.W_PopupButton_C.BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct W_PopupButton_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMainMenu_Button_C*                     Button;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PopupButton_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on W_PopupButton_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");
static_assert(sizeof(W_PopupButton_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature) == 0x000010, "Wrong size on W_PopupButton_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");
static_assert(offsetof(W_PopupButton_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature, bSelected) == 0x000000, "Member 'W_PopupButton_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature::bSelected' has a wrong offset!");
static_assert(offsetof(W_PopupButton_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature, Button) == 0x000008, "Member 'W_PopupButton_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function W_PopupButton.W_PopupButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_PopupButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_PopupButton_C_PreConstruct) == 0x000001, "Wrong alignment on W_PopupButton_C_PreConstruct");
static_assert(sizeof(W_PopupButton_C_PreConstruct) == 0x000001, "Wrong size on W_PopupButton_C_PreConstruct");
static_assert(offsetof(W_PopupButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_PopupButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

