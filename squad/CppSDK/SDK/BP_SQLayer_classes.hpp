#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SQLayer

#include "Basic.hpp"

#include "ESQLayerSpecialTag_structs.hpp"
#include "Engine_structs.hpp"
#include "SQVehicleCountModifier_structs.hpp"
#include "ESQLayerSize_structs.hpp"
#include "ESQVehicleTag_structs.hpp"
#include "Squad_classes.hpp"
#include "SQEAlliance_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SQLayer.BP_SQLayer_C
// 0x0048 (0x0260 - 0x0218)
class UBP_SQLayer_C final : public USQLayer
{
public:
	struct FDataTableRowHandle                    GameMode;                                          // 0x0218(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<struct FSQVehicleCountModifier>        Vehicle_Count_Modifiers;                           // 0x0228(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly)
	struct FDataTableRowHandle                    FobRadius;                                         // 0x0238(0x0010)(Edit, BlueprintVisible, NoDestructor)
	TArray<ESQLayerSpecialTag>                    SpecialTags;                                       // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESQLayerSize                                  MapSize;                                           // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetOuterLevel(bool* Out_Success, class UBP_SQLevel_C** OuterLevel_0);
	void GetGameModeVersion(class FText* GMVer);

	void TryGetLevelEntry(bool* Success, struct FSQLevelEntry* LevelEntry) const;
	void TryGetLayerEntry(bool* Success, struct FSQLayerEntry* LayerEntry) const;
	void TryGetGameModeEntry(bool* Success, struct FSQGameModeEntry* GameModeEntry) const;
	bool TryGetDisplayName(class FText* OutDisplayName) const;
	bool TryGetAvailabilityModifierPct(const int32 InTeam, const class USQAvailability* InAvailability, int32* OutModifier) const;
	bool TryGetLayerStagingDuration(struct FTimespan* OutDuration) const;
	bool CanVoteForFactionConcurrently() const;
	const struct FDataTableRowHandle GetFobRadiusTableRow() const;
	bool TryGetGameModeName(class FText* OutGameMode) const;
	bool TryGetGameModeShortName(class FText* OutGameMode) const;
	class FName GetGameModeID() const;
	class FName GetLayerSize() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SQLayer_C">();
	}
	static class UBP_SQLayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SQLayer_C>();
	}
};
static_assert(alignof(UBP_SQLayer_C) == 0x000008, "Wrong alignment on UBP_SQLayer_C");
static_assert(sizeof(UBP_SQLayer_C) == 0x000260, "Wrong size on UBP_SQLayer_C");
static_assert(offsetof(UBP_SQLayer_C, GameMode) == 0x000218, "Member 'UBP_SQLayer_C::GameMode' has a wrong offset!");
static_assert(offsetof(UBP_SQLayer_C, Vehicle_Count_Modifiers) == 0x000228, "Member 'UBP_SQLayer_C::Vehicle_Count_Modifiers' has a wrong offset!");
static_assert(offsetof(UBP_SQLayer_C, FobRadius) == 0x000238, "Member 'UBP_SQLayer_C::FobRadius' has a wrong offset!");
static_assert(offsetof(UBP_SQLayer_C, SpecialTags) == 0x000248, "Member 'UBP_SQLayer_C::SpecialTags' has a wrong offset!");
static_assert(offsetof(UBP_SQLayer_C, MapSize) == 0x000258, "Member 'UBP_SQLayer_C::MapSize' has a wrong offset!");

}

