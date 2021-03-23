#pragma once

// Name: ANUSGAME, Version: 4.18


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class AdvancedSessions.AdvancedExternalUILibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAdvancedExternalUILibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1560);
		return ptr;
	}



	void STATIC_ShowWebURLUI(const struct FString& URLToShow, AdvancedSessions_EBlueprintResultSwitch* Result, TArray<struct FString>* AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int OffsetX, int OffsetY, int SizeX, int SizeY);
	void STATIC_ShowProfileUI(const struct FBPUniqueNetId& PlayerViewingProfile, const struct FBPUniqueNetId& PlayerToViewProfileOf, AdvancedSessions_EBlueprintResultSwitch* Result);
	void STATIC_ShowLeaderBoardUI(const struct FString& LeaderboardName, AdvancedSessions_EBlueprintResultSwitch* Result);
	void STATIC_ShowInviteUI(class APlayerController* PlayerController, AdvancedSessions_EBlueprintResultSwitch* Result);
	void STATIC_ShowFriendsUI(class APlayerController* PlayerController, AdvancedSessions_EBlueprintResultSwitch* Result);
	void STATIC_ShowAccountUpgradeUI(const struct FBPUniqueNetId& PlayerRequestingAccountUpgradeUI, AdvancedSessions_EBlueprintResultSwitch* Result);
	void STATIC_CloseWebURLUI();
};

// Class AdvancedSessions.AdvancedFriendsGameInstance
// 0x0198 (FullSize[0x0280] - InheritedSize[0x00E8])
class UAdvancedFriendsGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData_IW4B[0x8];                                     // 0x00E8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_QV9D[0x190];                                   // 0x00F0(0x0190) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1561);
		return ptr;
	}



	void STATIC_OnSessionInviteReceived(int LocalPlayerNum, const struct FBPUniqueNetId& PersonInviting, const struct FString& AppID, const struct FBlueprintSessionResult& SessionToJoin);
	void STATIC_OnSessionInviteAccepted(int LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SessionToJoin);
	void STATIC_OnPlayerTalkingStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking);
	void STATIC_OnPlayerLoginStatusChanged(int PlayerNum, AdvancedSessions_EBPLoginStatus PreviousStatus, AdvancedSessions_EBPLoginStatus NewStatus, const struct FBPUniqueNetId& NewPlayerUniqueNetID);
	void STATIC_OnPlayerLoginChanged(int PlayerNum);
};

// Class AdvancedSessions.AdvancedFriendsInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAdvancedFriendsInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1562);
		return ptr;
	}



	void STATIC_OnSessionInviteReceived(const struct FBPUniqueNetId& PersonInviting, const struct FBlueprintSessionResult& SearchResult);
	void STATIC_OnSessionInviteAccepted(const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SearchResult);
	void STATIC_OnPlayerVoiceStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking);
	void STATIC_OnPlayerLoginStatusChanged(AdvancedSessions_EBPLoginStatus PreviousStatus, AdvancedSessions_EBPLoginStatus NewStatus, const struct FBPUniqueNetId& PlayerUniqueNetID);
	void STATIC_OnPlayerLoginChanged(int PlayerNum);
};

// Class AdvancedSessions.AdvancedFriendsLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAdvancedFriendsLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1563);
		return ptr;
	}



	void STATIC_SendSessionInviteToFriends(class APlayerController* PlayerController, TArray<struct FBPUniqueNetId> Friends, AdvancedSessions_EBlueprintResultSwitch* Result);
	void STATIC_SendSessionInviteToFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, AdvancedSessions_EBlueprintResultSwitch* Result);
	void STATIC_IsAFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetId, bool* IsFriend);
	void STATIC_GetStoredRecentPlayersList(const struct FBPUniqueNetId& UniqueNetId, TArray<struct FBPOnlineRecentPlayer>* PlayersList);
	void STATIC_GetStoredFriendsList(class APlayerController* PlayerController, TArray<struct FBPFriendInfo>* FriendsList);
	void STATIC_GetFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, struct FBPFriendInfo* Friend);
};

