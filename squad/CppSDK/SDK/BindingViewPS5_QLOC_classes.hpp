#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BindingViewPS5_QLOC

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BindingViewPS5_QLOC.BindingViewPS5_QLOC_C
// 0x0008 (0x0268 - 0x0260)
class UBindingViewPS5_QLOC_C final : public UUserWidget
{
public:
	class UImage*                                 Image_115;                                         // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BindingViewPS5_QLOC_C">();
	}
	static class UBindingViewPS5_QLOC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBindingViewPS5_QLOC_C>();
	}
};
static_assert(alignof(UBindingViewPS5_QLOC_C) == 0x000008, "Wrong alignment on UBindingViewPS5_QLOC_C");
static_assert(sizeof(UBindingViewPS5_QLOC_C) == 0x000268, "Wrong size on UBindingViewPS5_QLOC_C");
static_assert(offsetof(UBindingViewPS5_QLOC_C, Image_115) == 0x000260, "Member 'UBindingViewPS5_QLOC_C::Image_115' has a wrong offset!");

}

