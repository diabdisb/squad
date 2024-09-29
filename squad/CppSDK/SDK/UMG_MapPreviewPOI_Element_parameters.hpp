#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_MapPreviewPOI_Element

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UMG_MapPreviewPOI_Element.UMG_MapPreviewPOI_Element_C.PoiHovered__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UMG_MapPreviewPOI_Element_C_PoiHovered__DelegateSignature final
{
public:
	class UUMG_MapPreviewPOI_Element_C*           POI;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Hovered;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MapPreviewPOI_Element_C_PoiHovered__DelegateSignature) == 0x000008, "Wrong alignment on UMG_MapPreviewPOI_Element_C_PoiHovered__DelegateSignature");
static_assert(sizeof(UMG_MapPreviewPOI_Element_C_PoiHovered__DelegateSignature) == 0x000010, "Wrong size on UMG_MapPreviewPOI_Element_C_PoiHovered__DelegateSignature");
static_assert(offsetof(UMG_MapPreviewPOI_Element_C_PoiHovered__DelegateSignature, POI) == 0x000000, "Member 'UMG_MapPreviewPOI_Element_C_PoiHovered__DelegateSignature::POI' has a wrong offset!");
static_assert(offsetof(UMG_MapPreviewPOI_Element_C_PoiHovered__DelegateSignature, Hovered) == 0x000008, "Member 'UMG_MapPreviewPOI_Element_C_PoiHovered__DelegateSignature::Hovered' has a wrong offset!");

// Function UMG_MapPreviewPOI_Element.UMG_MapPreviewPOI_Element_C.ExecuteUbergraph_UMG_MapPreviewPOI_Element
// 0x0004 (0x0004 - 0x0000)
struct UMG_MapPreviewPOI_Element_C_ExecuteUbergraph_UMG_MapPreviewPOI_Element final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MapPreviewPOI_Element_C_ExecuteUbergraph_UMG_MapPreviewPOI_Element) == 0x000004, "Wrong alignment on UMG_MapPreviewPOI_Element_C_ExecuteUbergraph_UMG_MapPreviewPOI_Element");
static_assert(sizeof(UMG_MapPreviewPOI_Element_C_ExecuteUbergraph_UMG_MapPreviewPOI_Element) == 0x000004, "Wrong size on UMG_MapPreviewPOI_Element_C_ExecuteUbergraph_UMG_MapPreviewPOI_Element");
static_assert(offsetof(UMG_MapPreviewPOI_Element_C_ExecuteUbergraph_UMG_MapPreviewPOI_Element, EntryPoint) == 0x000000, "Member 'UMG_MapPreviewPOI_Element_C_ExecuteUbergraph_UMG_MapPreviewPOI_Element::EntryPoint' has a wrong offset!");

