#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapWidgetSpawnPoint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Squad_structs.hpp"
#include "Squad_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C
// 0x0048 (0x0340 - 0x02F8)
class UBP_MapWidgetSpawnPoint_C final : public USQMapWidgetSpawnPoint
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       CornerPulse;                                       // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Corners;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_Spawn;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Selected;                                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SiegedIcon;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_FobBleedRadialTimer_C*               SpawnRadialProgress;                               // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SpawnTypeIcon;                                     // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Last_Click_Time;                                   // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MapWidgetSpawnPoint(int32 EntryPoint);
	void OnActivatedTimeStampChanged();
	void OnSpawningEnabledChanged();
	void OnSiegedChanged();
	void OnScaleChanged(float UniformScale);
	void Construct();
	void Check_Animation();
	void OnSpawnPointTypeChanged();
	void OnIsSelectedChanged();
	void Update_Color();
	void Update_Spawns_Visibility();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void GetRemainingActivatingTime(float* RemainingTime);
	void UpdateProgress();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapWidgetSpawnPoint_C">();
	}
	static class UBP_MapWidgetSpawnPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MapWidgetSpawnPoint_C>();
	}
};
static_assert(alignof(UBP_MapWidgetSpawnPoint_C) == 0x000008, "Wrong alignment on UBP_MapWidgetSpawnPoint_C");
static_assert(sizeof(UBP_MapWidgetSpawnPoint_C) == 0x000340, "Wrong size on UBP_MapWidgetSpawnPoint_C");
static_assert(offsetof(UBP_MapWidgetSpawnPoint_C, UberGraphFrame) == 0x0002F8, "Member 'UBP_MapWidgetSpawnPoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_MapWidgetSpawnPoint_C, CornerPulse) == 0x000300, "Member 'UBP_MapWidgetSpawnPoint_C::CornerPulse' has a wrong offset!");
static_assert(offsetof(UBP_MapWidgetSpawnPoint_C, Corners) == 0x000308, "Member 'UBP_MapWidgetSpawnPoint_C::Corners' has a wrong offset!");
static_assert(offsetof(UBP_MapWidgetSpawnPoint_C, ScaleBox_Spawn) == 0x000310, "Member 'UBP_MapWidgetSpawnPoint_C::ScaleBox_Spawn' has a wrong offset!");
static_assert(offsetof(UBP_MapWidgetSpawnPoint_C, Selected) == 0x000318, "Member 'UBP_MapWidgetSpawnPoint_C::Selected' has a wrong offset!");
static_assert(offsetof(UBP_MapWidgetSpawnPoint_C, SiegedIcon) == 0x000320, "Member 'UBP_MapWidgetSpawnPoint_C::SiegedIcon' has a wrong offset!");
static_assert(offsetof(UBP_MapWidgetSpawnPoint_C, SpawnRadialProgress) == 0x000328, "Member 'UBP_MapWidgetSpawnPoint_C::SpawnRadialProgress' has a wrong offset!");
static_assert(offsetof(UBP_MapWidgetSpawnPoint_C, SpawnTypeIcon) == 0x000330, "Member 'UBP_MapWidgetSpawnPoint_C::SpawnTypeIcon' has a wrong offset!");
static_assert(offsetof(UBP_MapWidgetSpawnPoint_C, Last_Click_Time) == 0x000338, "Member 'UBP_MapWidgetSpawnPoint_C::Last_Click_Time' has a wrong offset!");

}

