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

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_CONTROLLER_GetSlots
struct AZ_OnFloorInventoryActor_C_ZL_CONTROLLER_GetSlots_Params
{
	TArray<struct FZ_SlotStr>                          Slots;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.CreateLootNear
struct AZ_OnFloorInventoryActor_C_CreateLootNear_Params
{
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.DeleteLootActor
struct AZ_OnFloorInventoryActor_C_DeleteLootActor_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.SetLootOnActor
struct AZ_OnFloorInventoryActor_C_SetLootOnActor_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.RemoveLoot
struct AZ_OnFloorInventoryActor_C_RemoveLoot_Params
{
	class AZ_LootActor_C*                              LootActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.AddLoot
struct AZ_OnFloorInventoryActor_C_AddLoot_Params
{
	class AZ_LootActor_C*                              LootActors;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.CompareLoot
struct AZ_OnFloorInventoryActor_C_CompareLoot_Params
{
	TArray<class AZ_LootActor_C*>                      NewLootActors;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TMap<TEnumAsByte<Z_OnFloorActions_EZ_OnFloorActions>, class AZ_LootActor_C*> CompareActions;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.UserConstructionScript
struct AZ_OnFloorInventoryActor_C_UserConstructionScript_Params
{
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_ConstructMenu
struct AZ_OnFloorInventoryActor_C_ZL_GUI_ConstructMenu_Params
{
	TArray<struct FZ_SlotStr>                          Slots;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_Update
struct AZ_OnFloorInventoryActor_C_ZL_GUI_Update_Params
{
	TArray<struct FZ_LootStr>                          Inventori;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FZ_LootStr>                          Container;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsOnFloorMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_ShowInventory
struct AZ_OnFloorInventoryActor_C_ZL_GUI_ShowInventory_Params
{
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_HideInventory
struct AZ_OnFloorInventoryActor_C_ZL_GUI_HideInventory_Params
{
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_Construkt_Container
struct AZ_OnFloorInventoryActor_C_ZL_GUI_Construkt_Container_Params
{
	TArray<struct FZ_LootStr>                          ContainerInventory;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FZ_ContainerInfo                            ContInform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_ClearContainer
struct AZ_OnFloorInventoryActor_C_ZL_GUI_ClearContainer_Params
{
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_DnD_Drag
struct AZ_OnFloorInventoryActor_C_ZL_GUI_DnD_Drag_Params
{
	class UUserWidget*                                 DragSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_DND_Drop
struct AZ_OnFloorInventoryActor_C_ZL_GUI_DND_Drop_Params
{
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_CHARACTER_EquipThis(Server)
struct AZ_OnFloorInventoryActor_C_ZL_CHARACTER_EquipThis_Server__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_CHARACTER_DropThis(Server)
struct AZ_OnFloorInventoryActor_C_ZL_CHARACTER_DropThis_Server__Params
{
	struct FZ_LootStr                                  LootStr;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_CHARACTER_USEThis(Server)
struct AZ_OnFloorInventoryActor_C_ZL_CHARACTER_USEThis_Server__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_CHARACTER_Unequip(Serever)
struct AZ_OnFloorInventoryActor_C_ZL_CHARACTER_Unequip_Serever__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_SLOT_Hovered
struct AZ_OnFloorInventoryActor_C_ZL_GUI_SLOT_Hovered_Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_SLOT_Unhovered
struct AZ_OnFloorInventoryActor_C_ZL_GUI_SLOT_Unhovered_Params
{
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_CHARACTER_AttachToWeapon(Server)
struct AZ_OnFloorInventoryActor_C_ZL_CHARACTER_AttachToWeapon_Server__Params
{
	TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes>        Scopes;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer>    Silencer;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_DrawLootNear
struct AZ_OnFloorInventoryActor_C_ZL_GUI_DrawLootNear_Params
{
	TArray<struct FZ_LootStr>                          Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_CHARACTER_UNAttach(Server)
struct AZ_OnFloorInventoryActor_C_ZL_CHARACTER_UNAttach_Server__Params
{
	struct FName                                       Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_Overload
struct AZ_OnFloorInventoryActor_C_ZL_GUI_Overload_Params
{
	float                                              OverloadMass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_InventoryRespawnMode
struct AZ_OnFloorInventoryActor_C_ZL_GUI_InventoryRespawnMode_Params
{
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ReceiveBeginPlay
struct AZ_OnFloorInventoryActor_C_ReceiveBeginPlay_Params
{
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.UpdateInventory
struct AZ_OnFloorInventoryActor_C_UpdateInventory_Params
{
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ReceiveTick
struct AZ_OnFloorInventoryActor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ExecuteUbergraph_Z_OnFloorInventoryActor
struct AZ_OnFloorInventoryActor_C_ExecuteUbergraph_Z_OnFloorInventoryActor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
