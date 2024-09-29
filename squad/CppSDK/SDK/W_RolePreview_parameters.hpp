#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_RolePreview

#include "Basic.hpp"

#include "Squad_structs.hpp"
#include "FSQRoleEntry_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_RolePreview.W_RolePreview_C.OnRoleSet__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct W_RolePreview_C_OnRoleSet__DelegateSignature final
{
public:
	class USQRoleSettings*                        Role_Reference;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_RolePreview_C_OnRoleSet__DelegateSignature) == 0x000008, "Wrong alignment on W_RolePreview_C_OnRoleSet__DelegateSignature");
static_assert(sizeof(W_RolePreview_C_OnRoleSet__DelegateSignature) == 0x000008, "Wrong size on W_RolePreview_C_OnRoleSet__DelegateSignature");
static_assert(offsetof(W_RolePreview_C_OnRoleSet__DelegateSignature, Role_Reference) == 0x000000, "Member 'W_RolePreview_C_OnRoleSet__DelegateSignature::Role_Reference' has a wrong offset!");

// Function W_RolePreview.W_RolePreview_C.ExecuteUbergraph_W_RolePreview
// 0x0158 (0x0158 - 0x0000)
struct W_RolePreview_C_ExecuteUbergraph_W_RolePreview final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class USQRoleSettings* CurrentRole)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerController*                    K2Node_DynamicCast_AsSQPlayer_Controller;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USQRoleSettings*                        K2Node_CustomEvent_RoleReference;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQRoleSettings*                        CallFunc_GetCurrentRole_ReturnValue;               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USQRoleSettings*                        CallFunc_GetDeployRole_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQRoleSettings*                        K2Node_Select_Default;                             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFSQRoleEntry                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x0058(0x00C0)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USQRoleSettings*                        K2Node_CustomEvent_New_Role;                       // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSQAvailabilityState_Role>      K2Node_CustomEvent_In_Player_Role_States;          // 0x0128(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_IsSquadLeader_ReturnValue;                // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13A[0x6];                                      // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USQRoleSettings*                        K2Node_CustomEvent_CurrentRole;                    // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerState*                         CallFunc_GetSquadPlayerState_ReturnValue;          // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview) == 0x000008, "Wrong alignment on W_RolePreview_C_ExecuteUbergraph_W_RolePreview");
static_assert(sizeof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview) == 0x000158, "Wrong size on W_RolePreview_C_ExecuteUbergraph_W_RolePreview");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, EntryPoint) == 0x000000, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, Temp_bool_Variable) == 0x000005, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, K2Node_DynamicCast_AsSQPlayer_Controller) == 0x000020, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::K2Node_DynamicCast_AsSQPlayer_Controller' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, K2Node_CustomEvent_RoleReference) == 0x000030, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::K2Node_CustomEvent_RoleReference' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, CallFunc_GetCurrentRole_ReturnValue) == 0x000038, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::CallFunc_GetCurrentRole_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, CallFunc_IsValid_ReturnValue_2) == 0x000040, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, CallFunc_GetDeployRole_ReturnValue) == 0x000048, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::CallFunc_GetDeployRole_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, K2Node_Select_Default) == 0x000050, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, CallFunc_GetDataTableRowFromName_OutRow) == 0x000058, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000118, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, K2Node_CustomEvent_New_Role) == 0x000120, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::K2Node_CustomEvent_New_Role' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, K2Node_CustomEvent_In_Player_Role_States) == 0x000128, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::K2Node_CustomEvent_In_Player_Role_States' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, CallFunc_IsSquadLeader_ReturnValue) == 0x000138, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::CallFunc_IsSquadLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000139, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, K2Node_CustomEvent_CurrentRole) == 0x000140, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::K2Node_CustomEvent_CurrentRole' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, CallFunc_GetSquadPlayerState_ReturnValue) == 0x000148, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::CallFunc_GetSquadPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_ExecuteUbergraph_W_RolePreview, CallFunc_IsValid_ReturnValue_3) == 0x000150, "Member 'W_RolePreview_C_ExecuteUbergraph_W_RolePreview::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function W_RolePreview.W_RolePreview_C.NewRoleReplicated
// 0x0008 (0x0008 - 0x0000)
struct W_RolePreview_C_NewRoleReplicated final
{
public:
	class USQRoleSettings*                        CurrentRole;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_RolePreview_C_NewRoleReplicated) == 0x000008, "Wrong alignment on W_RolePreview_C_NewRoleReplicated");
