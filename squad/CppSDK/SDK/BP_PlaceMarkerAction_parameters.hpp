#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlaceMarkerAction

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_PlaceMarkerAction.BP_PlaceMarkerAction_C.DoAction__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_PlaceMarkerAction_C_DoAction__DelegateSignature final
{
public:
	class UClass*                                 NewParam;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlaceMarkerAction_C_DoAction__DelegateSignature) == 0x000008, "Wrong alignment on BP_PlaceMarkerAction_C_DoAction__DelegateSignature");
static_assert(sizeof(BP_PlaceMarkerAction_C_DoAction__DelegateSignature) == 0x000008, "Wrong size on BP_PlaceMarkerAction_C_DoAction__DelegateSignature");
static_assert(offsetof(BP_PlaceMarkerAction_C_DoAction__DelegateSignature, NewParam) == 0x000000, "Member 'BP_PlaceMarkerAction_C_DoAction__DelegateSignature::NewParam' has a wrong offset!");

// Function BP_PlaceMarkerAction.BP_PlaceMarkerAction_C.ExecuteUbergraph_BP_PlaceMarkerAction
// 0x0088 (0x0088 - 0x0000)
struct BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USQMapMarkerDataAsset*                  K2Node_CustomEvent_MapMarkerData;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBaseRadialMenu_C*                      K2Node_CustomEvent_RadialMenu;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_CustomEvent_MapMarkerClass;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_PlayerController_C> K2Node_DynamicCast_AsBPI_Player_Controller;        // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_GetCameraRotation_ReturnValue;            // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorInt_ReturnValue;           // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;            // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction) == 0x000008, "Wrong alignment on BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction");
static_assert(sizeof(BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction) == 0x000088, "Wrong size on BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction");
static_assert(offsetof(BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction, EntryPoint) == 0x000000, "Member 'BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction, K2Node_CustomEvent_MapMarkerData) == 0x000008, "Member 'BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction::K2Node_CustomEvent_MapMarkerData' has a wrong offset!");
static_assert(offsetof(BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction, K2Node_CustomEvent_RadialMenu) == 0x000010, "Member 'BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction::K2Node_CustomEvent_RadialMenu' has a wrong offset!");
static_assert(offsetof(BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction, K2Node_CustomEvent_MapMarkerClass) == 0x000018, "Member 'BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction::K2Node_CustomEvent_MapMarkerClass' has a wrong offset!");
static_assert(offsetof(BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000028, "Member 'BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction, K2Node_DynamicCast_AsBPI_Player_Controller) == 0x000030, "Member 'BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction::K2Node_DynamicCast_AsBPI_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction, CallFunc_GetCameraRotation_ReturnValue) == 0x000044, "Member 'BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction::CallFunc_GetCameraRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x000054, "Member 'BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction, CallFunc_Multiply_VectorInt_ReturnValue) == 0x000060, "Member 'BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction::CallFunc_Multiply_VectorInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction, CallFunc_GetCameraLocation_ReturnValue) == 0x00006C, "Member 'BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction, CallFunc_Add_VectorVector_ReturnValue) == 0x000078, "Member 'BP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

// Function BP_PlaceMarkerAction.BP_PlaceMarkerAction_C.DoAction_Event
// 0x0018 (0x0018 - 0x0000)
struct BP_PlaceMarkerAction_C_DoAction_Event final
{
public:
	class USQMapMarkerDataAsset*                  MapMarkerData;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBaseRadialMenu_C*                      RadialMenu;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 MapMarkerClass;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlaceMarkerAction_C_DoAction_Event) == 0x000008, "Wrong alignment on BP_PlaceMarkerAction_C_DoAction_Event");
static_assert(sizeof(BP_PlaceMarkerAction_C_DoAction_Event) == 0x000018, "Wrong size on BP_PlaceMarkerAction_C_DoAction_Event");
static_assert(offsetof(BP_PlaceMarkerAction_C_DoAction_Event, MapMarkerData) == 0x000000, "Member 'BP_PlaceMarkerAction_C_DoAction_Event::MapMarkerData' has a wrong offset!");
static_assert(offsetof(BP_PlaceMarkerAction_C_DoAction_Event, RadialMenu) == 0x000008, "Member 'BP_PlaceMarkerAction_C_DoAction_Event::RadialMenu' has a wrong offset!");
static_assert(offsetof(BP_PlaceMarkerAction_C_DoAction_Event, MapMarkerClass) == 0x000010, "Member 'BP_PlaceMarkerAction_C_DoAction_Event::MapMarkerClass' has a wrong offset!");

}

