#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_InteractableItem_SelfHeal

#include "Basic.hpp"

#include "Squad_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.ExecuteUbergraph_W_InteractableItem_SelfHeal
// 0x0028 (0x0028 - 0x0000)
struct W_InteractableItem_SelfHeal_C_ExecuteUbergraph_W_InteractableItem_SelfHeal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_InteractableItem_SelfHeal_C_ExecuteUbergraph_W_InteractableItem_SelfHeal) == 0x000008, "Wrong alignment on W_InteractableItem_SelfHeal_C_ExecuteUbergraph_W_InteractableItem_SelfHeal");
static_assert(sizeof(W_InteractableItem_SelfHeal_C_ExecuteUbergraph_W_InteractableItem_SelfHeal) == 0x000028, "Wrong size on W_InteractableItem_SelfHeal_C_ExecuteUbergraph_W_InteractableItem_SelfHeal");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_ExecuteUbergraph_W_InteractableItem_SelfHeal, EntryPoint) == 0x000000, "Member 'W_InteractableItem_SelfHeal_C_ExecuteUbergraph_W_InteractableItem_SelfHeal::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_ExecuteUbergraph_W_InteractableItem_SelfHeal, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'W_InteractableItem_SelfHeal_C_ExecuteUbergraph_W_InteractableItem_SelfHeal::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_ExecuteUbergraph_W_InteractableItem_SelfHeal, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'W_InteractableItem_SelfHeal_C_ExecuteUbergraph_W_InteractableItem_SelfHeal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_ExecuteUbergraph_W_InteractableItem_SelfHeal, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'W_InteractableItem_SelfHeal_C_ExecuteUbergraph_W_InteractableItem_SelfHeal::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Get Format Box
// 0x0008 (0x0008 - 0x0000)
struct W_InteractableItem_SelfHeal_C_Get_Format_Box final
{
public:
	class UHorizontalBox*                         FormatBox_0;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_InteractableItem_SelfHeal_C_Get_Format_Box) == 0x000008, "Wrong alignment on W_InteractableItem_SelfHeal_C_Get_Format_Box");
static_assert(sizeof(W_InteractableItem_SelfHeal_C_Get_Format_Box) == 0x000008, "Wrong size on W_InteractableItem_SelfHeal_C_Get_Format_Box");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Get_Format_Box, FormatBox_0) == 0x000000, "Member 'W_InteractableItem_SelfHeal_C_Get_Format_Box::FormatBox_0' has a wrong offset!");

// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Update Self Heal
// 0x0228 (0x0228 - 0x0000)
struct W_InteractableItem_SelfHeal_C_Update_Self_Heal final
{
public:
	class ASQSoldier*                             L_Soldier;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSQUsableWidgetData                    K2Node_MakeStruct_SQUsableWidgetData;              // 0x0008(0x0038)()
	bool                                          Temp_bool_Variable;                                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInVehicle_ReturnValue;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQEquipableItem*                       CallFunc_GetCurrentWeapon_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQHealingEquipableItem*                K2Node_DynamicCast_AsSQHealing_Equipable_Item;     // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Has_Field_Dressings_Has_Dressing;         // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Has_Field_Dressings_Slot;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSQUsableWidgetData                    K2Node_MakeStruct_SQUsableWidgetData_1;            // 0x0088(0x0038)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00E8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0128(0x0010)(ReferenceParm)
	class USQGameUserSettings*                    CallFunc_GetSquadGameUserSettings_ReturnValue;     // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0140(0x0018)()
	struct FSQUsableWidgetData                    K2Node_MakeStruct_SQUsableWidgetData_2;            // 0x0158(0x0038)()
	struct FSQUsableWidgetData                    K2Node_MakeStruct_SQUsableWidgetData_3;            // 0x0190(0x0038)()
	struct FSQUsableWidgetData                    K2Node_Select_Default;                             // 0x01C8(0x0038)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAlive_ReturnValue;                      // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_202[0x6];                                      // 0x0202(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_212[0x6];                                      // 0x0212(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQPlayerState*                         K2Node_DynamicCast_AsSQPlayer_State;               // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_InteractableItem_SelfHeal_C_Update_Self_Heal) == 0x000008, "Wrong alignment on W_InteractableItem_SelfHeal_C_Update_Self_Heal");
static_assert(sizeof(W_InteractableItem_SelfHeal_C_Update_Self_Heal) == 0x000228, "Wrong size on W_InteractableItem_SelfHeal_C_Update_Self_Heal");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, L_Soldier) == 0x000000, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::L_Soldier' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, K2Node_MakeStruct_SQUsableWidgetData) == 0x000008, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::K2Node_MakeStruct_SQUsableWidgetData' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, Temp_bool_Variable) == 0x000040, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, CallFunc_IsInVehicle_ReturnValue) == 0x000041, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::CallFunc_IsInVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, CallFunc_GetCurrentWeapon_ReturnValue) == 0x000048, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::CallFunc_GetCurrentWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, K2Node_DynamicCast_AsSQHealing_Equipable_Item) == 0x000050, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::K2Node_DynamicCast_AsSQHealing_Equipable_Item' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, CallFunc_Has_Field_Dressings_Has_Dressing) == 0x000059, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::CallFunc_Has_Field_Dressings_Has_Dressing' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, CallFunc_Has_Field_Dressings_Slot) == 0x00005C, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::CallFunc_Has_Field_Dressings_Slot' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, CallFunc_Add_IntInt_ReturnValue) == 0x000060, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, CallFunc_Conv_IntToString_ReturnValue) == 0x000068, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, CallFunc_Concat_StrStr_ReturnValue) == 0x000078, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, K2Node_MakeStruct_SQUsableWidgetData_1) == 0x000088, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::K2Node_MakeStruct_SQUsableWidgetData_1' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000C0, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D0, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, K2Node_MakeStruct_FormatArgumentData) == 0x0000E8, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, K2Node_MakeArray_Array) == 0x000128, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, CallFunc_GetSquadGameUserSettings_ReturnValue) == 0x000138, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::CallFunc_GetSquadGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, CallFunc_Format_ReturnValue) == 0x000140, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, K2Node_MakeStruct_SQUsableWidgetData_2) == 0x000158, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::K2Node_MakeStruct_SQUsableWidgetData_2' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, K2Node_MakeStruct_SQUsableWidgetData_3) == 0x000190, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::K2Node_MakeStruct_SQUsableWidgetData_3' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, K2Node_Select_Default) == 0x0001C8, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, CallFunc_Not_PreBool_ReturnValue) == 0x000200, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, CallFunc_IsAlive_ReturnValue) == 0x000201, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::CallFunc_IsAlive_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, CallFunc_GetOwningPlayer_ReturnValue) == 0x000208, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, CallFunc_BooleanAND_ReturnValue) == 0x000210, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, CallFunc_BooleanAND_ReturnValue_1) == 0x000211, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, K2Node_DynamicCast_AsSQPlayer_State) == 0x000218, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::K2Node_DynamicCast_AsSQPlayer_State' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, K2Node_DynamicCast_bSuccess_1) == 0x000220, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Update_Self_Heal, CallFunc_IsValid_ReturnValue) == 0x000221, "Member 'W_InteractableItem_SelfHeal_C_Update_Self_Heal::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Set Visibility
// 0x0018 (0x0018 - 0x0000)
struct W_InteractableItem_SelfHeal_C_Set_Visibility final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_InteractableItem_SelfHeal_C_Set_Visibility) == 0x000008, "Wrong alignment on W_InteractableItem_SelfHeal_C_Set_Visibility");
static_assert(sizeof(W_InteractableItem_SelfHeal_C_Set_Visibility) == 0x000018, "Wrong size on W_InteractableItem_SelfHeal_C_Set_Visibility");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Set_Visibility, Show) == 0x000000, "Member 'W_InteractableItem_SelfHeal_C_Set_Visibility::Show' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Set_Visibility, Temp_bool_Variable) == 0x000001, "Member 'W_InteractableItem_SelfHeal_C_Set_Visibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Set_Visibility, Temp_byte_Variable) == 0x000002, "Member 'W_InteractableItem_SelfHeal_C_Set_Visibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Set_Visibility, Temp_byte_Variable_1) == 0x000003, "Member 'W_InteractableItem_SelfHeal_C_Set_Visibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Set_Visibility, K2Node_Select_Default) == 0x000004, "Member 'W_InteractableItem_SelfHeal_C_Set_Visibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Set_Visibility, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'W_InteractableItem_SelfHeal_C_Set_Visibility::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Set_Visibility, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000010, "Member 'W_InteractableItem_SelfHeal_C_Set_Visibility::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Has Field Dressings
// 0x0098 (0x0098 - 0x0000)
struct W_InteractableItem_SelfHeal_C_Has_Field_Dressings final
{
public:
	class ASQSoldier*                             Inventory;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Has_Dressing;                                      // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Slot_0;                                            // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQPawnInventoryComponent*              CallFunc_GetInventory_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSQWeaponGroupData>             CallFunc_GetInventoryItemGroups_ReturnValue;       // 0x0020(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSQWeaponGroupData                     CallFunc_Array_Get_Item;                           // 0x0048(0x0028)()
	class ASQEquipableItem*                       CallFunc_Array_Get_Item_1;                         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQHealingEquipableItem*                K2Node_DynamicCast_AsSQHealing_Equipable_Item;     // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAmmo_ReturnValue;                      // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A[0x2];                                       // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings) == 0x000008, "Wrong alignment on W_InteractableItem_SelfHeal_C_Has_Field_Dressings");
static_assert(sizeof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings) == 0x000098, "Wrong size on W_InteractableItem_SelfHeal_C_Has_Field_Dressings");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings, Inventory) == 0x000000, "Member 'W_InteractableItem_SelfHeal_C_Has_Field_Dressings::Inventory' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings, Has_Dressing) == 0x000008, "Member 'W_InteractableItem_SelfHeal_C_Has_Field_Dressings::Has_Dressing' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings, Slot_0) == 0x00000C, "Member 'W_InteractableItem_SelfHeal_C_Has_Field_Dressings::Slot_0' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings, CallFunc_GetInventory_ReturnValue) == 0x000010, "Member 'W_InteractableItem_SelfHeal_C_Has_Field_Dressings::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'W_InteractableItem_SelfHeal_C_Has_Field_Dressings::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings, CallFunc_GetInventoryItemGroups_ReturnValue) == 0x000020, "Member 'W_InteractableItem_SelfHeal_C_Has_Field_Dressings::CallFunc_GetInventoryItemGroups_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'W_InteractableItem_SelfHeal_C_Has_Field_Dressings::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'W_InteractableItem_SelfHeal_C_Has_Field_Dressings::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'W_InteractableItem_SelfHeal_C_Has_Field_Dressings::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings, Temp_int_Array_Index_Variable) == 0x00003C, "Member 'W_InteractableItem_SelfHeal_C_Has_Field_Dressings::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings, Temp_int_Array_Index_Variable_1) == 0x000040, "Member 'W_InteractableItem_SelfHeal_C_Has_Field_Dressings::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings, CallFunc_Array_Get_Item) == 0x000048, "Member 'W_InteractableItem_SelfHeal_C_Has_Field_Dressings::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings, CallFunc_Array_Get_Item_1) == 0x000070, "Member 'W_InteractableItem_SelfHeal_C_Has_Field_Dressings::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings, CallFunc_Array_Length_ReturnValue_1) == 0x000078, "Member 'W_InteractableItem_SelfHeal_C_Has_Field_Dressings::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings, K2Node_DynamicCast_AsSQHealing_Equipable_Item) == 0x000080, "Member 'W_InteractableItem_SelfHeal_C_Has_Field_Dressings::K2Node_DynamicCast_AsSQHealing_Equipable_Item' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'W_InteractableItem_SelfHeal_C_Has_Field_Dressings::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings, CallFunc_HasAmmo_ReturnValue) == 0x000089, "Member 'W_InteractableItem_SelfHeal_C_Has_Field_Dressings::CallFunc_HasAmmo_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings, Temp_int_Loop_Counter_Variable_1) == 0x00008C, "Member 'W_InteractableItem_SelfHeal_C_Has_Field_Dressings::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings, CallFunc_Less_IntInt_ReturnValue_1) == 0x000090, "Member 'W_InteractableItem_SelfHeal_C_Has_Field_Dressings::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_InteractableItem_SelfHeal_C_Has_Field_Dressings, CallFunc_Add_IntInt_ReturnValue_1) == 0x000094, "Member 'W_InteractableItem_SelfHeal_C_Has_Field_Dressings::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

}

