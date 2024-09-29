#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModdingRuntime

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct ModdingRuntime.ModdingRuntimeModInfoDetails
// 0x00A0 (0x00A0 - 0x0000)
struct FModdingRuntimeModInfoDetails final
{
public:
	class FString                                 SteamWorkshopURL;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ModName;                                           // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Description;                                       // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ImageUrl;                                          // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Rating;                                            // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DayTimeCreated;                                    // 0x0048(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DayTimeUpdated;                                    // 0x0058(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 NumSubscriptions;                                  // 0x0068(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 NumUniqueVisitors;                                 // 0x0078(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 NumFavorites;                                      // 0x0088(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         UpVotes;                                           // 0x0098(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DownVotes;                                         // 0x009C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FModdingRuntimeModInfoDetails) == 0x000008, "Wrong alignment on FModdingRuntimeModInfoDetails");
static_assert(sizeof(FModdingRuntimeModInfoDetails) == 0x0000A0, "Wrong size on FModdingRuntimeModInfoDetails");
static_assert(offsetof(FModdingRuntimeModInfoDetails, SteamWorkshopURL) == 0x000000, "Member 'FModdingRuntimeModInfoDetails::SteamWorkshopURL' has a wrong offset!");
static_assert(offsetof(FModdingRuntimeModInfoDetails, ModName) == 0x000010, "Member 'FModdingRuntimeModInfoDetails::ModName' has a wrong offset!");
static_assert(offsetof(FModdingRuntimeModInfoDetails, Description) == 0x000020, "Member 'FModdingRuntimeModInfoDetails::Description' has a wrong offset!");
static_assert(offsetof(FModdingRuntimeModInfoDetails, ImageUrl) == 0x000030, "Member 'FModdingRuntimeModInfoDetails::ImageUrl' has a wrong offset!");
static_assert(offsetof(FModdingRuntimeModInfoDetails, Rating) == 0x000040, "Member 'FModdingRuntimeModInfoDetails::Rating' has a wrong offset!");
static_assert(offsetof(FModdingRuntimeModInfoDetails, DayTimeCreated) == 0x000048, "Member 'FModdingRuntimeModInfoDetails::DayTimeCreated' has a wrong offset!");
static_assert(offsetof(FModdingRuntimeModInfoDetails, DayTimeUpdated) == 0x000058, "Member 'FModdingRuntimeModInfoDetails::DayTimeUpdated' has a wrong offset!");
static_assert(offsetof(FModdingRuntimeModInfoDetails, NumSubscriptions) == 0x000068, "Member 'FModdingRuntimeModInfoDetails::NumSubscriptions' has a wrong offset!");
static_assert(offsetof(FModdingRuntimeModInfoDetails, NumUniqueVisitors) == 0x000078, "Member 'FModdingRuntimeModInfoDetails::NumUniqueVisitors' has a wrong offset!");
static_assert(offsetof(FModdingRuntimeModInfoDetails, NumFavorites) == 0x000088, "Member 'FModdingRuntimeModInfoDetails::NumFavorites' has a wrong offset!");
static_assert(offsetof(FModdingRuntimeModInfoDetails, UpVotes) == 0x000098, "Member 'FModdingRuntimeModInfoDetails::UpVotes' has a wrong offset!");
static_assert(offsetof(FModdingRuntimeModInfoDetails, DownVotes) == 0x00009C, "Member 'FModdingRuntimeModInfoDetails::DownVotes' has a wrong offset!");

// ScriptStruct ModdingRuntime.SQModInfo
// 0x0050 (0x0050 - 0x0000)
struct FSQModInfo final
{
public:
	uint64                                        ID;                                                // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Name;                                              // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Description;                                       // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ImageUrl;                                          // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ClientMD5;                                         // 0x0038(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsWhitelisted;                                    // 0x0048(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsLoaded;                                         // 0x0049(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsSteamPublished;                                 // 0x004A(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHasBeenFilled;                                    // 0x004B(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSQModInfo) == 0x000008, "Wrong alignment on FSQModInfo");
static_assert(sizeof(FSQModInfo) == 0x000050, "Wrong size on FSQModInfo");
static_assert(offsetof(FSQModInfo, ID) == 0x000000, "Member 'FSQModInfo::ID' has a wrong offset!");
static_assert(offsetof(FSQModInfo, Name) == 0x000008, "Member 'FSQModInfo::Name' has a wrong offset!");
static_assert(offsetof(FSQModInfo, Description) == 0x000018, "Member 'FSQModInfo::Description' has a wrong offset!");
static_assert(offsetof(FSQModInfo, ImageUrl) == 0x000028, "Member 'FSQModInfo::ImageUrl' has a wrong offset!");
static_assert(offsetof(FSQModInfo, ClientMD5) == 0x000038, "Member 'FSQModInfo::ClientMD5' has a wrong offset!");
static_assert(offsetof(FSQModInfo, bIsWhitelisted) == 0x000048, "Member 'FSQModInfo::bIsWhitelisted' has a wrong offset!");
static_assert(offsetof(FSQModInfo, bIsLoaded) == 0x000049, "Member 'FSQModInfo::bIsLoaded' has a wrong offset!");
static_assert(offsetof(FSQModInfo, bIsSteamPublished) == 0x00004A, "Member 'FSQModInfo::bIsSteamPublished' has a wrong offset!");
static_assert(offsetof(FSQModInfo, bHasBeenFilled) == 0x00004B, "Member 'FSQModInfo::bHasBeenFilled' has a wrong offset!");

// ScriptStruct ModdingRuntime.SQModInfoRequest
// 0x0018 (0x0018 - 0x0000)
struct FSQModInfoRequest final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSQModInfo>                     RequestedModInfoArray;                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSQModInfoRequest) == 0x000008, "Wrong alignment on FSQModInfoRequest");
static_assert(sizeof(FSQModInfoRequest) == 0x000018, "Wrong size on FSQModInfoRequest");
static_assert(offsetof(FSQModInfoRequest, RequestedModInfoArray) == 0x000008, "Member 'FSQModInfoRequest::RequestedModInfoArray' has a wrong offset!");

