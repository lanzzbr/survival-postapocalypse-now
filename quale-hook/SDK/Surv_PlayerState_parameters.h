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
// Parameters
//---------------------------------------------------------------------------

// Function Surv_PlayerState.Surv_PlayerState_C.OnRep_Health
struct ASurv_PlayerState_C_OnRep_Health_Params
{
};

// Function Surv_PlayerState.Surv_PlayerState_C.OnRep_PlayerMoney
struct ASurv_PlayerState_C_OnRep_PlayerMoney_Params
{
};

// Function Surv_PlayerState.Surv_PlayerState_C.LIDER_CheckLobbyReady
struct ASurv_PlayerState_C_LIDER_CheckLobbyReady_Params
{
	bool                                               IsReady;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Surv_PlayerState.Surv_PlayerState_C.GetMyLider
struct ASurv_PlayerState_C_GetMyLider_Params
{
	class ASurv_PlayerState_C*                         AsSurv_Player_State;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Surv_PlayerState.Surv_PlayerState_C.LIDER_TryRemovePlayerFromLobby
struct ASurv_PlayerState_C_LIDER_TryRemovePlayerFromLobby_Params
{
	struct FString                                     Uniq;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Surv_PlayerState.Surv_PlayerState_C.DisconectFromLobby
struct ASurv_PlayerState_C_DisconectFromLobby_Params
{
};

// Function Surv_PlayerState.Surv_PlayerState_C.LIDER_TryAddPlayerToLobby
struct ASurv_PlayerState_C_LIDER_TryAddPlayerToLobby_Params
{
	class ASurv_PlayerState_C*                         Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Surv_PlayerState.Surv_PlayerState_C.SetMeLeader
struct ASurv_PlayerState_C_SetMeLeader_Params
{
};

// Function Surv_PlayerState.Surv_PlayerState_C.UserConstructionScript
struct ASurv_PlayerState_C_UserConstructionScript_Params
{
};

// Function Surv_PlayerState.Surv_PlayerState_C.OnFailure_A48022AC4C6123D1F4E96EA3E5040D90
struct ASurv_PlayerState_C_OnFailure_A48022AC4C6123D1F4E96EA3E5040D90_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Surv_PlayerState.Surv_PlayerState_C.OnSuccess_A48022AC4C6123D1F4E96EA3E5040D90
struct ASurv_PlayerState_C_OnSuccess_A48022AC4C6123D1F4E96EA3E5040D90_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Surv_PlayerState.Surv_PlayerState_C.OnFailure_AA4941F94822BA4E0FAB2E850ECAB16C
struct ASurv_PlayerState_C_OnFailure_AA4941F94822BA4E0FAB2E850ECAB16C_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Surv_PlayerState.Surv_PlayerState_C.OnSuccess_AA4941F94822BA4E0FAB2E850ECAB16C
struct ASurv_PlayerState_C_OnSuccess_AA4941F94822BA4E0FAB2E850ECAB16C_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Surv_PlayerState.Surv_PlayerState_C.ReceiveBeginPlay
struct ASurv_PlayerState_C_ReceiveBeginPlay_Params
{
};

// Function Surv_PlayerState.Surv_PlayerState_C.ServerToClientShowInviteYesNoWidget
struct ASurv_PlayerState_C_ServerToClientShowInviteYesNoWidget_Params
{
	struct FString                                     LeaderID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                ID_Lobby;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Surv_PlayerState.Surv_PlayerState_C.ServerSendLobbyInvite
struct ASurv_PlayerState_C_ServerSendLobbyInvite_Params
{
	struct FString                                     TargetID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                ID_Lobby;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Surv_PlayerState.Surv_PlayerState_C.ServerInviteToLobby
struct ASurv_PlayerState_C_ServerInviteToLobby_Params
{
	int                                                ID_Lobby;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Surv_PlayerState.Surv_PlayerState_C.ServerToClientUpdateLobby
struct ASurv_PlayerState_C_ServerToClientUpdateLobby_Params
{
	int                                                ID_Lobby;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv4_LoobyStatus_ECv4_LoobyStatus>      StatusLobby;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ASurv_PlayerState_C*>                 PlayersLobby;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<bool>                                       IsReady;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Surv_PlayerState.Surv_PlayerState_C.ClientInviteToLobby
struct ASurv_PlayerState_C_ClientInviteToLobby_Params
{
	int                                                Lobby_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Surv_PlayerState.Surv_PlayerState_C.ServerLeaderUpdateAllLobby
struct ASurv_PlayerState_C_ServerLeaderUpdateAllLobby_Params
{
};

// Function Surv_PlayerState.Surv_PlayerState_C.ServerLeaveLobby
struct ASurv_PlayerState_C_ServerLeaveLobby_Params
{
};

// Function Surv_PlayerState.Surv_PlayerState_C.ClientLeaveLobby
struct ASurv_PlayerState_C_ClientLeaveLobby_Params
{
};

// Function Surv_PlayerState.Surv_PlayerState_C.ClientSendInviteToLobby
struct ASurv_PlayerState_C_ClientSendInviteToLobby_Params
{
	struct FString                                     TargetID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Surv_PlayerState.Surv_PlayerState_C.ClientReady
struct ASurv_PlayerState_C_ClientReady_Params
{
};

// Function Surv_PlayerState.Surv_PlayerState_C.ServerSetReady
struct ASurv_PlayerState_C_ServerSetReady_Params
{
	bool                                               IsReady;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Surv_PlayerState.Surv_PlayerState_C.SetOwnerID
struct ASurv_PlayerState_C_SetOwnerID_Params
{
};

// Function Surv_PlayerState.Surv_PlayerState_C.SERVER_CnacelInviteFromClient
struct ASurv_PlayerState_C_SERVER_CnacelInviteFromClient_Params
{
	struct FString                                     OwnerID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Surv_PlayerState.Surv_PlayerState_C.CLIENT_CancelInviteForLeader
struct ASurv_PlayerState_C_CLIENT_CancelInviteForLeader_Params
{
	struct FString                                     OwnerID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Surv_PlayerState.Surv_PlayerState_C.CLIENT_LIDER_GetSessionForLobby
struct ASurv_PlayerState_C_CLIENT_LIDER_GetSessionForLobby_Params
{
};

// Function Surv_PlayerState.Surv_PlayerState_C.SearchAgain
struct ASurv_PlayerState_C_SearchAgain_Params
{
};

// Function Surv_PlayerState.Surv_PlayerState_C.CLIENT_StartConnetction
struct ASurv_PlayerState_C_CLIENT_StartConnetction_Params
{
};

// Function Surv_PlayerState.Surv_PlayerState_C.CLIENT_StopConnection
struct ASurv_PlayerState_C_CLIENT_StopConnection_Params
{
};

// Function Surv_PlayerState.Surv_PlayerState_C.CLIENT_SetSession
struct ASurv_PlayerState_C_CLIENT_SetSession_Params
{
	struct FString                                     SessionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Surv_PlayerState.Surv_PlayerState_C.SERVER_LiderFoundSession
struct ASurv_PlayerState_C_SERVER_LiderFoundSession_Params
{
	struct FString                                     SessionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Surv_PlayerState.Surv_PlayerState_C.SERVER_Lider_NO_FoundSession
struct ASurv_PlayerState_C_SERVER_Lider_NO_FoundSession_Params
{
};

// Function Surv_PlayerState.Surv_PlayerState_C.TryGetAgain
struct ASurv_PlayerState_C_TryGetAgain_Params
{
};

// Function Surv_PlayerState.Surv_PlayerState_C.CheckLobbyID
struct ASurv_PlayerState_C_CheckLobbyID_Params
{
};

// Function Surv_PlayerState.Surv_PlayerState_C.ExecuteUbergraph_Surv_PlayerState
struct ASurv_PlayerState_C_ExecuteUbergraph_Surv_PlayerState_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
