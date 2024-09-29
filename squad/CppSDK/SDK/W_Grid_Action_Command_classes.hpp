#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Grid_Action_Command

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "W_Grid_Action_classes.hpp"
#include "Squad_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Grid_Action_Command.W_Grid_Action_Command_C
// 0x0060 (0x0308 - 0x02A8)
class UW_Grid_Action_Command_C final : public UW_Grid_Action_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_W_Grid_Action_Command_C;            // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Interval_Index;                                    // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B4[0x4];                                      // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 SQCommandData;                                     // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           Tint;                                              // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Name_0;                                            // 0x02D0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Force_Allowed;                                     // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AWorldSettings*                         WorldSettings;                                     // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_CommanderActionCondition_C*         Command_Condition;                                 // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Locked;                                            // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_W_Grid_Action_Command(int32 EntryPoint);
	void Fail_Message();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Refresh_Info();
	void Get_State(ESQCommandOptionState* State, float* State_Time, float* State_Percent, bool* Category_Locked, float* Category_Time, float* Category_Percent);
	bool Get_Action_Ready();
	void Action_Button_Pressed();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Get_Color(struct FLinearColor* Tint_0);
	class UWidget* Get_Tooltip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Grid_Action_Command_C">();
	}
	static class UW_Grid_Action_Command_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Grid_Action_Command_C>();
	}
};
static_assert(alignof(UW_Grid_Action_Command_C) == 0x000008, "Wrong alignment on UW_Grid_Action_Command_C");
static_assert(sizeof(UW_Grid_Action_Command_C) == 0x000308, "Wrong size on UW_Grid_Action_Command_C");
static_assert(offsetof(UW_Grid_Action_Command_C, UberGraphFrame_W_Grid_Action_Command_C) == 0x0002A8, "Member 'UW_Grid_Action_Command_C::UberGraphFrame_W_Grid_Action_Command_C' has a wrong offset!");
static_assert(offsetof(UW_Grid_Action_Command_C, Interval_Index) == 0x0002B0, "Member 'UW_Grid_Action_Command_C::Interval_Index' has a wrong offset!");
static_assert(offsetof(UW_Grid_Action_Command_C, SQCommandData) == 0x0002B8, "Member 'UW_Grid_Action_Command_C::SQCommandData' has a wrong offset!");
static_assert(offsetof(UW_Grid_Action_Command_C, Tint) == 0x0002C0, "Member 'UW_Grid_Action_Command_C::Tint' has a wrong offset!");
static_assert(offsetof(UW_Grid_Action_Command_C, Name_0) == 0x0002D0, "Member 'UW_Grid_Action_Command_C::Name_0' has a wrong offset!");
static_assert(offsetof(UW_Grid_Action_Command_C, Force_Allowed) == 0x0002E8, "Member 'UW_Grid_Action_Command_C::Force_Allowed' has a wrong offset!");
static_assert(offsetof(UW_Grid_Action_Command_C, WorldSettings) == 0x0002F0, "Member 'UW_Grid_Action_Command_C::WorldSettings' has a wrong offset!");
static_assert(offsetof(UW_Grid_Action_Command_C, Command_Condition) == 0x0002F8, "Member 'UW_Grid_Action_Command_C::Command_Condition' has a wrong offset!");
static_assert(offsetof(UW_Grid_Action_Command_C, Locked) == 0x000300, "Member 'UW_Grid_Action_Command_C::Locked' has a wrong offset!");

}

