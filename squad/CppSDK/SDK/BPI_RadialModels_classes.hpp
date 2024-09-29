#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_RadialModels

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_RadialModels.BPI_RadialModels_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_RadialModels_C final : public IInterface
{
public:
	void Open_Voice_Model();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_RadialModels_C">();
	}
	static class IBPI_RadialModels_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_RadialModels_C>();
	}
};
static_assert(alignof(IBPI_RadialModels_C) == 0x000008, "Wrong alignment on IBPI_RadialModels_C");
static_assert(sizeof(IBPI_RadialModels_C) == 0x000028, "Wrong size on IBPI_RadialModels_C");

}

