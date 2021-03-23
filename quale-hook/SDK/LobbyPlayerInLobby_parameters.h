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

// Function LobbyPlayerInLobby.LobbyPlayerInLobby_C.Set clear
struct ULobbyPlayerInLobby_C_Set_clear_Params
{
};

// Function LobbyPlayerInLobby.LobbyPlayerInLobby_C.Construct
struct ULobbyPlayerInLobby_C_Construct_Params
{
};

// Function LobbyPlayerInLobby.LobbyPlayerInLobby_C.Draw
struct ULobbyPlayerInLobby_C_Draw_Params
{
	struct FBPUniqueNetId                              UniqID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Is_ready;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyPlayerInLobby.LobbyPlayerInLobby_C.ExecuteUbergraph_LobbyPlayerInLobby
struct ULobbyPlayerInLobby_C_ExecuteUbergraph_LobbyPlayerInLobby_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
