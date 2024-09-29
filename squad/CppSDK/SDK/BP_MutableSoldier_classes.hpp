#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MutableSoldier

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Squad_structs.hpp"
#include "Squad_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MutableSoldier.BP_MutableSoldier_C
// 0x00E0 (0x2740 - 0x2660)
class ABP_MutableSoldier_C final : public ASQSoldier
{
public:
	uint8                                         Pad_2658[0x8];                                     // 0x2658(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2660(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPlayerEnvironmentInteraction_C*        PlayerEnvironmentInteraction;                      // 0x2668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQEmotePlayer*                         SQEmotePlayer;                                     // 0x2670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVoiceAction_Component_C*               VoiceAction_Component;                             // 0x2678(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<int32, class UBP_SuppressionEffectData_C*> SuppresionPresets;                                 // 0x2680(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_SuppressionEffectData_C*            PresetAsset;                                       // 0x26D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SuppressionEffectPresetIndex;                      // 0x26D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDecaySuppression;                                 // 0x26DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26DD[0x3];                                     // 0x26DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SavedDecayRate;                                    // 0x26E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26E4[0x4];                                     // 0x26E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_GenericWeapon_StaticInfo_C*         CachedGenericWeaponStaticInfo;                     // 0x26E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SuppressionPunchIntensityBySuppressionPercentage;  // 0x26F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                           SuppressionPunchCameraLocation;                    // 0x26F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                           SuppressionPunchCameraRotation;                    // 0x2700(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                           SuppressionPunchWeaponAlignment;                   // 0x2708(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                           LeanPunchCameraRotation;                           // 0x2710(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                           LeanPunchWeaponAlignment;                          // 0x2718(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                           ChangeStancePunchWeaponSway;                       // 0x2720(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                           ChangeStancePunchWeaponAlignment;                  // 0x2728(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                           ChangeStancePunchCameraRotation;                   // 0x2730(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanApplyLeanPunch;                                 // 0x2738(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2739[0x3];                                     // 0x2739(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinTimeBetweenLeanPunches;                         // 0x273C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MutableSoldier(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BPOnPawnPossessedEvent();
	void ReceivePossessed(class AController* NewController);
	void LeanPunchTimer();
	void OnSuppressionEventDelegate(const bool IsRadial, const float AddedSuppressionAmount, const float NewSupressionLevel, const float SuppressionResistance, const float ClosenessRatio, const struct FVector& SuppressionSourcePoint, const struct FVector& ProjStartOverlapPoint, const struct FVector& ProjEndOverlapPoint, TSubclassOf<class USQSuppressionInfo> SuppressionInfoClass);
	void OnLeanEventDelegate(ESQSoldierLeanDirection NewLeanPosition);
	void OnAdsEventDelegate(bool bIsStateA);
	void Setup_Prototype_Suppression();
	void OnChangeStanceDelegate(ESQStance NewStance);
	void OnJumpEventDelegate(ESQJumpState NewJumpState);
	void InpActEvt_Subtract_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_Add_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Alt_BackSpace_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void UserConstructionScript();
	void SwitchSuppressionVFX(bool SwitchForward);
	void AdjustSuppressionLevel(float Delta);
	void Get_Change_Stance_Punch(class UCurveVector* Item_Static_Info_Curve, class UCurveVector* Soldier_Curve, struct FSQGenericPunchInput* Punch);
	void SelectChangeStancePunch(struct FSQGenericPunchInput* WeaponSway, struct FSQGenericPunchInput* WeaponAlignment, struct FSQGenericPunchInput* CameraRotation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MutableSoldier_C">();
	}
	static class ABP_MutableSoldier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MutableSoldier_C>();
	}
};
static_assert(alignof(ABP_MutableSoldier_C) == 0x000010, "Wrong alignment on ABP_MutableSoldier_C");
static_assert(sizeof(ABP_MutableSoldier_C) == 0x002740, "Wrong size on ABP_MutableSoldier_C");
static_assert(offsetof(ABP_MutableSoldier_C, UberGraphFrame) == 0x002660, "Member 'ABP_MutableSoldier_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MutableSoldier_C, PlayerEnvironmentInteraction) == 0x002668, "Member 'ABP_MutableSoldier_C::PlayerEnvironmentInteraction' has a wrong offset!");
static_assert(offsetof(ABP_MutableSoldier_C, SQEmotePlayer) == 0x002670, "Member 'ABP_MutableSoldier_C::SQEmotePlayer' has a wrong offset!");
static_assert(offsetof(ABP_MutableSoldier_C, VoiceAction_Component) == 0x002678, "Member 'ABP_MutableSoldier_C::VoiceAction_Component' has a wrong offset!");
static_assert(offsetof(ABP_MutableSoldier_C, SuppresionPresets) == 0x002680, "Member 'ABP_MutableSoldier_C::SuppresionPresets' has a wrong offset!");
static_assert(offsetof(ABP_MutableSoldier_C, PresetAsset) == 0x0026D0, "Member 'ABP_MutableSoldier_C::PresetAsset' has a wrong offset!");
static_assert(offsetof(ABP_MutableSoldier_C, SuppressionEffectPresetIndex) == 0x0026D8, "Member 'ABP_MutableSoldier_C::SuppressionEffectPresetIndex' has a wrong offset!");
static_assert(offsetof(ABP_MutableSoldier_C, bDecaySuppression) == 0x0026DC, "Member 'ABP_MutableSoldier_C::bDecaySuppression' has a wrong offset!");
static_assert(offsetof(ABP_MutableSoldier_C, SavedDecayRate) == 0x0026E0, "Member 'ABP_MutableSoldier_C::SavedDecayRate' has a wrong offset!");
static_assert(offsetof(ABP_MutableSoldier_C, CachedGenericWeaponStaticInfo) == 0x0026E8, "Member 'ABP_MutableSoldier_C::CachedGenericWeaponStaticInfo' has a wrong offset!");
static_assert(offsetof(ABP_MutableSoldier_C, SuppressionPunchIntensityBySuppressionPercentage) == 0x0026F0, "Member 'ABP_MutableSoldier_C::SuppressionPunchIntensityBySuppressionPercentage' has a wrong offset!");
static_assert(offsetof(ABP_MutableSoldier_C, SuppressionPunchCameraLocation) == 0x0026F8, "Member 'ABP_MutableSoldier_C::SuppressionPunchCameraLocation' has a wrong offset!");
static_assert(offsetof(ABP_MutableSoldier_C, SuppressionPunchCameraRotation) == 0x002700, "Member 'ABP_MutableSoldier_C::SuppressionPunchCameraRotation' has a wrong offset!");
static_assert(offsetof(ABP_MutableSoldier_C, SuppressionPunchWeaponAlignment) == 0x002708, "Member 'ABP_MutableSoldier_C::SuppressionPunchWeaponAlignment' has a wrong offset!");
static_assert(offsetof(ABP_MutableSoldier_C, LeanPunchCameraRotation) == 0x002710, "Member 'ABP_MutableSoldier_C::LeanPunchCameraRotation' has a wrong offset!");
static_assert(offsetof(ABP_MutableSoldier_C, LeanPunchWeaponAlignment) == 0x002718, "Member 'ABP_MutableSoldier_C::LeanPunchWeaponAlignment' has a wrong offset!");
static_assert(offsetof(ABP_MutableSoldier_C, ChangeStancePunchWeaponSway) == 0x002720, "Member 'ABP_MutableSoldier_C::ChangeStancePunchWeaponSway' has a wrong offset!");
static_assert(offsetof(ABP_MutableSoldier_C, ChangeStancePunchWeaponAlignment) == 0x002728, "Member 'ABP_MutableSoldier_C::ChangeStancePunchWeaponAlignment' has a wrong offset!");
static_assert(offsetof(ABP_MutableSoldier_C, ChangeStancePunchCameraRotation) == 0x002730, "Member 'ABP_MutableSoldier_C::ChangeStancePunchCameraRotation' has a wrong offset!");
static_assert(offsetof(ABP_MutableSoldier_C, CanApplyLeanPunch) == 0x002738, "Member 'ABP_MutableSoldier_C::CanApplyLeanPunch' has a wrong offset!");
static_assert(offsetof(ABP_MutableSoldier_C, MinTimeBetweenLeanPunches) == 0x00273C, "Member 'ABP_MutableSoldier_C::MinTimeBetweenLeanPunches' has a wrong offset!");

}

