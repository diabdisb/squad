#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DiscordRpc

#include "Basic.hpp"


namespace SDK::Params
{

// Function DiscordRpc.DiscordRpc.Initialize
// 0x0028 (0x0028 - 0x0000)
struct DiscordRpc_Initialize final
{
public:
	class FString                                 ApplicationId;                                     // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AutoRegister;                                      // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OptionalSteamId;                                   // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DiscordRpc_Initialize) == 0x000008, "Wrong alignment on DiscordRpc_Initialize");
static_assert(sizeof(DiscordRpc_Initialize) == 0x000028, "Wrong size on DiscordRpc_Initialize");
static_assert(offsetof(DiscordRpc_Initialize, ApplicationId) == 0x000000, "Member 'DiscordRpc_Initialize::ApplicationId' has a wrong offset!");
static_assert(offsetof(DiscordRpc_Initialize, AutoRegister) == 0x000010, "Member 'DiscordRpc_Initialize::AutoRegister' has a wrong offset!");
static_assert(offsetof(DiscordRpc_Initialize, OptionalSteamId) == 0x000018, "Member 'DiscordRpc_Initialize::OptionalSteamId' has a wrong offset!");

// Function DiscordRpc.DiscordRpc.Respond
// 0x0018 (0x0018 - 0x0000)
struct DiscordRpc_Respond final
{
public:
	class FString                                 UserId;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Reply;                                             // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(DiscordRpc_Respond) == 0x000008, "Wrong alignment on DiscordRpc_Respond");
static_assert(sizeof(DiscordRpc_Respond) == 0x000018, "Wrong size on DiscordRpc_Respond");
static_assert(offsetof(DiscordRpc_Respond, UserId) == 0x000000, "Member 'DiscordRpc_Respond::UserId' has a wrong offset!");
static_assert(offsetof(DiscordRpc_Respond, Reply) == 0x000010, "Member 'DiscordRpc_Respond::Reply' has a wrong offset!");

}

