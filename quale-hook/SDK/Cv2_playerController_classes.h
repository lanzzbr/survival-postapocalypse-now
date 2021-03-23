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

// BlueprintGeneratedClass Cv2_playerController.Cv2_playerController_C
// 0x03E8 (FullSize[0x0AB8] - InheritedSize[0x06D0])
class ACv2_playerController_C : public AFixPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06D0(0x0008) (Transient, DuplicateTransient)
	class UCv4_CheckRayCastComponent_C*                Cv4_CheckRayCastComponent;                                 // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCv4_DataBaseUpdateAndGet_C*                 Cv4_DataBaseUpdateAndGet;                                  // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVaRestFunctionsComponent_C*                 VaRestFunctionsComponent;                                  // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCraftComponent_C*                           CraftComponent;                                            // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UZ_InventoryComponent_C*                     PlayerInventory;                                           // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UZ_InventoryManager_C*                       Z_InventoryManager;                                        // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULootSystemComponent_C*                      LootSystemComponent;                                       // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               isDead;                                                    // 0x0710(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9ZY2[0x7];                                     // 0x0711(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACv2_CraftBuildingActor_C*                   CraftActor;                                                // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACv2_Character_C*                            PlayerActor;                                               // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isReadyBuild;                                              // 0x0728(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1GVM[0x7];                                     // 0x0729(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCv2_LootCargoStructure>             proxyLoot;                                                 // 0x0730(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> proxyCraft;                                                // 0x0740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Y0RW[0x3];                                     // 0x0741(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CraftLastAzimut;                                           // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EnemyBaseCoords;                                           // 0x0748(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LDQ6[0x4];                                     // 0x0754(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      RespawnSelectedActor;                                      // 0x0758(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings>> Crafting_Usa;                                              // 0x0760(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings>> Crafting_Germany;                                          // 0x0770(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings>> Crafting_Ussr;                                             // 0x0780(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings>> Crafting_Japan;                                            // 0x0790(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class APawn*                                       OldPlayerPawn;                                             // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       AdminPawn;                                                 // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isCheater;                                                 // 0x07B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IYSV[0x7];                                     // 0x07B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      CharacterBlockTimes;                                       // 0x07B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FZ_SlotStr>                          MenuSlots;                                                 // 0x07C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NoCraftDistance;                                           // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8JYQ[0x4];                                     // 0x07DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      fpsCountArray;                                             // 0x07E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings>> Crafting_Deserters;                                        // 0x07F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings>> Crafting_Survival;                                         // 0x0800(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             MyFriendsId;                                               // 0x0810(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     OwnerID;                                                   // 0x0820(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              VoiceCommandTimer;                                         // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AJMC[0x4];                                     // 0x0834(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings>> Crafting_GermanyWinter;                                    // 0x0838(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             proxyString;                                               // 0x0848(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     finalString;                                               // 0x0858(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FSelectSpawnOfficerStr>              Officers;                                                  // 0x0868(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMeshComponent*                      oldSkeletalMesh;                                           // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        OldStaticMesh;                                             // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFow_BOT_C*>                          MySoldiers;                                                // 0x0888(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      proxSpawnCraft;                                            // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCrossHair_C*                                CrossHair;                                                 // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABOT_CreatureBase_C*                         ProxyEnemyCreature;                                        // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EnterLocationTime;                                         // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TSQT[0x4];                                     // 0x08B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACv4_ExitZone_C*                             ExitZone;                                                  // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_Faces_ECv2_Faces>                  faceIdServer;                                              // 0x08C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JESK[0x3];                                     // 0x08C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ExitLocationProxy;                                         // 0x08C4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanSpawn;                                                  // 0x08D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MEHF[0x7];                                     // 0x08D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fsurv_2019_FieldsStructure                  LastStructure;                                             // 0x08D8(0x0198) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class ADataBaseActor_C*                            DataBaseStore;                                             // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ExitZoneEnabled;                                           // 0x0A78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZX4R[0x3];                                     // 0x0A79(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ServerLobbyID;                                             // 0x0A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               firstRespawn;                                              // 0x0A80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y0MP[0x3];                                     // 0x0A81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              lastPressE_Time;                                           // 0x0A84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWheeledVehicle*                             WheeldVehRayCast;                                          // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isShowRebootServerMessage;                                 // 0x0A90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ReturnSaveStateBool;                                       // 0x0A91(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ServerAdmin;                                               // 0x0A92(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7AF0[0x5];                                     // 0x0A93(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              TutorialIgnorActors;                                       // 0x0A98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              IgnoreCraftActors;                                         // 0x0AA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(59740);
		return ptr;
	}



	void STATIC_CorrectCraftLocation(const struct FVector& Location, struct FVector* Output_Get);
	void STATIC_ACControll();
	void STATIC_SetExitTime();
	void STATIC_GetLobbyExitZones(bool* isFinding, struct FVector* Location);
	void STATIC_UpdateSaveStateTimer();
	void STATIC_CheckIsValidSaveState();
	void STATIC_UpdateSaveState(bool UpdateAndClear, bool Banned);
	void STATIC_ReturnSaveState(const struct Fsurv_2019_FieldsStructure& OutStruct);
	void STATIC_GetMyOfficers(TArray<struct FSelectSpawnOfficerStr>* OfficersStr);
	void STATIC_SaveInventory();
	void STATIC_GetPlayerInfoFromStringId(TArray<struct FString>* String, TArray<struct FGameOverPlayerInfoStr>* InfoArray);
	void STATIC_CheckHouseSpawn(class ACv2_ScenarioZone_C* ScenarioZone, struct FVector* FinalLocation);
	void STATIC_SetCrosshairType(TEnumAsByte<CrosshairTypes_ECrosshairTypes> CrossHairType);
	void STATIC_GetScenarioSpawnLocation(class AActor* ScenarioActor, struct FVector* SpawnLocation);
	void STATIC_CreateMenuSlots();
	void STATIC_CreateCharacterBlockTimes();
	void STATIC_UnCryptMesage(const struct FText& Message, bool* IsCrypt, TEnumAsByte<GUI_UncryptType_EGUI_UncryptType>* CryptType);
	void STATIC_CHAT_SendMessage(const struct FGUI_ChatMessageStructure& Message);
	void STATIC_GetMySteamFriends();
	void STATIC_RespawnPlayer(TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterClass);
	void STATIC_DropLootServer(TArray<struct FCv2_LootCargoStructure>* LootCargo);
	void STATIC_RemoveFromLootServerOnly(TArray<struct FCv2_LootCargoStructure>* RemovedLoot);
	void STATIC_AddToLootServerOnly(TArray<struct FCv2_LootCargoStructure>* Loot, TArray<struct FCv2_LootCargoStructure>* ReturnLoot);
	void STATIC_UserConstructionScript();
	void STATIC_InpActEvt_Enter_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void STATIC_InpActEvt_Escape_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void STATIC_InpActEvt_P_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void STATIC_InpActEvt_One_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void STATIC_InpActEvt_Two_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void STATIC_InpActEvt_Three_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void STATIC_InpActEvt_Four_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void STATIC_InpActEvt_Inventory_K2Node_InputActionEvent_4(const struct FKey& Key);
	void STATIC_InpActEvt_Map_K2Node_InputActionEvent_3(const struct FKey& Key);
	void STATIC_InpActEvt_Heal_K2Node_InputActionEvent_2(const struct FKey& Key);
	void STATIC_InpActEvt_DropWeapon_K2Node_InputActionEvent_1(const struct FKey& Key);
	void STATIC_InpActEvt_F1_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void STATIC_InpActEvt_F2_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void STATIC_InpActEvt_F3_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void STATIC_InpActEvt_F4_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void STATIC_OnFailure_BE497B2B4AEE791EF7C9C1B266252EF2();
	void STATIC_OnSuccess_BE497B2B4AEE791EF7C9C1B266252EF2();
	void STATIC_ReciveChatMessage(const struct FGUI_ChatMessageStructure& ChatStruct);
	void STATIC_OpenChat();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_AddInventoryActor(class AActor* Actor);
	void STATIC_ShowInventory();
	void STATIC_ClearInventoryActor();
	void STATIC_ShowScoreMessage(TEnumAsByte<GUI_ScoreMessageType_EGUI_ScoreMessageType> MessageType, const struct FText& MessageText);
	void STATIC_ServerCreateBuildingCraft(TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> CraftEnum, float Roll, float YawAzimut, float Pitch, const struct FVector& CamLoc, const struct FRotator& CamRot);
	void STATIC_CraftingPlayer(TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> Craft);
	void STATIC_UpdateLootSlots(TArray<struct FS_InventorySlot> LootSlotsArray);
	void STATIC_UpdateLootArray(TArray<struct FS_InventorySlot>* LootSlotsArray);
	void STATIC_ShowKillerSheepMessage(const struct FS_GUI_ShipKillerStrukt& KillSheepStruct);
	void STATIC_SendKillSheepMessageToAll_Server_(const struct FS_GUI_ShipKillerStrukt& KillSheepStruct);
	void STATIC_ShowNumberScore(const struct FVector& Location, const struct FText& Text);
	void STATIC_ClientRespawnPlayer(TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterClass);
	void STATIC_ShowScoreMessageToAll_from_server_(TEnumAsByte<GUI_ScoreMessageType_EGUI_ScoreMessageType> MessageType, const struct FText& MessageText);
	void STATIC_Recive_CHAT_Message_Client_(const struct FGUI_ChatMessageStructure& Message);
	void STATIC_Send_CHAT_Message_run_On_Server(const struct FGUI_ChatMessageStructure& ChatMessageStr, bool SendToAll);
	void STATIC_ShowChatToAll(const struct FText& TextChat);
	void STATIC_CraftingClientOnly(TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> Craft);
	void STATIC_SetCraftArray(TEnumAsByte<Cv2_Nations_ECv2_Nations> Nation);
	void STATIC_AddInventoryActorShort(class AActor* Actor);
	void STATIC_CancelCraft();
	void STATIC_GetEnemyBaseCoords();
	void STATIC_Add_PointerWidget(TEnumAsByte<GUI_Pointer_Type_EGUI_Pointer_Type> POinterType, const struct FVector& Location);
	void STATIC_SetRespawnActorClient(class AActor* RespActor);
	void STATIC_SetRespawnActorServer(class AActor* RespActor);
	void STATIC_PlayerSuicideClient();
	void STATIC_PlayerSuicideServer();
	void STATIC_ReceiveBeginPlay();
	void STATIC_SpawnAdminPawnServer();
	void STATIC_AddResourceComplect();
	void STATIC_BanPlayer(class ACv2_playerController_C* Admin_Controller);
	void STATIC_KickPlayer(class ACv2_playerController_C* Admin_Controller);
	void STATIC_KickPlayerClient();
	void STATIC_ShowBanOnClient();
	void STATIC_CheckBan();
	void STATIC_Delete_Cheat_AddLoot();
	void STATIC_EnemyHitEvent(bool isHeadShoot);
	void STATIC_ShowBlood();
	void STATIC_PlaySoundMulticast(class USoundCue* Sound, const struct FVector& Location);
	void STATIC_ShowLevelUp(int NewLevel);
	void STATIC_ControllerINICIALIZEInventory();
	void STATIC_InicializeInventoryOnClient();
	void STATIC_ServerSendCommandTalkMessage(TEnumAsByte<Cv3_VoicesEnum_ECv3_VoicesEnum> VoiceEnum);
	void STATIC_ClientReciveCommandTalkMessage(const struct FGUI_ChatMessageStructure& ChatStruct);
	void STATIC_DeleteTest1();
	void STATIC_SERVER_GiveOfficers();
	void STATIC_CLIENT_GetOfficersFromServer(TArray<struct FSelectSpawnOfficerStr> Officers);
	void STATIC_ApplyDamageCreature(class APawn* Pawn, float Damage);
	void STATIC_ClientExitToMainMenu();
	void STATIC_ClientSpawnExitZone(const struct FVector& Location);
	void STATIC_CLIENT_ShowRebootEvaquation(const struct FText& Text, int SecondsToReboot);
	void STATIC_ClientToServerSetLobbyID(int LobbyID, int countPlayer);
	void STATIC_GetDBActorData();
	void STATIC_SERVER_SET_AC_control(bool AC_Ok);
	void STATIC_ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void STATIC_SERVER_ON_EXIT();
	void STATIC_CLIENT_On_ADD_SCORE();
	void STATIC_BndEvt__Cv4_DataBaseUpdateAndGet_K2Node_ComponentBoundEvent_0_OnAddScore__DelegateSignature();
	void STATIC_ExecuteUbergraph_Cv2_playerController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
