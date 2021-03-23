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

// Function AdvancedSessions.AdvancedExternalUILibrary.ShowWebURLUI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 URLToShow                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         AllowedDomains                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bEmbedded                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShowBackground                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShowCloseButton               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OffsetX                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OffsetY                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeY                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedExternalUILibrary::STATIC_ShowWebURLUI(const struct FString& URLToShow, AdvancedSessions_EBlueprintResultSwitch* Result, TArray<struct FString>* AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int OffsetX, int OffsetY, int SizeX, int SizeY)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28366);

	UAdvancedExternalUILibrary_ShowWebURLUI_Params params;
	params.URLToShow = URLToShow;
	params.bEmbedded = bEmbedded;
	params.bShowBackground = bShowBackground;
	params.bShowCloseButton = bShowCloseButton;
	params.OffsetX = OffsetX;
	params.OffsetY = OffsetY;
	params.SizeX = SizeX;
	params.SizeY = SizeY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (AllowedDomains != nullptr)
		*AllowedDomains = params.AllowedDomains;

}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowProfileUI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUniqueNetId          PlayerViewingProfile           (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          PlayerToViewProfileOf          (ConstParm, Parm, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedExternalUILibrary::STATIC_ShowProfileUI(const struct FBPUniqueNetId& PlayerViewingProfile, const struct FBPUniqueNetId& PlayerToViewProfileOf, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28361);

	UAdvancedExternalUILibrary_ShowProfileUI_Params params;
	params.PlayerViewingProfile = PlayerViewingProfile;
	params.PlayerToViewProfileOf = PlayerToViewProfileOf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowLeaderBoardUI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 LeaderboardName                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedExternalUILibrary::STATIC_ShowLeaderBoardUI(const struct FString& LeaderboardName, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28357);

	UAdvancedExternalUILibrary_ShowLeaderBoardUI_Params params;
	params.LeaderboardName = LeaderboardName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowInviteUI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedExternalUILibrary::STATIC_ShowInviteUI(class APlayerController* PlayerController, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28353);

	UAdvancedExternalUILibrary_ShowInviteUI_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowFriendsUI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedExternalUILibrary::STATIC_ShowFriendsUI(class APlayerController* PlayerController, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28349);

	UAdvancedExternalUILibrary_ShowFriendsUI_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowAccountUpgradeUI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUniqueNetId          PlayerRequestingAccountUpgradeUI (ConstParm, Parm, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedExternalUILibrary::STATIC_ShowAccountUpgradeUI(const struct FBPUniqueNetId& PlayerRequestingAccountUpgradeUI, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28345);

	UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Params params;
	params.PlayerRequestingAccountUpgradeUI = PlayerRequestingAccountUpgradeUI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedExternalUILibrary.CloseWebURLUI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UAdvancedExternalUILibrary::STATIC_CloseWebURLUI()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28344);

	UAdvancedExternalUILibrary_CloseWebURLUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteReceived
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          PersonInviting                 (Parm, NativeAccessSpecifierPublic)
// struct FString                 AppID                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SessionToJoin                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAdvancedFriendsGameInstance::STATIC_OnSessionInviteReceived(int LocalPlayerNum, const struct FBPUniqueNetId& PersonInviting, const struct FString& AppID, const struct FBlueprintSessionResult& SessionToJoin)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28395);

	UAdvancedFriendsGameInstance_OnSessionInviteReceived_Params params;
	params.LocalPlayerNum = LocalPlayerNum;
	params.PersonInviting = PersonInviting;
	params.AppID = AppID;
	params.SessionToJoin = SessionToJoin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteAccepted
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          PersonInvited                  (Parm, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SessionToJoin                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAdvancedFriendsGameInstance::STATIC_OnSessionInviteAccepted(int LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SessionToJoin)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28391);

	UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Params params;
	params.LocalPlayerNum = LocalPlayerNum;
	params.PersonInvited = PersonInvited;
	params.SessionToJoin = SessionToJoin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerTalkingStateChanged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUniqueNetId          PlayerId                       (Parm, NativeAccessSpecifierPublic)
// bool                           bIsTalking                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedFriendsGameInstance::STATIC_OnPlayerTalkingStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28388);

	UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Params params;
	params.PlayerId = PlayerId;
	params.bIsTalking = bIsTalking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginStatusChanged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            PlayerNum                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBPLoginStatus PreviousStatus                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBPLoginStatus NewStatus                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          NewPlayerUniqueNetID           (Parm, NativeAccessSpecifierPublic)
void UAdvancedFriendsGameInstance::STATIC_OnPlayerLoginStatusChanged(int PlayerNum, AdvancedSessions_EBPLoginStatus PreviousStatus, AdvancedSessions_EBPLoginStatus NewStatus, const struct FBPUniqueNetId& NewPlayerUniqueNetID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28381);

	UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Params params;
	params.PlayerNum = PlayerNum;
	params.PreviousStatus = PreviousStatus;
	params.NewStatus = NewStatus;
	params.NewPlayerUniqueNetID = NewPlayerUniqueNetID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginChanged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            PlayerNum                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedFriendsGameInstance::STATIC_OnPlayerLoginChanged(int PlayerNum)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28379);

	UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Params params;
	params.PlayerNum = PlayerNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteReceived
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUniqueNetId          PersonInviting                 (Parm, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAdvancedFriendsInterface::STATIC_OnSessionInviteReceived(const struct FBPUniqueNetId& PersonInviting, const struct FBlueprintSessionResult& SearchResult)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28418);

	UAdvancedFriendsInterface_OnSessionInviteReceived_Params params;
	params.PersonInviting = PersonInviting;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteAccepted
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUniqueNetId          PersonInvited                  (Parm, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAdvancedFriendsInterface::STATIC_OnSessionInviteAccepted(const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SearchResult)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28415);

	UAdvancedFriendsInterface_OnSessionInviteAccepted_Params params;
	params.PersonInvited = PersonInvited;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerVoiceStateChanged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUniqueNetId          PlayerId                       (Parm, NativeAccessSpecifierPublic)
// bool                           bIsTalking                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedFriendsInterface::STATIC_OnPlayerVoiceStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28412);

	UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Params params;
	params.PlayerId = PlayerId;
	params.bIsTalking = bIsTalking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginStatusChanged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// AdvancedSessions_EBPLoginStatus PreviousStatus                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBPLoginStatus NewStatus                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          PlayerUniqueNetID              (Parm, NativeAccessSpecifierPublic)
void UAdvancedFriendsInterface::STATIC_OnPlayerLoginStatusChanged(AdvancedSessions_EBPLoginStatus PreviousStatus, AdvancedSessions_EBPLoginStatus NewStatus, const struct FBPUniqueNetId& PlayerUniqueNetID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28406);

	UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Params params;
	params.PreviousStatus = PreviousStatus;
	params.NewStatus = NewStatus;
	params.PlayerUniqueNetID = PlayerUniqueNetID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginChanged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            PlayerNum                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedFriendsInterface::STATIC_OnPlayerLoginChanged(int PlayerNum)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28404);

	UAdvancedFriendsInterface_OnPlayerLoginChanged_Params params;
	params.PlayerNum = PlayerNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriends
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FBPUniqueNetId>  Friends                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedFriendsLibrary::STATIC_SendSessionInviteToFriends(class APlayerController* PlayerController, TArray<struct FBPUniqueNetId> Friends, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28442);

	UAdvancedFriendsLibrary_SendSessionInviteToFriends_Params params;
	params.PlayerController = PlayerController;
	params.Friends = Friends;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriend
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          FriendUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedFriendsLibrary::STATIC_SendSessionInviteToFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28437);

	UAdvancedFriendsLibrary_SendSessionInviteToFriend_Params params;
	params.PlayerController = PlayerController;
	params.FriendUniqueNetId = FriendUniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedFriendsLibrary.IsAFriend
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, NativeAccessSpecifierPublic)
// bool                           IsFriend                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedFriendsLibrary::STATIC_IsAFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetId, bool* IsFriend)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28433);

	UAdvancedFriendsLibrary_IsAFriend_Params params;
	params.PlayerController = PlayerController;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsFriend != nullptr)
		*IsFriend = params.IsFriend;

}


// Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredRecentPlayersList
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (Parm, NativeAccessSpecifierPublic)
// TArray<struct FBPOnlineRecentPlayer> PlayersList                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAdvancedFriendsLibrary::STATIC_GetStoredRecentPlayersList(const struct FBPUniqueNetId& UniqueNetId, TArray<struct FBPOnlineRecentPlayer>* PlayersList)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28429);

	UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayersList != nullptr)
		*PlayersList = params.PlayersList;

}


// Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredFriendsList
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FBPFriendInfo>   FriendsList                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAdvancedFriendsLibrary::STATIC_GetStoredFriendsList(class APlayerController* PlayerController, TArray<struct FBPFriendInfo>* FriendsList)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28425);

	UAdvancedFriendsLibrary_GetStoredFriendsList_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FriendsList != nullptr)
		*FriendsList = params.FriendsList;

}


// Function AdvancedSessions.AdvancedFriendsLibrary.GetFriend
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          FriendUniqueNetId              (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FBPFriendInfo           Friend                         (Parm, OutParm, NativeAccessSpecifierPublic)
void UAdvancedFriendsLibrary::STATIC_GetFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, struct FBPFriendInfo* Friend)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28421);

	UAdvancedFriendsLibrary_GetFriend_Params params;
	params.PlayerController = PlayerController;
	params.FriendUniqueNetId = FriendUniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Friend != nullptr)
		*Friend = params.Friend;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.SetUserAccountAttribute
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUserOnlineAccount    AccountInfo                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 AttributeName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 NewAttributeValue              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_SetUserAccountAttribute(const struct FBPUserOnlineAccount& AccountInfo, const struct FString& AttributeName, const struct FString& NewAttributeValue, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28496);

	UAdvancedIdentityLibrary_SetUserAccountAttribute_Params params;
	params.AccountInfo = AccountInfo;
	params.AttributeName = AttributeName;
	params.NewAttributeValue = NewAttributeValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserID
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUserOnlineAccount    AccountInfo                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (Parm, OutParm, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetUserID(const struct FBPUserOnlineAccount& AccountInfo, struct FBPUniqueNetId* UniqueNetId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28493);

	UAdvancedIdentityLibrary_GetUserID_Params params;
	params.AccountInfo = AccountInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UniqueNetId != nullptr)
		*UniqueNetId = params.UniqueNetId;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountRealName
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUserOnlineAccount    AccountInfo                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 UserName                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetUserAccountRealName(const struct FBPUserOnlineAccount& AccountInfo, struct FString* UserName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28490);

	UAdvancedIdentityLibrary_GetUserAccountRealName_Params params;
	params.AccountInfo = AccountInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UserName != nullptr)
		*UserName = params.UserName;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountDisplayName
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUserOnlineAccount    AccountInfo                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 DisplayName                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetUserAccountDisplayName(const struct FBPUserOnlineAccount& AccountInfo, struct FString* DisplayName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28487);

	UAdvancedIdentityLibrary_GetUserAccountDisplayName_Params params;
	params.AccountInfo = AccountInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DisplayName != nullptr)
		*DisplayName = params.DisplayName;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAuthAttribute
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUserOnlineAccount    AccountInfo                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 AttributeName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AuthAttribute                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetUserAccountAuthAttribute(const struct FBPUserOnlineAccount& AccountInfo, const struct FString& AttributeName, struct FString* AuthAttribute, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28481);

	UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Params params;
	params.AccountInfo = AccountInfo;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AuthAttribute != nullptr)
		*AuthAttribute = params.AuthAttribute;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAttribute
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUserOnlineAccount    AccountInfo                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 AttributeName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AttributeValue                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetUserAccountAttribute(const struct FBPUserOnlineAccount& AccountInfo, const struct FString& AttributeName, struct FString* AttributeValue, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28475);

	UAdvancedIdentityLibrary_GetUserAccountAttribute_Params params;
	params.AccountInfo = AccountInfo;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AttributeValue != nullptr)
		*AttributeValue = params.AttributeValue;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAccessToken
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUserOnlineAccount    AccountInfo                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 AccessToken                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetUserAccountAccessToken(const struct FBPUserOnlineAccount& AccountInfo, struct FString* AccessToken)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28472);

	UAdvancedIdentityLibrary_GetUserAccountAccessToken_Params params;
	params.AccountInfo = AccountInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AccessToken != nullptr)
		*AccessToken = params.AccessToken;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccount
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FBPUserOnlineAccount    AccountInfo                    (Parm, OutParm, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetUserAccount(const struct FBPUniqueNetId& UniqueNetId, struct FBPUserOnlineAccount* AccountInfo, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28467);

	UAdvancedIdentityLibrary_GetUserAccount_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AccountInfo != nullptr)
		*AccountInfo = params.AccountInfo;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerNickname
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 PlayerNickname                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetPlayerNickname(const struct FBPUniqueNetId& UniqueNetId, struct FString* PlayerNickname)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28464);

	UAdvancedIdentityLibrary_GetPlayerNickname_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerNickname != nullptr)
		*PlayerNickname = params.PlayerNickname;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerAuthToken
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AuthToken                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetPlayerAuthToken(class APlayerController* PlayerController, struct FString* AuthToken, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28459);

	UAdvancedIdentityLibrary_GetPlayerAuthToken_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AuthToken != nullptr)
		*AuthToken = params.AuthToken;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetLoginStatus
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// AdvancedSessions_EBPLoginStatus LoginStatus                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetLoginStatus(const struct FBPUniqueNetId& UniqueNetId, AdvancedSessions_EBPLoginStatus* LoginStatus, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28453);

	UAdvancedIdentityLibrary_GetLoginStatus_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LoginStatus != nullptr)
		*LoginStatus = params.LoginStatus;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetAllUserAccounts
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FBPUserOnlineAccount> AccountInfos                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetAllUserAccounts(TArray<struct FBPUserOnlineAccount>* AccountInfos, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28448);

	UAdvancedIdentityLibrary_GetAllUserAccounts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AccountInfos != nullptr)
		*AccountInfos = params.AccountInfos;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.UniqueNetIdToString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_UniqueNetIdToString(const struct FBPUniqueNetId& UniqueNetId, struct FString* String)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28645);

	UAdvancedSessionsLibrary_UniqueNetIdToString_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.SetPlayerName
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PlayerName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_SetPlayerName(class APlayerController* PlayerController, const struct FString& PlayerName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28642);

	UAdvancedSessionsLibrary_SetPlayerName_Params params;
	params.PlayerController = PlayerController;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty
