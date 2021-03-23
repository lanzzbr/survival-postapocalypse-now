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

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.LIDER_CheckLobbyReady
struct UCv4_LobbyComponent_C_LIDER_CheckLobbyReady_Params
{
	bool                                               IsReady;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.CheckLobbyID
struct UCv4_LobbyComponent_C_CheckLobbyID_Params
{
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.LIDER_TryRemovePlayerFromLobby
struct UCv4_LobbyComponent_C_LIDER_TryRemovePlayerFromLobby_Params
{
	struct FString                                     OwnerID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.DisconectFromLobby
struct UCv4_LobbyComponent_C_DisconectFromLobby_Params
{
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.GetLobbyComponent
struct UCv4_LobbyComponent_C_GetLobbyComponent_Params
{
	class APlayerState*                                PlayerState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCv4_LobbyComponent_C*                       LobbyComponent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.LIDER_TryAddPlayerToLobby
struct UCv4_LobbyComponent_C_LIDER_TryAddPlayerToLobby_Params
{
	class APlayerState*                                PlayerState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.GetMyLeader
struct UCv4_LobbyComponent_C_GetMyLeader_Params
{
	class UCv4_LobbyComponent_C*                       LiderLobbyComponent;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.SetMeLeader
struct UCv4_LobbyComponent_C_SetMeLeader_Params
{
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.OnFailure_BAAB83634858AF0AD6905AB945D979D8
struct UCv4_LobbyComponent_C_OnFailure_BAAB83634858AF0AD6905AB945D979D8_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.OnSuccess_BAAB83634858AF0AD6905AB945D979D8
struct UCv4_LobbyComponent_C_OnSuccess_BAAB83634858AF0AD6905AB945D979D8_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.OnFailure_673E82B24B5F8BACACD83EB1ADB7E16C
struct UCv4_LobbyComponent_C_OnFailure_673E82B24B5F8BACACD83EB1ADB7E16C_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.OnSuccess_673E82B24B5F8BACACD83EB1ADB7E16C
struct UCv4_LobbyComponent_C_OnSuccess_673E82B24B5F8BACACD83EB1ADB7E16C_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.CLIENT_UpdateLobby
struct UCv4_LobbyComponent_C_CLIENT_UpdateLobby_Params
{
	int                                                ID_Lobby;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv4_LoobyStatus_ECv4_LoobyStatus>      StatusLobby;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerState*>                        PlayersLobby;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<bool>                                       IsReady;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.ServerLeaderUpdateAllLobby
struct UCv4_LobbyComponent_C_ServerLeaderUpdateAllLobby_Params
{
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.CLIENT_ShowInviteYesNoWidget
struct UCv4_LobbyComponent_C_CLIENT_ShowInviteYesNoWidget_Params
{
	struct FString                                     LeaderID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                ID_Lobby;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.ClientInviteToLobby
struct UCv4_LobbyComponent_C_ClientInviteToLobby_Params
{
	int                                                Lobby_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.ServerSendLobbyInvite
struct UCv4_LobbyComponent_C_ServerSendLobbyInvite_Params
{
	struct FString                                     TargetID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                ID_Lobby;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.ServerInviteToLobby
struct UCv4_LobbyComponent_C_ServerInviteToLobby_Params
{
	int                                                ID_Lobby;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.ServerLeaveLobby
struct UCv4_LobbyComponent_C_ServerLeaveLobby_Params
{
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.ClientLeaveLobby
struct UCv4_LobbyComponent_C_ClientLeaveLobby_Params
{
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.ReceiveBeginPlay
struct UCv4_LobbyComponent_C_ReceiveBeginPlay_Params
{
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.SetOwnerID
struct UCv4_LobbyComponent_C_SetOwnerID_Params
{
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.ClientReady
struct UCv4_LobbyComponent_C_ClientReady_Params
{
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.SERVER_SetReady
struct UCv4_LobbyComponent_C_SERVER_SetReady_Params
{
	bool                                               IsReady;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.SERVER_LiderFoundSession
struct UCv4_LobbyComponent_C_SERVER_LiderFoundSession_Params
{
	struct FString                                     SessionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.CLIENT_SetSession
struct UCv4_LobbyComponent_C_CLIENT_SetSession_Params
{
	struct FString                                     SessionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.TryGetAgain
struct UCv4_LobbyComponent_C_TryGetAgain_Params
{
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.CLIENT_LIDER_GetSessionForLobby
struct UCv4_LobbyComponent_C_CLIENT_LIDER_GetSessionForLobby_Params
{
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.SearchAgain
struct UCv4_LobbyComponent_C_SearchAgain_Params
{
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.SERVER_Lider_NO_FoundSession
struct UCv4_LobbyComponent_C_SERVER_Lider_NO_FoundSession_Params
{
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.CLIENT_StartConnetction
struct UCv4_LobbyComponent_C_CLIENT_StartConnetction_Params
{
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.CLIENT_StopConnection
struct UCv4_LobbyComponent_C_CLIENT_StopConnection_Params
{
};

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.ExecuteUbergraph_Cv4_LobbyComponent
struct UCv4_LobbyComponent_C_ExecuteUbergraph_Cv4_LobbyComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
