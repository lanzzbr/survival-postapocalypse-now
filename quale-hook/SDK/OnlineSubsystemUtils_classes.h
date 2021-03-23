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

// Class OnlineSubsystemUtils.IpConnection
// 0x0020 (FullSize[0x33680] - InheritedSize[0x33660])
class UIpConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData_OM4P[0x20];                                    // 0x33660(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1518);
		return ptr;
	}



};

// Class OnlineSubsystemUtils.IpNetDriver
// 0x0030 (FullSize[0x0488] - InheritedSize[0x0458])
class UIpNetDriver : public UNetDriver
{
public:
	unsigned char                                      LogPortUnreach : 1;                                        // 0x0458(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AllowPlayerPortUnreach : 1;                                // 0x0458(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KXLJ[0x3];                                     // 0x0459(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           MaxPortCountToTry;                                         // 0x045C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P6QZ[0x18];                                    // 0x0460(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           ServerDesiredSocketReceiveBufferBytes;                     // 0x0478(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32_t                                           ServerDesiredSocketSendBufferBytes;                        // 0x047C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32_t                                           ClientDesiredSocketReceiveBufferBytes;                     // 0x0480(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32_t                                           ClientDesiredSocketSendBufferBytes;                        // 0x0484(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1521);
		return ptr;
	}



};

// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1526);
		return ptr;
	}



	void STATIC_GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, float* Progress);
	void STATIC_GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, struct FText* Title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bHidden);
};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WSRM[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1527);
		return ptr;
	}



	class UAchievementQueryCallbackProxy* CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController);
	class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W6O2[0x30];                                    // 0x0048(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1528);
		return ptr;
	}



	class UAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementName, float Progress, int UserTag);
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LGB5[0x58];                                    // 0x0048(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1529);
		return ptr;
	}



	class UConnectionCallbackProxy* ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YXGP[0xA8];                                    // 0x0048(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1530);
		return ptr;
	}



	class UCreateSessionCallbackProxy* CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN);
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TJDP[0x58];                                    // 0x0048(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1531);
		return ptr;
	}



	class UDestroySessionCallbackProxy* DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VI9H[0x30];                                    // 0x0048(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1532);
		return ptr;
	}



	class UEndMatchCallbackProxy* EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, const struct FString& MatchID, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> OtherPlayersOutcome);
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L91X[0x28];                                    // 0x0048(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1533);
		return ptr;
	}



	class UEndTurnCallbackProxy* EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, const TScriptInterface<class UTurnBasedMatchInterface>& TurnBasedMatchInterface);
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3AXP[0x78];                                    // 0x0048(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1534);
		return ptr;
	}



	struct FString GetServerName(const struct FBlueprintSessionResult& Result);
	int GetPingInMs(const struct FBlueprintSessionResult& Result);
	int GetMaxPlayers(const struct FBlueprintSessionResult& Result);
	int GetCurrentPlayers(const struct FBlueprintSessionResult& Result);
	class UFindSessionsCallbackProxy* FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN);
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8LYB[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1535);
		return ptr;
	}



	class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, int MinPlayers, int MaxPlayers, int PlayerGroup, bool ShowExistingMatches);
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
class UInAppPurchaseCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2C0H[0x78];                                    // 0x0048(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1536);
		return ptr;
	}



	class UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest);
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
class UInAppPurchaseQueryCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J0WB[0x88];                                    // 0x0048(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1537);
		return ptr;
	}



	class UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<struct FString> ProductIdentifiers);
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
class UInAppPurchaseRestoreCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4U4R[0x88];                                    // 0x0048(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1538);
		return ptr;
	}



	class UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, class APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// 0x0138 (FullSize[0x0160] - InheritedSize[0x0028])
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A744[0x118];                                   // 0x0048(0x0118) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1539);
		return ptr;
	}



	class UJoinSessionCallbackProxy* JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
};

// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1540);
		return ptr;
	}



	bool WriteLeaderboardInteger(class APlayerController* PlayerController, const struct FName& StatName, int StatValue);
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IM4Y[0x58];                                    // 0x0048(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1541);
		return ptr;
	}



	class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class APlayerController* PlayerController, const struct FName& SessionName);
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3Q5G[0x88];                                    // 0x0048(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1542);
		return ptr;
	}



	class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const struct FName& StatName);
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M0RH[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1543);
		return ptr;
	}



	class ULogoutCallbackProxy* Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.OnlineBeacon
