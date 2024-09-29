#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WoundedAudioMix

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_WoundedAudioMix.BP_WoundedAudioMix_C.BP_UpdateAudioMixing
// 0x0018 (0x0018 - 0x0000)
struct BP_WoundedAudioMix_C_BP_UpdateAudioMixing final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQSoldier*                             SoldierToApplyTo;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WoundedAudioMix_C_BP_UpdateAudioMixing) == 0x000008, "Wrong alignment on BP_WoundedAudioMix_C_BP_UpdateAudioMixing");
static_assert(sizeof(BP_WoundedAudioMix_C_BP_UpdateAudioMixing) == 0x000018, "Wrong size on BP_WoundedAudioMix_C_BP_UpdateAudioMixing");
static_assert(offsetof(BP_WoundedAudioMix_C_BP_UpdateAudioMixing, DeltaTime) == 0x000000, "Member 'BP_WoundedAudioMix_C_BP_UpdateAudioMixing::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_WoundedAudioMix_C_BP_UpdateAudioMixing, SoldierToApplyTo) == 0x000008, "Member 'BP_WoundedAudioMix_C_BP_UpdateAudioMixing::SoldierToApplyTo' has a wrong offset!");
static_assert(offsetof(BP_WoundedAudioMix_C_BP_UpdateAudioMixing, ReturnValue) == 0x000010, "Member 'BP_WoundedAudioMix_C_BP_UpdateAudioMixing::ReturnValue' has a wrong offset!");

}

