#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ReplayObject

#include "Basic.hpp"

#include "Squad_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ReplayObject.BP_ReplayObject_C
// 0x0008 (0x0088 - 0x0080)
class UBP_ReplayObject_C final : public USQReplayObject
{
public:
	bool                                          bIsSelected;                                       // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void GetSize(class FText* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ReplayObject_C">();
	}
	static class UBP_ReplayObject_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ReplayObject_C>();
	}
};
static_assert(alignof(UBP_ReplayObject_C) == 0x000008, "Wrong alignment on UBP_ReplayObject_C");
static_assert(sizeof(UBP_ReplayObject_C) == 0x000088, "Wrong size on UBP_ReplayObject_C");
static_assert(offsetof(UBP_ReplayObject_C, bIsSelected) == 0x000080, "Member 'UBP_ReplayObject_C::bIsSelected' has a wrong offset!");

}