// (BlueprintCosmetic)
// Parameters:
// struct FSessionPropertyKeyPair SessionSearchProperty          (Parm, NativeAccessSpecifierPublic)
// AdvancedSessions_EOnlineComparisonOpRedux ComparisonOp                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionsSearchSetting  ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSessionsSearchSetting UAdvancedSessionsLibrary::MakeLiteralSessionSearchProperty(const struct FSessionPropertyKeyPair& SessionSearchProperty, AdvancedSessions_EOnlineComparisonOpRedux ComparisonOp)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28637);

	UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Params params;
	params.SessionSearchProperty = SessionSearchProperty;
	params.ComparisonOp = ComparisonOp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString
// (BlueprintCosmetic)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyString(const struct FName& Key, const struct FString& Value)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28633);

	UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt
// ()
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyInt(const struct FName& Key, int Value)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28629);

	UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat
// ()
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyFloat(const struct FName& Key, float Value)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28625);

	UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte
// ()
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyByte(const struct FName& Key, unsigned char Value)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28621);

	UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool
// ()
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyBool(const struct FName& Key, bool Value)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28617);

	UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.IsValidUniqueNetID
// ()
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedSessionsLibrary::IsValidUniqueNetID(const struct FBPUniqueNetId& UniqueNetId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28614);

	UAdvancedSessionsLibrary_IsValidUniqueNetID_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.IsValidSession
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FBlueprintSessionResult SessionResult                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedSessionsLibrary::IsValidSession(const struct FBlueprintSessionResult& SessionResult)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28611);

	UAdvancedSessionsLibrary_IsValidSession_Params params;
	params.SessionResult = SessionResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.IsPlayerInSession
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUniqueNetId          PlayerToCheck                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bIsInSession                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_IsPlayerInSession(const struct FBPUniqueNetId& PlayerToCheck, bool* bIsInSession)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28608);

	UAdvancedSessionsLibrary_IsPlayerInSession_Params params;
	params.PlayerToCheck = PlayerToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsInSession != nullptr)
		*bIsInSession = params.bIsInSession;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.HasOnlineSubsystem
