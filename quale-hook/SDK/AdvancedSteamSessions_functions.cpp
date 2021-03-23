// Name: ANUSGAME, Version: 4.18

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.RequestSteamFriendInfo
// (Final)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, NativeAccessSpecifierPublic)
// bool                           bRequireNameOnly               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedSteamFriendsLibrary::RequestSteamFriendInfo(const struct FBPUniqueNetId& UniqueNetId, bool bRequireNameOnly)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28837);

	UAdvancedSteamFriendsLibrary_RequestSteamFriendInfo_Params params;
	params.UniqueNetId = UniqueNetId;
	params.bRequireNameOnly = bRequireNameOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.IsDlcInstalled
// (BlueprintAuthorityOnly)
// Parameters:
// int                            DlcId                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedSteamFriendsLibrary::IsDlcInstalled(int DlcId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28834);

	UAdvancedSteamFriendsLibrary_IsDlcInstalled_Params params;
	params.DlcId = DlcId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamPersonaName
// ()
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAdvancedSteamFriendsLibrary::GetSteamPersonaName(const struct FBPUniqueNetId& UniqueNetId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28831);

	UAdvancedSteamFriendsLibrary_GetSteamPersonaName_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamGroups
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FBPSteamGroupInfo> SteamGroups                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAdvancedSteamFriendsLibrary::STATIC_GetSteamGroups(TArray<struct FBPSteamGroupInfo>* SteamGroups)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28828);

	UAdvancedSteamFriendsLibrary_GetSteamGroups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamGroups != nullptr)
		*SteamGroups = params.SteamGroups;

}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendGamePlayed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 GameName                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSteamFriendsLibrary::STATIC_GetSteamFriendGamePlayed(const struct FBPUniqueNetId& UniqueNetId, AdvancedSessions_EBlueprintResultSwitch* Result, struct FString* GameName, int* AppID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28822);

	UAdvancedSteamFriendsLibrary_GetSteamFriendGamePlayed_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (GameName != nullptr)
		*GameName = params.GameName;
	if (AppID != nullptr)
		*AppID = params.AppID;

}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendAvatar
// (BlueprintCosmetic)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintAsyncResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSteamSessions_ESteamAvatarSize AvatarSize                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UAdvancedSteamFriendsLibrary::GetSteamFriendAvatar(const struct FBPUniqueNetId& UniqueNetId, AdvancedSessions_EBlueprintAsyncResultSwitch* Result, AdvancedSteamSessions_ESteamAvatarSize AvatarSize)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28815);

	UAdvancedSteamFriendsLibrary_GetSteamFriendAvatar_Params params;
	params.UniqueNetId = UniqueNetId;
	params.AvatarSize = AvatarSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;


	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetFriendSteamLevel
// ()
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAdvancedSteamFriendsLibrary::GetFriendSteamLevel(const struct FBPUniqueNetId& UniqueNetId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28812);

	UAdvancedSteamFriendsLibrary_GetFriendSteamLevel_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.CreateSteamIDFromString
// ()
// Parameters:
// struct FString                 SteamID64                      (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBPUniqueNetId UAdvancedSteamFriendsLibrary::CreateSteamIDFromString(const struct FString& SteamID64)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28809);

	UAdvancedSteamFriendsLibrary_CreateSteamIDFromString_Params params;
	params.SteamID64 = SteamID64;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.BPGetAppOwner
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedSteamFriendsLibrary::BPGetAppOwner()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28807);

	UAdvancedSteamFriendsLibrary_BPGetAppOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetSubscribedWorkshopItems
// (BlueprintCosmetic)
// Parameters:
// int                            NumberOfItems                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FBPSteamWorkshopID> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FBPSteamWorkshopID> UAdvancedSteamWorkshopLibrary::GetSubscribedWorkshopItems(int* NumberOfItems)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28843);

	UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumberOfItems != nullptr)
		*NumberOfItems = params.NumberOfItems;


	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetNumSubscribedWorkshopItems
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            NumberOfItems                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSteamWorkshopLibrary::STATIC_GetNumSubscribedWorkshopItems(int* NumberOfItems)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28841);

	UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumberOfItems != nullptr)
		*NumberOfItems = params.NumberOfItems;

}


// Function AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy.GetSteamGroupOfficerList
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          GroupUniqueNetID               (Parm, NativeAccessSpecifierPublic)
// class USteamRequestGroupOfficersCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamRequestGroupOfficersCallbackProxy* USteamRequestGroupOfficersCallbackProxy::GetSteamGroupOfficerList(class UObject* WorldContextObject, const struct FBPUniqueNetId& GroupUniqueNetID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28847);

	USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GroupUniqueNetID = GroupUniqueNetID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy.GetWorkshopItemDetails
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPSteamWorkshopID      WorkShopID                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class USteamWSRequestUGCDetailsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamWSRequestUGCDetailsCallbackProxy* USteamWSRequestUGCDetailsCallbackProxy::GetWorkshopItemDetails(class UObject* WorldContextObject, const struct FBPSteamWorkshopID& WorkShopID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28853);

	USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WorkShopID = WorkShopID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
