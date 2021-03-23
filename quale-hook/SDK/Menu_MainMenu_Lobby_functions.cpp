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

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.SaveInventoryCost
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_Lobby_C::STATIC_SaveInventoryCost()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78862);

	UMenu_MainMenu_Lobby_C_SaveInventoryCost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.AddStringToVerticcalBox
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UPanelWidget*            Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPFriendInfo           InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<GUI_FriendListPlayerState_EGUI_FriendListPlayerState> LobbyState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_MainMenu_Lobby_C::STATIC_AddStringToVerticcalBox(class UPanelWidget* Target, int Index, const struct FBPFriendInfo& InputPin, TEnumAsByte<GUI_FriendListPlayerState_EGUI_FriendListPlayerState> LobbyState)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78809);

	UMenu_MainMenu_Lobby_C_AddStringToVerticcalBox_Params params;
	params.Target = Target;
	params.Index = Index;
	params.InputPin = InputPin;
	params.LobbyState = LobbyState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.GetPlayerStringByUniq
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 Uniq                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class ULobbyPlayerString_C*    AsLobby_Player_String          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMenu_MainMenu_Lobby_C::STATIC_GetPlayerStringByUniq(const struct FString& Uniq, class ULobbyPlayerString_C** AsLobby_Player_String, bool* Ok)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78807);

	UMenu_MainMenu_Lobby_C_GetPlayerStringByUniq_Params params;
	params.Uniq = Uniq;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_Player_String != nullptr)
		*AsLobby_Player_String = params.AsLobby_Player_String;
	if (Ok != nullptr)
		*Ok = params.Ok;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.GetFriendByUniq
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 Uniq                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FBPFriendInfo           Array_Element                  (Parm, OutParm)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMenu_MainMenu_Lobby_C::STATIC_GetFriendByUniq(const struct FString& Uniq, struct FBPFriendInfo* Array_Element, bool* Ok)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78805);

	UMenu_MainMenu_Lobby_C_GetFriendByUniq_Params params;
	params.Uniq = Uniq;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array_Element != nullptr)
		*Array_Element = params.Array_Element;
	if (Ok != nullptr)
		*Ok = params.Ok;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.GetPlayerByUniq
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 Uniq                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class ASurv_PlayerState_C*     AsSurv_Player_State            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMenu_MainMenu_Lobby_C::STATIC_GetPlayerByUniq(const struct FString& Uniq, class ASurv_PlayerState_C** AsSurv_Player_State, bool* Ok)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78795);

	UMenu_MainMenu_Lobby_C_GetPlayerByUniq_Params params;
	params.Uniq = Uniq;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsSurv_Player_State != nullptr)
		*AsSurv_Player_State = params.AsSurv_Player_State;
	if (Ok != nullptr)
		*Ok = params.Ok;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.GetPlayerState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ASurv_PlayerState_C*     SurvPlState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_MainMenu_Lobby_C::STATIC_GetPlayerState(class ASurv_PlayerState_C** SurvPlState)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78793);

	UMenu_MainMenu_Lobby_C_GetPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SurvPlState != nullptr)
		*SurvPlState = params.SurvPlState;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.UpdateFriends
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_Lobby_C::STATIC_UpdateFriends()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78791);

	UMenu_MainMenu_Lobby_C_UpdateFriends_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.OnFailure_6C771462491759E53D667AAA8F29280B
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FBPFriendInfo>   Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UMenu_MainMenu_Lobby_C::STATIC_OnFailure_6C771462491759E53D667AAA8F29280B(TArray<struct FBPFriendInfo> Results)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78788);

	UMenu_MainMenu_Lobby_C_OnFailure_6C771462491759E53D667AAA8F29280B_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.OnSuccess_6C771462491759E53D667AAA8F29280B
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FBPFriendInfo>   Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UMenu_MainMenu_Lobby_C::STATIC_OnSuccess_6C771462491759E53D667AAA8F29280B(TArray<struct FBPFriendInfo> Results)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78785);

	UMenu_MainMenu_Lobby_C_OnSuccess_6C771462491759E53D667AAA8F29280B_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.OnFailure_C0F7A44040A1E13EE2F2D986BE3891E6
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UMenu_MainMenu_Lobby_C::STATIC_OnFailure_C0F7A44040A1E13EE2F2D986BE3891E6(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78782);

	UMenu_MainMenu_Lobby_C_OnFailure_C0F7A44040A1E13EE2F2D986BE3891E6_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.OnSuccess_C0F7A44040A1E13EE2F2D986BE3891E6
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UMenu_MainMenu_Lobby_C::STATIC_OnSuccess_C0F7A44040A1E13EE2F2D986BE3891E6(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78779);

	UMenu_MainMenu_Lobby_C_OnSuccess_C0F7A44040A1E13EE2F2D986BE3891E6_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.SetInLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           InLobby                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMenu_MainMenu_Lobby_C::STATIC_SetInLobby(bool InLobby)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78777);

	UMenu_MainMenu_Lobby_C_SetInLobby_Params params;
	params.InLobby = InLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.SearchAgain
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_Lobby_C::STATIC_SearchAgain()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78776);

	UMenu_MainMenu_Lobby_C_SearchAgain_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.BndEvt__LobbyConfirm_K2Node_ComponentBoundEvent_3_No__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_Lobby_C::STATIC_BndEvt__LobbyConfirm_K2Node_ComponentBoundEvent_3_No__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78775);

	UMenu_MainMenu_Lobby_C_BndEvt__LobbyConfirm_K2Node_ComponentBoundEvent_3_No__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.BndEvt__LobbyConfirm_K2Node_ComponentBoundEvent_2_Yes__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_Lobby_C::STATIC_BndEvt__LobbyConfirm_K2Node_ComponentBoundEvent_2_Yes__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78774);

	UMenu_MainMenu_Lobby_C_BndEvt__LobbyConfirm_K2Node_ComponentBoundEvent_2_Yes__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.UpdateFriendsArray
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_Lobby_C::STATIC_UpdateFriendsArray()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78773);

	UMenu_MainMenu_Lobby_C_UpdateFriendsArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.ShowConfirm
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 LeaderID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            LobbyID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_MainMenu_Lobby_C::STATIC_ShowConfirm(const struct FString& LeaderID, int LobbyID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78771);

	UMenu_MainMenu_Lobby_C_ShowConfirm_Params params;
	params.LeaderID = LeaderID;
	params.LobbyID = LobbyID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.BndEvt__CloseLobby_K2Node_ComponentBoundEvent_232_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_Lobby_C::STATIC_BndEvt__CloseLobby_K2Node_ComponentBoundEvent_232_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78770);

	UMenu_MainMenu_Lobby_C_BndEvt__CloseLobby_K2Node_ComponentBoundEvent_232_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.BndEvt__BUTTON_Play_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_Lobby_C::STATIC_BndEvt__BUTTON_Play_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78769);

	UMenu_MainMenu_Lobby_C_BndEvt__BUTTON_Play_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.CancelInviteIfLeader
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 OwnerID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UMenu_MainMenu_Lobby_C::STATIC_CancelInviteIfLeader(const struct FString& OwnerID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78767);

	UMenu_MainMenu_Lobby_C_CancelInviteIfLeader_Params params;
	params.OwnerID = OwnerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.UpdateLobbyInfo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_Lobby_C::STATIC_UpdateLobbyInfo()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78766);

	UMenu_MainMenu_Lobby_C_UpdateLobbyInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.Destruct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_Lobby_C::STATIC_Destruct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78765);

	UMenu_MainMenu_Lobby_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_Lobby_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78764);

	UMenu_MainMenu_Lobby_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.BndEvt__Button_GameMOde_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_Lobby_C::STATIC_BndEvt__Button_GameMOde_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78763);

	UMenu_MainMenu_Lobby_C_BndEvt__Button_GameMOde_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.BndEvt__BUTTON_Play_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_Lobby_C::STATIC_BndEvt__BUTTON_Play_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78762);

	UMenu_MainMenu_Lobby_C_BndEvt__BUTTON_Play_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.BndEvt__BUTTON_Play_K2Node_ComponentBoundEvent_135_OnButtonHoverEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_Lobby_C::STATIC_BndEvt__BUTTON_Play_K2Node_ComponentBoundEvent_135_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78761);

	UMenu_MainMenu_Lobby_C_BndEvt__BUTTON_Play_K2Node_ComponentBoundEvent_135_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.ExecuteUbergraph_Menu_MainMenu_Lobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_MainMenu_Lobby_C::STATIC_ExecuteUbergraph_Menu_MainMenu_Lobby(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78741);

	UMenu_MainMenu_Lobby_C_ExecuteUbergraph_Menu_MainMenu_Lobby_Params params;
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
