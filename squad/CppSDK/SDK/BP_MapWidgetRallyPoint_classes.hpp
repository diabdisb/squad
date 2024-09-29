#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapWidgetRallyPoint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Squad_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C
// 0x0050 (0x0360 - 0x0310)
class UBP_MapWidgetRallyPoint_C final : public USQMapWidgetRallyPoint
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       CornerPulse;                                       // 0x0318(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Corners;                                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RallypointBrush;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_SpawnRally;                               // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Selected;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SquadNumber;                                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ShareRally_C*                        W_ShareRally;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Tooltip_RallyPoint_C*                Rally_Tooltip;                                     // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Last_Click_Time;                                   // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MapWidgetRallyPoint(int32 EntryPoint);
	void OnScaleChanged(float UniformScale);
	void Check_Animation();
	void OnNumberOfSpawnsChanged();
	void OnTintValueChanged();
	void OnIsInSelfSquadChanged();
	void OnSquadIdChanged();
	void OnIsSelectedChanged();
	void Construct();
	class UWidget* Get_SpawnFront_IMG_ToolTipWidget_0();
	void Update_Rally_Spawns_Visibility();
	void Update_Color();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapWidgetRallyPoint_C">();
	}
	static class UBP_MapWidgetRallyPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MapWidgetRallyPoint_C>();
	}
};
static_assert(alignof(UBP_MapWidgetRallyPoint_C) == 0x000008, "Wrong alignment on UBP_MapWidgetRallyPoint_C");
static_assert(sizeof(UBP_MapWidgetRallyPoint_C) == 0x000360, "Wrong size on UBP_MapWidgetRallyPoint_C");
static_assert(offsetof(UBP_MapWidgetRallyPoint_C, UberGraphFrame) == 0x000310, "Member 'UBP_MapWidgetRallyPoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_MapWidgetRallyPoint_C, CornerPulse) == 0x000318, "Member 'UBP_MapWidgetRallyPoint_C::CornerPulse' has a wrong offset!");
static_assert(offsetof(UBP_MapWidgetRallyPoint_C, Corners) == 0x000320, "Member 'UBP_MapWidgetRallyPoint_C::Corners' has a wrong offset!");
static_assert(offsetof(UBP_MapWidgetRallyPoint_C, RallypointBrush) == 0x000328, "Member 'UBP_MapWidgetRallyPoint_C::RallypointBrush' has a wrong offset!");
static_assert(offsetof(UBP_MapWidgetRallyPoint_C, ScaleBox_SpawnRally) == 0x000330, "Member 'UBP_MapWidgetRallyPoint_C::ScaleBox_SpawnRally' has a wrong offset!");
static_assert(offsetof(UBP_MapWidgetRallyPoint_C, Selected) == 0x000338, "Member 'UBP_MapWidgetRallyPoint_C::Selected' has a wrong offset!");
static_assert(offsetof(UBP_MapWidgetRallyPoint_C, SquadNumber) == 0x000340, "Member 'UBP_MapWidgetRallyPoint_C::SquadNumber' has a wrong offset!");
static_assert(offsetof(UBP_MapWidgetRallyPoint_C, W_ShareRally) == 0x000348, "Member 'UBP_MapWidgetRallyPoint_C::W_ShareRally' has a wrong offset!");
static_assert(offsetof(UBP_MapWidgetRallyPoint_C, Rally_Tooltip) == 0x000350, "Member 'UBP_MapWidgetRallyPoint_C::Rally_Tooltip' has a wrong offset!");
static_assert(offsetof(UBP_MapWidgetRallyPoint_C, Last_Click_Time) == 0x000358, "Member 'UBP_MapWidgetRallyPoint_C::Last_Click_Time' has a wrong offset!");

}