static_assert(sizeof(W_RolePreview_C_NewRoleReplicated) == 0x000008, "Wrong size on W_RolePreview_C_NewRoleReplicated");
static_assert(offsetof(W_RolePreview_C_NewRoleReplicated, CurrentRole) == 0x000000, "Member 'W_RolePreview_C_NewRoleReplicated::CurrentRole' has a wrong offset!");

// Function W_RolePreview.W_RolePreview_C.OnTick
// 0x0010 (0x0010 - 0x0000)
struct W_RolePreview_C_OnTick final
{
public:
	TArray<struct FSQAvailabilityState_Role>      In_Player_Role_States;                             // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(W_RolePreview_C_OnTick) == 0x000008, "Wrong alignment on W_RolePreview_C_OnTick");
static_assert(sizeof(W_RolePreview_C_OnTick) == 0x000010, "Wrong size on W_RolePreview_C_OnTick");
static_assert(offsetof(W_RolePreview_C_OnTick, In_Player_Role_States) == 0x000000, "Member 'W_RolePreview_C_OnTick::In_Player_Role_States' has a wrong offset!");

// Function W_RolePreview.W_RolePreview_C.Set Role
// 0x0008 (0x0008 - 0x0000)
struct W_RolePreview_C_Set_Role final
{
public:
	class USQRoleSettings*                        New_Role;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_RolePreview_C_Set_Role) == 0x000008, "Wrong alignment on W_RolePreview_C_Set_Role");
static_assert(sizeof(W_RolePreview_C_Set_Role) == 0x000008, "Wrong size on W_RolePreview_C_Set_Role");
static_assert(offsetof(W_RolePreview_C_Set_Role, New_Role) == 0x000000, "Member 'W_RolePreview_C_Set_Role::New_Role' has a wrong offset!");

// Function W_RolePreview.W_RolePreview_C.Delay Display Role Info
// 0x0008 (0x0008 - 0x0000)
struct W_RolePreview_C_Delay_Display_Role_Info final
{
public:
	class USQRoleSettings*                        RoleReference;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_RolePreview_C_Delay_Display_Role_Info) == 0x000008, "Wrong alignment on W_RolePreview_C_Delay_Display_Role_Info");
static_assert(sizeof(W_RolePreview_C_Delay_Display_Role_Info) == 0x000008, "Wrong size on W_RolePreview_C_Delay_Display_Role_Info");
static_assert(offsetof(W_RolePreview_C_Delay_Display_Role_Info, RoleReference) == 0x000000, "Member 'W_RolePreview_C_Delay_Display_Role_Info::RoleReference' has a wrong offset!");