// (BlueprintCosmetic)
// Parameters:
// struct FName                   SubSystemName                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedSessionsLibrary::HasOnlineSubsystem(const struct FName& SubSystemName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28605);

	UAdvancedSessionsLibrary_HasOnlineSubsystem_Params params;
	params.SubSystemName = SubSystemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (Parm, OutParm, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetUniqueNetIDFromPlayerState(class APlayerState* PlayerState, struct FBPUniqueNetId* UniqueNetId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28602);

	UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UniqueNetId != nullptr)
		*UniqueNetId = params.UniqueNetId;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetID
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (Parm, OutParm, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetUniqueNetID(class APlayerController* PlayerController, struct FBPUniqueNetId* UniqueNetId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28599);

	UAdvancedSessionsLibrary_GetUniqueNetID_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UniqueNetId != nullptr)
		*UniqueNetId = params.UniqueNetId;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueBuildID
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBlueprintSessionResult SessionResult                  (Parm, NativeAccessSpecifierPublic)
// int                            UniqueBuildId                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetUniqueBuildID(const struct FBlueprintSessionResult& SessionResult, int* UniqueBuildId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28596);

	UAdvancedSessionsLibrary_GetUniqueBuildID_Params params;
	params.SessionResult = SessionResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UniqueBuildId != nullptr)
		*UniqueBuildId = params.UniqueBuildId;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// AdvancedSessions_EBPOnlineSessionState SessionState                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionState(AdvancedSessions_EBPOnlineSessionState* SessionState)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28593);

	UAdvancedSessionsLibrary_GetSessionState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SessionState != nullptr)
		*SessionState = params.SessionState;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionSettings
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            NumConnections                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumPrivateConnections          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsLAN                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsDedicated                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowInvites                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowJoinInProgress           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsAnticheatEnabled            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BuildUniqueID                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionSettings(int* NumConnections, int* NumPrivateConnections, bool* bIsLAN, bool* bIsDedicated, bool* bAllowInvites, bool* bAllowJoinInProgress, bool* bIsAnticheatEnabled, int* BuildUniqueID, TArray<struct FSessionPropertyKeyPair>* ExtraSettings, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28580);

	UAdvancedSessionsLibrary_GetSessionSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumConnections != nullptr)
		*NumConnections = params.NumConnections;
	if (NumPrivateConnections != nullptr)
		*NumPrivateConnections = params.NumPrivateConnections;
	if (bIsLAN != nullptr)
		*bIsLAN = params.bIsLAN;
	if (bIsDedicated != nullptr)
		*bIsDedicated = params.bIsDedicated;
	if (bAllowInvites != nullptr)
		*bAllowInvites = params.bAllowInvites;
	if (bAllowJoinInProgress != nullptr)
		*bAllowJoinInProgress = params.bAllowJoinInProgress;
	if (bIsAnticheatEnabled != nullptr)
		*bIsAnticheatEnabled = params.bIsAnticheatEnabled;
	if (BuildUniqueID != nullptr)
		*BuildUniqueID = params.BuildUniqueID;
	if (ExtraSettings != nullptr)
		*ExtraSettings = params.ExtraSettings;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_ESessionSettingSearchResult SearchResult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SettingValue                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyString(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, AdvancedSessions_ESessionSettingSearchResult* SearchResult, struct FString* SettingValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28573);

	UAdvancedSessionsLibrary_GetSessionPropertyString_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyKey
