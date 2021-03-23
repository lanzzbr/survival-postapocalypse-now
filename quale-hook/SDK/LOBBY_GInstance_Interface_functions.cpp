// Name: ANUSGAME, Version: 4.18

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function LOBBY_GInstance_Interface.LOBBY_GInstance_Interface_C.I_LOBBY_GINST_ConnectToSession
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBlueprintSessionResult Session                        (BlueprintVisible, BlueprintReadOnly, Parm)
void ULOBBY_GInstance_Interface_C::STATIC_I_LOBBY_GINST_ConnectToSession(const struct FBlueprintSessionResult& Session)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56008);

	ULOBBY_GInstance_Interface_C_I_LOBBY_GINST_ConnectToSession_Params params;
	params.Session = Session;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LOBBY_GInstance_Interface.LOBBY_GInstance_Interface_C.I_LOBBY_GINST_GetLobyyFriends
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FString>         Friends                        (Parm, OutParm, ZeroConstructor)
void ULOBBY_GInstance_Interface_C::STATIC_I_LOBBY_GINST_GetLobyyFriends(TArray<struct FString>* Friends)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56005);

	ULOBBY_GInstance_Interface_C_I_LOBBY_GINST_GetLobyyFriends_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Friends != nullptr)
		*Friends = params.Friends;

}


// Function LOBBY_GInstance_Interface.LOBBY_GInstance_Interface_C.I_LOBBY_GINST_OnConnectionFail
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ULOBBY_GInstance_Interface_C::STATIC_I_LOBBY_GINST_OnConnectionFail()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56004);

	ULOBBY_GInstance_Interface_C_I_LOBBY_GINST_OnConnectionFail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LOBBY_GInstance_Interface.LOBBY_GInstance_Interface_C.I_LOBBY_GINST_SetPlayerCount
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            PlayerCount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULOBBY_GInstance_Interface_C::STATIC_I_LOBBY_GINST_SetPlayerCount(int PlayerCount)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56002);

	ULOBBY_GInstance_Interface_C_I_LOBBY_GINST_SetPlayerCount_Params params;
	params.PlayerCount = PlayerCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LOBBY_GInstance_Interface.LOBBY_GInstance_Interface_C.I_LOBBY_GINST_GetPlayersCount
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            PlayerCount                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULOBBY_GInstance_Interface_C::STATIC_I_LOBBY_GINST_GetPlayersCount(int* PlayerCount)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56000);

	ULOBBY_GInstance_Interface_C_I_LOBBY_GINST_GetPlayersCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerCount != nullptr)
		*PlayerCount = params.PlayerCount;

}


// Function LOBBY_GInstance_Interface.LOBBY_GInstance_Interface_C.I_LOBBY_GINST_SetLobbyID
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            LobbyID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULOBBY_GInstance_Interface_C::STATIC_I_LOBBY_GINST_SetLobbyID(int LobbyID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55998);

	ULOBBY_GInstance_Interface_C_I_LOBBY_GINST_SetLobbyID_Params params;
	params.LobbyID = LobbyID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LOBBY_GInstance_Interface.LOBBY_GInstance_Interface_C.I_LOBBY_GINST_GetLobbyID
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            LobbyID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULOBBY_GInstance_Interface_C::STATIC_I_LOBBY_GINST_GetLobbyID(int* LobbyID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55996);

	ULOBBY_GInstance_Interface_C_I_LOBBY_GINST_GetLobbyID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LobbyID != nullptr)
		*LobbyID = params.LobbyID;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
