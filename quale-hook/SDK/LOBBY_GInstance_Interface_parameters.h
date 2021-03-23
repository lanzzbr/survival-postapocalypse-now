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

// Function LOBBY_GInstance_Interface.LOBBY_GInstance_Interface_C.I_LOBBY_GINST_ConnectToSession
struct ULOBBY_GInstance_Interface_C_I_LOBBY_GINST_ConnectToSession_Params
{
	struct FBlueprintSessionResult                     Session;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LOBBY_GInstance_Interface.LOBBY_GInstance_Interface_C.I_LOBBY_GINST_GetLobyyFriends
struct ULOBBY_GInstance_Interface_C_I_LOBBY_GINST_GetLobyyFriends_Params
{
	TArray<struct FString>                             Friends;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function LOBBY_GInstance_Interface.LOBBY_GInstance_Interface_C.I_LOBBY_GINST_OnConnectionFail
struct ULOBBY_GInstance_Interface_C_I_LOBBY_GINST_OnConnectionFail_Params
{
};

// Function LOBBY_GInstance_Interface.LOBBY_GInstance_Interface_C.I_LOBBY_GINST_SetPlayerCount
struct ULOBBY_GInstance_Interface_C_I_LOBBY_GINST_SetPlayerCount_Params
{
	int                                                PlayerCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LOBBY_GInstance_Interface.LOBBY_GInstance_Interface_C.I_LOBBY_GINST_GetPlayersCount
struct ULOBBY_GInstance_Interface_C_I_LOBBY_GINST_GetPlayersCount_Params
{
	int                                                PlayerCount;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LOBBY_GInstance_Interface.LOBBY_GInstance_Interface_C.I_LOBBY_GINST_SetLobbyID
struct ULOBBY_GInstance_Interface_C_I_LOBBY_GINST_SetLobbyID_Params
{
	int                                                LobbyID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LOBBY_GInstance_Interface.LOBBY_GInstance_Interface_C.I_LOBBY_GINST_GetLobbyID
struct ULOBBY_GInstance_Interface_C_I_LOBBY_GINST_GetLobbyID_Params
{
	int                                                LobbyID;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
