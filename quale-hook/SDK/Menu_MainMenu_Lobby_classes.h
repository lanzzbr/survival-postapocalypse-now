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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C
// 0x016F (FullSize[0x0380] - InheritedSize[0x0211])
class UMenu_MainMenu_Lobby_C : public UMenu_InGame_Panel_ROOT_C
{
public:
	unsigned char                                      UnknownData_BP18[0x7];                                     // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0218(0x0008) (Transient, DuplicateTransient)
	class UButton*                                     Button_GameMOde;                                           // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     BUTTON_Play;                                               // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     CloseLobby;                                                // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ExpectText;                                                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_3;                                                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_4;                                                   // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_8;                                                   // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobbyConfirm_C*                             LobbyConfirm;                                              // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LobbyFon;                                                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobbyPlayerInLobby_C*                       LobbyPlayerInLobby0;                                       // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobbyPlayerInLobby_C*                       LobbyPlayerInLobby1;                                       // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobbyPlayerInLobby_C*                       LobbyPlayerInLobby2;                                       // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobbyPlayerInLobby_C*                       LobbyPlayerInLobby3;                                       // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobbyPlayerString_C*                        LobbyPlayerString;                                         // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobbyPlayerString_C*                        LobbyPlayerString_C_1;                                     // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobbyPlayerString_C*                        LobbyPlayerString_C_2;                                     // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                LobbyVerticalBoxOnBase;                                    // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                LobbyVerticalBoxOnLine;                                    // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      MM_ButtonFon;                                              // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      OnBaseLine;                                                // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  OnBaseText;                                                // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      OnlineLine;                                                // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  OnLineText;                                                // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Play;                                                      // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                TextVBOnBase;                                              // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                TextVBOnline;                                              // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                                Timer;                                                     // 0x0300(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<class ULobbyPlayerInLobby_C*>               PlayersInLobbyWidgets;                                     // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ASurv_PlayerState_C*                         PlState;                                                   // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InviteLobbyId;                                             // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInLobby;                                                 // 0x0324(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_078N[0x3];                                     // 0x0325(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBlueprintSessionResult>             Sessions;                                                  // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SearchesCount;                                             // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsConnect;                                                 // 0x033C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JCP0[0x3];                                     // 0x033D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBPFriendInfo>                       FriendsArray;                                              // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     LiderID;                                                   // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FString>                             Uniq_SendInvite_to;                                        // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                proxyLobby;                                                // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AMZS[0x4];                                     // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USurvMainMenuBase_C*                         MAIN_MENU_VAR;                                             // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(78738);
		return ptr;
	}



	void STATIC_SaveInventoryCost();
	void STATIC_AddStringToVerticcalBox(class UPanelWidget* Target, int Index, const struct FBPFriendInfo& InputPin, TEnumAsByte<GUI_FriendListPlayerState_EGUI_FriendListPlayerState> LobbyState);
	void STATIC_GetPlayerStringByUniq(const struct FString& Uniq, class ULobbyPlayerString_C** AsLobby_Player_String, bool* Ok);
	void STATIC_GetFriendByUniq(const struct FString& Uniq, struct FBPFriendInfo* Array_Element, bool* Ok);
	void STATIC_GetPlayerByUniq(const struct FString& Uniq, class ASurv_PlayerState_C** AsSurv_Player_State, bool* Ok);
	void STATIC_GetPlayerState(class ASurv_PlayerState_C** SurvPlState);
	void STATIC_UpdateFriends();
	void STATIC_OnFailure_6C771462491759E53D667AAA8F29280B(TArray<struct FBPFriendInfo> Results);
	void STATIC_OnSuccess_6C771462491759E53D667AAA8F29280B(TArray<struct FBPFriendInfo> Results);
	void STATIC_OnFailure_C0F7A44040A1E13EE2F2D986BE3891E6(TArray<struct FBlueprintSessionResult> Results);
	void STATIC_OnSuccess_C0F7A44040A1E13EE2F2D986BE3891E6(TArray<struct FBlueprintSessionResult> Results);
	void STATIC_SetInLobby(bool InLobby);
	void STATIC_SearchAgain();
	void STATIC_BndEvt__LobbyConfirm_K2Node_ComponentBoundEvent_3_No__DelegateSignature();
	void STATIC_BndEvt__LobbyConfirm_K2Node_ComponentBoundEvent_2_Yes__DelegateSignature();
	void STATIC_UpdateFriendsArray();
	void STATIC_ShowConfirm(const struct FString& LeaderID, int LobbyID);
	void STATIC_BndEvt__CloseLobby_K2Node_ComponentBoundEvent_232_OnButtonClickedEvent__DelegateSignature();
	void STATIC_BndEvt__BUTTON_Play_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void STATIC_CancelInviteIfLeader(const struct FString& OwnerID);
	void STATIC_UpdateLobbyInfo();
	void STATIC_Destruct();
	void STATIC_Construct();
	void STATIC_BndEvt__Button_GameMOde_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void STATIC_BndEvt__BUTTON_Play_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature();
	void STATIC_BndEvt__BUTTON_Play_K2Node_ComponentBoundEvent_135_OnButtonHoverEvent__DelegateSignature();
	void STATIC_ExecuteUbergraph_Menu_MainMenu_Lobby(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
