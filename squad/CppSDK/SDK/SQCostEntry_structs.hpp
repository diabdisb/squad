#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SQCostEntry

#include "Basic.hpp"

#include "ESQCurrency_structs.hpp"


namespace SDK
{

// UserDefinedStruct SQCostEntry.SQCostEntry
// 0x0008 (0x0008 - 0x0000)
struct FSQCostEntry final
{
public:
	ESQCurrency                                   Currency_6_43D3FA864AB4F99E6B1563BACCF115BB;       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Value_5_14A9753B4D4795554DF290B15D4875CE;          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSQCostEntry) == 0x000004, "Wrong alignment on FSQCostEntry");
static_assert(sizeof(FSQCostEntry) == 0x000008, "Wrong size on FSQCostEntry");
static_assert(offsetof(FSQCostEntry, Currency_6_43D3FA864AB4F99E6B1563BACCF115BB) == 0x000000, "Member 'FSQCostEntry::Currency_6_43D3FA864AB4F99E6B1563BACCF115BB' has a wrong offset!");
static_assert(offsetof(FSQCostEntry, Value_5_14A9753B4D4795554DF290B15D4875CE) == 0x000004, "Member 'FSQCostEntry::Value_5_14A9753B4D4795554DF290B15D4875CE' has a wrong offset!");

}

