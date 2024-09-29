#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SquadCallout

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_SquadCallout.W_SquadCallout_C.Setup
// 0x00C0 (0x00C0 - 0x0000)
struct W_SquadCallout_C_Setup final
{
public:
	class FText                                   TopText_0;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	TSoftObjectPtr<class UTexture2D>              ImageRef;                                          // 0x0018(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FText                                   BottomText_0;                                      // 0x0040(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InTooltip;                                         // 0x0058(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InAdditionalText;                                  // 0x0070(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                         SquadIndexPadding;                                 // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_SquadIndexMarker_C*                  CallFunc_Create_ReturnValue;                       // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWidth_Width;                           // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x00AC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_SquadCallout_C_Setup) == 0x000008, "Wrong alignment on W_SquadCallout_C_Setup");
static_assert(sizeof(W_SquadCallout_C_Setup) == 0x0000C0, "Wrong size on W_SquadCallout_C_Setup");
static_assert(offsetof(W_SquadCallout_C_Setup, TopText_0) == 0x000000, "Member 'W_SquadCallout_C_Setup::TopText_0' has a wrong offset!");
static_assert(offsetof(W_SquadCallout_C_Setup, ImageRef) == 0x000018, "Member 'W_SquadCallout_C_Setup::ImageRef' has a wrong offset!");
static_assert(offsetof(W_SquadCallout_C_Setup, BottomText_0) == 0x000040, "Member 'W_SquadCallout_C_Setup::BottomText_0' has a wrong offset!");
static_assert(offsetof(W_SquadCallout_C_Setup, InTooltip) == 0x000058, "Member 'W_SquadCallout_C_Setup::InTooltip' has a wrong offset!");
static_assert(offsetof(W_SquadCallout_C_Setup, InAdditionalText) == 0x000070, "Member 'W_SquadCallout_C_Setup::InAdditionalText' has a wrong offset!");
static_assert(offsetof(W_SquadCallout_C_Setup, SquadIndexPadding) == 0x000088, "Member 'W_SquadCallout_C_Setup::SquadIndexPadding' has a wrong offset!");
static_assert(offsetof(W_SquadCallout_C_Setup, CallFunc_Create_ReturnValue) == 0x000090, "Member 'W_SquadCallout_C_Setup::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SquadCallout_C_Setup, CallFunc_GetWidth_Width) == 0x000098, "Member 'W_SquadCallout_C_Setup::CallFunc_GetWidth_Width' has a wrong offset!");
static_assert(offsetof(W_SquadCallout_C_Setup, CallFunc_AddChild_ReturnValue) == 0x0000A0, "Member 'W_SquadCallout_C_Setup::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SquadCallout_C_Setup, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000A8, "Member 'W_SquadCallout_C_Setup::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SquadCallout_C_Setup, K2Node_MakeStruct_Margin) == 0x0000AC, "Member 'W_SquadCallout_C_Setup::K2Node_MakeStruct_Margin' has a wrong offset!");

}