// ScriptStruct ModdingRuntime.SQModLoadProgress
// 0x0020 (0x0020 - 0x0000)
struct FSQModLoadProgress final
{
public:
	uint64                                        ID;                                                // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ServerMD5;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Progress;                                          // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFinishedLoading;                                  // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLoadedSuccessfully;                               // 0x001D(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAborted;                                          // 0x001E(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1F[0x1];                                       // 0x001F(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSQModLoadProgress) == 0x000008, "Wrong alignment on FSQModLoadProgress");
static_assert(sizeof(FSQModLoadProgress) == 0x000020, "Wrong size on FSQModLoadProgress");
static_assert(offsetof(FSQModLoadProgress, ID) == 0x000000, "Member 'FSQModLoadProgress::ID' has a wrong offset!");
static_assert(offsetof(FSQModLoadProgress, ServerMD5) == 0x000008, "Member 'FSQModLoadProgress::ServerMD5' has a wrong offset!");
static_assert(offsetof(FSQModLoadProgress, Progress) == 0x000018, "Member 'FSQModLoadProgress::Progress' has a wrong offset!");
static_assert(offsetof(FSQModLoadProgress, bFinishedLoading) == 0x00001C, "Member 'FSQModLoadProgress::bFinishedLoading' has a wrong offset!");
static_assert(offsetof(FSQModLoadProgress, bLoadedSuccessfully) == 0x00001D, "Member 'FSQModLoadProgress::bLoadedSuccessfully' has a wrong offset!");
static_assert(offsetof(FSQModLoadProgress, bAborted) == 0x00001E, "Member 'FSQModLoadProgress::bAborted' has a wrong offset!");

}

