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

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ZL_CONTROLLER_GetSlots
struct USURV_Inventory_widget_BASE_C_ZL_CONTROLLER_GetSlots_Params
{
	TArray<struct FZ_SlotStr>                          Slots;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ShowTrash
struct USURV_Inventory_widget_BASE_C_ShowTrash_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.GetUninstlledDLC
struct USURV_Inventory_widget_BASE_C_GetUninstlledDLC_Params
{
	TArray<struct FName>                               LocalUnInstalledDLC1;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.MouseAutoPosition
struct USURV_Inventory_widget_BASE_C_MouseAutoPosition_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ShowBariga
struct USURV_Inventory_widget_BASE_C_ShowBariga_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBarigaButton_C*                             BarigaButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.CreateBarigaButtons
struct USURV_Inventory_widget_BASE_C_CreateBarigaButtons_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.UpdateSlotsSize
struct USURV_Inventory_widget_BASE_C_UpdateSlotsSize_Params
{
	bool                                               Force;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.Container_ShowAllSlots
struct USURV_Inventory_widget_BASE_C_Container_ShowAllSlots_Params
{
	bool                                               IsOnFloor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.Get_ContainerName_Visibility_1
struct USURV_Inventory_widget_BASE_C_Get_ContainerName_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.AddWidgetToContainer
struct USURV_Inventory_widget_BASE_C_AddWidgetToContainer_Params
{
	class UWidget*                                     Content;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.AddWidgetToGrid
struct USURV_Inventory_widget_BASE_C_AddWidgetToGrid_Params
{
	class UWidget*                                     Content;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.Slots_UpdateBlockcondition
struct USURV_Inventory_widget_BASE_C_Slots_UpdateBlockcondition_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.OnMouseWheel
struct USURV_Inventory_widget_BASE_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.OnMouseButtonDown
struct USURV_Inventory_widget_BASE_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.Slots_AddGrenades
struct USURV_Inventory_widget_BASE_C_Slots_AddGrenades_Params
{
	class UZ_Inventory_Slot_ROOT_C*                    Slot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.Slots_AddMelee
struct USURV_Inventory_widget_BASE_C_Slots_AddMelee_Params
{
	class UUserWidget*                                 Slot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.Container_HideAllSlots
struct USURV_Inventory_widget_BASE_C_Container_HideAllSlots_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.Slots_AddSecundaryWeapons
struct USURV_Inventory_widget_BASE_C_Slots_AddSecundaryWeapons_Params
{
	class UWidget*                                     Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.Slots_AddEquip
struct USURV_Inventory_widget_BASE_C_Slots_AddEquip_Params
{
	class UWidget*                                     SlotWidget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.SetParentsAndChilds
struct USURV_Inventory_widget_BASE_C_SetParentsAndChilds_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.Slots_AddPrymaryWeapons
struct USURV_Inventory_widget_BASE_C_Slots_AddPrymaryWeapons_Params
{
	struct FZ_SlotStr                                  SlotStr;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWidget*                                     Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.CheckDropable
struct USURV_Inventory_widget_BASE_C_CheckDropable_Params
{
	TEnumAsByte<Z_Loot_Type_EZ_Loot_Type>              DropableType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.Container_Update
struct USURV_Inventory_widget_BASE_C_Container_Update_Params
{
	TArray<struct FZ_LootStr>                          Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               OnFloorMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.Inventory_Update
struct USURV_Inventory_widget_BASE_C_Inventory_Update_Params
{
	TArray<struct FZ_LootStr>                          Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ZL_GUI_ConstructMenu
struct USURV_Inventory_widget_BASE_C_ZL_GUI_ConstructMenu_Params
{
	TArray<struct FZ_SlotStr>                          Slots;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ZL_GUI_ShowInventory
struct USURV_Inventory_widget_BASE_C_ZL_GUI_ShowInventory_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ZL_GUI_HideInventory
struct USURV_Inventory_widget_BASE_C_ZL_GUI_HideInventory_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ZL_CHARACTER_EquipThis(Server)
struct USURV_Inventory_widget_BASE_C_ZL_CHARACTER_EquipThis_Server__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ZL_CHARACTER_DropThis(Server)
struct USURV_Inventory_widget_BASE_C_ZL_CHARACTER_DropThis_Server__Params
{
	struct FZ_LootStr                                  LootStr;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ZL_CHARACTER_USEThis(Server)
struct USURV_Inventory_widget_BASE_C_ZL_CHARACTER_USEThis_Server__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ZL_CHARACTER_Unequip(Serever)
struct USURV_Inventory_widget_BASE_C_ZL_CHARACTER_Unequip_Serever__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ZL_CHARACTER_AttachToWeapon(Server)
struct USURV_Inventory_widget_BASE_C_ZL_CHARACTER_AttachToWeapon_Server__Params
{
	TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes>        Scopes;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer>    Silencer;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ZL_GUI_DrawLootNear
struct USURV_Inventory_widget_BASE_C_ZL_GUI_DrawLootNear_Params
{
	TArray<struct FZ_LootStr>                          Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ZL_CHARACTER_UNAttach(Server)
struct USURV_Inventory_widget_BASE_C_ZL_CHARACTER_UNAttach_Server__Params
{
	struct FName                                       Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ZL_GUI_InventoryRespawnMode
struct USURV_Inventory_widget_BASE_C_ZL_GUI_InventoryRespawnMode_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.Construct
struct USURV_Inventory_widget_BASE_C_Construct_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ZL_GUI_ClearContainer
struct USURV_Inventory_widget_BASE_C_ZL_GUI_ClearContainer_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ZL_GUI_Construkt_Container
struct USURV_Inventory_widget_BASE_C_ZL_GUI_Construkt_Container_Params
{
	TArray<struct FZ_LootStr>                          ContainerInventory;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FZ_ContainerInfo                            ContInform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ZL_GUI_DND_Drop
struct USURV_Inventory_widget_BASE_C_ZL_GUI_DND_Drop_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ZL_GUI_SLOT_Hovered
struct USURV_Inventory_widget_BASE_C_ZL_GUI_SLOT_Hovered_Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ZL_GUI_SLOT_Unhovered
struct USURV_Inventory_widget_BASE_C_ZL_GUI_SLOT_Unhovered_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ZL_GUI_Update
struct USURV_Inventory_widget_BASE_C_ZL_GUI_Update_Params
{
	TArray<struct FZ_LootStr>                          Inventori;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FZ_LootStr>                          Container;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsOnFloorMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ZL_GUI_DnD_Drag
struct USURV_Inventory_widget_BASE_C_ZL_GUI_DnD_Drag_Params
{
	class UUserWidget*                                 DragSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.OnInventoryOpen
struct USURV_Inventory_widget_BASE_C_OnInventoryOpen_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.OnInventoryClose
struct USURV_Inventory_widget_BASE_C_OnInventoryClose_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.HideCraft
struct USURV_Inventory_widget_BASE_C_HideCraft_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.BndEvt__Z_InventoryCRAFTPanel_K2Node_ComponentBoundEvent_35_ClickClose__DelegateSignature
struct USURV_Inventory_widget_BASE_C_BndEvt__Z_InventoryCRAFTPanel_K2Node_ComponentBoundEvent_35_ClickClose__DelegateSignature_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ShowMyCraft
struct USURV_Inventory_widget_BASE_C_ShowMyCraft_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ShowMeInventory
struct USURV_Inventory_widget_BASE_C_ShowMeInventory_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.SetBackpackCount
struct USURV_Inventory_widget_BASE_C_SetBackpackCount_Params
{
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ShowActorCraft
struct USURV_Inventory_widget_BASE_C_ShowActorCraft_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.CreateMenu
struct USURV_Inventory_widget_BASE_C_CreateMenu_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ROOT_CreateMenu
struct USURV_Inventory_widget_BASE_C_ROOT_CreateMenu_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.Root_ShowCraft
struct USURV_Inventory_widget_BASE_C_Root_ShowCraft_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ROOT_ShowInvtory
struct USURV_Inventory_widget_BASE_C_ROOT_ShowInvtory_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.Root_ShowActorCraft
struct USURV_Inventory_widget_BASE_C_Root_ShowActorCraft_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ZL_GUI_Overload
struct USURV_Inventory_widget_BASE_C_ZL_GUI_Overload_Params
{
	float                                              OverloadMass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ROOT_ShowPrOpticPart
struct USURV_Inventory_widget_BASE_C_ROOT_ShowPrOpticPart_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ROOT_ShowInformation
struct USURV_Inventory_widget_BASE_C_ROOT_ShowInformation_Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               IsContainer;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsTradeToAll;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ROOT_HideInformation
struct USURV_Inventory_widget_BASE_C_ROOT_HideInformation_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ROOT_respawnMode
struct USURV_Inventory_widget_BASE_C_ROOT_respawnMode_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.BndEvt__PLAY_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct USURV_Inventory_widget_BASE_C_BndEvt__PLAY_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.OpenMainMenuMode
struct USURV_Inventory_widget_BASE_C_OpenMainMenuMode_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.CloseMainMenuMode
struct USURV_Inventory_widget_BASE_C_CloseMainMenuMode_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.UpdateSlotsSizeEvent
struct USURV_Inventory_widget_BASE_C_UpdateSlotsSizeEvent_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.SelectBarigaButton
struct USURV_Inventory_widget_BASE_C_SelectBarigaButton_Params
{
	class UBarigaButton_C*                             BarigaButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.Root_OnClose
struct USURV_Inventory_widget_BASE_C_Root_OnClose_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ROOT_ShowPrSilencerPart
struct USURV_Inventory_widget_BASE_C_ROOT_ShowPrSilencerPart_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ROOT_ShowSecSilencerPart
struct USURV_Inventory_widget_BASE_C_ROOT_ShowSecSilencerPart_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ROOT_ShowSecOpticPart
struct USURV_Inventory_widget_BASE_C_ROOT_ShowSecOpticPart_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.BndEvt__Button_107_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct USURV_Inventory_widget_BASE_C_BndEvt__Button_107_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ROOT_ShowMagazinePrimary
struct USURV_Inventory_widget_BASE_C_ROOT_ShowMagazinePrimary_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ROOT_ShowMagazineSecondary
struct USURV_Inventory_widget_BASE_C_ROOT_ShowMagazineSecondary_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C.ExecuteUbergraph_SURV_Inventory_widget_BASE
struct USURV_Inventory_widget_BASE_C_ExecuteUbergraph_SURV_Inventory_widget_BASE_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
