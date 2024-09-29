#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ServerInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_ServerInfo.W_ServerInfo_C
// 0x0048 (0x02A8 - 0x0260)
class UW_ServerInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             BPCurrentGamemodeTextBlock;                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BpCurrentMapTextBlock;                             // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BPNextMapTextBlock;                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BPPlayerCountTextBlock;                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BPServerNameTextBlock;                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BPTickImage;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BPTickTextBlock;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASQGameState*                           GameStateRef;                                      // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_ServerInfo(int32 EntryPoint);
	void Construct();
	void UpdateData();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_ServerInfo_C">();
	}
	static class UW_ServerInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_ServerInfo_C>();
	}
};
static_assert(alignof(UW_ServerInfo_C) == 0x000008, "Wrong alignment on UW_ServerInfo_C");
static_assert(sizeof(UW_ServerInfo_C) == 0x0002A8, "Wrong size on UW_ServerInfo_C");
static_assert(offsetof(UW_ServerInfo_C, UberGraphFrame) == 0x000260, "Member 'UW_ServerInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_ServerInfo_C, BPCurrentGamemodeTextBlock) == 0x000268, "Member 'UW_ServerInfo_C::BPCurrentGamemodeTextBlock' has a wrong offset!");
static_assert(offsetof(UW_ServerInfo_C, BpCurrentMapTextBlock) == 0x000270, "Member 'UW_ServerInfo_C::BpCurrentMapTextBlock' has a wrong offset!");
static_assert(offsetof(UW_ServerInfo_C, BPNextMapTextBlock) == 0x000278, "Member 'UW_ServerInfo_C::BPNextMapTextBlock' has a wrong offset!");
static_assert(offsetof(UW_ServerInfo_C, BPPlayerCountTextBlock) == 0x000280, "Member 'UW_ServerInfo_C::BPPlayerCountTextBlock' has a wrong offset!");
static_assert(offsetof(UW_ServerInfo_C, BPServerNameTextBlock) == 0x000288, "Member 'UW_ServerInfo_C::BPServerNameTextBlock' has a wrong offset!");
static_assert(offsetof(UW_ServerInfo_C, BPTickImage) == 0x000290, "Member 'UW_ServerInfo_C::BPTickImage' has a wrong offset!");
static_assert(offsetof(UW_ServerInfo_C, BPTickTextBlock) == 0x000298, "Member 'UW_ServerInfo_C::BPTickTextBlock' has a wrong offset!");
static_assert(offsetof(UW_ServerInfo_C, GameStateRef) == 0x0002A0, "Member 'UW_ServerInfo_C::GameStateRef' has a wrong offset!");

}

