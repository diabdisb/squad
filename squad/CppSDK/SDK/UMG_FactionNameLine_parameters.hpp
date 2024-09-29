#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_FactionNameLine

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_FactionNameLine.UMG_FactionNameLine_C.Setup
// 0x0048 (0x0048 - 0x0000)
struct UMG_FactionNameLine_C_Setup final
{
public:
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FText                                   DisplayName;                                       // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          AttackIcon;                                        // 0x0040(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          DefendIcon;                                        // 0x0041(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_FactionNameLine_C_Setup) == 0x000008, "Wrong alignment on UMG_FactionNameLine_C_Setup");
static_assert(sizeof(UMG_FactionNameLine_C_Setup) == 0x000048, "Wrong size on UMG_FactionNameLine_C_Setup");
static_assert(offsetof(UMG_FactionNameLine_C_Setup, Texture) == 0x000000, "Member 'UMG_FactionNameLine_C_Setup::Texture' has a wrong offset!");
static_assert(offsetof(UMG_FactionNameLine_C_Setup, DisplayName) == 0x000028, "Member 'UMG_FactionNameLine_C_Setup::DisplayName' has a wrong offset!");
static_assert(offsetof(UMG_FactionNameLine_C_Setup, AttackIcon) == 0x000040, "Member 'UMG_FactionNameLine_C_Setup::AttackIcon' has a wrong offset!");
static_assert(offsetof(UMG_FactionNameLine_C_Setup, DefendIcon) == 0x000041, "Member 'UMG_FactionNameLine_C_Setup::DefendIcon' has a wrong offset!");

// Function UMG_FactionNameLine.UMG_FactionNameLine_C.EnableAttackIcon
// 0x0005 (0x0005 - 0x0000)
struct UMG_FactionNameLine_C_EnableAttackIcon final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_FactionNameLine_C_EnableAttackIcon) == 0x000001, "Wrong alignment on UMG_FactionNameLine_C_EnableAttackIcon");
static_assert(sizeof(UMG_FactionNameLine_C_EnableAttackIcon) == 0x000005, "Wrong size on UMG_FactionNameLine_C_EnableAttackIcon");
static_assert(offsetof(UMG_FactionNameLine_C_EnableAttackIcon, Enable) == 0x000000, "Member 'UMG_FactionNameLine_C_EnableAttackIcon::Enable' has a wrong offset!");
static_assert(offsetof(UMG_FactionNameLine_C_EnableAttackIcon, Temp_bool_Variable) == 0x000001, "Member 'UMG_FactionNameLine_C_EnableAttackIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_FactionNameLine_C_EnableAttackIcon, Temp_byte_Variable) == 0x000002, "Member 'UMG_FactionNameLine_C_EnableAttackIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_FactionNameLine_C_EnableAttackIcon, Temp_byte_Variable_1) == 0x000003, "Member 'UMG_FactionNameLine_C_EnableAttackIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_FactionNameLine_C_EnableAttackIcon, K2Node_Select_Default) == 0x000004, "Member 'UMG_FactionNameLine_C_EnableAttackIcon::K2Node_Select_Default' has a wrong offset!");

// Function UMG_FactionNameLine.UMG_FactionNameLine_C.EnableDefendIcon
// 0x0005 (0x0005 - 0x0000)
struct UMG_FactionNameLine_C_EnableDefendIcon final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_FactionNameLine_C_EnableDefendIcon) == 0x000001, "Wrong alignment on UMG_FactionNameLine_C_EnableDefendIcon");
static_assert(sizeof(UMG_FactionNameLine_C_EnableDefendIcon) == 0x000005, "Wrong size on UMG_FactionNameLine_C_EnableDefendIcon");
static_assert(offsetof(UMG_FactionNameLine_C_EnableDefendIcon, Enable) == 0x000000, "Member 'UMG_FactionNameLine_C_EnableDefendIcon::Enable' has a wrong offset!");
static_assert(offsetof(UMG_FactionNameLine_C_EnableDefendIcon, Temp_bool_Variable) == 0x000001, "Member 'UMG_FactionNameLine_C_EnableDefendIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_FactionNameLine_C_EnableDefendIcon, Temp_byte_Variable) == 0x000002, "Member 'UMG_FactionNameLine_C_EnableDefendIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_FactionNameLine_C_EnableDefendIcon, Temp_byte_Variable_1) == 0x000003, "Member 'UMG_FactionNameLine_C_EnableDefendIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_FactionNameLine_C_EnableDefendIcon, K2Node_Select_Default) == 0x000004, "Member 'UMG_FactionNameLine_C_EnableDefendIcon::K2Node_Select_Default' has a wrong offset!");

}

