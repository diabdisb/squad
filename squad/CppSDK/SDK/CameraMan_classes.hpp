#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CameraMan

#include "Basic.hpp"

#include "Squad_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CameraMan.CameraMan_C
// 0x0010 (0x0520 - 0x0510)
class ACameraMan_C final : public ASQCameraMan
{
public:
	uint8                                         Pad_508[0x8];                                      // 0x0508(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class USQMapIconComponent*                    SquadMapIcon;                                      // 0x0510(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CameraMan_C">();
	}
	static class ACameraMan_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACameraMan_C>();
	}
};
static_assert(alignof(ACameraMan_C) == 0x000010, "Wrong alignment on ACameraMan_C");
static_assert(sizeof(ACameraMan_C) == 0x000520, "Wrong size on ACameraMan_C");
static_assert(offsetof(ACameraMan_C, SquadMapIcon) == 0x000510, "Member 'ACameraMan_C::SquadMapIcon' has a wrong offset!");

}