// 0x0028 (FullSize[0x0390] - InheritedSize[0x0368])
class AOnlineBeacon : public AActor
{
public:
	unsigned char                                      UnknownData_CD7K[0x8];                                     // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BeaconConnectionInitialTimeout;                            // 0x0370(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BeaconConnectionTimeout;                                   // 0x0374(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNetDriver*                                  NetDriver;                                                 // 0x0378(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IW2V[0x10];                                    // 0x0380(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1544);
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// 0x00B8 (FullSize[0x0448] - InheritedSize[0x0390])
class AOnlineBeaconHost : public AOnlineBeacon
{
public:
	int                                                ListenPort;                                                // 0x0390(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9MXJ[0x4];                                     // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                              // 0x0398(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NHMS[0xA0];                                    // 0x03A8(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1546);
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// 0x0108 (FullSize[0x0130] - InheritedSize[0x0028])
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	struct FName                                       VoiceSubsystemNameOverride;                                // 0x0028(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_R17U[0x100];                                   // 0x0030(0x0100) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1548);
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlinePIESettings
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	bool                                               bOnlinePIEEnabled;                                         // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M025[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPIELoginSettingsInternal>           Logins;                                                    // 0x0040(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1549);
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlineSessionClient
// 0x0298 (FullSize[0x02C0] - InheritedSize[0x0028])
class UOnlineSessionClient : public UOnlineSession
{
public:
	unsigned char                                      UnknownData_BJF6[0x288];                                   // 0x0028(0x0288) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsFromInvite;                                             // 0x02B0(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHandlingDisconnect;                                       // 0x02B1(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G2GV[0xE];                                     // 0x02B2(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1550);
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// 0x0080 (FullSize[0x0410] - InheritedSize[0x0390])
class AOnlineBeaconClient : public AOnlineBeacon
{
public:
	class AOnlineBeaconHostObject*                     BeaconOwner;                                               // 0x0390(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNetConnection*                              BeaconConnection;                                          // 0x0398(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	OnlineSubsystemUtils_EBeaconConnectionState        ConnectionState;                                           // 0x03A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VBIF[0x6F];                                    // 0x03A1(0x006F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1545);
		return ptr;
	}



	void STATIC_ClientOnConnected();
};

// Class OnlineSubsystemUtils.PartyBeaconClient
// 0x0130 (FullSize[0x0540] - InheritedSize[0x0410])
class APartyBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData_Q9HM[0xC0];                                    // 0x0410(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DestSessionId;                                             // 0x04D0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPartyReservation                           PendingReservation;                                        // 0x04E0(0x0030) (Protected, NativeAccessSpecifierProtected)
	OnlineSubsystemUtils_EClientRequestType            RequestType;                                               // 0x0510(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPendingReservationSent;                                   // 0x0511(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCancelReservation;                                        // 0x0512(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HU4S[0x2D];                                    // 0x0513(0x002D) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1551);
		return ptr;
	}



	void STATIC_ServerUpdateReservationRequest(const struct FString& SessionId, const struct FPartyReservation& ReservationUpdate);
	void STATIC_ServerReservationRequest(const struct FString& SessionId, const struct FPartyReservation& Reservation);
	void STATIC_ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader);
	void STATIC_ClientSendReservationUpdates(int NumRemainingReservations);
	void STATIC_ClientSendReservationFull();
	void STATIC_ClientReservationResponse(TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse);
	void STATIC_ClientCancelReservationResponse(TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse);
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// 0x0028 (FullSize[0x0390] - InheritedSize[0x0368])
class AOnlineBeaconHostObject : public AActor
{
public:
	struct FString                                     BeaconTypeName;                                            // 0x0368(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ClientBeaconActorClass;                                    // 0x0378(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                              // 0x0380(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1547);
		return ptr;
	}



};

// Class OnlineSubsystemUtils.PartyBeaconHost
// 0x0160 (FullSize[0x04F0] - InheritedSize[0x0390])
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	class UPartyBeaconState*                           State;                                                     // 0x0390(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JOBS[0x148];                                   // 0x0398(0x0148) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bLogoutOnSessionTimeout;                                   // 0x04E0(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7UD3[0x3];                                     // 0x04E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SessionTimeoutSecs;                                        // 0x04E4(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TravelSessionTimeoutSecs;                                  // 0x04E8(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ULMQ[0x4];                                     // 0x04EC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1552);
		return ptr;
	}



};

// Class OnlineSubsystemUtils.PartyBeaconState
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UPartyBeaconState : public UObject
{
public:
	struct FName                                       SessionName;                                               // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumConsumedReservations;                                   // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxReservations;                                           // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumTeams;                                                  // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumPlayersPerTeam;                                         // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       TeamAssignmentMethod;                                      // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ReservedHostTeamNum;                                       // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ForceTeamNum;                                              // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPartyReservation>                   Reservations;                                              // 0x0050(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PKMD[0x10];                                    // 0x0060(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1553);
		return ptr;
	}



};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CHUG[0x28];                                    // 0x0048(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1554);
		return ptr;
	}



	class UQuitMatchCallbackProxy* QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> Outcome, int TurnTimeoutInSeconds);
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YVEL[0x10];                                    // 0x0048(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1555);
		return ptr;
	}



	class UShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController);
};

// Class OnlineSubsystemUtils.TestBeaconClient
// 0x0000 (FullSize[0x0410] - InheritedSize[0x0410])
class ATestBeaconClient : public AOnlineBeaconClient
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1556);
		return ptr;
	}



	void STATIC_ServerPong();
	void STATIC_ClientPing();
};

// Class OnlineSubsystemUtils.TestBeaconHost
// 0x0000 (FullSize[0x0390] - InheritedSize[0x0390])
class ATestBeaconHost : public AOnlineBeaconHostObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1557);
		return ptr;
	}



};

// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1558);
		return ptr;
	}



	void STATIC_RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);
	void STATIC_GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int PlayerIndex, struct FString* PlayerDisplayName);
	void STATIC_GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int* PlayerIndex);
	void STATIC_GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, bool* bIsMyTurn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
