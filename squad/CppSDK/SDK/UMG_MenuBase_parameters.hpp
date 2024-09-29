#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_MenuBase

#include "Basic.hpp"


namespace SDK::Params
{

// Function UMG_MenuBase.UMG_MenuBase_C.Team Selected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MenuBase_C_Team_Selected__DelegateSignature final
{
public:
	class ASQTeamState*                           Team;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MenuBase_C_Team_Selected__DelegateSignature) == 0x000008, "Wrong alignment on UMG_MenuBase_C_Team_Selected__DelegateSignature");
static_assert(sizeof(UMG_MenuBase_C_Team_Selected__DelegateSignature) == 0x000008, "Wrong size on UMG_MenuBase_C_Team_Selected__DelegateSignature");
static_assert(offsetof(UMG_MenuBase_C_Team_Selected__DelegateSignature, Team) == 0x000000, "Member 'UMG_MenuBase_C_Team_Selected__DelegateSignature::Team' has a wrong offset!");

// Function UMG_MenuBase.UMG_MenuBase_C.ExecuteUbergraph_UMG_MenuBase
// 0x0004 (0x0004 - 0x0000)
struct UMG_MenuBase_C_ExecuteUbergraph_UMG_MenuBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MenuBase_C_ExecuteUbergraph_UMG_MenuBase) == 0x000004, "Wrong alignment on UMG_MenuBase_C_ExecuteUbergraph_UMG_MenuBase");
static_assert(sizeof(UMG_MenuBase_C_ExecuteUbergraph_UMG_MenuBase) == 0x000004, "Wrong size on UMG_MenuBase_C_ExecuteUbergraph_UMG_MenuBase");
static_assert(offsetof(UMG_MenuBase_C_ExecuteUbergraph_UMG_MenuBase, EntryPoint) == 0x000000, "Member 'UMG_MenuBase_C_ExecuteUbergraph_UMG_MenuBase::EntryPoint' has a wrong offset!");

