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

// Function Surv_PlayerState.Surv_PlayerState_C.OnRep_Health
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerState_C::STATIC_OnRep_Health()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35659);

	ASurv_PlayerState_C_OnRep_Health_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.OnRep_PlayerMoney
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerState_C::STATIC_OnRep_PlayerMoney()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35657);

	ASurv_PlayerState_C_OnRep_PlayerMoney_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.LIDER_CheckLobbyReady
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsReady                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurv_PlayerState_C::STATIC_LIDER_CheckLobbyReady(bool* IsReady)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35643);

	ASurv_PlayerState_C_LIDER_CheckLobbyReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsReady != nullptr)
		*IsReady = params.IsReady;

}


// Function Surv_PlayerState.Surv_PlayerState_C.GetMyLider
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ASurv_PlayerState_C*     AsSurv_Player_State            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurv_PlayerState_C::STATIC_GetMyLider(class ASurv_PlayerState_C** AsSurv_Player_State, bool* Ok)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35630);

	ASurv_PlayerState_C_GetMyLider_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsSurv_Player_State != nullptr)
		*AsSurv_Player_State = params.AsSurv_Player_State;
	if (Ok != nullptr)
		*Ok = params.Ok;

}


// Function Surv_PlayerState.Surv_PlayerState_C.LIDER_TryRemovePlayerFromLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 Uniq                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurv_PlayerState_C::STATIC_LIDER_TryRemovePlayerFromLobby(const struct FString& Uniq, bool* Ok)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35628);

	ASurv_PlayerState_C_LIDER_TryRemovePlayerFromLobby_Params params;
	params.Uniq = Uniq;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ok != nullptr)
		*Ok = params.Ok;

}


// Function Surv_PlayerState.Surv_PlayerState_C.DisconectFromLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerState_C::STATIC_DisconectFromLobby()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35508);

	ASurv_PlayerState_C_DisconectFromLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.LIDER_TryAddPlayerToLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ASurv_PlayerState_C*     Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurv_PlayerState_C::STATIC_LIDER_TryAddPlayerToLobby(class ASurv_PlayerState_C* Player, bool* Ok)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35506);

	ASurv_PlayerState_C_LIDER_TryAddPlayerToLobby_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ok != nullptr)
		*Ok = params.Ok;

}