// Function UMG_MapPreviewPOI_Element.UMG_MapPreviewPOI_Element_C.FillTexture
// 0x0108 (0x0108 - 0x0000)
struct UMG_MapPreviewPOI_Element_C_FillTexture final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DisplayIndex;                                      // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   DisplayName;                                       // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateFontInfo                         FontCopy;                                          // 0x0038(0x0058)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0098(0x0018)()
	struct FFontOutlineSettings                   K2Node_MakeStruct_FontOutlineSettings;             // 0x00B0(0x0020)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00D8(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x00F0(0x0018)()
};
static_assert(alignof(UMG_MapPreviewPOI_Element_C_FillTexture) == 0x000008, "Wrong alignment on UMG_MapPreviewPOI_Element_C_FillTexture");
static_assert(sizeof(UMG_MapPreviewPOI_Element_C_FillTexture) == 0x000108, "Wrong size on UMG_MapPreviewPOI_Element_C_FillTexture");
static_assert(offsetof(UMG_MapPreviewPOI_Element_C_FillTexture, Texture) == 0x000000, "Member 'UMG_MapPreviewPOI_Element_C_FillTexture::Texture' has a wrong offset!");
static_assert(offsetof(UMG_MapPreviewPOI_Element_C_FillTexture, Color) == 0x000008, "Member 'UMG_MapPreviewPOI_Element_C_FillTexture::Color' has a wrong offset!");
static_assert(offsetof(UMG_MapPreviewPOI_Element_C_FillTexture, DisplayIndex) == 0x000018, "Member 'UMG_MapPreviewPOI_Element_C_FillTexture::DisplayIndex' has a wrong offset!");
static_assert(offsetof(UMG_MapPreviewPOI_Element_C_FillTexture, DisplayName) == 0x000020, "Member 'UMG_MapPreviewPOI_Element_C_FillTexture::DisplayName' has a wrong offset!");
static_assert(offsetof(UMG_MapPreviewPOI_Element_C_FillTexture, FontCopy) == 0x000038, "Member 'UMG_MapPreviewPOI_Element_C_FillTexture::FontCopy' has a wrong offset!");
static_assert(offsetof(UMG_MapPreviewPOI_Element_C_FillTexture, Temp_bool_Variable) == 0x000090, "Member 'UMG_MapPreviewPOI_Element_C_FillTexture::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MapPreviewPOI_Element_C_FillTexture, Temp_text_Variable) == 0x000098, "Member 'UMG_MapPreviewPOI_Element_C_FillTexture::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MapPreviewPOI_Element_C_FillTexture, K2Node_MakeStruct_FontOutlineSettings) == 0x0000B0, "Member 'UMG_MapPreviewPOI_Element_C_FillTexture::K2Node_MakeStruct_FontOutlineSettings' has a wrong offset!");
static_assert(offsetof(UMG_MapPreviewPOI_Element_C_FillTexture, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000D0, "Member 'UMG_MapPreviewPOI_Element_C_FillTexture::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MapPreviewPOI_Element_C_FillTexture, CallFunc_Conv_IntToText_ReturnValue) == 0x0000D8, "Member 'UMG_MapPreviewPOI_Element_C_FillTexture::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MapPreviewPOI_Element_C_FillTexture, K2Node_Select_Default) == 0x0000F0, "Member 'UMG_MapPreviewPOI_Element_C_FillTexture::K2Node_Select_Default' has a wrong offset!");

// Function UMG_MapPreviewPOI_Element.UMG_MapPreviewPOI_Element_C.SetPosition
// 0x0010 (0x0010 - 0x0000)
struct UMG_MapPreviewPOI_Element_C_SetPosition final
{
public:
	struct FVector2D                              Pos;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MapPreviewPOI_Element_C_SetPosition) == 0x000008, "Wrong alignment on UMG_MapPreviewPOI_Element_C_SetPosition");
static_assert(sizeof(UMG_MapPreviewPOI_Element_C_SetPosition) == 0x000010, "Wrong size on UMG_MapPreviewPOI_Element_C_SetPosition");
static_assert(offsetof(UMG_MapPreviewPOI_Element_C_SetPosition, Pos) == 0x000000, "Member 'UMG_MapPreviewPOI_Element_C_SetPosition::Pos' has a wrong offset!");
static_assert(offsetof(UMG_MapPreviewPOI_Element_C_SetPosition, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'UMG_MapPreviewPOI_Element_C_SetPosition::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function UMG_MapPreviewPOI_Element.UMG_MapPreviewPOI_Element_C.ChangeDisplayMode
// 0x0008 (0x0008 - 0x0000)
struct UMG_MapPreviewPOI_Element_C_ChangeDisplayMode final
{
public:
	int32                                         NewMode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NewSize;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MapPreviewPOI_Element_C_ChangeDisplayMode) == 0x000004, "Wrong alignment on UMG_MapPreviewPOI_Element_C_ChangeDisplayMode");
static_assert(sizeof(UMG_MapPreviewPOI_Element_C_ChangeDisplayMode) == 0x000008, "Wrong size on UMG_MapPreviewPOI_Element_C_ChangeDisplayMode");
static_assert(offsetof(UMG_MapPreviewPOI_Element_C_ChangeDisplayMode, NewMode) == 0x000000, "Member 'UMG_MapPreviewPOI_Element_C_ChangeDisplayMode::NewMode' has a wrong offset!");
static_assert(offsetof(UMG_MapPreviewPOI_Element_C_ChangeDisplayMode, NewSize) == 0x000004, "Member 'UMG_MapPreviewPOI_Element_C_ChangeDisplayMode::NewSize' has a wrong offset!");

}

