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

// Function Inventory_widget_base.Inventory_widget_BASE_C.ZL_CONTROLLER_GetSlots
struct UInventory_widget_BASE_C_ZL_CONTROLLER_GetSlots_Params
{
	TArray<struct FZ_SlotStr>                          Slots;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.Slots_UpdateBlockcondition
struct UInventory_widget_BASE_C_Slots_UpdateBlockcondition_Params
{
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.OnMouseWheel
struct UInventory_widget_BASE_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.OnMouseButtonDown
struct UInventory_widget_BASE_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.Slots_AddGrenades
struct UInventory_widget_BASE_C_Slots_AddGrenades_Params
{
	class UZ_Inventory_Slot_C*                         Slot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.Slots_AddMelee
struct UInventory_widget_BASE_C_Slots_AddMelee_Params
{
	class UZ_Inventory_Slot_C*                         Slot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.Container_HideAllSlots
struct UInventory_widget_BASE_C_Container_HideAllSlots_Params
{
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.Slots_AddSecundaryWeapons
struct UInventory_widget_BASE_C_Slots_AddSecundaryWeapons_Params
{
	class UWidget*                                     Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.Slots_AddEquip
struct UInventory_widget_BASE_C_Slots_AddEquip_Params
{
	class UWidget*                                     SlotWidget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.SetParentsAndChilds
struct UInventory_widget_BASE_C_SetParentsAndChilds_Params
{
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.Slots_AddPrymaryWeapons
struct UInventory_widget_BASE_C_Slots_AddPrymaryWeapons_Params
{
	struct FZ_SlotStr                                  SlotStr;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWidget*                                     Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.CheckDropable
struct UInventory_widget_BASE_C_CheckDropable_Params
{
	TEnumAsByte<Z_Loot_Type_EZ_Loot_Type>              DropableType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.Container_Update
struct UInventory_widget_BASE_C_Container_Update_Params
{
	TArray<struct FZ_LootStr>                          Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               OnFloorMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.Inventory_Update
struct UInventory_widget_BASE_C_Inventory_Update_Params
{
	TArray<struct FZ_LootStr>                          Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ZL_GUI_ShowInventory
struct UInventory_widget_BASE_C_ZL_GUI_ShowInventory_Params
{
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ZL_GUI_HideInventory
struct UInventory_widget_BASE_C_ZL_GUI_HideInventory_Params
{
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ZL_CHARACTER_EquipThis(Server)
struct UInventory_widget_BASE_C_ZL_CHARACTER_EquipThis_Server__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ZL_CHARACTER_DropThis(Server)
struct UInventory_widget_BASE_C_ZL_CHARACTER_DropThis_Server__Params
{
	struct FZ_LootStr                                  LootStr;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ZL_CHARACTER_USEThis(Server)
struct UInventory_widget_BASE_C_ZL_CHARACTER_USEThis_Server__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ZL_CHARACTER_Unequip(Serever)
struct UInventory_widget_BASE_C_ZL_CHARACTER_Unequip_Serever__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ZL_CHARACTER_AttachToWeapon(Server)
struct UInventory_widget_BASE_C_ZL_CHARACTER_AttachToWeapon_Server__Params
{
	TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes>        Scopes;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer>    Silencer;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ZL_CHARACTER_UNAttach(Server)
struct UInventory_widget_BASE_C_ZL_CHARACTER_UNAttach_Server__Params
{
	struct FName                                       Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ZL_GUI_Overload
struct UInventory_widget_BASE_C_ZL_GUI_Overload_Params
{
	float                                              OverloadMass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ZL_GUI_InventoryRespawnMode
struct UInventory_widget_BASE_C_ZL_GUI_InventoryRespawnMode_Params
{
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.Construct
struct UInventory_widget_BASE_C_Construct_Params
{
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ZL_GUI_ConstructMenu
struct UInventory_widget_BASE_C_ZL_GUI_ConstructMenu_Params
{
	TArray<struct FZ_SlotStr>                          Slots;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ZL_GUI_ClearContainer
struct UInventory_widget_BASE_C_ZL_GUI_ClearContainer_Params
{
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ZL_GUI_Construkt_Container
struct UInventory_widget_BASE_C_ZL_GUI_Construkt_Container_Params
{
	TArray<struct FZ_LootStr>                          ContainerInventory;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FZ_ContainerInfo                            ContInform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ZL_GUI_DND_Drop
struct UInventory_widget_BASE_C_ZL_GUI_DND_Drop_Params
{
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ZL_GUI_SLOT_Hovered
struct UInventory_widget_BASE_C_ZL_GUI_SLOT_Hovered_Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ZL_GUI_SLOT_Unhovered
struct UInventory_widget_BASE_C_ZL_GUI_SLOT_Unhovered_Params
{
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ZL_GUI_DrawLootNear
struct UInventory_widget_BASE_C_ZL_GUI_DrawLootNear_Params
{
	TArray<struct FZ_LootStr>                          Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ZL_GUI_Update
struct UInventory_widget_BASE_C_ZL_GUI_Update_Params
{
	TArray<struct FZ_LootStr>                          Inventori;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FZ_LootStr>                          Container;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsOnFloorMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ZL_GUI_DnD_Drag
struct UInventory_widget_BASE_C_ZL_GUI_DnD_Drag_Params
{
	class UUserWidget*                                 DragSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.OnInventoryOpen
struct UInventory_widget_BASE_C_OnInventoryOpen_Params
{
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.OnInventoryClose
struct UInventory_widget_BASE_C_OnInventoryClose_Params
{
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.HideCraft
struct UInventory_widget_BASE_C_HideCraft_Params
{
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.BndEvt__Z_InventoryCRAFTPanel_K2Node_ComponentBoundEvent_35_ClickClose__DelegateSignature
struct UInventory_widget_BASE_C_BndEvt__Z_InventoryCRAFTPanel_K2Node_ComponentBoundEvent_35_ClickClose__DelegateSignature_Params
{
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ShowMyCraft
struct UInventory_widget_BASE_C_ShowMyCraft_Params
{
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ShowMeInventory
struct UInventory_widget_BASE_C_ShowMeInventory_Params
{
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.SetBackpackCount
struct UInventory_widget_BASE_C_SetBackpackCount_Params
{
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ShowActorCraft
struct UInventory_widget_BASE_C_ShowActorCraft_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.CreateMenu
struct UInventory_widget_BASE_C_CreateMenu_Params
{
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ROOT_CreateMenu
struct UInventory_widget_BASE_C_ROOT_CreateMenu_Params
{
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ROOT_ShowInvtory
struct UInventory_widget_BASE_C_ROOT_ShowInvtory_Params
{
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.Root_ShowCraft
struct UInventory_widget_BASE_C_Root_ShowCraft_Params
{
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.Root_ShowActorCraft
struct UInventory_widget_BASE_C_Root_ShowActorCraft_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_widget_base.Inventory_widget_BASE_C.ExecuteUbergraph_Inventory_widget_BASE
struct UInventory_widget_BASE_C_ExecuteUbergraph_Inventory_widget_BASE_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
