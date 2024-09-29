#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tooltip_Deployable_Choice

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RadialEntry_Tooltip_classes.hpp"
#include "ESQCurrency_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Tooltip_Deployable_Choice.Tooltip_Deployable_Choice_C
// 0x0030 (0x0298 - 0x0268)
class UTooltip_Deployable_Choice_C final : public URadialEntry_Tooltip_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Tooltip_Deployable_Choice_C;        // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Cost_Amount;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Cost_Area;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Cost_Icon;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DeployableDetails;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DeployableName;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Tooltip_Deployable_Choice(int32 EntryPoint);
	void OnSetContext(class UBP_RadialItemModel_C* In_Outer_Context);
	void UpdateDetails(const class FText& Details, class FName Key_0, class FName Key_1, class FName Key_2);
	void UpdateRearmAction(class UBP_RadialItemModel_C* In_Outer_Context, bool* Out_HasCost);
	void UpdateDeployable(class UBP_ActionModel_Deployable_C* In_Outer_Context);
	void Update_DeployableDetails(class UBP_ActionModel_Deployable_C* In_Outer_Context);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tooltip_Deployable_Choice_C">();
	}
	static class UTooltip_Deployable_Choice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTooltip_Deployable_Choice_C>();
	}
};
static_assert(alignof(UTooltip_Deployable_Choice_C) == 0x000008, "Wrong alignment on UTooltip_Deployable_Choice_C");
static_assert(sizeof(UTooltip_Deployable_Choice_C) == 0x000298, "Wrong size on UTooltip_Deployable_Choice_C");
static_assert(offsetof(UTooltip_Deployable_Choice_C, UberGraphFrame_Tooltip_Deployable_Choice_C) == 0x000268, "Member 'UTooltip_Deployable_Choice_C::UberGraphFrame_Tooltip_Deployable_Choice_C' has a wrong offset!");
static_assert(offsetof(UTooltip_Deployable_Choice_C, Cost_Amount) == 0x000270, "Member 'UTooltip_Deployable_Choice_C::Cost_Amount' has a wrong offset!");
static_assert(offsetof(UTooltip_Deployable_Choice_C, Cost_Area) == 0x000278, "Member 'UTooltip_Deployable_Choice_C::Cost_Area' has a wrong offset!");
static_assert(offsetof(UTooltip_Deployable_Choice_C, Cost_Icon) == 0x000280, "Member 'UTooltip_Deployable_Choice_C::Cost_Icon' has a wrong offset!");
static_assert(offsetof(UTooltip_Deployable_Choice_C, DeployableDetails) == 0x000288, "Member 'UTooltip_Deployable_Choice_C::DeployableDetails' has a wrong offset!");
static_assert(offsetof(UTooltip_Deployable_Choice_C, DeployableName) == 0x000290, "Member 'UTooltip_Deployable_Choice_C::DeployableName' has a wrong offset!");

}

