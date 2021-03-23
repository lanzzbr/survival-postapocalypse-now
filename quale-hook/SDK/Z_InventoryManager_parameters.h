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

// Function Z_InventoryManager.Z_InventoryManager_C.ZL_CONTROLLER_GetSlots
struct UZ_InventoryManager_C_ZL_CONTROLLER_GetSlots_Params
{
	TArray<struct FZ_SlotStr>                          Slots;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Loot_UnloadMagazine
struct UZ_InventoryManager_C_Loot_UnloadMagazine_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.TrayLootFromPlayer
struct UZ_InventoryManager_C_TrayLootFromPlayer_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.NewFunction_1
struct UZ_InventoryManager_C_NewFunction_1_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UZ_InventoryComponent_C*                     self2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UZ_InventoryComponent_C*                     self3;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index3;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                B;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Container_OpenBarigaActor(Server)
struct UZ_InventoryManager_C_Container_OpenBarigaActor_Server__Params
{
	int                                                BarigaIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ToAll;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Loot_DropWeaponFromHand(ServerFunc)
struct UZ_InventoryManager_C_Loot_DropWeaponFromHand_ServerFunc__Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.CheckBackpackMass
struct UZ_InventoryManager_C_CheckBackpackMass_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.SplitCount
struct UZ_InventoryManager_C_SplitCount_Params
{
	int                                                SplitCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Container_GetContainerPosition
struct UZ_InventoryManager_C_Container_GetContainerPosition_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Container_CheckMoveOut
struct UZ_InventoryManager_C_Container_CheckMoveOut_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.Slots_CheckMass
struct UZ_InventoryManager_C_Slots_CheckMass_Params
{
	float                                              ServerMAss;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Slots_CalculateMass
struct UZ_InventoryManager_C_Slots_CalculateMass_Params
{
	TArray<struct FZ_LootStr>                          ZLoot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Mass;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Inventory_Update_DBActorInfo
struct UZ_InventoryManager_C_Inventory_Update_DBActorInfo_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.OPEN_RESPAWN_MODE(ServerOnly)
struct UZ_InventoryManager_C_OPEN_RESPAWN_MODE_ServerOnly__Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.GET_LOOT_BY_SOCKET
struct UZ_InventoryManager_C_GET_LOOT_BY_SOCKET_Params
{
	TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>          Z_Equp_Socket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  Loot;                                                      // (Parm, OutParm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Slots_CanBackpackUnEqpt
struct UZ_InventoryManager_C_Slots_CanBackpackUnEqpt_Params
{
	class UZ_InventoryComponent_C*                     Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanUnEqpt;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Slots_CheckOverload
struct UZ_InventoryManager_C_Slots_CheckOverload_Params
{
	class UZ_InventoryComponent_C*                     InventoryComp;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  ZLoot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               NoOverload;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                InCont;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LootMassIfOverload;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Loot_GetSocetIndex
struct UZ_InventoryManager_C_Loot_GetSocetIndex_Params
{
	TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>          Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Fire
struct UZ_InventoryManager_C_Fire_Params
{
	TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>          Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AmmoCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootTryAddToHand
struct UZ_InventoryManager_C_LootTryAddToHand_Params
{
	struct FZ_LootStr                                  ZLoot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UZ_InventoryComponent_C*                     Z_Inventory;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Added;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.CheckTradeSuccess
struct UZ_InventoryManager_C_CheckTradeSuccess_Params
{
	class UZ_InventoryComponent_C*                     FromInventory;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UZ_InventoryComponent_C*                     ToInventory;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FromIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Toindex;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TradeOk;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootUNAttach_OnCharacter(ServerFunc)
struct UZ_InventoryManager_C_LootUNAttach_OnCharacter_ServerFunc__Params
{
	struct FZ_LootStr                                  WeaponLoot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Slots_GetAttachSlotsIndexes
struct UZ_InventoryManager_C_Slots_GetAttachSlotsIndexes_Params
{
	TArray<int>                                        AttachIndexes;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootAttachOnFloor
struct UZ_InventoryManager_C_LootAttachOnFloor_Params
{
	int                                                PlayerItemIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FloorWeaponindex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.AddHealth(ServerOnly)
struct UZ_InventoryManager_C_AddHealth_ServerOnly__Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootGetMedicineArray
struct UZ_InventoryManager_C_LootGetMedicineArray_Params
{
	TArray<struct FCv2_LootStructure>                  MedicLoot;                                                 // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        InventroyIndex;                                            // (Parm, OutParm, ZeroConstructor)
	int                                                MinimalIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.TRY_HEAL_ME
struct UZ_InventoryManager_C_TRY_HEAL_ME_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.SHOW_ACTOR_CRAFT
struct UZ_InventoryManager_C_SHOW_ACTOR_CRAFT_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootCombine
struct UZ_InventoryManager_C_LootCombine_Params
{
	class UZ_InventoryComponent_C*                     WhatInventory;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UZ_InventoryComponent_C*                     With_what_Inventory;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                What_index;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                With_what_index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SET_BACKPACK_Mass
struct UZ_InventoryManager_C_SET_BACKPACK_Mass_Params
{
	int                                                Mass;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootUseThis
struct UZ_InventoryManager_C_LootUseThis_Params
{
	struct FZ_LootStr                                  Z_Loot;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               FullUse;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FZ_LootStr                                  ReturnLoot;                                                // (Parm, OutParm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.TRY_ADD_ARRAY_LOOT_TO_INVENTORY
struct UZ_InventoryManager_C_TRY_ADD_ARRAY_LOOT_TO_INVENTORY_Params
{
	class UZ_InventoryComponent_C*                     Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FZ_LootStr>                          LootNames;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FZ_LootStr>                          LocalReturnLoott;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Loot_Drop
struct UZ_InventoryManager_C_Loot_Drop_Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LOOT_DROP_NO_INVENTORY
struct UZ_InventoryManager_C_LOOT_DROP_NO_INVENTORY_Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.External_Close(ServerFunc)
struct UZ_InventoryManager_C_External_Close_ServerFunc__Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.External_SetInventory
struct UZ_InventoryManager_C_External_SetInventory_Params
{
	TArray<struct FZ_LootStr>                          Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Z_InventoryManager.Z_InventoryManager_C.External_Open(ServerFunc)
struct UZ_InventoryManager_C_External_Open_ServerFunc__Params
{
	class AActor*                                      ExrternalActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Slots_ClearAllLoot
struct UZ_InventoryManager_C_Slots_ClearAllLoot_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.GET_ALL_LOOT_BY_SOCKET(NoSlot)
struct UZ_InventoryManager_C_GET_ALL_LOOT_BY_SOCKET_NoSlot__Params
{
	TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>          Z_Equp_Socket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FZ_LootStr>                          Loot;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Loot_SetLoot_InSocket
struct UZ_InventoryManager_C_Loot_SetLoot_InSocket_Params
{
	TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>          Socket;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootIsAttachExist
struct UZ_InventoryManager_C_LootIsAttachExist_Params
{
	class UZ_InventoryComponent_C*                     Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsScope;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsMagazine;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AttachExist;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FZ_LootStr                                  AttachedLoot;                                              // (Parm, OutParm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootClearAttach
struct UZ_InventoryManager_C_LootClearAttach_Params
{
	class UZ_InventoryComponent_C*                     Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsScope;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsMagazine;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootUnAttach
struct UZ_InventoryManager_C_LootUnAttach_Params
{
	class UZ_InventoryComponent_C*                     FromInventory;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FromWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UZ_InventoryComponent_C*                     ToInventory;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ToSlotIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsScope;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsMagazine;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootCheckCanAttachAnywhere
struct UZ_InventoryManager_C_LootCheckCanAttachAnywhere_Params
{
	struct FZ_LootStr                                  LootAttachTo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	int                                                SlotIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WeaponIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootFloorMove
struct UZ_InventoryManager_C_LootFloorMove_Params
{
	int                                                From;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                To;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UZ_InventoryComponent_C*                     FromInventory;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UZ_InventoryComponent_C*                     ToInventory;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootRemoveLootFromFloor
struct UZ_InventoryManager_C_LootRemoveLootFromFloor_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.GUI_DrawClientLootNear
struct UZ_InventoryManager_C_GUI_DrawClientLootNear_Params
{
	TArray<struct FZ_LootStr>                          LootNear;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootSeekLoot
struct UZ_InventoryManager_C_LootSeekLoot_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootGetLootNear
struct UZ_InventoryManager_C_LootGetLootNear_Params
{
	TArray<struct FZ_LootStr>                          Z_LootArray;                                               // (Parm, OutParm, ZeroConstructor)
	TArray<class AZ_LootActor_C*>                      LootActors;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               LootFound;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootRemoveLoot
struct UZ_InventoryManager_C_LootRemoveLoot_Params
{
	struct FName                                       NameLoot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RemoveCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnCount;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Slots_ClearAttachmentOnParentSlot
struct UZ_InventoryManager_C_Slots_ClearAttachmentOnParentSlot_Params
{
	int                                                ParentIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsScope;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsMagazine;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootAttach_OnCharacter(ServerFunc)
struct UZ_InventoryManager_C_LootAttach_OnCharacter_ServerFunc__Params
{
	struct FZ_LootStr                                  WeaponLoot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootSetAttachInWeapStr
struct UZ_InventoryManager_C_LootSetAttachInWeapStr_Params
{
	class UZ_InventoryComponent_C*                     Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WeaponIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  Z_LootStr;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FZ_LootStr                                  WeapLoot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Slots_SetAttachmentSlots
struct UZ_InventoryManager_C_Slots_SetAttachmentSlots_Params
{
	int                                                ParentIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  WeaponLoot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Slots_ClearAttachmentSlots
struct UZ_InventoryManager_C_Slots_ClearAttachmentSlots_Params
{
	int                                                ParentIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Slots_GetAttachSlotsByParentIndex
struct UZ_InventoryManager_C_Slots_GetAttachSlotsByParentIndex_Params
{
	int                                                ParentIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<int>                                        AttachesIndexes;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootTryAttach
struct UZ_InventoryManager_C_LootTryAttach_Params
{
	class UZ_InventoryComponent_C*                     FromInventory;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WeaponIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ItemIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AttachSlotIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootCheckCanAttachToWeapon
struct UZ_InventoryManager_C_LootCheckCanAttachToWeapon_Params
{
	struct FZ_LootStr                                  AttachedLoot;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FZ_LootStr                                  Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.GET_LOOT_By_Equipment
struct UZ_InventoryManager_C_GET_LOOT_By_Equipment_Params
{
	TEnumAsByte<Z_LootEquipCategory_EZ_LootEquipCategory> Z_EquipmetCategory;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>          Z_EquipSocket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  Loot;                                                      // (Parm, OutParm, HasGetValueTypeHash)
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootCheckCanSetToSlot
struct UZ_InventoryManager_C_LootCheckCanSetToSlot_Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FZ_SlotStr                                  Slot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.TRY_ADD_LOOT_TO_SOCKET
struct UZ_InventoryManager_C_TRY_ADD_LOOT_TO_SOCKET_Params
{
	class UZ_InventoryComponent_C*                     Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  AddLoot;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>          Socket;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.GET_INVENTORY_LOOT_COUNT
struct UZ_InventoryManager_C_GET_INVENTORY_LOOT_COUNT_Params
{
	struct FName                                       LootName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UZ_InventoryComponent_C*                     Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.GET_PLAYER_LOOT_COUNT
struct UZ_InventoryManager_C_GET_PLAYER_LOOT_COUNT_Params
{
	struct FName                                       LootName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.GET_LOOT_COUNT_By_Socet
struct UZ_InventoryManager_C_GET_LOOT_COUNT_By_Socet_Params
{
	TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>          Z_EquipSocket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootCombineEqual
struct UZ_InventoryManager_C_LootCombineEqual_Params
{
	struct FZ_LootStr                                  LootFrom;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FZ_LootStr                                  LootTo;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FZ_LootStr                                  NewLootFrom;                                               // (Parm, OutParm, HasGetValueTypeHash)
	struct FZ_LootStr                                  NewToLoot;                                                 // (Parm, OutParm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.DECREMENT_SOCET_COUNT
struct UZ_InventoryManager_C_DECREMENT_SOCET_COUNT_Params
{
	TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>          Z_EquipSocket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.GET_LOOT_FROM_Socet
struct UZ_InventoryManager_C_GET_LOOT_FROM_Socet_Params
{
	TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>          Z_EquipSocket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  Loot;                                                      // (Parm, OutParm, HasGetValueTypeHash)
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootUnEquip
struct UZ_InventoryManager_C_LootUnEquip_Params
{
	class UZ_InventoryComponent_C*                     Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootUnEquip_OnCharacter(ServerFunc)
struct UZ_InventoryManager_C_LootUnEquip_OnCharacter_ServerFunc__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Slots_GetEquipSlots
struct UZ_InventoryManager_C_Slots_GetEquipSlots_Params
{
	class UZ_InventoryComponent_C*                     Inventroy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FreeOnly;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WasFound;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<int>                                        EqupSlotsIndexes;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootCheckCanEquip
struct UZ_InventoryManager_C_LootCheckCanEquip_Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               CanEquip;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  LootWasHere;                                               // (Parm, OutParm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootDrop_OnCharacter(ServerFunc)
struct UZ_InventoryManager_C_LootDrop_OnCharacter_ServerFunc__Params
{
	class UZ_InventoryComponent_C*                     Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootEquip_OnCharacter(ServerFunc)
struct UZ_InventoryManager_C_LootEquip_OnCharacter_ServerFunc__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootCheckUsable
struct UZ_InventoryManager_C_LootCheckUsable_Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               WasUsable;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootUse
struct UZ_InventoryManager_C_LootUse_Params
{
	class UZ_InventoryComponent_C*                     Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.ContainerClose(ServerFunc)
struct UZ_InventoryManager_C_ContainerClose_ServerFunc__Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.TransportTOInventory
struct UZ_InventoryManager_C_TransportTOInventory_Params
{
	TArray<struct FZ_TransportLoot>                    TransportInventory;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FZ_LootStr>                          Inventory;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.InventoryTOTransport
struct UZ_InventoryManager_C_InventoryTOTransport_Params
{
	TArray<struct FZ_LootStr>                          Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FZ_TransportLoot>                    TransportArray;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.GUI_OpenContainer
struct UZ_InventoryManager_C_GUI_OpenContainer_Params
{
	struct FZ_ContainerInfo                            ContInform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<struct FZ_LootStr>                          ContainerInventory;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Z_InventoryManager.Z_InventoryManager_C.ContainerOpen(ServerFunc)
struct UZ_InventoryManager_C_ContainerOpen_ServerFunc__Params
{
	class AActor*                                      ContainerActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.LootMove
struct UZ_InventoryManager_C_LootMove_Params
{
	class UZ_InventoryComponent_C*                     FromInventory;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UZ_InventoryComponent_C*                     ToInventory;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                From;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                To;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.GUI_HideInventory
struct UZ_InventoryManager_C_GUI_HideInventory_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.GUI_ShowInventory
struct UZ_InventoryManager_C_GUI_ShowInventory_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.GUI_StopUpdate
struct UZ_InventoryManager_C_GUI_StopUpdate_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.GUI_StartUpdate
struct UZ_InventoryManager_C_GUI_StartUpdate_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.GUI_Construct
struct UZ_InventoryManager_C_GUI_Construct_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.GUI_Update
struct UZ_InventoryManager_C_GUI_Update_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.INITIALIZE
struct UZ_InventoryManager_C_INITIALIZE_Params
{
	class UZ_InventoryComponent_C*                     Player_Inventory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FZ_SlotStr>                          PLAYER_InventorySLOTS;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AHUD*                                        HUD;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.TRY_ADD_LOOT_TO_INVENTORY
struct UZ_InventoryManager_C_TRY_ADD_LOOT_TO_INVENTORY_Params
{
	class UZ_InventoryComponent_C*                     Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  AddLoot;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FZ_LootStr                                  ReturnLoot;                                                // (Parm, OutParm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_ConstructMenu
struct UZ_InventoryManager_C_ZL_GUI_ConstructMenu_Params
{
	TArray<struct FZ_SlotStr>                          Slots;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_Update
struct UZ_InventoryManager_C_ZL_GUI_Update_Params
{
	TArray<struct FZ_LootStr>                          Inventori;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FZ_LootStr>                          Container;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsOnFloorMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_ShowInventory
struct UZ_InventoryManager_C_ZL_GUI_ShowInventory_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_HideInventory
struct UZ_InventoryManager_C_ZL_GUI_HideInventory_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_Construkt_Container
struct UZ_InventoryManager_C_ZL_GUI_Construkt_Container_Params
{
	TArray<struct FZ_LootStr>                          ContainerInventory;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FZ_ContainerInfo                            ContInform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_ClearContainer
struct UZ_InventoryManager_C_ZL_GUI_ClearContainer_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_DnD_Drag
struct UZ_InventoryManager_C_ZL_GUI_DnD_Drag_Params
{
	class UUserWidget*                                 DragSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_DND_Drop
struct UZ_InventoryManager_C_ZL_GUI_DND_Drop_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.ZL_CHARACTER_EquipThis(Server)
struct UZ_InventoryManager_C_ZL_CHARACTER_EquipThis_Server__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.ZL_CHARACTER_DropThis(Server)
struct UZ_InventoryManager_C_ZL_CHARACTER_DropThis_Server__Params
{
	struct FZ_LootStr                                  LootStr;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.ZL_CHARACTER_USEThis(Server)
struct UZ_InventoryManager_C_ZL_CHARACTER_USEThis_Server__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.ZL_CHARACTER_Unequip(Serever)
struct UZ_InventoryManager_C_ZL_CHARACTER_Unequip_Serever__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_SLOT_Hovered
struct UZ_InventoryManager_C_ZL_GUI_SLOT_Hovered_Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_SLOT_Unhovered
struct UZ_InventoryManager_C_ZL_GUI_SLOT_Unhovered_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.ZL_CHARACTER_AttachToWeapon(Server)
struct UZ_InventoryManager_C_ZL_CHARACTER_AttachToWeapon_Server__Params
{
	TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes>        Scopes;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer>    Silencer;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_DrawLootNear
struct UZ_InventoryManager_C_ZL_GUI_DrawLootNear_Params
{
	TArray<struct FZ_LootStr>                          Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Z_InventoryManager.Z_InventoryManager_C.ZL_CHARACTER_UNAttach(Server)
struct UZ_InventoryManager_C_ZL_CHARACTER_UNAttach_Server__Params
{
	struct FName                                       Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_Overload
struct UZ_InventoryManager_C_ZL_GUI_Overload_Params
{
	float                                              OverloadMass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_InventoryRespawnMode
struct UZ_InventoryManager_C_ZL_GUI_InventoryRespawnMode_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_PLAYER_SetLootInSlot
struct UZ_InventoryManager_C_CLIENT_PLAYER_SetLootInSlot_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_TransportLoot                            TransportLoot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.InitializeGUI
struct UZ_InventoryManager_C_InitializeGUI_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_PLAYER_ClearSlot
struct UZ_InventoryManager_C_CLIENT_PLAYER_ClearSlot_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_PLAYER_MoveLoot
struct UZ_InventoryManager_C_SERVER_PLAYER_MoveLoot_Params
{
	int                                                From;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                To;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_Open_Container
struct UZ_InventoryManager_C_SERVER_Open_Container_Params
{
	class AActor*                                      ContainerActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_OPEN_CONTAINER
struct UZ_InventoryManager_C_CLIENT_OPEN_CONTAINER_Params
{
	struct FZ_ContainerInfo                            ContainerInfo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<struct FZ_TransportLoot>                    Inventorytransport;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               OpenInventory;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_CONTAINER_MoveLoot
struct UZ_InventoryManager_C_SERVER_CONTAINER_MoveLoot_Params
{
	int                                                From;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                To;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_CONTAINER_ClearSlot
struct UZ_InventoryManager_C_CLIENT_CONTAINER_ClearSlot_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_CONTAINER_SetLootInSlot
struct UZ_InventoryManager_C_CLIENT_CONTAINER_SetLootInSlot_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_TransportLoot                            TransportLoot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_MOVE_FromContainerToPlayer
struct UZ_InventoryManager_C_SERVER_MOVE_FromContainerToPlayer_Params
{
	int                                                From;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                To;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_MOVE_FromPlayerToContainer
struct UZ_InventoryManager_C_SERVER_MOVE_FromPlayerToContainer_Params
{
	int                                                From;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                To;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_CLOSE_CONTAINER
struct UZ_InventoryManager_C_SERVER_CLOSE_CONTAINER_Params
{
	bool                                               StartSeekLoot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_CLOSE_CONTAINER
struct UZ_InventoryManager_C_CLIENT_CLOSE_CONTAINER_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_CONTAINER_DROPItem
struct UZ_InventoryManager_C_SERVER_CONTAINER_DROPItem_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_PLAYER_DROPItem
struct UZ_InventoryManager_C_SERVER_PLAYER_DROPItem_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_PLAYER_USEItem
struct UZ_InventoryManager_C_SERVER_PLAYER_USEItem_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_CONTAINER_USEitem
struct UZ_InventoryManager_C_SERVER_CONTAINER_USEitem_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_PLAYER_TryUnEquip
struct UZ_InventoryManager_C_SERVER_PLAYER_TryUnEquip_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_SIHRONIZE
struct UZ_InventoryManager_C_CLIENT_SIHRONIZE_Params
{
	TArray<struct FZ_TransportLoot>                    TransportInventory;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FZ_TransportLoot>                    TransportContainer;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              PlayerMass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_SINHRONIZE
struct UZ_InventoryManager_C_SERVER_SINHRONIZE_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_PLAYER_AttachToWeapon
struct UZ_InventoryManager_C_SERVER_PLAYER_AttachToWeapon_Params
{
	int                                                WeaponSlotIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AttachItemIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AttachSlotIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.StartSeekLoot
struct UZ_InventoryManager_C_StartSeekLoot_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.StopSeekLoot
struct UZ_InventoryManager_C_StopSeekLoot_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_ONFLOOR_SetLootItem
struct UZ_InventoryManager_C_CLIENT_ONFLOOR_SetLootItem_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_TransportLoot                            TransportLoot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_ONFLOOR_RemoveLoot
struct UZ_InventoryManager_C_CLIENT_ONFLOOR_RemoveLoot_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_ONFLOOR_Setloot
struct UZ_InventoryManager_C_CLIENT_ONFLOOR_Setloot_Params
{
	TArray<struct FZ_TransportLoot>                    TransportInventory;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_ONFLOOR_FromFloorToPlayer
struct UZ_InventoryManager_C_SERVER_ONFLOOR_FromFloorToPlayer_Params
{
	int                                                From;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                To;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_ONFLOOR_FromPlayerToFloor
struct UZ_InventoryManager_C_SERVER_ONFLOOR_FromPlayerToFloor_Params
{
	int                                                From;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                To;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_ONFLOOR_UseItem
struct UZ_InventoryManager_C_SERVER_ONFLOOR_UseItem_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_CONTAINER_attach
struct UZ_InventoryManager_C_SERVER_CONTAINER_attach_Params
{
	int                                                WeaponIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ItemIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AttachSlotIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_UNATTACH_PLAYER_PLAYER
struct UZ_InventoryManager_C_SERVER_UNATTACH_PLAYER_PLAYER_Params
{
	int                                                FromWeaponIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ToSlot;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsScope;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsMagazine;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_UNATTACH_PLAYER_CONTAINER
struct UZ_InventoryManager_C_SERVER_UNATTACH_PLAYER_CONTAINER_Params
{
	int                                                FromWeaponIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ToSlot;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsScope;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsMagazine;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_UNATTACH_CONTAINER_PLAYER
struct UZ_InventoryManager_C_SERVER_UNATTACH_CONTAINER_PLAYER_Params
{
	int                                                FromWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ToSlotIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsScope;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsMagazine;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_UNATTACH_CONTAINER_CONTAINER
struct UZ_InventoryManager_C_SERVER_UNATTACH_CONTAINER_CONTAINER_Params
{
	int                                                FromWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ToSlotIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsScope;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsMagazine;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_Extrernal_Open
struct UZ_InventoryManager_C_CLIENT_Extrernal_Open_Params
{
	TArray<struct FZ_TransportLoot>                    TransportLoot;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      ExternalActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_External_Close
struct UZ_InventoryManager_C_CLIENT_External_Close_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_External_Set
struct UZ_InventoryManager_C_CLIENT_External_Set_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_TransportLoot                            TransportStr;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_External_Clear
struct UZ_InventoryManager_C_CLIENT_External_Clear_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_PLAYER_Setbackpack
struct UZ_InventoryManager_C_CLIENT_PLAYER_Setbackpack_Params
{
	int                                                Mass;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_PLAYER_COMBINE
struct UZ_InventoryManager_C_SERVER_PLAYER_COMBINE_Params
{
	int                                                WhatIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                With_what;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_ShowActorCraft
struct UZ_InventoryManager_C_CLIENT_ShowActorCraft_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_Split_count
struct UZ_InventoryManager_C_SERVER_Split_count_Params
{
	int                                                SplitCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerinventoryIndex;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_HEAL_KEY
struct UZ_InventoryManager_C_SERVER_HEAL_KEY_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.StartAddHealth
struct UZ_InventoryManager_C_StartAddHealth_Params
{
	float                                              AddHealth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.StopAddHealth
struct UZ_InventoryManager_C_StopAddHealth_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_ONFLOOR_AttachFromPlayer
struct UZ_InventoryManager_C_SERVER_ONFLOOR_AttachFromPlayer_Params
{
	int                                                WeaponIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ItemIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AttachSlotIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_IsDoubleClick
struct UZ_InventoryManager_C_SERVER_IsDoubleClick_Params
{
	bool                                               IsDoubleClick;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_TRADE_Begin
struct UZ_InventoryManager_C_SERVER_TRADE_Begin_Params
{
	int                                                BarigaIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTradeAll;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Print mass
struct UZ_InventoryManager_C_Print_mass_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_StartDebug
struct UZ_InventoryManager_C_SERVER_StartDebug_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_PrintDEbug
struct UZ_InventoryManager_C_CLIENT_PrintDEbug_Params
{
	float                                              ServerMAss;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.ReceiveBeginPlay
struct UZ_InventoryManager_C_ReceiveBeginPlay_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_UpdateDBActorInfo
struct UZ_InventoryManager_C_SERVER_UpdateDBActorInfo_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_OPEN_DB
struct UZ_InventoryManager_C_SERVER_OPEN_DB_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_Cheat_Moneys
struct UZ_InventoryManager_C_SERVER_Cheat_Moneys_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_SHOW_TRADE_INFO
struct UZ_InventoryManager_C_CLIENT_SHOW_TRADE_INFO_Params
{
	struct FZ_TradeStr                                 TradeStr;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_CorectMass
struct UZ_InventoryManager_C_SERVER_CorectMass_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_DropWeaponFromHand
struct UZ_InventoryManager_C_SERVER_DropWeaponFromHand_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_CreateDbActor
struct UZ_InventoryManager_C_SERVER_CreateDbActor_Params
{
	int                                                SlotsCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Supporter;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SpecialForces;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AppOwner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryManager.Z_InventoryManager_C.ReceiveEndPlay
struct UZ_InventoryManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Delete
struct UZ_InventoryManager_C_Delete_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_PLAYER_TrashItem
struct UZ_InventoryManager_C_SERVER_PLAYER_TrashItem_Params
{
	int                                                PlayerinventoryIndex;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.ReceiveTick
struct UZ_InventoryManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.Server_Open_InventoryEmpty
struct UZ_InventoryManager_C_Server_Open_InventoryEmpty_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_SHOW_RESPAWN_CLASSICAL_MODE
struct UZ_InventoryManager_C_CLIENT_SHOW_RESPAWN_CLASSICAL_MODE_Params
{
};

// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_PLAYER_UNLOAD_MAGAZINE
struct UZ_InventoryManager_C_SERVER_PLAYER_UNLOAD_MAGAZINE_Params
{
	int                                                MagazineIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryManager.Z_InventoryManager_C.ExecuteUbergraph_Z_InventoryManager
struct UZ_InventoryManager_C_ExecuteUbergraph_Z_InventoryManager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
