#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SQDeployableSettings

#include "Basic.hpp"

#include "SQDeployableVersion_structs.hpp"
#include "Squad_classes.hpp"
#include "ESQDeployableTag_structs.hpp"
#include "ESQDeployable_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SQDeployableSettings.BP_SQDeployableSettings_C
// 0x0068 (0x00D0 - 0x0068)
class UBP_SQDeployableSettings_C final : public USQDeployableSettings
{
public:
	TArray<struct FSQDeployableVersion>           DeployableVersions;                                // 0x0068(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	ESQDeployable                                 Type;                                              // 0x0078(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<ESQDeployableTag>                        Tags;                                              // 0x0080(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void HasTag(ESQDeployableTag In_Tag, bool* Out_Has_Tag);
	void HasTags(TArray<ESQDeployableTag>& In_Tags, bool In_All, bool* Out_Has_Tag);
	void IsConcernedByStrategy(const struct FSQDeployableGroupingStrategy& InGroupingStrategy, bool* IsConcernedByStrategy_0);

	void GetDeployableEntry(bool* Success, struct FSQDeployableEntry* DeployableEntry) const;
	bool TryGetDeployableWithLayer(const class USQLayer* InLayer, TSoftClassPtr<class UClass>* OutDeployable) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SQDeployableSettings_C">();
	}
	static class UBP_SQDeployableSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SQDeployableSettings_C>();
	}
};
static_assert(alignof(UBP_SQDeployableSettings_C) == 0x000008, "Wrong alignment on UBP_SQDeployableSettings_C");
static_assert(sizeof(UBP_SQDeployableSettings_C) == 0x0000D0, "Wrong size on UBP_SQDeployableSettings_C");
static_assert(offsetof(UBP_SQDeployableSettings_C, DeployableVersions) == 0x000068, "Member 'UBP_SQDeployableSettings_C::DeployableVersions' has a wrong offset!");
static_assert(offsetof(UBP_SQDeployableSettings_C, Type) == 0x000078, "Member 'UBP_SQDeployableSettings_C::Type' has a wrong offset!");
static_assert(offsetof(UBP_SQDeployableSettings_C, Tags) == 0x000080, "Member 'UBP_SQDeployableSettings_C::Tags' has a wrong offset!");

}

