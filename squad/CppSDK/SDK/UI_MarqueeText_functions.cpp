#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MarqueeText

#include "Basic.hpp"

#include "UI_MarqueeText_classes.hpp"
#include "UI_MarqueeText_parameters.hpp"


namespace SDK
{

// Function UI_MarqueeText.UI_MarqueeText_C.ExecuteUbergraph_UI_MarqueeText
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MarqueeText_C::ExecuteUbergraph_UI_MarqueeText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MarqueeText_C", "ExecuteUbergraph_UI_MarqueeText");

	Params::UI_MarqueeText_C_ExecuteUbergraph_UI_MarqueeText Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MarqueeText.UI_MarqueeText_C.BndEvt__UI_MarqueeText_DetectionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MarqueeText_C::BndEvt__UI_MarqueeText_DetectionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MarqueeText_C", "BndEvt__UI_MarqueeText_DetectionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MarqueeText.UI_MarqueeText_C.BndEvt__UI_MarqueeText_DetectionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MarqueeText_C::BndEvt__UI_MarqueeText_DetectionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MarqueeText_C", "BndEvt__UI_MarqueeText_DetectionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MarqueeText.UI_MarqueeText_C.UpdateFont
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo                   InFontInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// ETextJustify                            StartJustification_0                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                      TextColor                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_MarqueeText_C::UpdateFont(const struct FSlateFontInfo& InFontInfo, ETextJustify StartJustification_0, const struct FSlateColor& TextColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MarqueeText_C", "UpdateFont");

	Params::UI_MarqueeText_C_UpdateFont Parms{};

	Parms.InFontInfo = std::move(InFontInfo);
	Parms.StartJustification_0 = StartJustification_0;
	Parms.TextColor = std::move(TextColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MarqueeText.UI_MarqueeText_C.SetStartText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NewText                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_MarqueeText_C::SetStartText(const class FString& NewText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MarqueeText_C", "SetStartText");

	Params::UI_MarqueeText_C_SetStartText Parms{};

	Parms.NewText = std::move(NewText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MarqueeText.UI_MarqueeText_C.ResetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_MarqueeText_C::ResetText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MarqueeText_C", "ResetText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MarqueeText.UI_MarqueeText_C.MarqueeIteration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_MarqueeText_C::MarqueeIteration()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MarqueeText_C", "MarqueeIteration");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MarqueeText.UI_MarqueeText_C.GetMainButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UButton*                          DetectionButton_0                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MarqueeText_C::GetMainButton(class UButton** DetectionButton_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MarqueeText_C", "GetMainButton");

	Params::UI_MarqueeText_C_GetMainButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DetectionButton_0 != nullptr)
		*DetectionButton_0 = Parms.DetectionButton_0;
}

}

