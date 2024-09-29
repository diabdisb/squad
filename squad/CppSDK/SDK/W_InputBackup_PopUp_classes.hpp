#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_InputBackup_PopUp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_InputBackup_PopUp.W_InputBackup_PopUp_C
// 0x0098 (0x02F8 - 0x0260)
class UW_InputBackup_PopUp_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Background;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                     Button_Cancel;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                     Button_Delete;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                     Button_Save;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                        ComboBoxString_AvailableOptions;                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_Filename;                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_NewEntry;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                            MenuAnchor_180;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               MouseBorder;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_520;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 NewEntry;                                          // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          WasHovered;                                        // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D1[0x7];                                      // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMainMenuScreen_C*                      MainMenuWindow;                                    // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Default;                                           // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E1[0x7];                                      // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UChallengeWindow_C*                     DeleteChallengeWidget;                             // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CharacterLimit;                                    // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_InputBackup_PopUp(int32 EntryPoint);
	void Construct();
	void BndEvt__ComboBoxString_AvailableOptions_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void ChallengeConfirmDelete();
	void ChallengeCancelDelete();
	void BndEvt__Button_Save_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__EditableTextBox_Filename_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__EditableTextBox_Filename_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void ClearPopup();
	void RefreshList();
	void GetSize(struct FVector2D* Size);
	void CheckSelected(const class FString& Selected, bool* CanLoad);
	void DeletePreset();
	void ChallengeDeletePreset();
	void LoadBackup();
	void SaveBackup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_InputBackup_PopUp_C">();
	}
	static class UW_InputBackup_PopUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_InputBackup_PopUp_C>();
	}
};
static_assert(alignof(UW_InputBackup_PopUp_C) == 0x000008, "Wrong alignment on UW_InputBackup_PopUp_C");
static_assert(sizeof(UW_InputBackup_PopUp_C) == 0x0002F8, "Wrong size on UW_InputBackup_PopUp_C");
static_assert(offsetof(UW_InputBackup_PopUp_C, UberGraphFrame) == 0x000260, "Member 'UW_InputBackup_PopUp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_InputBackup_PopUp_C, Background) == 0x000268, "Member 'UW_InputBackup_PopUp_C::Background' has a wrong offset!");
static_assert(offsetof(UW_InputBackup_PopUp_C, Button_Cancel) == 0x000270, "Member 'UW_InputBackup_PopUp_C::Button_Cancel' has a wrong offset!");
static_assert(offsetof(UW_InputBackup_PopUp_C, Button_Delete) == 0x000278, "Member 'UW_InputBackup_PopUp_C::Button_Delete' has a wrong offset!");
static_assert(offsetof(UW_InputBackup_PopUp_C, Button_Save) == 0x000280, "Member 'UW_InputBackup_PopUp_C::Button_Save' has a wrong offset!");
static_assert(offsetof(UW_InputBackup_PopUp_C, ComboBoxString_AvailableOptions) == 0x000288, "Member 'UW_InputBackup_PopUp_C::ComboBoxString_AvailableOptions' has a wrong offset!");
static_assert(offsetof(UW_InputBackup_PopUp_C, EditableTextBox_Filename) == 0x000290, "Member 'UW_InputBackup_PopUp_C::EditableTextBox_Filename' has a wrong offset!");
static_assert(offsetof(UW_InputBackup_PopUp_C, HorizontalBox_NewEntry) == 0x000298, "Member 'UW_InputBackup_PopUp_C::HorizontalBox_NewEntry' has a wrong offset!");
static_assert(offsetof(UW_InputBackup_PopUp_C, Image_3) == 0x0002A0, "Member 'UW_InputBackup_PopUp_C::Image_3' has a wrong offset!");
static_assert(offsetof(UW_InputBackup_PopUp_C, MenuAnchor_180) == 0x0002A8, "Member 'UW_InputBackup_PopUp_C::MenuAnchor_180' has a wrong offset!");
static_assert(offsetof(UW_InputBackup_PopUp_C, MouseBorder) == 0x0002B0, "Member 'UW_InputBackup_PopUp_C::MouseBorder' has a wrong offset!");
static_assert(offsetof(UW_InputBackup_PopUp_C, WidgetSwitcher_520) == 0x0002B8, "Member 'UW_InputBackup_PopUp_C::WidgetSwitcher_520' has a wrong offset!");
static_assert(offsetof(UW_InputBackup_PopUp_C, NewEntry) == 0x0002C0, "Member 'UW_InputBackup_PopUp_C::NewEntry' has a wrong offset!");
static_assert(offsetof(UW_InputBackup_PopUp_C, WasHovered) == 0x0002D0, "Member 'UW_InputBackup_PopUp_C::WasHovered' has a wrong offset!");
static_assert(offsetof(UW_InputBackup_PopUp_C, MainMenuWindow) == 0x0002D8, "Member 'UW_InputBackup_PopUp_C::MainMenuWindow' has a wrong offset!");
static_assert(offsetof(UW_InputBackup_PopUp_C, Default) == 0x0002E0, "Member 'UW_InputBackup_PopUp_C::Default' has a wrong offset!");
static_assert(offsetof(UW_InputBackup_PopUp_C, DeleteChallengeWidget) == 0x0002E8, "Member 'UW_InputBackup_PopUp_C::DeleteChallengeWidget' has a wrong offset!");
static_assert(offsetof(UW_InputBackup_PopUp_C, CharacterLimit) == 0x0002F0, "Member 'UW_InputBackup_PopUp_C::CharacterLimit' has a wrong offset!");

}