// Function Surv_PlayerState.Surv_PlayerState_C.SetMeLeader
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerState_C::STATIC_SetMeLeader()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35504);

	ASurv_PlayerState_C_SetMeLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerState_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35503);

	ASurv_PlayerState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.OnFailure_A48022AC4C6123D1F4E96EA3E5040D90
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ASurv_PlayerState_C::STATIC_OnFailure_A48022AC4C6123D1F4E96EA3E5040D90(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35500);

	ASurv_PlayerState_C_OnFailure_A48022AC4C6123D1F4E96EA3E5040D90_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.OnSuccess_A48022AC4C6123D1F4E96EA3E5040D90
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ASurv_PlayerState_C::STATIC_OnSuccess_A48022AC4C6123D1F4E96EA3E5040D90(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35497);

	ASurv_PlayerState_C_OnSuccess_A48022AC4C6123D1F4E96EA3E5040D90_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.OnFailure_AA4941F94822BA4E0FAB2E850ECAB16C
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ASurv_PlayerState_C::STATIC_OnFailure_AA4941F94822BA4E0FAB2E850ECAB16C(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35494);

	ASurv_PlayerState_C_OnFailure_AA4941F94822BA4E0FAB2E850ECAB16C_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.OnSuccess_AA4941F94822BA4E0FAB2E850ECAB16C
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ASurv_PlayerState_C::STATIC_OnSuccess_AA4941F94822BA4E0FAB2E850ECAB16C(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35491);

	ASurv_PlayerState_C_OnSuccess_AA4941F94822BA4E0FAB2E850ECAB16C_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerState_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35490);

	ASurv_PlayerState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.ServerToClientShowInviteYesNoWidget
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 LeaderID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            ID_Lobby                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurv_PlayerState_C::STATIC_ServerToClientShowInviteYesNoWidget(const struct FString& LeaderID, int ID_Lobby)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35488);

	ASurv_PlayerState_C_ServerToClientShowInviteYesNoWidget_Params params;
	params.LeaderID = LeaderID;
	params.ID_Lobby = ID_Lobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.ServerSendLobbyInvite
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 TargetID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            ID_Lobby                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurv_PlayerState_C::STATIC_ServerSendLobbyInvite(const struct FString& TargetID, int ID_Lobby)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35486);

	ASurv_PlayerState_C_ServerSendLobbyInvite_Params params;
	params.TargetID = TargetID;
	params.ID_Lobby = ID_Lobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.ServerInviteToLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            ID_Lobby                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurv_PlayerState_C::STATIC_ServerInviteToLobby(int ID_Lobby)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35484);

	ASurv_PlayerState_C_ServerInviteToLobby_Params params;
	params.ID_Lobby = ID_Lobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.ServerToClientUpdateLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            ID_Lobby                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Cv4_LoobyStatus_ECv4_LoobyStatus> StatusLobby                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ASurv_PlayerState_C*> PlayersLobby                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<bool>                   IsReady                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ASurv_PlayerState_C::STATIC_ServerToClientUpdateLobby(int ID_Lobby, TEnumAsByte<Cv4_LoobyStatus_ECv4_LoobyStatus> StatusLobby, TArray<class ASurv_PlayerState_C*> PlayersLobby, TArray<bool> IsReady)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35482);

	ASurv_PlayerState_C_ServerToClientUpdateLobby_Params params;
	params.ID_Lobby = ID_Lobby;
	params.StatusLobby = StatusLobby;
	params.PlayersLobby = PlayersLobby;
	params.IsReady = IsReady;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.ClientInviteToLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Lobby_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurv_PlayerState_C::STATIC_ClientInviteToLobby(int Lobby_ID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35480);

	ASurv_PlayerState_C_ClientInviteToLobby_Params params;
	params.Lobby_ID = Lobby_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.ServerLeaderUpdateAllLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerState_C::STATIC_ServerLeaderUpdateAllLobby()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35479);

	ASurv_PlayerState_C_ServerLeaderUpdateAllLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.ServerLeaveLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerState_C::STATIC_ServerLeaveLobby()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35478);

	ASurv_PlayerState_C_ServerLeaveLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.ClientLeaveLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerState_C::STATIC_ClientLeaveLobby()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35477);

	ASurv_PlayerState_C_ClientLeaveLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.ClientSendInviteToLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 TargetID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ASurv_PlayerState_C::STATIC_ClientSendInviteToLobby(const struct FString& TargetID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35475);

	ASurv_PlayerState_C_ClientSendInviteToLobby_Params params;
	params.TargetID = TargetID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.ClientReady
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerState_C::STATIC_ClientReady()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35474);

	ASurv_PlayerState_C_ClientReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.ServerSetReady
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsReady                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurv_PlayerState_C::STATIC_ServerSetReady(bool IsReady)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35472);

	ASurv_PlayerState_C_ServerSetReady_Params params;
	params.IsReady = IsReady;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.SetOwnerID
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerState_C::STATIC_SetOwnerID()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35471);

	ASurv_PlayerState_C_SetOwnerID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.SERVER_CnacelInviteFromClient
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 OwnerID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ASurv_PlayerState_C::STATIC_SERVER_CnacelInviteFromClient(const struct FString& OwnerID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35469);

	ASurv_PlayerState_C_SERVER_CnacelInviteFromClient_Params params;
	params.OwnerID = OwnerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.CLIENT_CancelInviteForLeader
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 OwnerID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ASurv_PlayerState_C::STATIC_CLIENT_CancelInviteForLeader(const struct FString& OwnerID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35467);

	ASurv_PlayerState_C_CLIENT_CancelInviteForLeader_Params params;
	params.OwnerID = OwnerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.CLIENT_LIDER_GetSessionForLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerState_C::STATIC_CLIENT_LIDER_GetSessionForLobby()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35466);

	ASurv_PlayerState_C_CLIENT_LIDER_GetSessionForLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.SearchAgain
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerState_C::STATIC_SearchAgain()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35465);

	ASurv_PlayerState_C_SearchAgain_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.CLIENT_StartConnetction
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerState_C::STATIC_CLIENT_StartConnetction()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35464);

	ASurv_PlayerState_C_CLIENT_StartConnetction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.CLIENT_StopConnection
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerState_C::STATIC_CLIENT_StopConnection()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35463);

	ASurv_PlayerState_C_CLIENT_StopConnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.CLIENT_SetSession
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 SessionName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ASurv_PlayerState_C::STATIC_CLIENT_SetSession(const struct FString& SessionName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35461);

	ASurv_PlayerState_C_CLIENT_SetSession_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.SERVER_LiderFoundSession
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 SessionName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ASurv_PlayerState_C::STATIC_SERVER_LiderFoundSession(const struct FString& SessionName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35459);

	ASurv_PlayerState_C_SERVER_LiderFoundSession_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.SERVER_Lider_NO_FoundSession
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerState_C::STATIC_SERVER_Lider_NO_FoundSession()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35458);

	ASurv_PlayerState_C_SERVER_Lider_NO_FoundSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.TryGetAgain
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerState_C::STATIC_TryGetAgain()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35457);

	ASurv_PlayerState_C_TryGetAgain_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.CheckLobbyID
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerState_C::STATIC_CheckLobbyID()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35456);

	ASurv_PlayerState_C_CheckLobbyID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerState.Surv_PlayerState_C.ExecuteUbergraph_Surv_PlayerState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurv_PlayerState_C::STATIC_ExecuteUbergraph_Surv_PlayerState(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35454);

	ASurv_PlayerState_C_ExecuteUbergraph_Surv_PlayerState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