// ()
// Parameters:
// struct FSessionPropertyKeyPair SessionProperty                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UAdvancedSessionsLibrary::GetSessionPropertyKey(const struct FSessionPropertyKeyPair& SessionProperty)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28570);

	UAdvancedSessionsLibrary_GetSessionPropertyKey_Params params;
	params.SessionProperty = SessionProperty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyInt
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_ESessionSettingSearchResult SearchResult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SettingValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyInt(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, AdvancedSessions_ESessionSettingSearchResult* SearchResult, int* SettingValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28563);

	UAdvancedSessionsLibrary_GetSessionPropertyInt_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyFloat
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_ESessionSettingSearchResult SearchResult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SettingValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyFloat(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, AdvancedSessions_ESessionSettingSearchResult* SearchResult, float* SettingValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28556);

	UAdvancedSessionsLibrary_GetSessionPropertyFloat_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyByte
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_ESessionSettingSearchResult SearchResult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  SettingValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyByte(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, AdvancedSessions_ESessionSettingSearchResult* SearchResult, unsigned char* SettingValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28549);

	UAdvancedSessionsLibrary_GetSessionPropertyByte_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyBool
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_ESessionSettingSearchResult SearchResult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SettingValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyBool(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, AdvancedSessions_ESessionSettingSearchResult* SearchResult, bool* SettingValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28542);

	UAdvancedSessionsLibrary_GetSessionPropertyBool_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetPlayerName
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PlayerName                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetPlayerName(class APlayerController* PlayerController, struct FString* PlayerName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28539);

	UAdvancedSessionsLibrary_GetPlayerName_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerName != nullptr)
		*PlayerName = params.PlayerName;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumNetPlayers                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetNumberOfNetworkPlayers(class UObject* WorldContextObject, int* NumNetPlayers)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28536);

	UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumNetPlayers != nullptr)
		*NumNetPlayers = params.NumNetPlayers;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetNetPlayerIndex
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NetPlayerIndex                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetNetPlayerIndex(class APlayerController* PlayerController, int* NetPlayerIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28533);

	UAdvancedSessionsLibrary_GetNetPlayerIndex_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NetPlayerIndex != nullptr)
		*NetPlayerIndex = params.NetPlayerIndex;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetExtraSettings
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBlueprintSessionResult SessionResult                  (Parm, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetExtraSettings(const struct FBlueprintSessionResult& SessionResult, TArray<struct FSessionPropertyKeyPair>* ExtraSettings)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28529);

	UAdvancedSessionsLibrary_GetExtraSettings_Params params;
	params.SessionResult = SessionResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ExtraSettings != nullptr)
		*ExtraSettings = params.ExtraSettings;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentUniqueBuildID
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            UniqueBuildId                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetCurrentUniqueBuildID(int* UniqueBuildId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28527);

	UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UniqueBuildId != nullptr)
		*UniqueBuildId = params.UniqueBuildId;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyIndexByName
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_FindSessionPropertyIndexByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, AdvancedSessions_EBlueprintResultSwitch* Result, int* OutIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28520);

	UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyByName
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingsName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair OutProperty                    (Parm, OutParm, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_FindSessionPropertyByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingsName, AdvancedSessions_EBlueprintResultSwitch* Result, struct FSessionPropertyKeyPair* OutProperty)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28513);

	UAdvancedSessionsLibrary_FindSessionPropertyByName_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingsName = SettingsName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (OutProperty != nullptr)
		*OutProperty = params.OutProperty;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID
