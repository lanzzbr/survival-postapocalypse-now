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

// Class EngineSettings.ConsoleSettings
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UConsoleSettings : public UObject
{
public:
	int                                                MaxScrollbackSize;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1MCT[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAutoCompleteCommand>                ManualAutoCompleteList;                                    // 0x0030(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FString>                             AutoCompleteMapPaths;                                      // 0x0040(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	float                                              BackgroundOpacityPercentage;                               // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOrderTopToBottom;                                         // 0x0054(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L4KE[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FColor                                      InputColor;                                                // 0x0058(0x0004) (Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      HistoryColor;                                              // 0x005C(0x0004) (Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      AutoCompleteCommandColor;                                  // 0x0060(0x0004) (Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      AutoCompleteCVarColor;                                     // 0x0064(0x0004) (Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      AutoCompleteFadedColor;                                    // 0x0068(0x0004) (Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L5OJ[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(358);
		return ptr;
	}



};

// Class EngineSettings.GameMapsSettings
// 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
class UGameMapsSettings : public UObject
{
public:
	struct FSoftObjectPath                             EditorStartupMap;                                          // 0x0028(0x0018) (Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LocalMapOptions;                                           // 0x0040(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             TransitionMap;                                             // 0x0050(0x0018) (Edit, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseSplitscreen;                                           // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EngineSettings_ETwoPlayerSplitScreenType> TwoPlayerSplitscreenLayout;                                // 0x0069(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EngineSettings_EThreePlayerSplitScreenType> ThreePlayerSplitscreenLayout;                              // 0x006A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOffsetPlayerGamepadIds;                                   // 0x006B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_269H[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftClassPath                              GameInstanceClass;                                         // 0x0070(0x0018) (Edit, Config, NoClear, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             GameDefaultMap;                                            // 0x0088(0x0018) (Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                             ServerDefaultMap;                                          // 0x00A0(0x0018) (Edit, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftClassPath                              GlobalDefaultGameMode;                                     // 0x00B8(0x0018) (Edit, Config, NoClear, NativeAccessSpecifierPrivate)
	struct FSoftClassPath                              GlobalDefaultServerGameMode;                               // 0x00D0(0x0018) (Edit, Config, AdvancedDisplay, NativeAccessSpecifierPrivate)
	TArray<struct FGameModeName>                       GameModeMapPrefixes;                                       // 0x00E8(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPrivate)
	TArray<struct FGameModeName>                       GameModeClassAliases;                                      // 0x00F8(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(359);
		return ptr;
	}



};

// Class EngineSettings.GameNetworkManagerSettings
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UGameNetworkManagerSettings : public UObject
{
public:
	int                                                MinDynamicBandwidth;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxDynamicBandwidth;                                       // 0x002C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalNetBandwidth;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BadPingThreshold;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsStandbyCheckingEnabled : 1;                             // 0x0038(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MAI1[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StandbyRxCheatTime;                                        // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StandbyTxCheatTime;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentMissingForRxStandby;                                // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentMissingForTxStandby;                                // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentForBadPing;                                         // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              JoinInProgressStandbyWaitTime;                             // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UT57[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(360);
		return ptr;
	}



};

// Class EngineSettings.GameSessionSettings
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UGameSessionSettings : public UObject
{
public:
	int                                                MaxSpectators;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlayers;                                                // 0x002C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRequiresPushToTalk : 1;                                   // 0x0030(0x0001) BIT_FIELD (Edit, Config, GlobalConfig, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G9XX[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(361);
		return ptr;
	}



};

// Class EngineSettings.GeneralEngineSettings
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGeneralEngineSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(362);
		return ptr;
	}



};

// Class EngineSettings.GeneralProjectSettings
// 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
class UGeneralProjectSettings : public UObject
{
public:
	struct FString                                     CompanyName;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CompanyDistinguishedName;                                  // 0x0038(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CopyrightNotice;                                           // 0x0048(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0058(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Homepage;                                                  // 0x0068(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LicensingTerms;                                            // 0x0078(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PrivacyPolicy;                                             // 0x0088(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ProjectID;                                                 // 0x0098(0x0010) (Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProjectName;                                               // 0x00A8(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProjectVersion;                                            // 0x00B8(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SupportContact;                                            // 0x00C8(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ProjectDisplayedTitle;                                     // 0x00D8(0x0018) (Edit, Config, NativeAccessSpecifierPublic)
	struct FText                                       ProjectDebugTitleInfo;                                     // 0x00F0(0x0018) (Edit, Config, NativeAccessSpecifierPublic)
	bool                                               bShouldWindowPreserveAspectRatio;                          // 0x0108(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseBorderlessWindow;                                      // 0x0109(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStartInVR;                                                // 0x010A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStartInAR;                                                // 0x010B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowWindowResize;                                        // 0x010C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowClose;                                               // 0x010D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowMaximize;                                            // 0x010E(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowMinimize;                                            // 0x010F(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(363);
		return ptr;
	}



};

// Class EngineSettings.HudSettings
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UHudSettings : public UObject
{
public:
	unsigned char                                      bShowHUD : 1;                                              // 0x0028(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6E1T[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               DebugDisplay;                                              // 0x0030(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(364);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
