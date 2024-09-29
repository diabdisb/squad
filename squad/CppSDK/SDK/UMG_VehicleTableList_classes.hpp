#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_VehicleTableList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_VehicleTableList.UMG_VehicleTableList_C
// 0x0060 (0x02C0 - 0x0260)
class UUMG_VehicleTableList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             FactionNameText;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             FactionNameText_1;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_67;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           MainList;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             RightTitleSlot;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_VehicleTableItem_C*                UMG_VehicleTableItem;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   ID;                                                // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   DisplayName;                                       // 0x02A8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_UMG_VehicleTableList(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ResetItems();
	void AddRow(class UUserWidget* Row);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_VehicleTableList_C">();
	}
	static class UUMG_VehicleTableList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_VehicleTableList_C>();
	}
};
static_assert(alignof(UUMG_VehicleTableList_C) == 0x000008, "Wrong alignment on UUMG_VehicleTableList_C");
static_assert(sizeof(UUMG_VehicleTableList_C) == 0x0002C0, "Wrong size on UUMG_VehicleTableList_C");
static_assert(offsetof(UUMG_VehicleTableList_C, UberGraphFrame) == 0x000260, "Member 'UUMG_VehicleTableList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_VehicleTableList_C, FactionNameText) == 0x000268, "Member 'UUMG_VehicleTableList_C::FactionNameText' has a wrong offset!");
static_assert(offsetof(UUMG_VehicleTableList_C, FactionNameText_1) == 0x000270, "Member 'UUMG_VehicleTableList_C::FactionNameText_1' has a wrong offset!");
static_assert(offsetof(UUMG_VehicleTableList_C, Image) == 0x000278, "Member 'UUMG_VehicleTableList_C::Image' has a wrong offset!");
static_assert(offsetof(UUMG_VehicleTableList_C, Image_67) == 0x000280, "Member 'UUMG_VehicleTableList_C::Image_67' has a wrong offset!");
static_assert(offsetof(UUMG_VehicleTableList_C, MainList) == 0x000288, "Member 'UUMG_VehicleTableList_C::MainList' has a wrong offset!");
static_assert(offsetof(UUMG_VehicleTableList_C, RightTitleSlot) == 0x000290, "Member 'UUMG_VehicleTableList_C::RightTitleSlot' has a wrong offset!");
static_assert(offsetof(UUMG_VehicleTableList_C, UMG_VehicleTableItem) == 0x000298, "Member 'UUMG_VehicleTableList_C::UMG_VehicleTableItem' has a wrong offset!");
static_assert(offsetof(UUMG_VehicleTableList_C, ID) == 0x0002A0, "Member 'UUMG_VehicleTableList_C::ID' has a wrong offset!");
static_assert(offsetof(UUMG_VehicleTableList_C, DisplayName) == 0x0002A8, "Member 'UUMG_VehicleTableList_C::DisplayName' has a wrong offset!");

}

