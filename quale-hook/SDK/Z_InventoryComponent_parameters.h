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

// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_CONTROLLER_GetSlots
struct UZ_InventoryComponent_C_ZL_CONTROLLER_GetSlots_Params
{
	TArray<struct FZ_SlotStr>                          Slots;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.CheckAmmo(ClientOnly)
struct UZ_InventoryComponent_C_CheckAmmo_ClientOnly__Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       OldLootName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  NewLoo;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.GetInventorySummaryCost
struct UZ_InventoryComponent_C_GetInventorySummaryCost_Params
{
	int                                                Cost;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.TrySetToInventoryIndex
struct UZ_InventoryComponent_C_TrySetToInventoryIndex_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.InventoryClear(NoSync)
struct UZ_InventoryComponent_C_InventoryClear_NoSync__Params
{
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.LootAddLootStr
struct UZ_InventoryComponent_C_LootAddLootStr_Params
{
	struct FZ_LootStr                                  Z_LootStr;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               HaveReturn;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FZ_LootStr                                  Z_Loot;                                                    // (Parm, OutParm, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.IsInventoryEmpty
struct UZ_InventoryComponent_C_IsInventoryEmpty_Params
{
	bool                                               IsEmpty;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.LootDecrementLootCount(ServerOnly)
struct UZ_InventoryComponent_C_LootDecrementLootCount_ServerOnly__Params
{
	struct FName                                       LootName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.LootAddLoot
struct UZ_InventoryComponent_C_LootAddLoot_Params
{
	struct FName                                       LootName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HaveReturn;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FZ_LootStr                                  Z_Loot;                                                    // (Parm, OutParm, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.Loot_IncrementLoot(ServerOnly)
struct UZ_InventoryComponent_C_Loot_IncrementLoot_ServerOnly__Params
{
	struct FName                                       LootName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.LootGetLootCount
struct UZ_InventoryComponent_C_LootGetLootCount_Params
{
	struct FName                                       LootName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.LootDecrementLoot(ServerOnly)
struct UZ_InventoryComponent_C_LootDecrementLoot_ServerOnly__Params
{
	struct FName                                       LootName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.DisconnectManager
struct UZ_InventoryComponent_C_DisconnectManager_Params
{
	class UZ_InventoryManager_C*                       Manager;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.ConnectManager
struct UZ_InventoryComponent_C_ConnectManager_Params
{
	class UZ_InventoryManager_C*                       Manager;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.UpdateInfo
struct UZ_InventoryComponent_C_UpdateInfo_Params
{
	TEnumAsByte<Z_InventoryActions_EZ_InventoryActions> Actions;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  OldLoot;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.Slot_ClearLoot
struct UZ_InventoryComponent_C_Slot_ClearLoot_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.Slot_GetEmpty(NoToEqpt)
struct UZ_InventoryComponent_C_Slot_GetEmpty_NoToEqpt__Params
{
	bool                                               BackPackOnly;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsOk;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                EmptyIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.Slot_GetLoot
struct UZ_InventoryComponent_C_Slot_GetLoot_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  Loot;                                                      // (Parm, OutParm, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.Slot_SetLoot
struct UZ_InventoryComponent_C_Slot_SetLoot_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.InitializeInventory
struct UZ_InventoryComponent_C_InitializeInventory_Params
{
	TArray<struct FZ_SlotStr>                          InventorySLOTS;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_ConstructMenu
struct UZ_InventoryComponent_C_ZL_GUI_ConstructMenu_Params
{
	TArray<struct FZ_SlotStr>                          Slots;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_Update
struct UZ_InventoryComponent_C_ZL_GUI_Update_Params
{
	TArray<struct FZ_LootStr>                          Inventori;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FZ_LootStr>                          Container;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsOnFloorMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_ShowInventory
struct UZ_InventoryComponent_C_ZL_GUI_ShowInventory_Params
{
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_HideInventory
struct UZ_InventoryComponent_C_ZL_GUI_HideInventory_Params
{
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_Construkt_Container
struct UZ_InventoryComponent_C_ZL_GUI_Construkt_Container_Params
{
	TArray<struct FZ_LootStr>                          ContainerInventory;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FZ_ContainerInfo                            ContInform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_ClearContainer
struct UZ_InventoryComponent_C_ZL_GUI_ClearContainer_Params
{
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_DnD_Drag
struct UZ_InventoryComponent_C_ZL_GUI_DnD_Drag_Params
{
	class UUserWidget*                                 DragSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_DND_Drop
struct UZ_InventoryComponent_C_ZL_GUI_DND_Drop_Params
{
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_CHARACTER_EquipThis(Server)
struct UZ_InventoryComponent_C_ZL_CHARACTER_EquipThis_Server__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_CHARACTER_DropThis(Server)
struct UZ_InventoryComponent_C_ZL_CHARACTER_DropThis_Server__Params
{
	struct FZ_LootStr                                  LootStr;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_CHARACTER_USEThis(Server)
struct UZ_InventoryComponent_C_ZL_CHARACTER_USEThis_Server__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_CHARACTER_Unequip(Serever)
struct UZ_InventoryComponent_C_ZL_CHARACTER_Unequip_Serever__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_SLOT_Hovered
struct UZ_InventoryComponent_C_ZL_GUI_SLOT_Hovered_Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_SLOT_Unhovered
struct UZ_InventoryComponent_C_ZL_GUI_SLOT_Unhovered_Params
{
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_CHARACTER_AttachToWeapon(Server)
struct UZ_InventoryComponent_C_ZL_CHARACTER_AttachToWeapon_Server__Params
{
	TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes>        Scopes;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer>    Silencer;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_DrawLootNear
struct UZ_InventoryComponent_C_ZL_GUI_DrawLootNear_Params
{
	TArray<struct FZ_LootStr>                          Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_CHARACTER_UNAttach(Server)
struct UZ_InventoryComponent_C_ZL_CHARACTER_UNAttach_Server__Params
{
	struct FName                                       Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_Overload
struct UZ_InventoryComponent_C_ZL_GUI_Overload_Params
{
	float                                              OverloadMass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_InventoryRespawnMode
struct UZ_InventoryComponent_C_ZL_GUI_InventoryRespawnMode_Params
{
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.ExecuteUbergraph_Z_InventoryComponent
struct UZ_InventoryComponent_C_ExecuteUbergraph_Z_InventoryComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.OnLootRemove__DelegateSignature
struct UZ_InventoryComponent_C_OnLootRemove__DelegateSignature_Params
{
	struct FZ_LootStr                                  RemovedLoot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryComponent.Z_InventoryComponent_C.OnLootAdded(ServerOnly)__DelegateSignature
struct UZ_InventoryComponent_C_OnLootAdded_ServerOnly___DelegateSignature_Params
{
	struct FZ_LootStr                                  Z_Loot;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