// (Net)
// Parameters:
// struct FBPUniqueNetId          A                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          B                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedSessionsLibrary::EqualEqual_UNetIDUnetID(const struct FBPUniqueNetId& A, const struct FBPUniqueNetId& B)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28509);

	UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.AddOrModifyExtraSettings
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> SettingsArray                  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> NewOrChangedSettings           (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> ModifiedSettingsArray          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_AddOrModifyExtraSettings(TArray<struct FSessionPropertyKeyPair>* SettingsArray, TArray<struct FSessionPropertyKeyPair>* NewOrChangedSettings, TArray<struct FSessionPropertyKeyPair>* ModifiedSettingsArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28502);

	UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SettingsArray != nullptr)
		*SettingsArray = params.SettingsArray;
	if (NewOrChangedSettings != nullptr)
		*NewOrChangedSettings = params.NewOrChangedSettings;
	if (ModifiedSettingsArray != nullptr)
		*ModifiedSettingsArray = params.ModifiedSettingsArray;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterRemoteTalker
// ()
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedVoiceLibrary::UnRegisterRemoteTalker(const struct FBPUniqueNetId& UniqueNetId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28688);

	UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterLocalTalker
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// unsigned char                  LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedVoiceLibrary::STATIC_UnRegisterLocalTalker(unsigned char LocalPlayerNum)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28686);

	UAdvancedVoiceLibrary_UnRegisterLocalTalker_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterAllLocalTalkers
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UAdvancedVoiceLibrary::STATIC_UnRegisterAllLocalTalkers()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28685);

	UAdvancedVoiceLibrary_UnRegisterAllLocalTalkers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.UnMuteRemoteTalker
// (Final, BlueprintCosmetic)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bIsSystemWide                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedVoiceLibrary::UnMuteRemoteTalker(unsigned char LocalUserNum, const struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28680);

	UAdvancedVoiceLibrary_UnMuteRemoteTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UniqueNetId = UniqueNetId;
	params.bIsSystemWide = bIsSystemWide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.StopNetworkedVoice
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// unsigned char                  LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedVoiceLibrary::STATIC_StopNetworkedVoice(unsigned char LocalPlayerNum)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28678);

	UAdvancedVoiceLibrary_StopNetworkedVoice_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.StartNetworkedVoice
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// unsigned char                  LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedVoiceLibrary::STATIC_StartNetworkedVoice(unsigned char LocalPlayerNum)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28676);

	UAdvancedVoiceLibrary_StartNetworkedVoice_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.RemoveAllRemoteTalkers
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UAdvancedVoiceLibrary::STATIC_RemoveAllRemoteTalkers()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28675);

	UAdvancedVoiceLibrary_RemoveAllRemoteTalkers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterRemoteTalker
// ()
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedVoiceLibrary::RegisterRemoteTalker(const struct FBPUniqueNetId& UniqueNetId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28672);

	UAdvancedVoiceLibrary_RegisterRemoteTalker_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterLocalTalker
// (Final)
// Parameters:
// unsigned char                  LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedVoiceLibrary::RegisterLocalTalker(unsigned char LocalPlayerNum)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28669);

	UAdvancedVoiceLibrary_RegisterLocalTalker_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterAllLocalTalkers
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UAdvancedVoiceLibrary::STATIC_RegisterAllLocalTalkers()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28668);

	UAdvancedVoiceLibrary_RegisterAllLocalTalkers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.MuteRemoteTalker
