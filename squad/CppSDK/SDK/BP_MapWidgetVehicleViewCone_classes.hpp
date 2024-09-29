#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapWidgetVehicleViewCone

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Squad_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_MapWidgetVehicleViewCone.BP_MapWidgetVehicleViewCone_C
// 0x0020 (0x0308 - 0x02E8)
class UBP_MapWidgetVehicleViewCone_C final : public USQMapWidgetVehicleSeat
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BP_Player_Cone_Image;                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_0;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ViewCone_Rotation;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MapWidgetVehicleViewCone(int32 EntryPoint);
	void OnScaleChanged(float UniformScale);
	void OnCameraRotationYawChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapWidgetVehicleViewCone_C">();
	}
	static class UBP_MapWidgetVehicleViewCone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MapWidgetVehicleViewCone_C>();
	}
};
static_assert(alignof(UBP_MapWidgetVehicleViewCone_C) == 0x000008, "Wrong alignment on UBP_MapWidgetVehicleViewCone_C");
static_assert(sizeof(UBP_MapWidgetVehicleViewCone_C) == 0x000308, "Wrong size on UBP_MapWidgetVehicleViewCone_C");
static_assert(offsetof(UBP_MapWidgetVehicleViewCone_C, UberGraphFrame) == 0x0002E8, "Member 'UBP_MapWidgetVehicleViewCone_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_MapWidgetVehicleViewCone_C, BP_Player_Cone_Image) == 0x0002F0, "Member 'UBP_MapWidgetVehicleViewCone_C::BP_Player_Cone_Image' has a wrong offset!");
static_assert(offsetof(UBP_MapWidgetVehicleViewCone_C, ScaleBox_0) == 0x0002F8, "Member 'UBP_MapWidgetVehicleViewCone_C::ScaleBox_0' has a wrong offset!");
static_assert(offsetof(UBP_MapWidgetVehicleViewCone_C, ViewCone_Rotation) == 0x000300, "Member 'UBP_MapWidgetVehicleViewCone_C::ViewCone_Rotation' has a wrong offset!");

}

