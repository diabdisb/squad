#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_WorldIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Squad_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_WorldIcon.W_WorldIcon_C
// 0x0018 (0x0280 - 0x0268)
class UW_WorldIcon_C final : public USQUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Fade;                                              // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_WorldIcon(int32 EntryPoint);
	void Construct();
	void Do_Fade(bool Fade_In);
	void Set_Texture(class UTexture2D* Texture, const struct FLinearColor& InColorAndOpacity);
	void Finished_2AF32E96411A6E4E33131B9FD4EA0393();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_WorldIcon_C">();
	}
	static class UW_WorldIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_WorldIcon_C>();
	}
};
static_assert(alignof(UW_WorldIcon_C) == 0x000008, "Wrong alignment on UW_WorldIcon_C");
static_assert(sizeof(UW_WorldIcon_C) == 0x000280, "Wrong size on UW_WorldIcon_C");
static_assert(offsetof(UW_WorldIcon_C, UberGraphFrame) == 0x000268, "Member 'UW_WorldIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_WorldIcon_C, Fade) == 0x000270, "Member 'UW_WorldIcon_C::Fade' has a wrong offset!");
static_assert(offsetof(UW_WorldIcon_C, Icon) == 0x000278, "Member 'UW_WorldIcon_C::Icon' has a wrong offset!");

}

