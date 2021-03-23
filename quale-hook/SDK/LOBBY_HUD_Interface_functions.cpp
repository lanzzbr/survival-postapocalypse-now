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

// Function LOBBY_HUD_Interface.LOBBY_HUD_Interface_C.I_LOBBY_HUD_StopConnection
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ULOBBY_HUD_Interface_C::STATIC_I_LOBBY_HUD_StopConnection()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55993);

	ULOBBY_HUD_Interface_C_I_LOBBY_HUD_StopConnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LOBBY_HUD_Interface.LOBBY_HUD_Interface_C.I_LOBBY_HUD_StartConnection
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ULOBBY_HUD_Interface_C::STATIC_I_LOBBY_HUD_StartConnection()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55992);

	ULOBBY_HUD_Interface_C_I_LOBBY_HUD_StartConnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LOBBY_HUD_Interface.LOBBY_HUD_Interface_C.I_LOBBY_HUD_ShowConfirm
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 LeaderID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 LobbyInformation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ULOBBY_HUD_Interface_C::STATIC_I_LOBBY_HUD_ShowConfirm(const struct FString& LeaderID, const struct FString& LobbyInformation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55990);

	ULOBBY_HUD_Interface_C_I_LOBBY_HUD_ShowConfirm_Params params;
	params.LeaderID = LeaderID;
	params.LobbyInformation = LobbyInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LOBBY_HUD_Interface.LOBBY_HUD_Interface_C.I_LOBBY_HUD_UpdateLobbyInfo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ULOBBY_HUD_Interface_C::STATIC_I_LOBBY_HUD_UpdateLobbyInfo()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55989);

	ULOBBY_HUD_Interface_C_I_LOBBY_HUD_UpdateLobbyInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
