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

// BlueprintGeneratedClass Surv_PlayerState.Surv_PlayerState_C
// 0x0180 (FullSize[0x0578] - InheritedSize[0x03F8])
class ASurv_PlayerState_C : public APlayerState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03F8(0x0008) (Transient, DuplicateTransient)
	class UCv4_LobbyComponent_C*                       Cv4_LobbyComponent;                                        // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FString                                     OwnerID;                                                   // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                IDLobby;                                                   // 0x0420(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isLeaderLobby;                                             // 0x0424(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HDXR[0x3];                                     // 0x0425(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ASurv_PlayerState_C*>                 PlayersLobby;                                              // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsReady;                                                   // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<Cv4_LoobyStatus_ECv4_LoobyStatus>      StatusLobby;                                               // 0x0439(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OWPD[0x6];                                     // 0x043A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<bool>                                       proxyReady;                                                // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               LobbySessionFound;                                         // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1YQZ[0x7];                                     // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBlueprintSessionResult>             Sessions;                                                  // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FBlueprintSessionResult                     CurentLobbySession;                                        // 0x0468(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                TryCount;                                                  // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1A4D[0x4];                                     // 0x0524(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASurv_PlayerState_C*                         MyLiderRef;                                                // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     SessionName;                                               // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                LobbyCountPlayers;                                         // 0x0540(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerMoney;                                               // 0x0544(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int                                                Hunger;                                                    // 0x0548(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Thirsty;                                                   // 0x054C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Temperature;                                               // 0x0550(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Health;                                                    // 0x0554(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int                                                Surv_coins;                                                // 0x0558(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Ice_coins;                                                 // 0x055C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Record;                                                    // 0x0560(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RecordTime;                                                // 0x0564(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FZ_TransportLoot>                    ClassicalInventory;                                        // 0x0568(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(35449);
		return ptr;
	}



	void STATIC_OnRep_Health();
	void STATIC_OnRep_PlayerMoney();
	void STATIC_LIDER_CheckLobbyReady(bool* IsReady);
	void STATIC_GetMyLider(class ASurv_PlayerState_C** AsSurv_Player_State, bool* Ok);
	void STATIC_LIDER_TryRemovePlayerFromLobby(const struct FString& Uniq, bool* Ok);
	void STATIC_DisconectFromLobby();
	void STATIC_LIDER_TryAddPlayerToLobby(class ASurv_PlayerState_C* Player, bool* Ok);
	void STATIC_SetMeLeader();
	void STATIC_UserConstructionScript();
	void STATIC_OnFailure_A48022AC4C6123D1F4E96EA3E5040D90(TArray<struct FBlueprintSessionResult> Results);
	void STATIC_OnSuccess_A48022AC4C6123D1F4E96EA3E5040D90(TArray<struct FBlueprintSessionResult> Results);
	void STATIC_OnFailure_AA4941F94822BA4E0FAB2E850ECAB16C(TArray<struct FBlueprintSessionResult> Results);
	void STATIC_OnSuccess_AA4941F94822BA4E0FAB2E850ECAB16C(TArray<struct FBlueprintSessionResult> Results);
	void STATIC_ReceiveBeginPlay();
	void STATIC_ServerToClientShowInviteYesNoWidget(const struct FString& LeaderID, int ID_Lobby);
	void STATIC_ServerSendLobbyInvite(const struct FString& TargetID, int ID_Lobby);
	void STATIC_ServerInviteToLobby(int ID_Lobby);
	void STATIC_ServerToClientUpdateLobby(int ID_Lobby, TEnumAsByte<Cv4_LoobyStatus_ECv4_LoobyStatus> StatusLobby, TArray<class ASurv_PlayerState_C*> PlayersLobby, TArray<bool> IsReady);
	void STATIC_ClientInviteToLobby(int Lobby_ID);
	void STATIC_ServerLeaderUpdateAllLobby();
	void STATIC_ServerLeaveLobby();
	void STATIC_ClientLeaveLobby();
	void STATIC_ClientSendInviteToLobby(const struct FString& TargetID);
	void STATIC_ClientReady();
	void STATIC_ServerSetReady(bool IsReady);
	void STATIC_SetOwnerID();
	void STATIC_SERVER_CnacelInviteFromClient(const struct FString& OwnerID);
	void STATIC_CLIENT_CancelInviteForLeader(const struct FString& OwnerID);
	void STATIC_CLIENT_LIDER_GetSessionForLobby();
	void STATIC_SearchAgain();
	void STATIC_CLIENT_StartConnetction();
	void STATIC_CLIENT_StopConnection();
	void STATIC_CLIENT_SetSession(const struct FString& SessionName);
	void STATIC_SERVER_LiderFoundSession(const struct FString& SessionName);
	void STATIC_SERVER_Lider_NO_FoundSession();
	void STATIC_TryGetAgain();
	void STATIC_CheckLobbyID();
	void STATIC_ExecuteUbergraph_Surv_PlayerState(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
