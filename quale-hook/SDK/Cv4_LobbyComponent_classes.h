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

// BlueprintGeneratedClass Cv4_LobbyComponent.Cv4_LobbyComponent_C
// 0x0158 (FullSize[0x0248] - InheritedSize[0x00F0])
class UCv4_LobbyComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F0(0x0008) (Transient, DuplicateTransient)
	int                                                IDLobby;                                                   // 0x00F8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               IsReady;                                                   // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_LOEE[0x3];                                     // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OwnerID;                                                   // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               isLeaderLobby;                                             // 0x0110(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_8T1D[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class APlayerState*>                        PlayersLobby;                                              // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, AdvancedDisplay)
	TArray<bool>                                       proxyReady;                                                // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	int                                                LobbyCountPlayers;                                         // 0x0138(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TEnumAsByte<Cv4_LoobyStatus_ECv4_LoobyStatus>      StatusLobby;                                               // 0x013C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FSXY[0x3];                                     // 0x013D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Param_MaxPlayers;                                          // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W7UC[0x4];                                     // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCv4_LobbyComponent_C*                       MyLiderLobby;                                              // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               LobbySessionFound;                                         // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_ICUL[0x3];                                     // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TryCount;                                                  // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<struct FBlueprintSessionResult>             Sessions;                                                  // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	struct FString                                     SessionName;                                               // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay, HasGetValueTypeHash)
	struct FBlueprintSessionResult                     CurentLobbySession;                                        // 0x0178(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	struct FName                                       Param_Sessions_isMainMenuParName;                          // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Param_SessionsServerNameParName;                           // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Param_SessionsCurrentPlayersParName;                       // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(56010);
		return ptr;
	}



	void STATIC_LIDER_CheckLobbyReady(bool* IsReady);
	void STATIC_CheckLobbyID();
	void STATIC_LIDER_TryRemovePlayerFromLobby(const struct FString& OwnerID, bool* Ok);
	void STATIC_DisconectFromLobby();
	void STATIC_GetLobbyComponent(class APlayerState* PlayerState, class UCv4_LobbyComponent_C** LobbyComponent);
	void STATIC_LIDER_TryAddPlayerToLobby(class APlayerState** PlayerState, bool* Ok);
	void STATIC_GetMyLeader(class UCv4_LobbyComponent_C** LiderLobbyComponent, bool* Ok);
	void STATIC_SetMeLeader();
	void STATIC_OnFailure_BAAB83634858AF0AD6905AB945D979D8(TArray<struct FBlueprintSessionResult> Results);
	void STATIC_OnSuccess_BAAB83634858AF0AD6905AB945D979D8(TArray<struct FBlueprintSessionResult> Results);
	void STATIC_OnFailure_673E82B24B5F8BACACD83EB1ADB7E16C(TArray<struct FBlueprintSessionResult> Results);
	void STATIC_OnSuccess_673E82B24B5F8BACACD83EB1ADB7E16C(TArray<struct FBlueprintSessionResult> Results);
	void STATIC_CLIENT_UpdateLobby(int ID_Lobby, TEnumAsByte<Cv4_LoobyStatus_ECv4_LoobyStatus> StatusLobby, TArray<class APlayerState*> PlayersLobby, TArray<bool> IsReady);
	void STATIC_ServerLeaderUpdateAllLobby();
	void STATIC_CLIENT_ShowInviteYesNoWidget(const struct FString& LeaderID, int ID_Lobby);
	void STATIC_ClientInviteToLobby(int Lobby_ID);
	void STATIC_ServerSendLobbyInvite(const struct FString& TargetID, int ID_Lobby);
	void STATIC_ServerInviteToLobby(int ID_Lobby);
	void STATIC_ServerLeaveLobby();
	void STATIC_ClientLeaveLobby();
	void STATIC_ReceiveBeginPlay();
	void STATIC_SetOwnerID();
	void STATIC_ClientReady();
	void STATIC_SERVER_SetReady(bool IsReady);
	void STATIC_SERVER_LiderFoundSession(const struct FString& SessionName);
	void STATIC_CLIENT_SetSession(const struct FString& SessionName);
	void STATIC_TryGetAgain();
	void STATIC_CLIENT_LIDER_GetSessionForLobby();
	void STATIC_SearchAgain();
	void STATIC_SERVER_Lider_NO_FoundSession();
	void STATIC_CLIENT_StartConnetction();
	void STATIC_CLIENT_StopConnection();
	void STATIC_ExecuteUbergraph_Cv4_LobbyComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