// Function W_RolePreview.W_RolePreview_C.CreateRenderTarget
// 0x0090 (0x0090 - 0x0000)
struct W_RolePreview_C_CreateRenderTarget final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18[0x8];                                       // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_R2T_Soldier_C*                      CallFunc_FinishSpawningActor_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USQAvailability_Role*                   CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SQRoleSettings_C*                   K2Node_DynamicCast_AsBP_SQRole_Settings;           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82[0x6];                                       // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               K2Node_Select_Default;                             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_RolePreview_C_CreateRenderTarget) == 0x000010, "Wrong alignment on W_RolePreview_C_CreateRenderTarget");
static_assert(sizeof(W_RolePreview_C_CreateRenderTarget) == 0x000090, "Wrong size on W_RolePreview_C_CreateRenderTarget");
static_assert(offsetof(W_RolePreview_C_CreateRenderTarget, Temp_bool_Variable) == 0x000000, "Member 'W_RolePreview_C_CreateRenderTarget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_CreateRenderTarget, Temp_object_Variable) == 0x000008, "Member 'W_RolePreview_C_CreateRenderTarget::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_CreateRenderTarget, Temp_object_Variable_1) == 0x000010, "Member 'W_RolePreview_C_CreateRenderTarget::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_CreateRenderTarget, CallFunc_MakeTransform_ReturnValue) == 0x000020, "Member 'W_RolePreview_C_CreateRenderTarget::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_CreateRenderTarget, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000050, "Member 'W_RolePreview_C_CreateRenderTarget::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_CreateRenderTarget, CallFunc_FinishSpawningActor_ReturnValue) == 0x000058, "Member 'W_RolePreview_C_CreateRenderTarget::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_CreateRenderTarget, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000060, "Member 'W_RolePreview_C_CreateRenderTarget::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_CreateRenderTarget, CallFunc_IsValid_ReturnValue) == 0x000061, "Member 'W_RolePreview_C_CreateRenderTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_CreateRenderTarget, CallFunc_Array_Get_Item) == 0x000068, "Member 'W_RolePreview_C_CreateRenderTarget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_CreateRenderTarget, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000070, "Member 'W_RolePreview_C_CreateRenderTarget::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_CreateRenderTarget, K2Node_DynamicCast_AsBP_SQRole_Settings) == 0x000078, "Member 'W_RolePreview_C_CreateRenderTarget::K2Node_DynamicCast_AsBP_SQRole_Settings' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_CreateRenderTarget, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'W_RolePreview_C_CreateRenderTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_CreateRenderTarget, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000081, "Member 'W_RolePreview_C_CreateRenderTarget::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_CreateRenderTarget, K2Node_Select_Default) == 0x000088, "Member 'W_RolePreview_C_CreateRenderTarget::K2Node_Select_Default' has a wrong offset!");

