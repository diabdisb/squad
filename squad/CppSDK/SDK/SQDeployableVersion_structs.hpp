#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SQDeployableVersion

#include "Basic.hpp"

#include "ESQBiome_structs.hpp"


namespace SDK
{

// UserDefinedStruct SQDeployableVersion.SQDeployableVersion
// 0x0030 (0x0030 - 0x0000)
struct FSQDeployableVersion final
{
public:
	ESQBiome                                      Biome_2_406CFF4944C292AE0C1273B16269D1F9;          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   Deployable_5_A8E78DAF43C1E27AB8C505A840CA49D7;     // 0x0008(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FSQDeployableVersion) == 0x000008, "Wrong alignment on FSQDeployableVersion");
static_assert(sizeof(FSQDeployableVersion) == 0x000030, "Wrong size on FSQDeployableVersion");
static_assert(offsetof(FSQDeployableVersion, Biome_2_406CFF4944C292AE0C1273B16269D1F9) == 0x000000, "Member 'FSQDeployableVersion::Biome_2_406CFF4944C292AE0C1273B16269D1F9' has a wrong offset!");
static_assert(offsetof(FSQDeployableVersion, Deployable_5_A8E78DAF43C1E27AB8C505A840CA49D7) == 0x000008, "Member 'FSQDeployableVersion::Deployable_5_A8E78DAF43C1E27AB8C505A840CA49D7' has a wrong offset!");

}

