#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MarkerSupport_Pickup

#include "Basic.hpp"

#include "GridData_MarkerOption_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MarkerSupport_Pickup.MarkerSupport_Pickup_C
// 0x0000 (0x0070 - 0x0070)
class UMarkerSupport_Pickup_C final : public UGridData_MarkerOption_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MarkerSupport_Pickup_C">();
	}
	static class UMarkerSupport_Pickup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMarkerSupport_Pickup_C>();
	}
};
static_assert(alignof(UMarkerSupport_Pickup_C) == 0x000008, "Wrong alignment on UMarkerSupport_Pickup_C");
static_assert(sizeof(UMarkerSupport_Pickup_C) == 0x000070, "Wrong size on UMarkerSupport_Pickup_C");

}

