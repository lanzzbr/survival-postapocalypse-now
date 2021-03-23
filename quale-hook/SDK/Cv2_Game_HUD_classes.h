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

// BlueprintGeneratedClass Cv2_Game_HUD.Cv2_Game_HUD_C
// 0x0288 (FullSize[0x06D8] - InheritedSize[0x0450])
class ACv2_Game_HUD_C : public AHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0450(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              AnimateStep_NewTrack_0_4DEC8D124E0ED1CCF8824AB590C054B8;   // 0x0460(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             AnimateStep__Direction_4DEC8D124E0ED1CCF8824AB590C054B8;   // 0x0464(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1667[0x3];                                     // 0x0465(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          AnimateStep;                                               // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInfoWidgetBASE_C*                           InfoWidget;                                                // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory_BASE_C*                           InventoryWidget;                                           // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputModeStructure>                 InputModeArray;                                            // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMessageWidgetBASE_C*                        MessageWidget;                                             // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMessageKillShip_Base_C*                     KillerSheepBaseWidget;                                     // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChooseOfSideBASE_C*                         ChooseOfSideWidget;                                        // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AInventoryCharacterRender_C*                 RenderCharacter;                                           // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseChooseOfSide_;                                          // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SEV6[0x7];                                     // 0x04B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UChatWidgetBASE_C*                           ChatWidgetBASE;                                            // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadingScreen_C*                            BlackScreen;                                               // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMap_MapBoxWidget_C*                         MapWidget;                                                 // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AInventoryCraftRenderActor_C*                RenderCraftActror;                                         // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   LandscapeSize;                                             // 0x04D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenu_InGameMenuBase_C*                      InGameMenu;                                                // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEndGameBase_C*                              EndGameWidget;                                             // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageDirectionBase_C*                      damageDirection;                                           // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPointerOverlay_BASE_C*                      PointerWidget;                                             // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseTutorial;                                               // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6TZL[0x7];                                     // 0x0501(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTutorial_BASE_C*                            TutorialBaseWidget;                                        // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BeginXP;                                                   // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BeginKills;                                                // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BeginDeaths;                                               // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsMainChat_SHOW;                                           // 0x051C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DXON[0x3];                                     // 0x051D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Landscape_Pivot;                                           // 0x0520(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                         HideWidgetArray;                                           // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<UMG_ESlateVisibility>                       HideWidgetVisibility;                                      // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               HUD_is_Hiden;                                              // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_II2T[0x7];                                     // 0x0549(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      CharacterBlockTimes;                                       // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAdminPanelBase_C*                           AdminScreenWidget;                                         // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory_widget_BASE_C*                    NewInventroyBase;                                          // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBloodWidgetBase_C*                          BloodWidget;                                               // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USelectSpawnWidget_C*                        SelectSpawn;                                               // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCV2_CharacterTypeStructure                 SelectCharacterStructure;                                  // 0x0580(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          SelectdetSide;                                             // 0x05F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FastSpawnMode;                                             // 0x05F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PC8K[0x6];                                     // 0x05F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USelectSpawnWidgetPortable_C*                SelectSpawnPortable;                                       // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeaponAmmoInfoStr                          AmmoPrymaryStr;                                            // 0x0600(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TEnumAsByte<Cv2_SlotsTypeEnum_ECv2_SlotsTypeEnum>  CurentHandSlot;                                            // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3X5P[0x7];                                     // 0x0629(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeaponAmmoInfoStr                          AmmoSecondaryStr;                                          // 0x0630(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               IsDebugMode;                                               // 0x0658(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CtrlIsDown;                                                // 0x0659(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1UMX[0x6];                                     // 0x065A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                CheckMenuSlotsTimer;                                       // 0x0660(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FVector                                     DeadLocation;                                              // 0x0668(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P1TA[0x4];                                     // 0x0674(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCommandWidgetBase_C*                        TalkWidget;                                                // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FText>                               TalkMessageArray;                                          // 0x0680(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              VoiceTime;                                                 // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0G79[0x4];                                     // 0x0694(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameOverWidgetBASE_C*                       GameOverWidget;                                            // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      AdminActorRef;                                             // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMessageLevelUpString_C*                     LevelUpWidget;                                             // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGlobalMenu_ROOT_C*                          GlobalMenuBase;                                            // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartDuration;                                             // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   InventoryProportion;                                       // 0x06BC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanSpawn;                                                  // 0x06C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8VD4[0x3];                                     // 0x06C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USurvChooseOfSideBASE_C*                     SurvChooseOfSide;                                          // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAfterDeadGUI_C*                             RespawnWidget;                                             // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(55160);
		return ptr;
	}



	void STATIC_ZL_CONTROLLER_GetSlots(TArray<struct FZ_SlotStr>* Slots);
	void STATIC_CloseFurnitureIfNeed();
	void STATIC_LootInfoTune(TEnumAsByte<Cv2_MoveTypeEnum_ECv2_MoveTypeEnum> MoveType);
	void STATIC_GetCharacterTimeFormArray(TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterEnum, float* Output);
	void STATIC_CheckMenuSlotsCreate();
	void STATIC_SetAmmoStructures();
	void STATIC_GetCharacterBlocktime(TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterEnum, float* BlockTime);
	void STATIC_Print_settings();
	void STATIC_RespawnPlayer(TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterClass);
	void STATIC_CreateCharacterBlockTimes();
	void STATIC_GetLandscapePivotActor(TArray<class AActor*>* Actors);
	void STATIC_CloseMainWidgets(bool* WidgetsWasClosed);
	void STATIC_ResetProcedures();
	void STATIC_CheckBlockChatShow(bool* BlockChat);
	void STATIC_ClearViewport();
	void STATIC_GetLandscapeSize();
	void STATIC_SpawnRamdomClass();
	void STATIC_SetInputGameMode(bool FindMode_IfRemoveWidget, const struct FInputModeStructure& InputMode);
	void STATIC_UserConstructionScript();
	void STATIC_AnimateStep__FinishedFunc();
	void STATIC_AnimateStep__UpdateFunc();
	void STATIC_ZL_GUI_SLOT_Hovered(const struct FZ_LootStr& Loot);
	void STATIC_ZL_GUI_SLOT_Unhovered();
	void STATIC_ZL_CHARACTER_AttachToWeapon_Server_(TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes> Scopes, TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer> Silencer, const struct FName& Weapon);
	void STATIC_ZL_GUI_DrawLootNear(TArray<struct FZ_LootStr>* Loot);
	void STATIC_ZL_CHARACTER_UNAttach_Server_(const struct FName& Weapon);
	void STATIC_ZL_GUI_Overload(float OverloadMass);
	void STATIC_ReciveChatMessage(const struct FGUI_ChatMessageStructure& ChatStruct);
	void STATIC_OpenChat();
	void STATIC_Show_Inventory_Widget();
	void STATIC_Hide_Inventory_Widget();
	void STATIC_ZL_CHARACTER_Unequip_Serever_(const struct FZ_LootStr& Loot);
	void STATIC_ShowChooseOfSide();
	void STATIC_HideChooseOfSide();
	void STATIC_ZL_CHARACTER_USEThis_Server_(const struct FZ_LootStr& Loot);
	void STATIC_ZL_CHARACTER_DropThis_Server_(const struct FZ_LootStr& LootStr);
	void STATIC_Show_MainChatWindow();
	void STATIC_Hide_ChatMainWindow();
	void STATIC_ZL_CHARACTER_EquipThis_Server_(const struct FZ_LootStr& Loot);
	void STATIC_ShowBlackScreen(float Delay);
	void STATIC_Hide_Black_Screen();
	void STATIC_ZL_GUI_DND_Drop();
	void STATIC_Show_InGameMenu();
	void STATIC_Hide_InGameMenu();
	void STATIC_ZL_GUI_DnD_Drag(class UUserWidget* DragSlot);
	void STATIC_ShowEndGameWidget();
	void STATIC_Hide_EndGame_Widget();
	void STATIC_ZL_GUI_ClearContainer();
	void STATIC_ShowDamageDirection(const struct FVector& Direction);
	void STATIC_ZL_GUI_Construkt_Container(TArray<struct FZ_LootStr>* ContainerInventory, const struct FZ_ContainerInfo& ContInform);
	void STATIC_ShowMapScreen();
	void STATIC_HideMapScreen();
	void STATIC_ZL_GUI_Update(TArray<struct FZ_LootStr>* Inventori, TArray<struct FZ_LootStr>* Container, bool IsOnFloorMode);
	void STATIC_ZL_GUI_ConstructMenu(TArray<struct FZ_SlotStr>* Slots);
	void STATIC_ShowAdminPanel();
	void STATIC_HideAdminPanel();
	void STATIC_ShowBan();
	void STATIC_ZL_GUI_ShowInventory();
	void STATIC_ZL_GUI_HideInventory();
	void STATIC_HideGlobalMenu();
	void STATIC_ShowGlobalMenu();
	void STATIC_HideSelectSpawn();
	void STATIC_ShowSelectSpawn();
	void STATIC_ShowSoftBlackScreen(float Duration);
	void STATIC_ShowTalkMenu();
	void STATIC_HideTalkMenu();
	void STATIC_ShowGameOverWidget();
	void STATIC_HideGameOverWidget();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ShowScoreMessage(TEnumAsByte<GUI_ScoreMessageType_EGUI_ScoreMessageType> MessageType, const struct FText& MessageText);
	void STATIC_HideAllHUD(bool ShowMessage);
	void STATIC_ReceiveDestroyed();
	void STATIC_ResetAllGUI();
	void STATIC_SlideWeapon(TEnumAsByte<Cv2_LootType_ECv2_LootType> LootType);
	void STATIC_ShowAllHud();
	void STATIC_AnimateMapStep(class UMap_Overlay_C* MapOverlay, int Step, bool Reverse);
	void STATIC_EnableRenderActors(bool SetEnable);
	void STATIC_MapPressed();
	void STATIC_InventoryPressed();
	void STATIC_OptionsPressed();
	void STATIC_CraftPressed();
	void STATIC_OpenCraftActor(class AActor* Actor);
	void STATIC_ExitPressed();
	void STATIC_PlayerBeginLive();
	void STATIC_PlayerDead(const struct FVector& DeadLocation);
	void STATIC_PressedTalkKey();
	void STATIC_ShowCommandTalkMessage(const struct FText& Message, const struct FText& InstigatorName);
	void STATIC_SendCommandTalkMessage(TEnumAsByte<Cv3_VoicesEnum_ECv3_VoicesEnum> VoiceEnum);
	void STATIC_ShowHeadshot();
	void STATIC_ShowRebootEvaquation(const struct FText& Text, int SecondsToReboot);
	void STATIC_InventroyHide();
	void STATIC_AddMArkerOnCompas(const struct FVector& Location, class UTexture2D* Icon, bool ShowDistance);
	void STATIC_DeleteMarkersFromCompas(const struct FVector& Location);
	void STATIC_ShowTimer(float Seconds, bool UseAnim);
	void STATIC_ZL_GUI_InventoryRespawnMode();
	void STATIC_ExecuteUbergraph_Cv2_Game_HUD(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
