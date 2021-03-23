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

// Class AdvancedSteamSessions.AdvancedSteamFriendsLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAdvancedSteamFriendsLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1580);
		return ptr;
	}



	bool RequestSteamFriendInfo(const struct FBPUniqueNetId& UniqueNetId, bool bRequireNameOnly);
	bool IsDlcInstalled(int DlcId);
	struct FString GetSteamPersonaName(const struct FBPUniqueNetId& UniqueNetId);
	void STATIC_GetSteamGroups(TArray<struct FBPSteamGroupInfo>* SteamGroups);
	void STATIC_GetSteamFriendGamePlayed(const struct FBPUniqueNetId& UniqueNetId, AdvancedSessions_EBlueprintResultSwitch* Result, struct FString* GameName, int* AppID);
	class UTexture2D* GetSteamFriendAvatar(const struct FBPUniqueNetId& UniqueNetId, AdvancedSessions_EBlueprintAsyncResultSwitch* Result, AdvancedSteamSessions_ESteamAvatarSize AvatarSize);
	int GetFriendSteamLevel(const struct FBPUniqueNetId& UniqueNetId);
	struct FBPUniqueNetId CreateSteamIDFromString(const struct FString& SteamID64);
	bool BPGetAppOwner();
};

// Class AdvancedSteamSessions.AdvancedSteamWorkshopLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAdvancedSteamWorkshopLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1581);
		return ptr;
	}



	TArray<struct FBPSteamWorkshopID> GetSubscribedWorkshopItems(int* NumberOfItems);
	void STATIC_GetNumSubscribedWorkshopItems(int* NumberOfItems);
};

// Class AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class USteamRequestGroupOfficersCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J044[0x50];                                    // 0x0048(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1582);
		return ptr;
	}



	class USteamRequestGroupOfficersCallbackProxy* GetSteamGroupOfficerList(class UObject* WorldContextObject, const struct FBPUniqueNetId& GroupUniqueNetID);
};

// Class AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class USteamWSRequestUGCDetailsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DHZH[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1583);
		return ptr;
	}



	class USteamWSRequestUGCDetailsCallbackProxy* GetWorkshopItemDetails(class UObject* WorldContextObject, const struct FBPSteamWorkshopID& WorkShopID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