// Function UMG_MenuBase.UMG_MenuBase_C.Is Open
// 0x0003 (0x0003 - 0x0000)
struct UMG_MenuBase_C_Is_Open final
{
public:
	bool                                          Open;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Transitioning;                                     // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MenuBase_C_Is_Open) == 0x000001, "Wrong alignment on UMG_MenuBase_C_Is_Open");
static_assert(sizeof(UMG_MenuBase_C_Is_Open) == 0x000003, "Wrong size on UMG_MenuBase_C_Is_Open");
static_assert(offsetof(UMG_MenuBase_C_Is_Open, Open) == 0x000000, "Member 'UMG_MenuBase_C_Is_Open::Open' has a wrong offset!");
static_assert(offsetof(UMG_MenuBase_C_Is_Open, Transitioning) == 0x000001, "Member 'UMG_MenuBase_C_Is_Open::Transitioning' has a wrong offset!");
static_assert(offsetof(UMG_MenuBase_C_Is_Open, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000002, "Member 'UMG_MenuBase_C_Is_Open::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function UMG_MenuBase.UMG_MenuBase_C.Configure Map Elements
// 0x0028 (0x0028 - 0x0000)
struct UMG_MenuBase_C_Configure_Map_Elements final
{
public:
	class USQCoreStateMapComponent*               MapComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQMapMarkerManagerComponent*           MarkerManager;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelWidget*                           CallFunc_GetElementRoot_Out_Root;                  // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MenuBase_C_Configure_Map_Elements) == 0x000008, "Wrong alignment on UMG_MenuBase_C_Configure_Map_Elements");
static_assert(sizeof(UMG_MenuBase_C_Configure_Map_Elements) == 0x000028, "Wrong size on UMG_MenuBase_C_Configure_Map_Elements");
static_assert(offsetof(UMG_MenuBase_C_Configure_Map_Elements, MapComponent) == 0x000000, "Member 'UMG_MenuBase_C_Configure_Map_Elements::MapComponent' has a wrong offset!");
static_assert(offsetof(UMG_MenuBase_C_Configure_Map_Elements, MarkerManager) == 0x000008, "Member 'UMG_MenuBase_C_Configure_Map_Elements::MarkerManager' has a wrong offset!");
static_assert(offsetof(UMG_MenuBase_C_Configure_Map_Elements, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'UMG_MenuBase_C_Configure_Map_Elements::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MenuBase_C_Configure_Map_Elements, CallFunc_GetElementRoot_Out_Root) == 0x000018, "Member 'UMG_MenuBase_C_Configure_Map_Elements::CallFunc_GetElementRoot_Out_Root' has a wrong offset!");
static_assert(offsetof(UMG_MenuBase_C_Configure_Map_Elements, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'UMG_MenuBase_C_Configure_Map_Elements::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function UMG_MenuBase.UMG_MenuBase_C.Get Spawn Point Roots
// 0x0018 (0x0018 - 0x0000)
struct UMG_MenuBase_C_Get_Spawn_Point_Roots final
{
public:
	class UGridPanel*                             SpawnBase;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridPanel*                             SpawnHab;                                          // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridPanel*                             SpawnRally;                                        // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MenuBase_C_Get_Spawn_Point_Roots) == 0x000008, "Wrong alignment on UMG_MenuBase_C_Get_Spawn_Point_Roots");
static_assert(sizeof(UMG_MenuBase_C_Get_Spawn_Point_Roots) == 0x000018, "Wrong size on UMG_MenuBase_C_Get_Spawn_Point_Roots");
static_assert(offsetof(UMG_MenuBase_C_Get_Spawn_Point_Roots, SpawnBase) == 0x000000, "Member 'UMG_MenuBase_C_Get_Spawn_Point_Roots::SpawnBase' has a wrong offset!");
static_assert(offsetof(UMG_MenuBase_C_Get_Spawn_Point_Roots, SpawnHab) == 0x000008, "Member 'UMG_MenuBase_C_Get_Spawn_Point_Roots::SpawnHab' has a wrong offset!");
static_assert(offsetof(UMG_MenuBase_C_Get_Spawn_Point_Roots, SpawnRally) == 0x000010, "Member 'UMG_MenuBase_C_Get_Spawn_Point_Roots::SpawnRally' has a wrong offset!");

// Function UMG_MenuBase.UMG_MenuBase_C.Get Squad List Roots
// 0x0018 (0x0018 - 0x0000)
struct UMG_MenuBase_C_Get_Squad_List_Roots final
{
public:
	class UPanelWidget*                           Squad_Panel;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                           Unassigned_Panel;                                  // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                           Commander_Panel;                                   // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MenuBase_C_Get_Squad_List_Roots) == 0x000008, "Wrong alignment on UMG_MenuBase_C_Get_Squad_List_Roots");
static_assert(sizeof(UMG_MenuBase_C_Get_Squad_List_Roots) == 0x000018, "Wrong size on UMG_MenuBase_C_Get_Squad_List_Roots");
static_assert(offsetof(UMG_MenuBase_C_Get_Squad_List_Roots, Squad_Panel) == 0x000000, "Member 'UMG_MenuBase_C_Get_Squad_List_Roots::Squad_Panel' has a wrong offset!");
static_assert(offsetof(UMG_MenuBase_C_Get_Squad_List_Roots, Unassigned_Panel) == 0x000008, "Member 'UMG_MenuBase_C_Get_Squad_List_Roots::Unassigned_Panel' has a wrong offset!");
static_assert(offsetof(UMG_MenuBase_C_Get_Squad_List_Roots, Commander_Panel) == 0x000010, "Member 'UMG_MenuBase_C_Get_Squad_List_Roots::Commander_Panel' has a wrong offset!");

// Function UMG_MenuBase.UMG_MenuBase_C.Get Role List Roots
// 0x0010 (0x0010 - 0x0000)
struct UMG_MenuBase_C_Get_Role_List_Roots final
{
public:
	class UPanelWidget*                           Squad_Panel;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                           Unassigned_Panel;                                  // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MenuBase_C_Get_Role_List_Roots) == 0x000008, "Wrong alignment on UMG_MenuBase_C_Get_Role_List_Roots");
static_assert(sizeof(UMG_MenuBase_C_Get_Role_List_Roots) == 0x000010, "Wrong size on UMG_MenuBase_C_Get_Role_List_Roots");
static_assert(offsetof(UMG_MenuBase_C_Get_Role_List_Roots, Squad_Panel) == 0x000000, "Member 'UMG_MenuBase_C_Get_Role_List_Roots::Squad_Panel' has a wrong offset!");
static_assert(offsetof(UMG_MenuBase_C_Get_Role_List_Roots, Unassigned_Panel) == 0x000008, "Member 'UMG_MenuBase_C_Get_Role_List_Roots::Unassigned_Panel' has a wrong offset!");

// Function UMG_MenuBase.UMG_MenuBase_C.Get Voting Widget
// 0x0008 (0x0008 - 0x0000)
struct UMG_MenuBase_C_Get_Voting_Widget final
{
public:
	class UUserWidget*                            Voting_Widget;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MenuBase_C_Get_Voting_Widget) == 0x000008, "Wrong alignment on UMG_MenuBase_C_Get_Voting_Widget");
static_assert(sizeof(UMG_MenuBase_C_Get_Voting_Widget) == 0x000008, "Wrong size on UMG_MenuBase_C_Get_Voting_Widget");
static_assert(offsetof(UMG_MenuBase_C_Get_Voting_Widget, Voting_Widget) == 0x000000, "Member 'UMG_MenuBase_C_Get_Voting_Widget::Voting_Widget' has a wrong offset!");

// Function UMG_MenuBase.UMG_MenuBase_C.Close UI Element
// 0x0018 (0x0018 - 0x0000)
struct UMG_MenuBase_C_Close_UI_Element final
{
public:
	bool                                          Success;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlayingForward_ReturnValue;    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MenuBase_C_Close_UI_Element) == 0x000008, "Wrong alignment on UMG_MenuBase_C_Close_UI_Element");
static_assert(sizeof(UMG_MenuBase_C_Close_UI_Element) == 0x000018, "Wrong size on UMG_MenuBase_C_Close_UI_Element");
static_assert(offsetof(UMG_MenuBase_C_Close_UI_Element, Success) == 0x000000, "Member 'UMG_MenuBase_C_Close_UI_Element::Success' has a wrong offset!");
static_assert(offsetof(UMG_MenuBase_C_Close_UI_Element, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000004, "Member 'UMG_MenuBase_C_Close_UI_Element::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MenuBase_C_Close_UI_Element, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UMG_MenuBase_C_Close_UI_Element::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MenuBase_C_Close_UI_Element, CallFunc_IsAnimationPlayingForward_ReturnValue) == 0x000010, "Member 'UMG_MenuBase_C_Close_UI_Element::CallFunc_IsAnimationPlayingForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MenuBase_C_Close_UI_Element, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000011, "Member 'UMG_MenuBase_C_Close_UI_Element::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function UMG_MenuBase.UMG_MenuBase_C.Open UI Element
// 0x0030 (0x0030 - 0x0000)
struct UMG_MenuBase_C_Open_UI_Element final
{
public:
	class USQCoreStateMapComponent*               Map_Component;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlayingForward_ReturnValue;    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASQGameState*                           CallFunc_GetSquadGameState_Return_Value;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQMapMarkerManagerComponent*           CallFunc_GetMarkerManager_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MenuBase_C_Open_UI_Element) == 0x000008, "Wrong alignment on UMG_MenuBase_C_Open_UI_Element");
static_assert(sizeof(UMG_MenuBase_C_Open_UI_Element) == 0x000030, "Wrong size on UMG_MenuBase_C_Open_UI_Element");
static_assert(offsetof(UMG_MenuBase_C_Open_UI_Element, Map_Component) == 0x000000, "Member 'UMG_MenuBase_C_Open_UI_Element::Map_Component' has a wrong offset!");
static_assert(offsetof(UMG_MenuBase_C_Open_UI_Element, Success) == 0x000008, "Member 'UMG_MenuBase_C_Open_UI_Element::Success' has a wrong offset!");
static_assert(offsetof(UMG_MenuBase_C_Open_UI_Element, CallFunc_IsAnimationPlayingForward_ReturnValue) == 0x000009, "Member 'UMG_MenuBase_C_Open_UI_Element::CallFunc_IsAnimationPlayingForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MenuBase_C_Open_UI_Element, CallFunc_GetSquadGameState_Return_Value) == 0x000010, "Member 'UMG_MenuBase_C_Open_UI_Element::CallFunc_GetSquadGameState_Return_Value' has a wrong offset!");
static_assert(offsetof(UMG_MenuBase_C_Open_UI_Element, CallFunc_GetMarkerManager_ReturnValue) == 0x000018, "Member 'UMG_MenuBase_C_Open_UI_Element::CallFunc_GetMarkerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MenuBase_C_Open_UI_Element, CallFunc_PlayAnimationForward_ReturnValue) == 0x000020, "Member 'UMG_MenuBase_C_Open_UI_Element::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MenuBase_C_Open_UI_Element, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000028, "Member 'UMG_MenuBase_C_Open_UI_Element::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

}

