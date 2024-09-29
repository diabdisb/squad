#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SquadCallout

#include "Basic.hpp"

#include "W_SquadCallout_classes.hpp"
#include "W_SquadCallout_parameters.hpp"


namespace SDK
{

// Function W_SquadCallout.W_SquadCallout_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             TopText_0                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// TSoftObjectPtr<class UTexture2D>        ImageRef                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                             BottomText_0                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InTooltip                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InAdditionalText                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_SquadCallout_C::Setup(const class FText& TopText_0, TSoftObjectPtr<class UTexture2D> ImageRef, const class FText& BottomText_0, const class FText& InTooltip, const class FText& InAdditionalText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SquadCallout_C", "Setup");

	Params::W_SquadCallout_C_Setup Parms{};

	Parms.TopText_0 = std::move(TopText_0);
	Parms.ImageRef = ImageRef;
	Parms.BottomText_0 = std::move(BottomText_0);
	Parms.InTooltip = std::move(InTooltip);
	Parms.InAdditionalText = std::move(InAdditionalText);

	UObject::ProcessEvent(Func, &Parms);
}

}

