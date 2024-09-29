#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_RoleMainWeapon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_RoleMainWeapon.W_RoleMainWeapon_C
// 0x0068 (0x02C8 - 0x0260)
class UW_RoleMainWeapon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_Main;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_MainWeapon;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Name_Primary;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TB_Amount_Primary;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USQRoleSettings*                        Role;                                              // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             SubRole_Pressed;                                   // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             SubRole_Hovered;                                   // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ASQTeamState*                           My_TS;                                             // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ASQPlayerState*                         My_PS;                                             // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Locked;                                            // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void SubRole_Pressed__DelegateSignature(class USQRoleSettings* Role_0);
	void SubRole_Hovered__DelegateSignature(class USQRoleSettings* Role_0);
	void ExecuteUbergraph_W_RoleMainWeapon(int32 EntryPoint);
	void BndEvt__Button_Main_K2Node_ComponentBoundEvent_202_OnButtonHoverEvent__DelegateSignature();
	void Refresh();
	void BndEvt__Button_Main_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Get_Item_Info(const struct FSQInventoryData& SQInventoryData, int32* Item_Count);
	void Update_Selected();
	void Find_Name_of_Weapon_from_Image(class UObject* In_Texture, class FText* Name_0, struct FSQInventoryData* Inventory);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_RoleMainWeapon_C">();
	}
	static class UW_RoleMainWeapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_RoleMainWeapon_C>();
	}
};
static_assert(alignof(UW_RoleMainWeapon_C) == 0x000008, "Wrong alignment on UW_RoleMainWeapon_C");
static_assert(sizeof(UW_RoleMainWeapon_C) == 0x0002C8, "Wrong size on UW_RoleMainWeapon_C");
static_assert(offsetof(UW_RoleMainWeapon_C, UberGraphFrame) == 0x000260, "Member 'UW_RoleMainWeapon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_RoleMainWeapon_C, Button_Main) == 0x000268, "Member 'UW_RoleMainWeapon_C::Button_Main' has a wrong offset!");
static_assert(offsetof(UW_RoleMainWeapon_C, Image_MainWeapon) == 0x000270, "Member 'UW_RoleMainWeapon_C::Image_MainWeapon' has a wrong offset!");
static_assert(offsetof(UW_RoleMainWeapon_C, Name_Primary) == 0x000278, "Member 'UW_RoleMainWeapon_C::Name_Primary' has a wrong offset!");
static_assert(offsetof(UW_RoleMainWeapon_C, TB_Amount_Primary) == 0x000280, "Member 'UW_RoleMainWeapon_C::TB_Amount_Primary' has a wrong offset!");
static_assert(offsetof(UW_RoleMainWeapon_C, Role) == 0x000288, "Member 'UW_RoleMainWeapon_C::Role' has a wrong offset!");
static_assert(offsetof(UW_RoleMainWeapon_C, SubRole_Pressed) == 0x000290, "Member 'UW_RoleMainWeapon_C::SubRole_Pressed' has a wrong offset!");
static_assert(offsetof(UW_RoleMainWeapon_C, SubRole_Hovered) == 0x0002A0, "Member 'UW_RoleMainWeapon_C::SubRole_Hovered' has a wrong offset!");
static_assert(offsetof(UW_RoleMainWeapon_C, My_TS) == 0x0002B0, "Member 'UW_RoleMainWeapon_C::My_TS' has a wrong offset!");
static_assert(offsetof(UW_RoleMainWeapon_C, My_PS) == 0x0002B8, "Member 'UW_RoleMainWeapon_C::My_PS' has a wrong offset!");
static_assert(offsetof(UW_RoleMainWeapon_C, Locked) == 0x0002C0, "Member 'UW_RoleMainWeapon_C::Locked' has a wrong offset!");

}