// Class AdvancedSessions.AdvancedIdentityLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAdvancedIdentityLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1564);
		return ptr;
	}



	void STATIC_SetUserAccountAttribute(const struct FBPUserOnlineAccount& AccountInfo, const struct FString& AttributeName, const struct FString& NewAttributeValue, AdvancedSessions_EBlueprintResultSwitch* Result);
	void STATIC_GetUserID(const struct FBPUserOnlineAccount& AccountInfo, struct FBPUniqueNetId* UniqueNetId);
	void STATIC_GetUserAccountRealName(const struct FBPUserOnlineAccount& AccountInfo, struct FString* UserName);
	void STATIC_GetUserAccountDisplayName(const struct FBPUserOnlineAccount& AccountInfo, struct FString* DisplayName);
	void STATIC_GetUserAccountAuthAttribute(const struct FBPUserOnlineAccount& AccountInfo, const struct FString& AttributeName, struct FString* AuthAttribute, AdvancedSessions_EBlueprintResultSwitch* Result);
	void STATIC_GetUserAccountAttribute(const struct FBPUserOnlineAccount& AccountInfo, const struct FString& AttributeName, struct FString* AttributeValue, AdvancedSessions_EBlueprintResultSwitch* Result);
	void STATIC_GetUserAccountAccessToken(const struct FBPUserOnlineAccount& AccountInfo, struct FString* AccessToken);
	void STATIC_GetUserAccount(const struct FBPUniqueNetId& UniqueNetId, struct FBPUserOnlineAccount* AccountInfo, AdvancedSessions_EBlueprintResultSwitch* Result);
	void STATIC_GetPlayerNickname(const struct FBPUniqueNetId& UniqueNetId, struct FString* PlayerNickname);
	void STATIC_GetPlayerAuthToken(class APlayerController* PlayerController, struct FString* AuthToken, AdvancedSessions_EBlueprintResultSwitch* Result);
	void STATIC_GetLoginStatus(const struct FBPUniqueNetId& UniqueNetId, AdvancedSessions_EBPLoginStatus* LoginStatus, AdvancedSessions_EBlueprintResultSwitch* Result);
	void STATIC_GetAllUserAccounts(TArray<struct FBPUserOnlineAccount>* AccountInfos, AdvancedSessions_EBlueprintResultSwitch* Result);
};

