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

// Function LOBBY_HUD_Interface.LOBBY_HUD_Interface_C.I_LOBBY_HUD_StopConnection
struct ULOBBY_HUD_Interface_C_I_LOBBY_HUD_StopConnection_Params
{
};

// Function LOBBY_HUD_Interface.LOBBY_HUD_Interface_C.I_LOBBY_HUD_StartConnection
struct ULOBBY_HUD_Interface_C_I_LOBBY_HUD_StartConnection_Params
{
};

// Function LOBBY_HUD_Interface.LOBBY_HUD_Interface_C.I_LOBBY_HUD_ShowConfirm
struct ULOBBY_HUD_Interface_C_I_LOBBY_HUD_ShowConfirm_Params
{
	struct FString                                     LeaderID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     LobbyInformation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LOBBY_HUD_Interface.LOBBY_HUD_Interface_C.I_LOBBY_HUD_UpdateLobbyInfo
struct ULOBBY_HUD_Interface_C_I_LOBBY_HUD_UpdateLobbyInfo_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
