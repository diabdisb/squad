#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_GridAction_Marker_FT

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function W_GridAction_Marker_FT.W_GridAction_Marker_FT_C.Get Color
// 0x0030 (0x0030 - 0x0000)
struct W_GridAction_Marker_FT_C_Get_Color final
{
public:
	struct FLinearColor                           Tint;                                              // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQColorsDataAsset*                     CallFunc_Get_SQHUD_Colors_ColorsDataAsset;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetColor_ReturnValue;                     // 0x001C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_GridAction_Marker_FT_C_Get_Color) == 0x000008, "Wrong alignment on W_GridAction_Marker_FT_C_Get_Color");
static_assert(sizeof(W_GridAction_Marker_FT_C_Get_Color) == 0x000030, "Wrong size on W_GridAction_Marker_FT_C_Get_Color");
static_assert(offsetof(W_GridAction_Marker_FT_C_Get_Color, Tint) == 0x000000, "Member 'W_GridAction_Marker_FT_C_Get_Color::Tint' has a wrong offset!");
static_assert(offsetof(W_GridAction_Marker_FT_C_Get_Color, CallFunc_Get_SQHUD_Colors_ColorsDataAsset) == 0x000010, "Member 'W_GridAction_Marker_FT_C_Get_Color::CallFunc_Get_SQHUD_Colors_ColorsDataAsset' has a wrong offset!");
static_assert(offsetof(W_GridAction_Marker_FT_C_Get_Color, CallFunc_Max_ReturnValue) == 0x000018, "Member 'W_GridAction_Marker_FT_C_Get_Color::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_GridAction_Marker_FT_C_Get_Color, CallFunc_GetColor_ReturnValue) == 0x00001C, "Member 'W_GridAction_Marker_FT_C_Get_Color::CallFunc_GetColor_ReturnValue' has a wrong offset!");

}