// Function W_RolePreview.W_RolePreview_C.UpdatePreviewState
// 0x0128 (0x0128 - 0x0000)
struct W_RolePreview_C_UpdatePreviewState final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0020(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x003C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x0074(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_4;                            // 0x0084(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_5;                            // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default;                             // 0x00A8(0x0018)()
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_2;                           // 0x00D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_3;                           // 0x00E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_4;                           // 0x00F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0100(0x0028)()
};
static_assert(alignof(W_RolePreview_C_UpdatePreviewState) == 0x000008, "Wrong alignment on W_RolePreview_C_UpdatePreviewState");
static_assert(sizeof(W_RolePreview_C_UpdatePreviewState) == 0x000128, "Wrong size on W_RolePreview_C_UpdatePreviewState");
static_assert(offsetof(W_RolePreview_C_UpdatePreviewState, Temp_bool_Variable) == 0x000000, "Member 'W_RolePreview_C_UpdatePreviewState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdatePreviewState, Temp_text_Variable) == 0x000008, "Member 'W_RolePreview_C_UpdatePreviewState::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdatePreviewState, Temp_text_Variable_1) == 0x000020, "Member 'W_RolePreview_C_UpdatePreviewState::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdatePreviewState, Temp_bool_Variable_1) == 0x000038, "Member 'W_RolePreview_C_UpdatePreviewState::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdatePreviewState, Temp_struct_Variable) == 0x00003C, "Member 'W_RolePreview_C_UpdatePreviewState::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdatePreviewState, Temp_struct_Variable_1) == 0x00004C, "Member 'W_RolePreview_C_UpdatePreviewState::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdatePreviewState, Temp_bool_Variable_2) == 0x00005C, "Member 'W_RolePreview_C_UpdatePreviewState::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdatePreviewState, Temp_struct_Variable_2) == 0x000060, "Member 'W_RolePreview_C_UpdatePreviewState::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdatePreviewState, Temp_bool_Variable_3) == 0x000070, "Member 'W_RolePreview_C_UpdatePreviewState::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdatePreviewState, Temp_struct_Variable_3) == 0x000074, "Member 'W_RolePreview_C_UpdatePreviewState::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdatePreviewState, Temp_struct_Variable_4) == 0x000084, "Member 'W_RolePreview_C_UpdatePreviewState::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdatePreviewState, Temp_bool_Variable_4) == 0x000094, "Member 'W_RolePreview_C_UpdatePreviewState::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdatePreviewState, Temp_struct_Variable_5) == 0x000098, "Member 'W_RolePreview_C_UpdatePreviewState::Temp_struct_Variable_5' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdatePreviewState, K2Node_Select_Default) == 0x0000A8, "Member 'W_RolePreview_C_UpdatePreviewState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdatePreviewState, K2Node_Select_Default_1) == 0x0000C0, "Member 'W_RolePreview_C_UpdatePreviewState::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdatePreviewState, K2Node_Select_Default_2) == 0x0000D0, "Member 'W_RolePreview_C_UpdatePreviewState::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdatePreviewState, K2Node_Select_Default_3) == 0x0000E0, "Member 'W_RolePreview_C_UpdatePreviewState::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdatePreviewState, K2Node_Select_Default_4) == 0x0000F0, "Member 'W_RolePreview_C_UpdatePreviewState::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdatePreviewState, K2Node_MakeStruct_SlateColor) == 0x000100, "Member 'W_RolePreview_C_UpdatePreviewState::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function W_RolePreview.W_RolePreview_C.UpdateRoleStatus
// 0x0078 (0x0078 - 0x0000)
struct W_RolePreview_C_UpdateRoleStatus final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USQRoleSettings*                        CallFunc_GetDeployRole_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSQAvailabilityState_Role              CallFunc_TryGetRoleAvailability_OutUpdatedRoleState; // 0x0018(0x0058)(ContainsInstancedReference)
	bool                                          CallFunc_TryGetRoleAvailability_ReturnValue;       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAvailable_ReturnValue;                  // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_RolePreview_C_UpdateRoleStatus) == 0x000008, "Wrong alignment on W_RolePreview_C_UpdateRoleStatus");
static_assert(sizeof(W_RolePreview_C_UpdateRoleStatus) == 0x000078, "Wrong size on W_RolePreview_C_UpdateRoleStatus");
static_assert(offsetof(W_RolePreview_C_UpdateRoleStatus, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'W_RolePreview_C_UpdateRoleStatus::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdateRoleStatus, CallFunc_GetDeployRole_ReturnValue) == 0x000008, "Member 'W_RolePreview_C_UpdateRoleStatus::CallFunc_GetDeployRole_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdateRoleStatus, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'W_RolePreview_C_UpdateRoleStatus::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdateRoleStatus, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000011, "Member 'W_RolePreview_C_UpdateRoleStatus::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdateRoleStatus, CallFunc_TryGetRoleAvailability_OutUpdatedRoleState) == 0x000018, "Member 'W_RolePreview_C_UpdateRoleStatus::CallFunc_TryGetRoleAvailability_OutUpdatedRoleState' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdateRoleStatus, CallFunc_TryGetRoleAvailability_ReturnValue) == 0x000070, "Member 'W_RolePreview_C_UpdateRoleStatus::CallFunc_TryGetRoleAvailability_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdateRoleStatus, CallFunc_IsValid_ReturnValue_2) == 0x000071, "Member 'W_RolePreview_C_UpdateRoleStatus::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdateRoleStatus, CallFunc_IsAvailable_ReturnValue) == 0x000072, "Member 'W_RolePreview_C_UpdateRoleStatus::CallFunc_IsAvailable_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_RolePreview_C_UpdateRoleStatus, CallFunc_Not_PreBool_ReturnValue) == 0x000073, "Member 'W_RolePreview_C_UpdateRoleStatus::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

