#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SQMapVerticalBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SQMapVerticalBar.W_SQMapVerticalBar_C
// 0x0038 (0x0298 - 0x0260)
class UW_SQMapVerticalBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               FixedSizeLayer;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           MarkerGroup;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PanLayer;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               RemainderOffset;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ZoomLayer;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          DisplayNumeric;                                    // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_291[0x3];                                      // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         GridLines;                                         // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_SQMapVerticalBar(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Configure(float GridLines_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SQMapVerticalBar_C">();
	}
	static class UW_SQMapVerticalBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SQMapVerticalBar_C>();
	}
};
static_assert(alignof(UW_SQMapVerticalBar_C) == 0x000008, "Wrong alignment on UW_SQMapVerticalBar_C");
static_assert(sizeof(UW_SQMapVerticalBar_C) == 0x000298, "Wrong size on UW_SQMapVerticalBar_C");
static_assert(offsetof(UW_SQMapVerticalBar_C, UberGraphFrame) == 0x000260, "Member 'UW_SQMapVerticalBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_SQMapVerticalBar_C, FixedSizeLayer) == 0x000268, "Member 'UW_SQMapVerticalBar_C::FixedSizeLayer' has a wrong offset!");
static_assert(offsetof(UW_SQMapVerticalBar_C, MarkerGroup) == 0x000270, "Member 'UW_SQMapVerticalBar_C::MarkerGroup' has a wrong offset!");
static_assert(offsetof(UW_SQMapVerticalBar_C, PanLayer) == 0x000278, "Member 'UW_SQMapVerticalBar_C::PanLayer' has a wrong offset!");
static_assert(offsetof(UW_SQMapVerticalBar_C, RemainderOffset) == 0x000280, "Member 'UW_SQMapVerticalBar_C::RemainderOffset' has a wrong offset!");
static_assert(offsetof(UW_SQMapVerticalBar_C, ZoomLayer) == 0x000288, "Member 'UW_SQMapVerticalBar_C::ZoomLayer' has a wrong offset!");
static_assert(offsetof(UW_SQMapVerticalBar_C, DisplayNumeric) == 0x000290, "Member 'UW_SQMapVerticalBar_C::DisplayNumeric' has a wrong offset!");
static_assert(offsetof(UW_SQMapVerticalBar_C, GridLines) == 0x000294, "Member 'UW_SQMapVerticalBar_C::GridLines' has a wrong offset!");

}

