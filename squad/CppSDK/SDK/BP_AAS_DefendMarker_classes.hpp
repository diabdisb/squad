#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AAS_DefendMarker

#include "Basic.hpp"

#include "Squad_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AAS_DefendMarker.BP_AAS_DefendMarker_C
// 0x0008 (0x0278 - 0x0270)
class ABP_AAS_DefendMarker_C final : public ASQMapMarker
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AAS_DefendMarker_C">();
	}
	static class ABP_AAS_DefendMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AAS_DefendMarker_C>();
	}
};
static_assert(alignof(ABP_AAS_DefendMarker_C) == 0x000008, "Wrong alignment on ABP_AAS_DefendMarker_C");
static_assert(sizeof(ABP_AAS_DefendMarker_C) == 0x000278, "Wrong size on ABP_AAS_DefendMarker_C");
static_assert(offsetof(ABP_AAS_DefendMarker_C, DefaultSceneRoot) == 0x000270, "Member 'ABP_AAS_DefendMarker_C::DefaultSceneRoot' has a wrong offset!");

}

