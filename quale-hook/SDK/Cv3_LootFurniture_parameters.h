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

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ZL_CONTROLLER_GetSlots
struct ACv3_LootFurniture_C_ZL_CONTROLLER_GetSlots_Params
{
	TArray<struct FZ_SlotStr>                          Slots;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.OnRep_isDestroy
struct ACv3_LootFurniture_C_OnRep_isDestroy_Params
{
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.OnRep_isOpen
struct ACv3_LootFurniture_C_OnRep_isOpen_Params
{
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.UserConstructionScript
struct ACv3_LootFurniture_C_UserConstructionScript_Params
{
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ZL_GUI_ConstructMenu
struct ACv3_LootFurniture_C_ZL_GUI_ConstructMenu_Params
{
	TArray<struct FZ_SlotStr>                          Slots;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ZL_GUI_Update
struct ACv3_LootFurniture_C_ZL_GUI_Update_Params
{
	TArray<struct FZ_LootStr>                          Inventori;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FZ_LootStr>                          Container;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsOnFloorMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ZL_GUI_ShowInventory
struct ACv3_LootFurniture_C_ZL_GUI_ShowInventory_Params
{
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ZL_GUI_HideInventory
struct ACv3_LootFurniture_C_ZL_GUI_HideInventory_Params
{
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ZL_GUI_Construkt_Container
struct ACv3_LootFurniture_C_ZL_GUI_Construkt_Container_Params
{
	TArray<struct FZ_LootStr>                          ContainerInventory;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FZ_ContainerInfo                            ContInform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ZL_GUI_ClearContainer
struct ACv3_LootFurniture_C_ZL_GUI_ClearContainer_Params
{
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ZL_GUI_DnD_Drag
struct ACv3_LootFurniture_C_ZL_GUI_DnD_Drag_Params
{
	class UUserWidget*                                 DragSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ZL_GUI_DND_Drop
struct ACv3_LootFurniture_C_ZL_GUI_DND_Drop_Params
{
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ZL_CHARACTER_EquipThis(Server)
struct ACv3_LootFurniture_C_ZL_CHARACTER_EquipThis_Server__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ZL_CHARACTER_DropThis(Server)
struct ACv3_LootFurniture_C_ZL_CHARACTER_DropThis_Server__Params
{
	struct FZ_LootStr                                  LootStr;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ZL_CHARACTER_USEThis(Server)
struct ACv3_LootFurniture_C_ZL_CHARACTER_USEThis_Server__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ZL_CHARACTER_Unequip(Serever)
struct ACv3_LootFurniture_C_ZL_CHARACTER_Unequip_Serever__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ZL_GUI_SLOT_Hovered
struct ACv3_LootFurniture_C_ZL_GUI_SLOT_Hovered_Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ZL_GUI_SLOT_Unhovered
struct ACv3_LootFurniture_C_ZL_GUI_SLOT_Unhovered_Params
{
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ZL_CHARACTER_AttachToWeapon(Server)
struct ACv3_LootFurniture_C_ZL_CHARACTER_AttachToWeapon_Server__Params
{
	TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes>        Scopes;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer>    Silencer;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ZL_GUI_DrawLootNear
struct ACv3_LootFurniture_C_ZL_GUI_DrawLootNear_Params
{
	TArray<struct FZ_LootStr>                          Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ZL_CHARACTER_UNAttach(Server)
struct ACv3_LootFurniture_C_ZL_CHARACTER_UNAttach_Server__Params
{
	struct FName                                       Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ZL_GUI_Overload
struct ACv3_LootFurniture_C_ZL_GUI_Overload_Params
{
	float                                              OverloadMass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ZL_GUI_InventoryRespawnMode
struct ACv3_LootFurniture_C_ZL_GUI_InventoryRespawnMode_Params
{
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.RegenerateLoot
struct ACv3_LootFurniture_C_RegenerateLoot_Params
{
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ReceiveBeginPlay
struct ACv3_LootFurniture_C_ReceiveBeginPlay_Params
{
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.CheckRegenerateLoot
struct ACv3_LootFurniture_C_CheckRegenerateLoot_Params
{
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.CheckState
struct ACv3_LootFurniture_C_CheckState_Params
{
};

// Function Cv3_LootFurniture.Cv3_LootFurniture_C.ExecuteUbergraph_Cv3_LootFurniture
struct ACv3_LootFurniture_C_ExecuteUbergraph_Cv3_LootFurniture_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
