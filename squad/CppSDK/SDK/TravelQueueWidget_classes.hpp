#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TravelQueueWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "OnlineSubsystemUtils_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TravelQueueWidget.TravelQueueWidget_C
// 0x0218 (0x0478 - 0x0260)
class UTravelQueueWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OpenClose;                                         // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                BottomBorder;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Toggle;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_308;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_DropShadow;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainMenuButton_C*                    LeaveQueueN;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Queue;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TB_Details1;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TB_Details2;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TB_MapName;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TB_Position;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TB_ServerName;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                TopBorder;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Open;                                              // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E1[0x3];                                      // 0x02E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Secs_to_Join;                                      // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMainMenuScreen_C*                      REF_Menu;                                          // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlueprintSessionResult                Queued_Session;                                    // 0x02F0(0x0108)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Can_Toggle_Open;                                   // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F9[0x7];                                      // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Marquee_String;                                    // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Was_hovered;                                       // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_411[0x7];                                      // 0x0411(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Count_down_handle;                                 // 0x0418(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   Position;                                          // 0x0420(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Status;                                            // 0x0438(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Queue_Details;                                     // 0x0450(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ASQJoinBeaconClient*                    Current_Queue;                                     // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQSessionInfo*                         SessionInfo;                                       // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TravelQueueWidget(int32 EntryPoint);
	void BndEvt__TravelQueueWidget_LeaveQueueN_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UW_MainMenuButton_C* Button);
	void New_Queue();
	void Marquee();
	void Construct();
	void Initiate_Travel(const struct FBlueprintSessionResult& Session);
	void Reset_Queue_Window();
	void Lock_Open();
	void Count_Down();
	void Start_Countdown(const struct FBlueprintSessionResult& Sesh);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature();
	void OnSuccess_338384884E6EB2D7330F46BC3A121CC7();
	void OnFailure_338384884E6EB2D7330F46BC3A121CC7();
	void Get_Queue(class ASQJoinBeaconClient** JoinQueueClient);
	class FText Bind_Text_Position();
	class FText Bind_Text_Countdown();
	class FText Bind_Text_Detailed_Queue_1();
	class FText Bind_Text_Detailed_Queue_2();
	ESlateVisibility Bind_Visibility_via_bToggle();
	void AddServerToRecents();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TravelQueueWidget_C">();
	}
	static class UTravelQueueWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTravelQueueWidget_C>();
	}
};
static_assert(alignof(UTravelQueueWidget_C) == 0x000008, "Wrong alignment on UTravelQueueWidget_C");
static_assert(sizeof(UTravelQueueWidget_C) == 0x000478, "Wrong size on UTravelQueueWidget_C");
static_assert(offsetof(UTravelQueueWidget_C, UberGraphFrame) == 0x000260, "Member 'UTravelQueueWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, OpenClose) == 0x000268, "Member 'UTravelQueueWidget_C::OpenClose' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, BottomBorder) == 0x000270, "Member 'UTravelQueueWidget_C::BottomBorder' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, Button_Toggle) == 0x000278, "Member 'UTravelQueueWidget_C::Button_Toggle' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, Image_2) == 0x000280, "Member 'UTravelQueueWidget_C::Image_2' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, Image_308) == 0x000288, "Member 'UTravelQueueWidget_C::Image_308' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, Image_DropShadow) == 0x000290, "Member 'UTravelQueueWidget_C::Image_DropShadow' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, LeaveQueueN) == 0x000298, "Member 'UTravelQueueWidget_C::LeaveQueueN' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, Queue) == 0x0002A0, "Member 'UTravelQueueWidget_C::Queue' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, SizeBox_0) == 0x0002A8, "Member 'UTravelQueueWidget_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, TB_Details1) == 0x0002B0, "Member 'UTravelQueueWidget_C::TB_Details1' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, TB_Details2) == 0x0002B8, "Member 'UTravelQueueWidget_C::TB_Details2' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, TB_MapName) == 0x0002C0, "Member 'UTravelQueueWidget_C::TB_MapName' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, TB_Position) == 0x0002C8, "Member 'UTravelQueueWidget_C::TB_Position' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, TB_ServerName) == 0x0002D0, "Member 'UTravelQueueWidget_C::TB_ServerName' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, TopBorder) == 0x0002D8, "Member 'UTravelQueueWidget_C::TopBorder' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, Open) == 0x0002E0, "Member 'UTravelQueueWidget_C::Open' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, Secs_to_Join) == 0x0002E4, "Member 'UTravelQueueWidget_C::Secs_to_Join' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, REF_Menu) == 0x0002E8, "Member 'UTravelQueueWidget_C::REF_Menu' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, Queued_Session) == 0x0002F0, "Member 'UTravelQueueWidget_C::Queued_Session' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, Can_Toggle_Open) == 0x0003F8, "Member 'UTravelQueueWidget_C::Can_Toggle_Open' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, Marquee_String) == 0x000400, "Member 'UTravelQueueWidget_C::Marquee_String' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, Was_hovered) == 0x000410, "Member 'UTravelQueueWidget_C::Was_hovered' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, Count_down_handle) == 0x000418, "Member 'UTravelQueueWidget_C::Count_down_handle' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, Position) == 0x000420, "Member 'UTravelQueueWidget_C::Position' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, Status) == 0x000438, "Member 'UTravelQueueWidget_C::Status' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, Queue_Details) == 0x000450, "Member 'UTravelQueueWidget_C::Queue_Details' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, Current_Queue) == 0x000468, "Member 'UTravelQueueWidget_C::Current_Queue' has a wrong offset!");
static_assert(offsetof(UTravelQueueWidget_C, SessionInfo) == 0x000470, "Member 'UTravelQueueWidget_C::SessionInfo' has a wrong offset!");

}

