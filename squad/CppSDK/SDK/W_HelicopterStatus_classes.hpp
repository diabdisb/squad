#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_HelicopterStatus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_HelicopterStatus.W_HelicopterStatus_C
// 0x0048 (0x02A8 - 0x0260)
class UW_HelicopterStatus_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_GenericState_C*                    EngineState;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           HealthBar;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_GenericState_C*                    MainRotor;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_GenericState_C*                    TailRotor;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                VehicleHealth;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASQHelicopter2*                         REF_Helicopter;                                    // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerController*                    My_PC;                                             // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_HelicopterStatus(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Refresh_Vehicle();
	void Construct();
	void Get_Helicopter();
	float Get_VehicleHealthPercent();
	void Update_Engine_State();
	void Update_Main_Rotor_State();
	void VehicleHealthColor();
	void Get_Specific_Blades(bool Main, class USQRotorBladesComponent** Rotor);
	void Update_Tail_Rotor_State();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_HelicopterStatus_C">();
	}
	static class UW_HelicopterStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_HelicopterStatus_C>();
	}
};
static_assert(alignof(UW_HelicopterStatus_C) == 0x000008, "Wrong alignment on UW_HelicopterStatus_C");
static_assert(sizeof(UW_HelicopterStatus_C) == 0x0002A8, "Wrong size on UW_HelicopterStatus_C");
static_assert(offsetof(UW_HelicopterStatus_C, UberGraphFrame) == 0x000260, "Member 'UW_HelicopterStatus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_HelicopterStatus_C, EngineState) == 0x000268, "Member 'UW_HelicopterStatus_C::EngineState' has a wrong offset!");
static_assert(offsetof(UW_HelicopterStatus_C, HealthBar) == 0x000270, "Member 'UW_HelicopterStatus_C::HealthBar' has a wrong offset!");
static_assert(offsetof(UW_HelicopterStatus_C, Image_0) == 0x000278, "Member 'UW_HelicopterStatus_C::Image_0' has a wrong offset!");
static_assert(offsetof(UW_HelicopterStatus_C, MainRotor) == 0x000280, "Member 'UW_HelicopterStatus_C::MainRotor' has a wrong offset!");
static_assert(offsetof(UW_HelicopterStatus_C, TailRotor) == 0x000288, "Member 'UW_HelicopterStatus_C::TailRotor' has a wrong offset!");
static_assert(offsetof(UW_HelicopterStatus_C, VehicleHealth) == 0x000290, "Member 'UW_HelicopterStatus_C::VehicleHealth' has a wrong offset!");
static_assert(offsetof(UW_HelicopterStatus_C, REF_Helicopter) == 0x000298, "Member 'UW_HelicopterStatus_C::REF_Helicopter' has a wrong offset!");
static_assert(offsetof(UW_HelicopterStatus_C, My_PC) == 0x0002A0, "Member 'UW_HelicopterStatus_C::My_PC' has a wrong offset!");

}

