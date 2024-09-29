#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CachedNametagTargetInfo

#include "Basic.hpp"

#include "Squad_structs.hpp"


namespace SDK
{

// UserDefinedStruct CachedNametagTargetInfo.CachedNametagTargetInfo
// 0x0050 (0x0050 - 0x0000)
struct FCachedNametagTargetInfo final
{
public:
	struct FNameTagTargetInfo                     TargetInfo_40_440A42D544475BC47B02E0BCDF69AE5C;    // 0x0000(0x0040)(Edit, BlueprintVisible)
	bool                                          IsInSameSquad_15_17759E054D3155C288DE8E84C77BAA1F; // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         VehicleOccupants_18_C56F18E940FA28D35BED5EA6E47B7F5E; // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInSameFTL_20_01E4954A445814EAE96B9B90CF974F36;   // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FCachedNametagTargetInfo) == 0x000008, "Wrong alignment on FCachedNametagTargetInfo");
static_assert(sizeof(FCachedNametagTargetInfo) == 0x000050, "Wrong size on FCachedNametagTargetInfo");
static_assert(offsetof(FCachedNametagTargetInfo, TargetInfo_40_440A42D544475BC47B02E0BCDF69AE5C) == 0x000000, "Member 'FCachedNametagTargetInfo::TargetInfo_40_440A42D544475BC47B02E0BCDF69AE5C' has a wrong offset!");
static_assert(offsetof(FCachedNametagTargetInfo, IsInSameSquad_15_17759E054D3155C288DE8E84C77BAA1F) == 0x000040, "Member 'FCachedNametagTargetInfo::IsInSameSquad_15_17759E054D3155C288DE8E84C77BAA1F' has a wrong offset!");
static_assert(offsetof(FCachedNametagTargetInfo, VehicleOccupants_18_C56F18E940FA28D35BED5EA6E47B7F5E) == 0x000044, "Member 'FCachedNametagTargetInfo::VehicleOccupants_18_C56F18E940FA28D35BED5EA6E47B7F5E' has a wrong offset!");
static_assert(offsetof(FCachedNametagTargetInfo, IsInSameFTL_20_01E4954A445814EAE96B9B90CF974F36) == 0x000048, "Member 'FCachedNametagTargetInfo::IsInSameFTL_20_01E4954A445814EAE96B9B90CF974F36' has a wrong offset!");

}

