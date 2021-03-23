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

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.SaveInventoryCost
struct UMenu_MainMenu_Lobby_C_SaveInventoryCost_Params
{
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.AddStringToVerticcalBox
struct UMenu_MainMenu_Lobby_C_AddStringToVerticcalBox_Params
{
	class UPanelWidget*                                Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBPFriendInfo                               InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<GUI_FriendListPlayerState_EGUI_FriendListPlayerState> LobbyState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.GetPlayerStringByUniq
struct UMenu_MainMenu_Lobby_C_GetPlayerStringByUniq_Params
{
	struct FString                                     Uniq;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class ULobbyPlayerString_C*                        AsLobby_Player_String;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.GetFriendByUniq
struct UMenu_MainMenu_Lobby_C_GetFriendByUniq_Params
{
	struct FString                                     Uniq;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FBPFriendInfo                               Array_Element;                                             // (Parm, OutParm)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.GetPlayerByUniq
struct UMenu_MainMenu_Lobby_C_GetPlayerByUniq_Params
{
	struct FString                                     Uniq;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class ASurv_PlayerState_C*                         AsSurv_Player_State;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.GetPlayerState
struct UMenu_MainMenu_Lobby_C_GetPlayerState_Params
{
	class ASurv_PlayerState_C*                         SurvPlState;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.UpdateFriends
struct UMenu_MainMenu_Lobby_C_UpdateFriends_Params
{
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.OnFailure_6C771462491759E53D667AAA8F29280B
struct UMenu_MainMenu_Lobby_C_OnFailure_6C771462491759E53D667AAA8F29280B_Params
{
	TArray<struct FBPFriendInfo>                       Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.OnSuccess_6C771462491759E53D667AAA8F29280B
struct UMenu_MainMenu_Lobby_C_OnSuccess_6C771462491759E53D667AAA8F29280B_Params
{
	TArray<struct FBPFriendInfo>                       Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.OnFailure_C0F7A44040A1E13EE2F2D986BE3891E6
struct UMenu_MainMenu_Lobby_C_OnFailure_C0F7A44040A1E13EE2F2D986BE3891E6_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.OnSuccess_C0F7A44040A1E13EE2F2D986BE3891E6
struct UMenu_MainMenu_Lobby_C_OnSuccess_C0F7A44040A1E13EE2F2D986BE3891E6_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.SetInLobby
struct UMenu_MainMenu_Lobby_C_SetInLobby_Params
{
	bool                                               InLobby;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.SearchAgain
struct UMenu_MainMenu_Lobby_C_SearchAgain_Params
{
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.BndEvt__LobbyConfirm_K2Node_ComponentBoundEvent_3_No__DelegateSignature
struct UMenu_MainMenu_Lobby_C_BndEvt__LobbyConfirm_K2Node_ComponentBoundEvent_3_No__DelegateSignature_Params
{
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.BndEvt__LobbyConfirm_K2Node_ComponentBoundEvent_2_Yes__DelegateSignature
struct UMenu_MainMenu_Lobby_C_BndEvt__LobbyConfirm_K2Node_ComponentBoundEvent_2_Yes__DelegateSignature_Params
{
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.UpdateFriendsArray
struct UMenu_MainMenu_Lobby_C_UpdateFriendsArray_Params
{
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.ShowConfirm
struct UMenu_MainMenu_Lobby_C_ShowConfirm_Params
{
	struct FString                                     LeaderID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                LobbyID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.BndEvt__CloseLobby_K2Node_ComponentBoundEvent_232_OnButtonClickedEvent__DelegateSignature
struct UMenu_MainMenu_Lobby_C_BndEvt__CloseLobby_K2Node_ComponentBoundEvent_232_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.BndEvt__BUTTON_Play_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UMenu_MainMenu_Lobby_C_BndEvt__BUTTON_Play_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.CancelInviteIfLeader
struct UMenu_MainMenu_Lobby_C_CancelInviteIfLeader_Params
{
	struct FString                                     OwnerID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.UpdateLobbyInfo
struct UMenu_MainMenu_Lobby_C_UpdateLobbyInfo_Params
{
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.Destruct
struct UMenu_MainMenu_Lobby_C_Destruct_Params
{
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.Construct
struct UMenu_MainMenu_Lobby_C_Construct_Params
{
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.BndEvt__Button_GameMOde_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UMenu_MainMenu_Lobby_C_BndEvt__Button_GameMOde_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.BndEvt__BUTTON_Play_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature
struct UMenu_MainMenu_Lobby_C_BndEvt__BUTTON_Play_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.BndEvt__BUTTON_Play_K2Node_ComponentBoundEvent_135_OnButtonHoverEvent__DelegateSignature
struct UMenu_MainMenu_Lobby_C_BndEvt__BUTTON_Play_K2Node_ComponentBoundEvent_135_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C.ExecuteUbergraph_Menu_MainMenu_Lobby
struct UMenu_MainMenu_Lobby_C_ExecuteUbergraph_Menu_MainMenu_Lobby_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