// Class AdvancedSessions.AdvancedSessionsLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAdvancedSessionsLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1565);
		return ptr;
	}



	void STATIC_UniqueNetIdToString(const struct FBPUniqueNetId& UniqueNetId, struct FString* String);
	void STATIC_SetPlayerName(class APlayerController* PlayerController, const struct FString& PlayerName);
	struct FSessionsSearchSetting MakeLiteralSessionSearchProperty(const struct FSessionPropertyKeyPair& SessionSearchProperty, AdvancedSessions_EOnlineComparisonOpRedux ComparisonOp);
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyString(const struct FName& Key, const struct FString& Value);
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyInt(const struct FName& Key, int Value);
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyFloat(const struct FName& Key, float Value);
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyByte(const struct FName& Key, unsigned char Value);
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyBool(const struct FName& Key, bool Value);
	bool IsValidUniqueNetID(const struct FBPUniqueNetId& UniqueNetId);
	bool IsValidSession(const struct FBlueprintSessionResult& SessionResult);
	void STATIC_IsPlayerInSession(const struct FBPUniqueNetId& PlayerToCheck, bool* bIsInSession);
	bool HasOnlineSubsystem(const struct FName& SubSystemName);
	void STATIC_GetUniqueNetIDFromPlayerState(class APlayerState* PlayerState, struct FBPUniqueNetId* UniqueNetId);
	void STATIC_GetUniqueNetID(class APlayerController* PlayerController, struct FBPUniqueNetId* UniqueNetId);
	void STATIC_GetUniqueBuildID(const struct FBlueprintSessionResult& SessionResult, int* UniqueBuildId);
	void STATIC_GetSessionState(AdvancedSessions_EBPOnlineSessionState* SessionState);
	void STATIC_GetSessionSettings(int* NumConnections, int* NumPrivateConnections, bool* bIsLAN, bool* bIsDedicated, bool* bAllowInvites, bool* bAllowJoinInProgress, bool* bIsAnticheatEnabled, int* BuildUniqueID, TArray<struct FSessionPropertyKeyPair>* ExtraSettings, AdvancedSessions_EBlueprintResultSwitch* Result);
	void STATIC_GetSessionPropertyString(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, AdvancedSessions_ESessionSettingSearchResult* SearchResult, struct FString* SettingValue);
	struct FName GetSessionPropertyKey(const struct FSessionPropertyKeyPair& SessionProperty);
	void STATIC_GetSessionPropertyInt(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, AdvancedSessions_ESessionSettingSearchResult* SearchResult, int* SettingValue);
	void STATIC_GetSessionPropertyFloat(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, AdvancedSessions_ESessionSettingSearchResult* SearchResult, float* SettingValue);
	void STATIC_GetSessionPropertyByte(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, AdvancedSessions_ESessionSettingSearchResult* SearchResult, unsigned char* SettingValue);
	void STATIC_GetSessionPropertyBool(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, AdvancedSessions_ESessionSettingSearchResult* SearchResult, bool* SettingValue);
	void STATIC_GetPlayerName(class APlayerController* PlayerController, struct FString* PlayerName);
	void STATIC_GetNumberOfNetworkPlayers(class UObject* WorldContextObject, int* NumNetPlayers);
	void STATIC_GetNetPlayerIndex(class APlayerController* PlayerController, int* NetPlayerIndex);
	void STATIC_GetExtraSettings(const struct FBlueprintSessionResult& SessionResult, TArray<struct FSessionPropertyKeyPair>* ExtraSettings);
	void STATIC_GetCurrentUniqueBuildID(int* UniqueBuildId);
	void STATIC_FindSessionPropertyIndexByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, AdvancedSessions_EBlueprintResultSwitch* Result, int* OutIndex);
	void STATIC_FindSessionPropertyByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingsName, AdvancedSessions_EBlueprintResultSwitch* Result, struct FSessionPropertyKeyPair* OutProperty);
	bool EqualEqual_UNetIDUnetID(const struct FBPUniqueNetId& A, const struct FBPUniqueNetId& B);
	void STATIC_AddOrModifyExtraSettings(TArray<struct FSessionPropertyKeyPair>* SettingsArray, TArray<struct FSessionPropertyKeyPair>* NewOrChangedSettings, TArray<struct FSessionPropertyKeyPair>* ModifiedSettingsArray);
};

// Class AdvancedSessions.AdvancedVoiceLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAdvancedVoiceLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1566);
		return ptr;
	}



	bool UnRegisterRemoteTalker(const struct FBPUniqueNetId& UniqueNetId);
	void STATIC_UnRegisterLocalTalker(unsigned char LocalPlayerNum);
	void STATIC_UnRegisterAllLocalTalkers();
	bool UnMuteRemoteTalker(unsigned char LocalUserNum, const struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);
	void STATIC_StopNetworkedVoice(unsigned char LocalPlayerNum);
	void STATIC_StartNetworkedVoice(unsigned char LocalPlayerNum);
	void STATIC_RemoveAllRemoteTalkers();
	bool RegisterRemoteTalker(const struct FBPUniqueNetId& UniqueNetId);
	bool RegisterLocalTalker(unsigned char LocalPlayerNum);
	void STATIC_RegisterAllLocalTalkers();
	bool MuteRemoteTalker(unsigned char LocalUserNum, const struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);
	bool IsRemotePlayerTalking(const struct FBPUniqueNetId& UniqueNetId);
	bool IsPlayerMuted(unsigned char LocalUserNumChecking, const struct FBPUniqueNetId& UniqueNetId);
	bool IsLocalPlayerTalking(unsigned char LocalPlayerNum);
	void STATIC_IsHeadsetPresent(bool* bHasHeadset, unsigned char LocalPlayerNum);
	void STATIC_GetNumLocalTalkers(int* NumLocalTalkers);
};

