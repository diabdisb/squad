#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreditListItem_4Columns

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CreditListItem_4Columns.CreditListItem_4Columns_C
// 0x0038 (0x0298 - 0x0260)
class UCreditListItem_4Columns_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             TB_1;                                              // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TB_2;                                              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TB_3;                                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TB_4;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                         ColumnText;                                        // 0x0288(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_CreditListItem_4Columns(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CreditListItem_4Columns_C">();
	}
	static class UCreditListItem_4Columns_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreditListItem_4Columns_C>();
	}
};
static_assert(alignof(UCreditListItem_4Columns_C) == 0x000008, "Wrong alignment on UCreditListItem_4Columns_C");
static_assert(sizeof(UCreditListItem_4Columns_C) == 0x000298, "Wrong size on UCreditListItem_4Columns_C");
static_assert(offsetof(UCreditListItem_4Columns_C, UberGraphFrame) == 0x000260, "Member 'UCreditListItem_4Columns_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCreditListItem_4Columns_C, TB_1) == 0x000268, "Member 'UCreditListItem_4Columns_C::TB_1' has a wrong offset!");
static_assert(offsetof(UCreditListItem_4Columns_C, TB_2) == 0x000270, "Member 'UCreditListItem_4Columns_C::TB_2' has a wrong offset!");
static_assert(offsetof(UCreditListItem_4Columns_C, TB_3) == 0x000278, "Member 'UCreditListItem_4Columns_C::TB_3' has a wrong offset!");
static_assert(offsetof(UCreditListItem_4Columns_C, TB_4) == 0x000280, "Member 'UCreditListItem_4Columns_C::TB_4' has a wrong offset!");
static_assert(offsetof(UCreditListItem_4Columns_C, ColumnText) == 0x000288, "Member 'UCreditListItem_4Columns_C::ColumnText' has a wrong offset!");

}

