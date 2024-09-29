#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_GridButton_SquadOrders

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "W_GridButton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_GridButton_SquadOrders.W_GridButton_SquadOrders_C
// 0x0018 (0x0320 - 0x0308)
class UW_GridButton_SquadOrders_C final : public UW_GridButton_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_W_GridButton_SquadOrders_C;         // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UClass*>                         FT_Action_List;                                    // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_W_GridButton_SquadOrders(int32 EntryPoint);
	void Custom_Actions();
	void Update_Appearance();
	void Get_Text(class FText* Text);
	void Get_Color(struct FLinearColor* Icon_Color_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_GridButton_SquadOrders_C">();
	}
	static class UW_GridButton_SquadOrders_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_GridButton_SquadOrders_C>();
	}
};
static_assert(alignof(UW_GridButton_SquadOrders_C) == 0x000008, "Wrong alignment on UW_GridButton_SquadOrders_C");
static_assert(sizeof(UW_GridButton_SquadOrders_C) == 0x000320, "Wrong size on UW_GridButton_SquadOrders_C");
static_assert(offsetof(UW_GridButton_SquadOrders_C, UberGraphFrame_W_GridButton_SquadOrders_C) == 0x000308, "Member 'UW_GridButton_SquadOrders_C::UberGraphFrame_W_GridButton_SquadOrders_C' has a wrong offset!");
static_assert(offsetof(UW_GridButton_SquadOrders_C, FT_Action_List) == 0x000310, "Member 'UW_GridButton_SquadOrders_C::FT_Action_List' has a wrong offset!");

}

