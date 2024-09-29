#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameStateSquad

#include "Basic.hpp"

#include "Squad_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GameStateSquad.BP_GameStateSquad_C
// 0x0008 (0x0728 - 0x0720)
class ABP_GameStateSquad_C : public ASQGameState
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0720(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GameStateSquad_C">();
	}
	static class ABP_GameStateSquad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GameStateSquad_C>();
	}
};
static_assert(alignof(ABP_GameStateSquad_C) == 0x000008, "Wrong alignment on ABP_GameStateSquad_C");
static_assert(sizeof(ABP_GameStateSquad_C) == 0x000728, "Wrong size on ABP_GameStateSquad_C");
static_assert(offsetof(ABP_GameStateSquad_C, DefaultSceneRoot) == 0x000720, "Member 'ABP_GameStateSquad_C::DefaultSceneRoot' has a wrong offset!");

}