// (Final, BlueprintCosmetic)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bIsSystemWide                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedVoiceLibrary::MuteRemoteTalker(unsigned char LocalUserNum, const struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28663);

	UAdvancedVoiceLibrary_MuteRemoteTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UniqueNetId = UniqueNetId;
	params.bIsSystemWide = bIsSystemWide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.IsRemotePlayerTalking
// ()
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedVoiceLibrary::IsRemotePlayerTalking(const struct FBPUniqueNetId& UniqueNetId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28660);

	UAdvancedVoiceLibrary_IsRemotePlayerTalking_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.IsPlayerMuted
// (BlueprintCosmetic)
// Parameters:
// unsigned char                  LocalUserNumChecking           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedVoiceLibrary::IsPlayerMuted(unsigned char LocalUserNumChecking, const struct FBPUniqueNetId& UniqueNetId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28656);

	UAdvancedVoiceLibrary_IsPlayerMuted_Params params;
	params.LocalUserNumChecking = LocalUserNumChecking;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.IsLocalPlayerTalking
// (Final)
// Parameters:
// unsigned char                  LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedVoiceLibrary::IsLocalPlayerTalking(unsigned char LocalPlayerNum)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28653);

	UAdvancedVoiceLibrary_IsLocalPlayerTalking_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.IsHeadsetPresent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bHasHeadset                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedVoiceLibrary::STATIC_IsHeadsetPresent(bool* bHasHeadset, unsigned char LocalPlayerNum)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28650);

	UAdvancedVoiceLibrary_IsHeadsetPresent_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bHasHeadset != nullptr)
		*bHasHeadset = params.bHasHeadset;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.GetNumLocalTalkers
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            NumLocalTalkers                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedVoiceLibrary::STATIC_GetNumLocalTalkers(int* NumLocalTalkers)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28648);

	UAdvancedVoiceLibrary_GetNumLocalTalkers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumLocalTalkers != nullptr)
		*NumLocalTalkers = params.NumLocalTalkers;

}


// Function AdvancedSessions.CancelFindSessionsCallbackProxy.CancelFindSessions
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCancelFindSessionsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCancelFindSessionsCallbackProxy* UCancelFindSessionsCallbackProxy::CancelFindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28691);

	UCancelFindSessionsCallbackProxy_CancelFindSessions_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.CreateSessionCallbackProxyAdvanced.CreateAdvancedSession
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PublicConnections              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PrivateConnections             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowInvites                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsDedicatedServer             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUsePresence                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowJoinViaPresence          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowJoinViaPresenceFriendsOnly (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAntiCheatProtected            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUsesStats                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShouldAdvertise               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCreateSessionCallbackProxyAdvanced* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCreateSessionCallbackProxyAdvanced* UCreateSessionCallbackProxyAdvanced::CreateAdvancedSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, class APlayerController* PlayerController, int PublicConnections, int PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28697);

	UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ExtraSettings = ExtraSettings;
	params.PlayerController = PlayerController;
	params.PublicConnections = PublicConnections;
	params.PrivateConnections = PrivateConnections;
	params.bUseLAN = bUseLAN;
	params.bAllowInvites = bAllowInvites;
	params.bIsDedicatedServer = bIsDedicatedServer;
	params.bUsePresence = bUsePresence;
	params.bAllowJoinViaPresence = bAllowJoinViaPresence;
	params.bAllowJoinViaPresenceFriendsOnly = bAllowJoinViaPresenceFriendsOnly;
	params.bAntiCheatProtected = bAntiCheatProtected;
	params.bUsesStats = bUsesStats;
	params.bShouldAdvertise = bShouldAdvertise;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.EndSessionCallbackProxy.EndSession
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEndSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEndSessionCallbackProxy* UEndSessionCallbackProxy::EndSession(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28716);

	UEndSessionCallbackProxy_EndSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.FindFriendSessionCallbackProxy.FindFriendSession
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          FriendUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UFindFriendSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFindFriendSessionCallbackProxy* UFindFriendSessionCallbackProxy::FindFriendSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28722);

	UFindFriendSessionCallbackProxy_FindFriendSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.FriendUniqueNetId = FriendUniqueNetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FindSessionsAdvanced
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBPServerPresenceSearchType ServerTypeToSearch             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSessionsSearchSetting> Filters                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bEmptyServersOnly              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNonEmptyServersOnly           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSecureServersOnly             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MinSlotsAvailable              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFindSessionsCallbackProxyAdvanced* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFindSessionsCallbackProxyAdvanced* UFindSessionsCallbackProxyAdvanced::FindSessionsAdvanced(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN, AdvancedSessions_EBPServerPresenceSearchType ServerTypeToSearch, TArray<struct FSessionsSearchSetting> Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, int MinSlotsAvailable)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28736);

	UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MaxResults = MaxResults;
	params.bUseLAN = bUseLAN;
	params.ServerTypeToSearch = ServerTypeToSearch;
	params.Filters = Filters;
	params.bEmptyServersOnly = bEmptyServersOnly;
	params.bNonEmptyServersOnly = bNonEmptyServersOnly;
	params.bSecureServersOnly = bSecureServersOnly;
	params.MinSlotsAvailable = MinSlotsAvailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FilterSessionResults
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FBlueprintSessionResult> SessionResults                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FSessionsSearchSetting> Filters                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FBlueprintSessionResult> FilteredResults                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UFindSessionsCallbackProxyAdvanced::STATIC_FilterSessionResults(TArray<struct FBlueprintSessionResult> SessionResults, TArray<struct FSessionsSearchSetting> Filters, TArray<struct FBlueprintSessionResult>* FilteredResults)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28729);

	UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Params params;
	params.SessionResults = SessionResults;
	params.Filters = Filters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FilteredResults != nullptr)
		*FilteredResults = params.FilteredResults;

}


