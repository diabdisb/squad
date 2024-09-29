#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_MP5A3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Squad_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_MP5A3.ABP_MP5A3_C
// 0x0380 (0x0680 - 0x0300)
class UABP_MP5A3_C final : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0308(0x0030)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x0338(0x00C0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x03F8(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0440(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0488(0x0048)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x04D0(0x0018)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x04E8(0x00C0)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator;                   // 0x05A8(0x0050)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x05F8(0x0080)()

public:
	void ExecuteUbergraph_ABP_MP5A3(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_MP5A3_C">();
	}
	static class UABP_MP5A3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_MP5A3_C>();
	}
};
static_assert(alignof(UABP_MP5A3_C) == 0x000010, "Wrong alignment on UABP_MP5A3_C");
static_assert(sizeof(UABP_MP5A3_C) == 0x000680, "Wrong size on UABP_MP5A3_C");
static_assert(offsetof(UABP_MP5A3_C, UberGraphFrame) == 0x000300, "Member 'UABP_MP5A3_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_MP5A3_C, AnimGraphNode_Root) == 0x000308, "Member 'UABP_MP5A3_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_MP5A3_C, AnimGraphNode_LayeredBoneBlend_1) == 0x000338, "Member 'UABP_MP5A3_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UABP_MP5A3_C, AnimGraphNode_Slot_2) == 0x0003F8, "Member 'UABP_MP5A3_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UABP_MP5A3_C, AnimGraphNode_Slot_1) == 0x000440, "Member 'UABP_MP5A3_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_MP5A3_C, AnimGraphNode_Slot) == 0x000488, "Member 'UABP_MP5A3_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_MP5A3_C, AnimGraphNode_LocalRefPose) == 0x0004D0, "Member 'UABP_MP5A3_C::AnimGraphNode_LocalRefPose' has a wrong offset!");
static_assert(offsetof(UABP_MP5A3_C, AnimGraphNode_LayeredBoneBlend) == 0x0004E8, "Member 'UABP_MP5A3_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_MP5A3_C, AnimGraphNode_SequenceEvaluator) == 0x0005A8, "Member 'UABP_MP5A3_C::AnimGraphNode_SequenceEvaluator' has a wrong offset!");
static_assert(offsetof(UABP_MP5A3_C, AnimGraphNode_SequencePlayer) == 0x0005F8, "Member 'UABP_MP5A3_C::AnimGraphNode_SequencePlayer' has a wrong offset!");

}