// Class AdvancedSessions.CancelFindSessionsCallbackProxy
// 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
class UCancelFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YFBS[0x58];                                    // 0x0048(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1567);
		return ptr;
	}



	class UCancelFindSessionsCallbackProxy* CancelFindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class AdvancedSessions.CreateSessionCallbackProxyAdvanced
// 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
class UCreateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0MFK[0xC8];                                    // 0x0048(0x00C8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1568);
		return ptr;
	}



	class UCreateSessionCallbackProxyAdvanced* CreateAdvancedSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, class APlayerController* PlayerController, int PublicConnections, int PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise);
};

// Class AdvancedSessions.EndSessionCallbackProxy
// 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
class UEndSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1BHT[0x58];                                    // 0x0048(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1569);
		return ptr;
	}



	class UEndSessionCallbackProxy* EndSession(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class AdvancedSessions.FindFriendSessionCallbackProxy
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
class UFindFriendSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EZN3[0x78];                                    // 0x0048(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1570);
		return ptr;
	}



	class UFindFriendSessionCallbackProxy* FindFriendSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId);
};

// Class AdvancedSessions.FindSessionsCallbackProxyAdvanced
// 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
class UFindSessionsCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1ALN[0xB8];                                    // 0x0048(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1571);
		return ptr;
	}



	class UFindSessionsCallbackProxyAdvanced* FindSessionsAdvanced(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN, AdvancedSessions_EBPServerPresenceSearchType ServerTypeToSearch, TArray<struct FSessionsSearchSetting> Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, int MinSlotsAvailable);
	void STATIC_FilterSessionResults(TArray<struct FBlueprintSessionResult> SessionResults, TArray<struct FSessionsSearchSetting> Filters, TArray<struct FBlueprintSessionResult>* FilteredResults);
};

// Class AdvancedSessions.GetFriendsCallbackProxy
// 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
class UGetFriendsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XCUP[0x58];                                    // 0x0048(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1572);
		return ptr;
	}



	class UGetFriendsCallbackProxy* GetAndStoreFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class AdvancedSessions.GetRecentPlayersCallbackProxy
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
class UGetRecentPlayersCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4PLD[0x78];                                    // 0x0048(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1573);
		return ptr;
	}



	class UGetRecentPlayersCallbackProxy* GetAndStoreRecentPlayersList(class UObject* WorldContextObject, const struct FBPUniqueNetId& UniqueNetId);
};

// Class AdvancedSessions.GetUserPrivilegeCallbackProxy
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UGetUserPrivilegeCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CWTY[0x30];                                    // 0x0048(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1574);
		return ptr;
	}



	class UGetUserPrivilegeCallbackProxy* GetUserPrivilege(class UObject* WorldContextObject, AdvancedSessions_EBPUserPrivileges PrivilegeToCheck, const struct FBPUniqueNetId& PlayerUniqueNetID);
};

// Class AdvancedSessions.LoginUserCallbackProxy
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
class ULoginUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N2AC[0x78];                                    // 0x0048(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1575);
		return ptr;
	}



	class ULoginUserCallbackProxy* LoginUser(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& UserID, const struct FString& UserToken);
};

// Class AdvancedSessions.LogoutUserCallbackProxy
// 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
class ULogoutUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3LO1[0x58];                                    // 0x0048(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1576);
		return ptr;
	}



	class ULogoutUserCallbackProxy* LogoutUser(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class AdvancedSessions.SendFriendInviteCallbackProxy
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
class USendFriendInviteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_64ZA[0x78];                                    // 0x0048(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1577);
		return ptr;
	}



	class USendFriendInviteCallbackProxy* SendFriendInvite(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetIDInvited);
};

// Class AdvancedSessions.UpdateSessionCallbackProxyAdvanced
// 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
class UUpdateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KV4K[0x88];                                    // 0x0048(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1578);
		return ptr;
	}



	class UUpdateSessionCallbackProxyAdvanced* UpdateSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, int PublicConnections, int PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
