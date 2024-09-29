#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PlayerCallout

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PlayerCallout.W_PlayerCallout_C
// 0x0060 (0x02C0 - 0x0260)
class UW_PlayerCallout_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             BottomText;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             CenterTextSlot;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Flag;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             LeftTextSlot;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                MainButton;                                        // 0x0288(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              TextScaler;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TopText;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Tooltip_C*                         TooltipWidgetRef;                                  // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   UsedTooltip;                                       // 0x02A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_W_PlayerCallout(int32 EntryPoint);
	void FillFlag(TSoftObjectPtr<class UTexture2D> Texture);
	void OnLoaded_E7B2E94948BEA97E3E0D34A65BC387B8(class UObject* Loaded);
	void Setup(const class FText& TopText_0, TSoftObjectPtr<class UTexture2D> ImageRef, const class FText& BottomText_0, const class FText& InTooltip, const class FText& InAdditionalText);
	class UWidget* GetMainTooltipWidget();
	void SetTextPadding(const struct FMargin& InPadding);
	void UpdateBottomText(const class FText& NewText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PlayerCallout_C">();
	}
	static class UW_PlayerCallout_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PlayerCallout_C>();
	}
};
static_assert(alignof(UW_PlayerCallout_C) == 0x000008, "Wrong alignment on UW_PlayerCallout_C");
static_assert(sizeof(UW_PlayerCallout_C) == 0x0002C0, "Wrong size on UW_PlayerCallout_C");
static_assert(offsetof(UW_PlayerCallout_C, UberGraphFrame) == 0x000260, "Member 'UW_PlayerCallout_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_PlayerCallout_C, BottomText) == 0x000268, "Member 'UW_PlayerCallout_C::BottomText' has a wrong offset!");
static_assert(offsetof(UW_PlayerCallout_C, CenterTextSlot) == 0x000270, "Member 'UW_PlayerCallout_C::CenterTextSlot' has a wrong offset!");
static_assert(offsetof(UW_PlayerCallout_C, Image_Flag) == 0x000278, "Member 'UW_PlayerCallout_C::Image_Flag' has a wrong offset!");
static_assert(offsetof(UW_PlayerCallout_C, LeftTextSlot) == 0x000280, "Member 'UW_PlayerCallout_C::LeftTextSlot' has a wrong offset!");
static_assert(offsetof(UW_PlayerCallout_C, MainButton) == 0x000288, "Member 'UW_PlayerCallout_C::MainButton' has a wrong offset!");
static_assert(offsetof(UW_PlayerCallout_C, TextScaler) == 0x000290, "Member 'UW_PlayerCallout_C::TextScaler' has a wrong offset!");
static_assert(offsetof(UW_PlayerCallout_C, TopText) == 0x000298, "Member 'UW_PlayerCallout_C::TopText' has a wrong offset!");
static_assert(offsetof(UW_PlayerCallout_C, TooltipWidgetRef) == 0x0002A0, "Member 'UW_PlayerCallout_C::TooltipWidgetRef' has a wrong offset!");
static_assert(offsetof(UW_PlayerCallout_C, UsedTooltip) == 0x0002A8, "Member 'UW_PlayerCallout_C::UsedTooltip' has a wrong offset!");

}

