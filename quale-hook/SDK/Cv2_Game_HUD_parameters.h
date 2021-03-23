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

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_CONTROLLER_GetSlots
struct ACv2_Game_HUD_C_ZL_CONTROLLER_GetSlots_Params
{
	TArray<struct FZ_SlotStr>                          Slots;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.CloseFurnitureIfNeed
struct ACv2_Game_HUD_C_CloseFurnitureIfNeed_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.LootInfoTune
struct ACv2_Game_HUD_C_LootInfoTune_Params
{
	TEnumAsByte<Cv2_MoveTypeEnum_ECv2_MoveTypeEnum>    MoveType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.GetCharacterTimeFormArray
struct ACv2_Game_HUD_C_GetCharacterTimeFormArray_Params
{
	TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterEnum;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Output;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.CheckMenuSlotsCreate
struct ACv2_Game_HUD_C_CheckMenuSlotsCreate_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.SetAmmoStructures
struct ACv2_Game_HUD_C_SetAmmoStructures_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.GetCharacterBlocktime
struct ACv2_Game_HUD_C_GetCharacterBlocktime_Params
{
	TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterEnum;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlockTime;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.Print settings
struct ACv2_Game_HUD_C_Print_settings_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.RespawnPlayer
struct ACv2_Game_HUD_C_RespawnPlayer_Params
{
	TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterClass;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.CreateCharacterBlockTimes
struct ACv2_Game_HUD_C_CreateCharacterBlockTimes_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.GetLandscapePivotActor
struct ACv2_Game_HUD_C_GetLandscapePivotActor_Params
{
	TArray<class AActor*>                              Actors;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.CloseMainWidgets
struct ACv2_Game_HUD_C_CloseMainWidgets_Params
{
	bool                                               WidgetsWasClosed;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ResetProcedures
struct ACv2_Game_HUD_C_ResetProcedures_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.CheckBlockChatShow
struct ACv2_Game_HUD_C_CheckBlockChatShow_Params
{
	bool                                               BlockChat;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ClearViewport
struct ACv2_Game_HUD_C_ClearViewport_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.GetLandscapeSize
struct ACv2_Game_HUD_C_GetLandscapeSize_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.SpawnRamdomClass
struct ACv2_Game_HUD_C_SpawnRamdomClass_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.SetInputGameMode
struct ACv2_Game_HUD_C_SetInputGameMode_Params
{
	bool                                               FindMode_IfRemoveWidget;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInputModeStructure                         InputMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.UserConstructionScript
struct ACv2_Game_HUD_C_UserConstructionScript_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.AnimateStep__FinishedFunc
struct ACv2_Game_HUD_C_AnimateStep__FinishedFunc_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.AnimateStep__UpdateFunc
struct ACv2_Game_HUD_C_AnimateStep__UpdateFunc_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_SLOT_Hovered
struct ACv2_Game_HUD_C_ZL_GUI_SLOT_Hovered_Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_SLOT_Unhovered
struct ACv2_Game_HUD_C_ZL_GUI_SLOT_Unhovered_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_CHARACTER_AttachToWeapon(Server)
struct ACv2_Game_HUD_C_ZL_CHARACTER_AttachToWeapon_Server__Params
{
	TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes>        Scopes;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer>    Silencer;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_DrawLootNear
struct ACv2_Game_HUD_C_ZL_GUI_DrawLootNear_Params
{
	TArray<struct FZ_LootStr>                          Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_CHARACTER_UNAttach(Server)
struct ACv2_Game_HUD_C_ZL_CHARACTER_UNAttach_Server__Params
{
	struct FName                                       Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_Overload
struct ACv2_Game_HUD_C_ZL_GUI_Overload_Params
{
	float                                              OverloadMass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ReciveChatMessage
struct ACv2_Game_HUD_C_ReciveChatMessage_Params
{
	struct FGUI_ChatMessageStructure                   ChatStruct;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.OpenChat
struct ACv2_Game_HUD_C_OpenChat_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.Show Inventory Widget
struct ACv2_Game_HUD_C_Show_Inventory_Widget_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.Hide Inventory Widget
struct ACv2_Game_HUD_C_Hide_Inventory_Widget_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_CHARACTER_Unequip(Serever)
struct ACv2_Game_HUD_C_ZL_CHARACTER_Unequip_Serever__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowChooseOfSide
struct ACv2_Game_HUD_C_ShowChooseOfSide_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.HideChooseOfSide
struct ACv2_Game_HUD_C_HideChooseOfSide_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_CHARACTER_USEThis(Server)
struct ACv2_Game_HUD_C_ZL_CHARACTER_USEThis_Server__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_CHARACTER_DropThis(Server)
struct ACv2_Game_HUD_C_ZL_CHARACTER_DropThis_Server__Params
{
	struct FZ_LootStr                                  LootStr;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.Show_MainChatWindow
struct ACv2_Game_HUD_C_Show_MainChatWindow_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.Hide_ChatMainWindow
struct ACv2_Game_HUD_C_Hide_ChatMainWindow_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_CHARACTER_EquipThis(Server)
struct ACv2_Game_HUD_C_ZL_CHARACTER_EquipThis_Server__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowBlackScreen
struct ACv2_Game_HUD_C_ShowBlackScreen_Params
{
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.Hide Black Screen
struct ACv2_Game_HUD_C_Hide_Black_Screen_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_DND_Drop
struct ACv2_Game_HUD_C_ZL_GUI_DND_Drop_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.Show InGameMenu
struct ACv2_Game_HUD_C_Show_InGameMenu_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.Hide InGameMenu
struct ACv2_Game_HUD_C_Hide_InGameMenu_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_DnD_Drag
struct ACv2_Game_HUD_C_ZL_GUI_DnD_Drag_Params
{
	class UUserWidget*                                 DragSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowEndGameWidget
struct ACv2_Game_HUD_C_ShowEndGameWidget_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.Hide EndGame Widget
struct ACv2_Game_HUD_C_Hide_EndGame_Widget_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_ClearContainer
struct ACv2_Game_HUD_C_ZL_GUI_ClearContainer_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowDamageDirection
struct ACv2_Game_HUD_C_ShowDamageDirection_Params
{
	struct FVector                                     Direction;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_Construkt_Container
struct ACv2_Game_HUD_C_ZL_GUI_Construkt_Container_Params
{
	TArray<struct FZ_LootStr>                          ContainerInventory;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FZ_ContainerInfo                            ContInform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowMapScreen
struct ACv2_Game_HUD_C_ShowMapScreen_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.HideMapScreen
struct ACv2_Game_HUD_C_HideMapScreen_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_Update
struct ACv2_Game_HUD_C_ZL_GUI_Update_Params
{
	TArray<struct FZ_LootStr>                          Inventori;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FZ_LootStr>                          Container;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsOnFloorMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_ConstructMenu
struct ACv2_Game_HUD_C_ZL_GUI_ConstructMenu_Params
{
	TArray<struct FZ_SlotStr>                          Slots;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowAdminPanel
struct ACv2_Game_HUD_C_ShowAdminPanel_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.HideAdminPanel
struct ACv2_Game_HUD_C_HideAdminPanel_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowBan
struct ACv2_Game_HUD_C_ShowBan_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_ShowInventory
struct ACv2_Game_HUD_C_ZL_GUI_ShowInventory_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_HideInventory
struct ACv2_Game_HUD_C_ZL_GUI_HideInventory_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.HideGlobalMenu
struct ACv2_Game_HUD_C_HideGlobalMenu_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowGlobalMenu
struct ACv2_Game_HUD_C_ShowGlobalMenu_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.HideSelectSpawn
struct ACv2_Game_HUD_C_HideSelectSpawn_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowSelectSpawn
struct ACv2_Game_HUD_C_ShowSelectSpawn_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowSoftBlackScreen
struct ACv2_Game_HUD_C_ShowSoftBlackScreen_Params
{
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowTalkMenu
struct ACv2_Game_HUD_C_ShowTalkMenu_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.HideTalkMenu
struct ACv2_Game_HUD_C_HideTalkMenu_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowGameOverWidget
struct ACv2_Game_HUD_C_ShowGameOverWidget_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.HideGameOverWidget
struct ACv2_Game_HUD_C_HideGameOverWidget_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ReceiveBeginPlay
struct ACv2_Game_HUD_C_ReceiveBeginPlay_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowScoreMessage
struct ACv2_Game_HUD_C_ShowScoreMessage_Params
{
	TEnumAsByte<GUI_ScoreMessageType_EGUI_ScoreMessageType> MessageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       MessageText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.HideAllHUD
struct ACv2_Game_HUD_C_HideAllHUD_Params
{
	bool                                               ShowMessage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ReceiveDestroyed
struct ACv2_Game_HUD_C_ReceiveDestroyed_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ResetAllGUI
struct ACv2_Game_HUD_C_ResetAllGUI_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.SlideWeapon
struct ACv2_Game_HUD_C_SlideWeapon_Params
{
	TEnumAsByte<Cv2_LootType_ECv2_LootType>            LootType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowAllHud
struct ACv2_Game_HUD_C_ShowAllHud_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.AnimateMapStep
struct ACv2_Game_HUD_C_AnimateMapStep_Params
{
	class UMap_Overlay_C*                              MapOverlay;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Step;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Reverse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.EnableRenderActors
struct ACv2_Game_HUD_C_EnableRenderActors_Params
{
	bool                                               SetEnable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.MapPressed
struct ACv2_Game_HUD_C_MapPressed_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.InventoryPressed
struct ACv2_Game_HUD_C_InventoryPressed_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.OptionsPressed
struct ACv2_Game_HUD_C_OptionsPressed_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.CraftPressed
struct ACv2_Game_HUD_C_CraftPressed_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.OpenCraftActor
struct ACv2_Game_HUD_C_OpenCraftActor_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ExitPressed
struct ACv2_Game_HUD_C_ExitPressed_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.PlayerBeginLive
struct ACv2_Game_HUD_C_PlayerBeginLive_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.PlayerDead
struct ACv2_Game_HUD_C_PlayerDead_Params
{
	struct FVector                                     DeadLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.PressedTalkKey
struct ACv2_Game_HUD_C_PressedTalkKey_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowCommandTalkMessage
struct ACv2_Game_HUD_C_ShowCommandTalkMessage_Params
{
	struct FText                                       Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       InstigatorName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.SendCommandTalkMessage
struct ACv2_Game_HUD_C_SendCommandTalkMessage_Params
{
	TEnumAsByte<Cv3_VoicesEnum_ECv3_VoicesEnum>        VoiceEnum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowHeadshot
struct ACv2_Game_HUD_C_ShowHeadshot_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowRebootEvaquation
struct ACv2_Game_HUD_C_ShowRebootEvaquation_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                SecondsToReboot;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.InventroyHide
struct ACv2_Game_HUD_C_InventroyHide_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.AddMArkerOnCompas
struct ACv2_Game_HUD_C_AddMArkerOnCompas_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Icon;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowDistance;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.DeleteMarkersFromCompas
struct ACv2_Game_HUD_C_DeleteMarkersFromCompas_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowTimer
struct ACv2_Game_HUD_C_ShowTimer_Params
{
	float                                              Seconds;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseAnim;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_InventoryRespawnMode
struct ACv2_Game_HUD_C_ZL_GUI_InventoryRespawnMode_Params
{
};

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ExecuteUbergraph_Cv2_Game_HUD
struct ACv2_Game_HUD_C_ExecuteUbergraph_Cv2_Game_HUD_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
