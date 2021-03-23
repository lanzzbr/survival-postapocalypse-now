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

// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.LIDER_CheckLobbyReady
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsReady                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCv4_LobbyComponent_C::STATIC_LIDER_CheckLobbyReady(bool* IsReady)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56194);

	UCv4_LobbyComponent_C_LIDER_CheckLobbyReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsReady != nullptr)
		*IsReady = params.IsReady;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.CheckLobbyID
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv4_LobbyComponent_C::STATIC_CheckLobbyID()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56118);

	UCv4_LobbyComponent_C_CheckLobbyID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.LIDER_TryRemovePlayerFromLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 OwnerID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCv4_LobbyComponent_C::STATIC_LIDER_TryRemovePlayerFromLobby(const struct FString& OwnerID, bool* Ok)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56113);

	UCv4_LobbyComponent_C_LIDER_TryRemovePlayerFromLobby_Params params;
	params.OwnerID = OwnerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ok != nullptr)
		*Ok = params.Ok;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.DisconectFromLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv4_LobbyComponent_C::STATIC_DisconectFromLobby()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56067);

	UCv4_LobbyComponent_C_DisconectFromLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.GetLobbyComponent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCv4_LobbyComponent_C*   LobbyComponent                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv4_LobbyComponent_C::STATIC_GetLobbyComponent(class APlayerState* PlayerState, class UCv4_LobbyComponent_C** LobbyComponent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56065);

	UCv4_LobbyComponent_C_GetLobbyComponent_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LobbyComponent != nullptr)
		*LobbyComponent = params.LobbyComponent;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.LIDER_TryAddPlayerToLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCv4_LobbyComponent_C::STATIC_LIDER_TryAddPlayerToLobby(class APlayerState** PlayerState, bool* Ok)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56063);

	UCv4_LobbyComponent_C_LIDER_TryAddPlayerToLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerState != nullptr)
		*PlayerState = params.PlayerState;
	if (Ok != nullptr)
		*Ok = params.Ok;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.GetMyLeader
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UCv4_LobbyComponent_C*   LiderLobbyComponent            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCv4_LobbyComponent_C::STATIC_GetMyLeader(class UCv4_LobbyComponent_C** LiderLobbyComponent, bool* Ok)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56061);

	UCv4_LobbyComponent_C_GetMyLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LiderLobbyComponent != nullptr)
		*LiderLobbyComponent = params.LiderLobbyComponent;
	if (Ok != nullptr)
		*Ok = params.Ok;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.SetMeLeader
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv4_LobbyComponent_C::STATIC_SetMeLeader()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56059);

	UCv4_LobbyComponent_C_SetMeLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.OnFailure_BAAB83634858AF0AD6905AB945D979D8
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UCv4_LobbyComponent_C::STATIC_OnFailure_BAAB83634858AF0AD6905AB945D979D8(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56056);

	UCv4_LobbyComponent_C_OnFailure_BAAB83634858AF0AD6905AB945D979D8_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.OnSuccess_BAAB83634858AF0AD6905AB945D979D8
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UCv4_LobbyComponent_C::STATIC_OnSuccess_BAAB83634858AF0AD6905AB945D979D8(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56053);

	UCv4_LobbyComponent_C_OnSuccess_BAAB83634858AF0AD6905AB945D979D8_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.OnFailure_673E82B24B5F8BACACD83EB1ADB7E16C
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UCv4_LobbyComponent_C::STATIC_OnFailure_673E82B24B5F8BACACD83EB1ADB7E16C(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56050);

	UCv4_LobbyComponent_C_OnFailure_673E82B24B5F8BACACD83EB1ADB7E16C_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.OnSuccess_673E82B24B5F8BACACD83EB1ADB7E16C
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UCv4_LobbyComponent_C::STATIC_OnSuccess_673E82B24B5F8BACACD83EB1ADB7E16C(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56047);

	UCv4_LobbyComponent_C_OnSuccess_673E82B24B5F8BACACD83EB1ADB7E16C_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.CLIENT_UpdateLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            ID_Lobby                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Cv4_LoobyStatus_ECv4_LoobyStatus> StatusLobby                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APlayerState*>    PlayersLobby                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<bool>                   IsReady                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UCv4_LobbyComponent_C::STATIC_CLIENT_UpdateLobby(int ID_Lobby, TEnumAsByte<Cv4_LoobyStatus_ECv4_LoobyStatus> StatusLobby, TArray<class APlayerState*> PlayersLobby, TArray<bool> IsReady)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56041);

	UCv4_LobbyComponent_C_CLIENT_UpdateLobby_Params params;
	params.ID_Lobby = ID_Lobby;
	params.StatusLobby = StatusLobby;
	params.PlayersLobby = PlayersLobby;
	params.IsReady = IsReady;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.ServerLeaderUpdateAllLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv4_LobbyComponent_C::STATIC_ServerLeaderUpdateAllLobby()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56040);

	UCv4_LobbyComponent_C_ServerLeaderUpdateAllLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.CLIENT_ShowInviteYesNoWidget
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 LeaderID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            ID_Lobby                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv4_LobbyComponent_C::STATIC_CLIENT_ShowInviteYesNoWidget(const struct FString& LeaderID, int ID_Lobby)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56038);

	UCv4_LobbyComponent_C_CLIENT_ShowInviteYesNoWidget_Params params;
	params.LeaderID = LeaderID;
	params.ID_Lobby = ID_Lobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.ClientInviteToLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Lobby_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv4_LobbyComponent_C::STATIC_ClientInviteToLobby(int Lobby_ID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56036);

	UCv4_LobbyComponent_C_ClientInviteToLobby_Params params;
	params.Lobby_ID = Lobby_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.ServerSendLobbyInvite
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 TargetID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            ID_Lobby                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv4_LobbyComponent_C::STATIC_ServerSendLobbyInvite(const struct FString& TargetID, int ID_Lobby)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56034);

	UCv4_LobbyComponent_C_ServerSendLobbyInvite_Params params;
	params.TargetID = TargetID;
	params.ID_Lobby = ID_Lobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.ServerInviteToLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            ID_Lobby                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv4_LobbyComponent_C::STATIC_ServerInviteToLobby(int ID_Lobby)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56032);

	UCv4_LobbyComponent_C_ServerInviteToLobby_Params params;
	params.ID_Lobby = ID_Lobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.ServerLeaveLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv4_LobbyComponent_C::STATIC_ServerLeaveLobby()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56031);

	UCv4_LobbyComponent_C_ServerLeaveLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.ClientLeaveLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv4_LobbyComponent_C::STATIC_ClientLeaveLobby()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56030);

	UCv4_LobbyComponent_C_ClientLeaveLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv4_LobbyComponent_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56029);

	UCv4_LobbyComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.SetOwnerID
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv4_LobbyComponent_C::STATIC_SetOwnerID()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56028);

	UCv4_LobbyComponent_C_SetOwnerID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.ClientReady
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv4_LobbyComponent_C::STATIC_ClientReady()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56027);

	UCv4_LobbyComponent_C_ClientReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.SERVER_SetReady
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsReady                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCv4_LobbyComponent_C::STATIC_SERVER_SetReady(bool IsReady)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56025);

	UCv4_LobbyComponent_C_SERVER_SetReady_Params params;
	params.IsReady = IsReady;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.SERVER_LiderFoundSession
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 SessionName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UCv4_LobbyComponent_C::STATIC_SERVER_LiderFoundSession(const struct FString& SessionName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56023);

	UCv4_LobbyComponent_C_SERVER_LiderFoundSession_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.CLIENT_SetSession
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 SessionName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UCv4_LobbyComponent_C::STATIC_CLIENT_SetSession(const struct FString& SessionName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56021);

	UCv4_LobbyComponent_C_CLIENT_SetSession_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.TryGetAgain
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv4_LobbyComponent_C::STATIC_TryGetAgain()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56020);

	UCv4_LobbyComponent_C_TryGetAgain_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.CLIENT_LIDER_GetSessionForLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv4_LobbyComponent_C::STATIC_CLIENT_LIDER_GetSessionForLobby()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56019);

	UCv4_LobbyComponent_C_CLIENT_LIDER_GetSessionForLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.SearchAgain
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv4_LobbyComponent_C::STATIC_SearchAgain()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56018);

	UCv4_LobbyComponent_C_SearchAgain_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.SERVER_Lider_NO_FoundSession
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv4_LobbyComponent_C::STATIC_SERVER_Lider_NO_FoundSession()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56017);

	UCv4_LobbyComponent_C_SERVER_Lider_NO_FoundSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.CLIENT_StartConnetction
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv4_LobbyComponent_C::STATIC_CLIENT_StartConnetction()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56016);

	UCv4_LobbyComponent_C_CLIENT_StartConnetction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.CLIENT_StopConnection
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv4_LobbyComponent_C::STATIC_CLIENT_StopConnection()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56015);

	UCv4_LobbyComponent_C_CLIENT_StopConnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_LobbyComponent.Cv4_LobbyComponent_C.ExecuteUbergraph_Cv4_LobbyComponent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv4_LobbyComponent_C::STATIC_ExecuteUbergraph_Cv4_LobbyComponent(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56013);

	UCv4_LobbyComponent_C_ExecuteUbergraph_Cv4_LobbyComponent_Params params;
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
