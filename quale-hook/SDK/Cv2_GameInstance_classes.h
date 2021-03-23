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

// BlueprintGeneratedClass Cv2_GameInstance.Cv2_GameInstance_C
// 0x02B9 (FullSize[0x03A1] - InheritedSize[0x00E8])
class UCv2_GameInstance_C : public UGameInstance
{
public:
	unsigned char                                      UnknownData_PLOQ[0x8];                                     // 0x00E8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F0(0x0008) (Transient, DuplicateTransient)
	float                                              MasterSoundVolume;                                         // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2GYF[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSettingsStructure                          SettingsStruct;                                            // 0x0100(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FIntPoint>                           SupportedResolution;                                       // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       JoinServerName;                                            // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBPUniqueNetId>                      MyFiends;                                                  // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               isConnectToSaveServer;                                     // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4VZI[0x7];                                     // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCv3_PlayersSaveState>               PlayersSaveData;                                           // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MusicVolume;                                               // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isMainMenuSurv;                                            // 0x019C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_373A[0x3];                                     // 0x019D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MouseMaxScale;                                             // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CEX3[0x4];                                     // 0x01A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UZagluha_C*                                  Zagluha;                                                   // 0x01A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlueprintSessionResult                     selectedSession;                                           // 0x01B0(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBlueprintSessionResult                     SavedConnectSession;                                       // 0x0268(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ConnectedToMainMenu;                                       // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LF4C[0x7];                                     // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             LobbyFriends;                                              // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                LobbyID;                                                   // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BPEB[0x4];                                     // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UConnectToMainMenuBase_C*                    MainMenuConnection;                                        // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               MyDlc;                                                     // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                LobbyCountPlayers;                                         // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XGBQ[0x4];                                     // 0x035C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        BOT_Kills;                                                 // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NPC_Save;                                                  // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerKills;                                               // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerDeath;                                               // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LifeHours;                                                 // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OldInventoryCost;                                          // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowStatWindow;                                            // 0x0384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4J26[0x3];                                     // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SeifOpen;                                                  // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UG52[0x4];                                     // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServerName;                                                // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               AC_SystemOK;                                               // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(36567);
		return ptr;
	}



	void STATIC_CheatControll();
	void STATIC_QuitGameExit();
	void STATIC_CreateStorageActor();
	void STATIC_CreateBatFiles();
	void STATIC_ShowZagluha(bool Show);
	void STATIC_ApplyVideoSettings();
	void STATIC_ApplyMouseSettings();
	void STATIC_CheckResolution(const struct FString& String, bool* Ok);
	void STATIC_ApplySettings();
	void STATIC_SaveSettings(const struct FSettingsStructure& SettingsStruct);
	void STATIC_LoadSettings(bool* Ok);
	void STATIC_OnFailure_71D85BA246BA90EDBA5995AD2163273F();
	void STATIC_OnSuccess_71D85BA246BA90EDBA5995AD2163273F();
	void STATIC_OnFailure_FF52DE6242D10D4E178AF0B0830C1FFB();
	void STATIC_OnSuccess_FF52DE6242D10D4E178AF0B0830C1FFB();
	void STATIC_ChangeVolume(float MasterVolume, float MusicVolume);
	void STATIC_ReceiveInit();
	void STATIC_ReconnectMainMenu();
	void STATIC_UpdateSession();
	void STATIC_ExecuteUbergraph_Cv2_GameInstance(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
