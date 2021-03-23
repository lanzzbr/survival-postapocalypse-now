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

// WidgetBlueprintGeneratedClass SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C
// 0x026C (FullSize[0x047C] - InheritedSize[0x0210])
class USURV_Inventory_widget_BASE_C : public UZ_InventoryBASE_ROOT_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0210(0x0008) (Transient, DuplicateTransient)
	class USizeBox*                                    AddSlotsSizeBox;                                           // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  BackPackSlot;                                              // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      BarigaAvatar;                                              // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBarigaButton_C*                             BarigaButton;                                              // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBarigaButton_C*                             BarigaButton_C_1;                                          // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBarigaButton_C*                             BarigaButton_C_2;                                          // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBarigaButton_C*                             BarigaButton_C_3;                                          // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                BarigaButtons;                                             // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    BarigaOverlay;                                             // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  Body;                                                      // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_108;                                                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                CategoryEquip;                                             // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                                  ContainerGrid;                                             // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ContainerName;                                             // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  Face;                                                      // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  Grenades;                                                  // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                                  GridPanel_1;                                               // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  HemletSlot;                                                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventory_MassWidget_C*                     Inventory_MassWidget;                                      // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryRenderWidget_C*                    InventoryRenderWidget;                                     // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    LeftOverlay;                                               // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  Legs;                                                      // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  Magazine_pr;                                               // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  Magazine_sec;                                              // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ManFon;                                                    // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  Melee;                                                     // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Play;                                                      // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayer_Condition_BASE_C*                    Player_Condition_BASE;                                     // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  Pr_2;                                                      // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  Pr_3;                                                      // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  Pymary;                                                    // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  Sc_2;                                                      // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  Sc_3;                                                      // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ScrollBox_1;                                               // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  Secondary;                                                 // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  Shoes;                                                     // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USURV_InventoryCRAFTPanel_C*                 SURV_InventoryCRAFTPanel;                                  // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTrashBin_C*                                 TrashBin;                                                  // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                Weapons;                                                   // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UZ_Inventory_Information_C*                  Z_Inventory_Information;                                   // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UZ_Inventory_Slot_ROOT_C*>            InventorySlotsWidgets;                                     // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FZ_SlotStr>                          Slots;                                                     // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UZ_Inventory_Slot_ROOT_C*>            ContainerSlotsWidgets;                                     // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FZ_LootStr                                  TempLoot;                                                  // 0x0388(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UUserWidget*                                 TempDragObj;                                               // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCraftShow;                                               // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_H4RC[0x7];                                     // 0x03F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UZ_Inventory_Slot_ROOT_C*>            AdditionalBackPackSlots;                                   // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              PrBaseFill;                                                // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FloorSlotCount;                                            // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ViewportX;                                                 // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ViewportY;                                                 // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTradeNow;                                                // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_738H[0x3];                                     // 0x0419(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PARAMETR_OnFloorSlotsCount;                                // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBarigaButton_C*>                     BarigaButtonsArray;                                        // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FCv4_StructureTrade                         BarigaStr;                                                 // 0x0430(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTimerHandle                                UpdateSlotTimer;                                           // 0x0470(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                               UseMouseAutoPosition;                                      // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ContainerIsClear;                                          // 0x0479(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsTradeToAll;                                              // 0x047A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isMainMenu;                                                // 0x047B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(82572);
		return ptr;
	}



	void STATIC_ZL_CONTROLLER_GetSlots(TArray<struct FZ_SlotStr>* Slots);
	void STATIC_ShowTrash(bool Show);
	void STATIC_GetUninstlledDLC(TArray<struct FName>* LocalUnInstalledDLC1);
	void STATIC_MouseAutoPosition();
	void STATIC_ShowBariga(bool Show, class UBarigaButton_C* BarigaButton);
	void STATIC_CreateBarigaButtons();
	void STATIC_UpdateSlotsSize(bool Force);
	void STATIC_Container_ShowAllSlots(bool IsOnFloor);
	UMG_ESlateVisibility Get_ContainerName_Visibility_1();
	void STATIC_AddWidgetToContainer(class UWidget* Content);
	void STATIC_AddWidgetToGrid(class UWidget* Content);
	void STATIC_Slots_UpdateBlockcondition();
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	void STATIC_Slots_AddGrenades(class UZ_Inventory_Slot_ROOT_C* Slot);
	void STATIC_Slots_AddMelee(class UUserWidget* Slot);
	void STATIC_Container_HideAllSlots();
	void STATIC_Slots_AddSecundaryWeapons(class UWidget* Widget);
	void STATIC_Slots_AddEquip(class UWidget* SlotWidget);
	void STATIC_SetParentsAndChilds();
	void STATIC_Slots_AddPrymaryWeapons(const struct FZ_SlotStr& SlotStr, class UWidget* Widget);
	void STATIC_CheckDropable(TEnumAsByte<Z_Loot_Type_EZ_Loot_Type> DropableType, int Index);
	void STATIC_Container_Update(TArray<struct FZ_LootStr>* Array, bool OnFloorMode);
	void STATIC_Inventory_Update(TArray<struct FZ_LootStr>* Array);
	void STATIC_ZL_GUI_ConstructMenu(TArray<struct FZ_SlotStr>* Slots);
	void STATIC_ZL_GUI_ShowInventory();
	void STATIC_ZL_GUI_HideInventory();
	void STATIC_ZL_CHARACTER_EquipThis_Server_(const struct FZ_LootStr& Loot);
	void STATIC_ZL_CHARACTER_DropThis_Server_(const struct FZ_LootStr& LootStr);
	void STATIC_ZL_CHARACTER_USEThis_Server_(const struct FZ_LootStr& Loot);
	void STATIC_ZL_CHARACTER_Unequip_Serever_(const struct FZ_LootStr& Loot);
	void STATIC_ZL_CHARACTER_AttachToWeapon_Server_(TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes> Scopes, TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer> Silencer, const struct FName& Weapon);
	void STATIC_ZL_GUI_DrawLootNear(TArray<struct FZ_LootStr>* Loot);
	void STATIC_ZL_CHARACTER_UNAttach_Server_(const struct FName& Weapon);
	void STATIC_ZL_GUI_InventoryRespawnMode();
	void STATIC_Construct();
	void STATIC_ZL_GUI_ClearContainer();
	void STATIC_ZL_GUI_Construkt_Container(TArray<struct FZ_LootStr>* ContainerInventory, const struct FZ_ContainerInfo& ContInform);
	void STATIC_ZL_GUI_DND_Drop();
	void STATIC_ZL_GUI_SLOT_Hovered(const struct FZ_LootStr& Loot);
	void STATIC_ZL_GUI_SLOT_Unhovered();
	void STATIC_ZL_GUI_Update(TArray<struct FZ_LootStr>* Inventori, TArray<struct FZ_LootStr>* Container, bool IsOnFloorMode);
	void STATIC_ZL_GUI_DnD_Drag(class UUserWidget* DragSlot);
	void STATIC_OnInventoryOpen();
	void STATIC_OnInventoryClose();
	void STATIC_HideCraft();
	void STATIC_BndEvt__Z_InventoryCRAFTPanel_K2Node_ComponentBoundEvent_35_ClickClose__DelegateSignature();
	void STATIC_ShowMyCraft();
	void STATIC_ShowMeInventory();
	void STATIC_SetBackpackCount(int Count);
	void STATIC_ShowActorCraft(class AActor* Actor);
	void STATIC_CreateMenu();
	void STATIC_ROOT_CreateMenu();
	void STATIC_Root_ShowCraft();
	void STATIC_ROOT_ShowInvtory();
	void STATIC_Root_ShowActorCraft(class AActor* Actor);
	void STATIC_ZL_GUI_Overload(float OverloadMass);
	void STATIC_ROOT_ShowPrOpticPart(bool Show);
	void STATIC_ROOT_ShowInformation(const struct FZ_LootStr& Loot, bool IsContainer, bool IsTradeToAll);
	void STATIC_ROOT_HideInformation();
	void STATIC_ROOT_respawnMode();
	void STATIC_BndEvt__PLAY_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void STATIC_OpenMainMenuMode();
	void STATIC_CloseMainMenuMode();
	void STATIC_UpdateSlotsSizeEvent();
	void STATIC_SelectBarigaButton(class UBarigaButton_C* BarigaButton);
	void STATIC_Root_OnClose();
	void STATIC_ROOT_ShowPrSilencerPart(bool Show);
	void STATIC_ROOT_ShowSecSilencerPart(bool Show);
	void STATIC_ROOT_ShowSecOpticPart(bool Show);
	void STATIC_BndEvt__Button_107_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void STATIC_ROOT_ShowMagazinePrimary(bool Show);
	void STATIC_ROOT_ShowMagazineSecondary(bool Show);
	void STATIC_ExecuteUbergraph_SURV_Inventory_widget_BASE(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
