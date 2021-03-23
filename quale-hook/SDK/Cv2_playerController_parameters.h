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

// Function Cv2_playerController.Cv2_playerController_C.CorrectCraftLocation
struct ACv2_playerController_C_CorrectCraftLocation_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Output_Get;                                                // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.ACControll
struct ACv2_playerController_C_ACControll_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.SetExitTime
struct ACv2_playerController_C_SetExitTime_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.GetLobbyExitZones
struct ACv2_playerController_C_GetLobbyExitZones_Params
{
	bool                                               isFinding;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.UpdateSaveStateTimer
struct ACv2_playerController_C_UpdateSaveStateTimer_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.CheckIsValidSaveState
struct ACv2_playerController_C_CheckIsValidSaveState_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.UpdateSaveState
struct ACv2_playerController_C_UpdateSaveState_Params
{
	bool                                               UpdateAndClear;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Banned;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv2_playerController.Cv2_playerController_C.ReturnSaveState
struct ACv2_playerController_C_ReturnSaveState_Params
{
	struct Fsurv_2019_FieldsStructure                  OutStruct;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.GetMyOfficers
struct ACv2_playerController_C_GetMyOfficers_Params
{
	TArray<struct FSelectSpawnOfficerStr>              OfficersStr;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Cv2_playerController.Cv2_playerController_C.SaveInventory
struct ACv2_playerController_C_SaveInventory_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.GetPlayerInfoFromStringId
struct ACv2_playerController_C_GetPlayerInfoFromStringId_Params
{
	TArray<struct FString>                             String;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FGameOverPlayerInfoStr>              InfoArray;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Cv2_playerController.Cv2_playerController_C.CheckHouseSpawn
struct ACv2_playerController_C_CheckHouseSpawn_Params
{
	class ACv2_ScenarioZone_C*                         ScenarioZone;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     FinalLocation;                                             // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.SetCrosshairType
struct ACv2_playerController_C_SetCrosshairType_Params
{
	TEnumAsByte<CrosshairTypes_ECrosshairTypes>        CrossHairType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.GetScenarioSpawnLocation
struct ACv2_playerController_C_GetScenarioSpawnLocation_Params
{
	class AActor*                                      ScenarioActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     SpawnLocation;                                             // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.CreateMenuSlots
struct ACv2_playerController_C_CreateMenuSlots_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.CreateCharacterBlockTimes
struct ACv2_playerController_C_CreateCharacterBlockTimes_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.UnCryptMesage
struct ACv2_playerController_C_UnCryptMesage_Params
{
	struct FText                                       Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsCrypt;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<GUI_UncryptType_EGUI_UncryptType>      CryptType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.CHAT_SendMessage
struct ACv2_playerController_C_CHAT_SendMessage_Params
{
	struct FGUI_ChatMessageStructure                   Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.GetMySteamFriends
struct ACv2_playerController_C_GetMySteamFriends_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.RespawnPlayer
struct ACv2_playerController_C_RespawnPlayer_Params
{
	TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterClass;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.DropLootServer
struct ACv2_playerController_C_DropLootServer_Params
{
	TArray<struct FCv2_LootCargoStructure>             LootCargo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Cv2_playerController.Cv2_playerController_C.RemoveFromLootServerOnly
struct ACv2_playerController_C_RemoveFromLootServerOnly_Params
{
	TArray<struct FCv2_LootCargoStructure>             RemovedLoot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Cv2_playerController.Cv2_playerController_C.AddToLootServerOnly
struct ACv2_playerController_C_AddToLootServerOnly_Params
{
	TArray<struct FCv2_LootCargoStructure>             Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FCv2_LootCargoStructure>             ReturnLoot;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Cv2_playerController.Cv2_playerController_C.UserConstructionScript
struct ACv2_playerController_C_UserConstructionScript_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_Enter_K2Node_InputKeyEvent_11
struct ACv2_playerController_C_InpActEvt_Enter_K2Node_InputKeyEvent_11_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_Escape_K2Node_InputKeyEvent_10
struct ACv2_playerController_C_InpActEvt_Escape_K2Node_InputKeyEvent_10_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_P_K2Node_InputKeyEvent_9
struct ACv2_playerController_C_InpActEvt_P_K2Node_InputKeyEvent_9_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_One_K2Node_InputKeyEvent_8
struct ACv2_playerController_C_InpActEvt_One_K2Node_InputKeyEvent_8_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_Two_K2Node_InputKeyEvent_7
struct ACv2_playerController_C_InpActEvt_Two_K2Node_InputKeyEvent_7_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_Three_K2Node_InputKeyEvent_6
struct ACv2_playerController_C_InpActEvt_Three_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_Four_K2Node_InputKeyEvent_5
struct ACv2_playerController_C_InpActEvt_Four_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_Inventory_K2Node_InputActionEvent_4
struct ACv2_playerController_C_InpActEvt_Inventory_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_Map_K2Node_InputActionEvent_3
struct ACv2_playerController_C_InpActEvt_Map_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_Heal_K2Node_InputActionEvent_2
struct ACv2_playerController_C_InpActEvt_Heal_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_DropWeapon_K2Node_InputActionEvent_1
struct ACv2_playerController_C_InpActEvt_DropWeapon_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_F1_K2Node_InputKeyEvent_4
struct ACv2_playerController_C_InpActEvt_F1_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_F2_K2Node_InputKeyEvent_3
struct ACv2_playerController_C_InpActEvt_F2_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_F3_K2Node_InputKeyEvent_2
struct ACv2_playerController_C_InpActEvt_F3_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_F4_K2Node_InputKeyEvent_1
struct ACv2_playerController_C_InpActEvt_F4_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.OnFailure_BE497B2B4AEE791EF7C9C1B266252EF2
struct ACv2_playerController_C_OnFailure_BE497B2B4AEE791EF7C9C1B266252EF2_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.OnSuccess_BE497B2B4AEE791EF7C9C1B266252EF2
struct ACv2_playerController_C_OnSuccess_BE497B2B4AEE791EF7C9C1B266252EF2_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.ReciveChatMessage
struct ACv2_playerController_C_ReciveChatMessage_Params
{
	struct FGUI_ChatMessageStructure                   ChatStruct;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.OpenChat
struct ACv2_playerController_C_OpenChat_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.ReceiveTick
struct ACv2_playerController_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.AddInventoryActor
struct ACv2_playerController_C_AddInventoryActor_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.ShowInventory
struct ACv2_playerController_C_ShowInventory_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.ClearInventoryActor
struct ACv2_playerController_C_ClearInventoryActor_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.ShowScoreMessage
struct ACv2_playerController_C_ShowScoreMessage_Params
{
	TEnumAsByte<GUI_ScoreMessageType_EGUI_ScoreMessageType> MessageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       MessageText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Cv2_playerController.Cv2_playerController_C.ServerCreateBuildingCraft
struct ACv2_playerController_C_ServerCreateBuildingCraft_Params
{
	TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> CraftEnum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Roll;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              YawAzimut;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Pitch;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CamLoc;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    CamRot;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function Cv2_playerController.Cv2_playerController_C.CraftingPlayer
struct ACv2_playerController_C_CraftingPlayer_Params
{
	TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> Craft;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.UpdateLootSlots
struct ACv2_playerController_C_UpdateLootSlots_Params
{
	TArray<struct FS_InventorySlot>                    LootSlotsArray;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Cv2_playerController.Cv2_playerController_C.UpdateLootArray
struct ACv2_playerController_C_UpdateLootArray_Params
{
	TArray<struct FS_InventorySlot>                    LootSlotsArray;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Cv2_playerController.Cv2_playerController_C.ShowKillerSheepMessage
struct ACv2_playerController_C_ShowKillerSheepMessage_Params
{
	struct FS_GUI_ShipKillerStrukt                     KillSheepStruct;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.SendKillSheepMessageToAll(Server)
struct ACv2_playerController_C_SendKillSheepMessageToAll_Server__Params
{
	struct FS_GUI_ShipKillerStrukt                     KillSheepStruct;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.ShowNumberScore
struct ACv2_playerController_C_ShowNumberScore_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Cv2_playerController.Cv2_playerController_C.ClientRespawnPlayer
struct ACv2_playerController_C_ClientRespawnPlayer_Params
{
	TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterClass;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.ShowScoreMessageToAll(from server)
struct ACv2_playerController_C_ShowScoreMessageToAll_from_server__Params
{
	TEnumAsByte<GUI_ScoreMessageType_EGUI_ScoreMessageType> MessageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       MessageText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Cv2_playerController.Cv2_playerController_C.Recive_CHAT_Message(Client)
struct ACv2_playerController_C_Recive_CHAT_Message_Client__Params
{
	struct FGUI_ChatMessageStructure                   Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.Send_CHAT_Message_run_On_Server
struct ACv2_playerController_C_Send_CHAT_Message_run_On_Server_Params
{
	struct FGUI_ChatMessageStructure                   ChatMessageStr;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               SendToAll;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv2_playerController.Cv2_playerController_C.ShowChatToAll
struct ACv2_playerController_C_ShowChatToAll_Params
{
	struct FText                                       TextChat;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Cv2_playerController.Cv2_playerController_C.CraftingClientOnly
struct ACv2_playerController_C_CraftingClientOnly_Params
{
	TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> Craft;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.SetCraftArray
struct ACv2_playerController_C_SetCraftArray_Params
{
	TEnumAsByte<Cv2_Nations_ECv2_Nations>              Nation;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.AddInventoryActorShort
struct ACv2_playerController_C_AddInventoryActorShort_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.CancelCraft
struct ACv2_playerController_C_CancelCraft_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.GetEnemyBaseCoords
struct ACv2_playerController_C_GetEnemyBaseCoords_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.Add_PointerWidget
struct ACv2_playerController_C_Add_PointerWidget_Params
{
	TEnumAsByte<GUI_Pointer_Type_EGUI_Pointer_Type>    POinterType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.SetRespawnActorClient
struct ACv2_playerController_C_SetRespawnActorClient_Params
{
	class AActor*                                      RespActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.SetRespawnActorServer
struct ACv2_playerController_C_SetRespawnActorServer_Params
{
	class AActor*                                      RespActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.PlayerSuicideClient
struct ACv2_playerController_C_PlayerSuicideClient_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.PlayerSuicideServer
struct ACv2_playerController_C_PlayerSuicideServer_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.ReceiveBeginPlay
struct ACv2_playerController_C_ReceiveBeginPlay_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.SpawnAdminPawnServer
struct ACv2_playerController_C_SpawnAdminPawnServer_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.AddResourceComplect
struct ACv2_playerController_C_AddResourceComplect_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.BanPlayer
struct ACv2_playerController_C_BanPlayer_Params
{
	class ACv2_playerController_C*                     Admin_Controller;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.KickPlayer
struct ACv2_playerController_C_KickPlayer_Params
{
	class ACv2_playerController_C*                     Admin_Controller;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.KickPlayerClient
struct ACv2_playerController_C_KickPlayerClient_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.ShowBanOnClient
struct ACv2_playerController_C_ShowBanOnClient_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.CheckBan
struct ACv2_playerController_C_CheckBan_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.Delete_Cheat_AddLoot
struct ACv2_playerController_C_Delete_Cheat_AddLoot_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.EnemyHitEvent
struct ACv2_playerController_C_EnemyHitEvent_Params
{
	bool                                               isHeadShoot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv2_playerController.Cv2_playerController_C.ShowBlood
struct ACv2_playerController_C_ShowBlood_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.PlaySoundMulticast
struct ACv2_playerController_C_PlaySoundMulticast_Params
{
	class USoundCue*                                   Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.ShowLevelUp
struct ACv2_playerController_C_ShowLevelUp_Params
{
	int                                                NewLevel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.ControllerINICIALIZEInventory
struct ACv2_playerController_C_ControllerINICIALIZEInventory_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.InicializeInventoryOnClient
struct ACv2_playerController_C_InicializeInventoryOnClient_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.ServerSendCommandTalkMessage
struct ACv2_playerController_C_ServerSendCommandTalkMessage_Params
{
	TEnumAsByte<Cv3_VoicesEnum_ECv3_VoicesEnum>        VoiceEnum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.ClientReciveCommandTalkMessage
struct ACv2_playerController_C_ClientReciveCommandTalkMessage_Params
{
	struct FGUI_ChatMessageStructure                   ChatStruct;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.DeleteTest1
struct ACv2_playerController_C_DeleteTest1_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.SERVER_GiveOfficers
struct ACv2_playerController_C_SERVER_GiveOfficers_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.CLIENT_GetOfficersFromServer
struct ACv2_playerController_C_CLIENT_GetOfficersFromServer_Params
{
	TArray<struct FSelectSpawnOfficerStr>              Officers;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Cv2_playerController.Cv2_playerController_C.ApplyDamageCreature
struct ACv2_playerController_C_ApplyDamageCreature_Params
{
	class APawn*                                       Pawn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.ClientExitToMainMenu
struct ACv2_playerController_C_ClientExitToMainMenu_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.ClientSpawnExitZone
struct ACv2_playerController_C_ClientSpawnExitZone_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.CLIENT_ShowRebootEvaquation
struct ACv2_playerController_C_CLIENT_ShowRebootEvaquation_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                SecondsToReboot;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.ClientToServerSetLobbyID
struct ACv2_playerController_C_ClientToServerSetLobbyID_Params
{
	int                                                LobbyID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                countPlayer;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.GetDBActorData
struct ACv2_playerController_C_GetDBActorData_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.SERVER_SET_AC_control
struct ACv2_playerController_C_SERVER_SET_AC_control_Params
{
	bool                                               AC_Ok;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv2_playerController.Cv2_playerController_C.ReceiveEndPlay
struct ACv2_playerController_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_playerController.Cv2_playerController_C.SERVER_ON_EXIT
struct ACv2_playerController_C_SERVER_ON_EXIT_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.CLIENT_On_ADD_SCORE
struct ACv2_playerController_C_CLIENT_On_ADD_SCORE_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.BndEvt__Cv4_DataBaseUpdateAndGet_K2Node_ComponentBoundEvent_0_OnAddScore__DelegateSignature
struct ACv2_playerController_C_BndEvt__Cv4_DataBaseUpdateAndGet_K2Node_ComponentBoundEvent_0_OnAddScore__DelegateSignature_Params
{
};

// Function Cv2_playerController.Cv2_playerController_C.ExecuteUbergraph_Cv2_playerController
struct ACv2_playerController_C_ExecuteUbergraph_Cv2_playerController_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