// Function AdvancedSessions.GetFriendsCallbackProxy.GetAndStoreFriendsList
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetFriendsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetFriendsCallbackProxy* UGetFriendsCallbackProxy::GetAndStoreFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28752);

	UGetFriendsCallbackProxy_GetAndStoreFriendsList_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.GetRecentPlayersCallbackProxy.GetAndStoreRecentPlayersList
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetRecentPlayersCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetRecentPlayersCallbackProxy* UGetRecentPlayersCallbackProxy::GetAndStoreRecentPlayersList(class UObject* WorldContextObject, const struct FBPUniqueNetId& UniqueNetId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28758);

	UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Params params;
	params.WorldContextObject = WorldContextObject;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.GetUserPrivilegeCallbackProxy.GetUserPrivilege
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBPUserPrivileges PrivilegeToCheck               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          PlayerUniqueNetID              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetUserPrivilegeCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetUserPrivilegeCallbackProxy* UGetUserPrivilegeCallbackProxy::GetUserPrivilege(class UObject* WorldContextObject, AdvancedSessions_EBPUserPrivileges PrivilegeToCheck, const struct FBPUniqueNetId& PlayerUniqueNetID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28764);

	UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PrivilegeToCheck = PrivilegeToCheck;
	params.PlayerUniqueNetID = PlayerUniqueNetID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.LoginUserCallbackProxy.LoginUser
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 UserID                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 UserToken                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULoginUserCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULoginUserCallbackProxy* ULoginUserCallbackProxy::LoginUser(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& UserID, const struct FString& UserToken)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28772);

	ULoginUserCallbackProxy_LoginUser_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.UserID = UserID;
	params.UserToken = UserToken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.LogoutUserCallbackProxy.LogoutUser
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULogoutUserCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULogoutUserCallbackProxy* ULogoutUserCallbackProxy::LogoutUser(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28780);

	ULogoutUserCallbackProxy_LogoutUser_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.SendFriendInviteCallbackProxy.SendFriendInvite
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetIDInvited             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class USendFriendInviteCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USendFriendInviteCallbackProxy* USendFriendInviteCallbackProxy::SendFriendInvite(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetIDInvited)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28786);

	USendFriendInviteCallbackProxy_SendFriendInvite_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.UniqueNetIDInvited = UniqueNetIDInvited;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.UpdateSessionCallbackProxyAdvanced.UpdateSession
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int                            PublicConnections              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PrivateConnections             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowInvites                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowJoinInProgress           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRefreshOnlineData             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsDedicatedServer             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUpdateSessionCallbackProxyAdvanced* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUpdateSessionCallbackProxyAdvanced* UUpdateSessionCallbackProxyAdvanced::UpdateSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, int PublicConnections, int PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28793);

	UUpdateSessionCallbackProxyAdvanced_UpdateSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ExtraSettings = ExtraSettings;
	params.PublicConnections = PublicConnections;
	params.PrivateConnections = PrivateConnections;
	params.bUseLAN = bUseLAN;
	params.bAllowInvites = bAllowInvites;
	params.bAllowJoinInProgress = bAllowJoinInProgress;
	params.bRefreshOnlineData = bRefreshOnlineData;
	params.bIsDedicatedServer = bIsDedicatedServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
