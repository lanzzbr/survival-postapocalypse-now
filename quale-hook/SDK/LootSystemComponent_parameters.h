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

// Function LootSystemComponent.LootSystemComponent_C.RemoveAmmo
struct ULootSystemComponent_C_RemoveAmmo_Params
{
	int                                                indexSlot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootSystemComponent.LootSystemComponent_C.GetNextWeaponInType
struct ULootSystemComponent_C_GetNextWeaponInType_Params
{
	TEnumAsByte<Cv2_LootType_ECv2_LootType>            LootType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanChange;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NextWeaponIndex;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootSystemComponent.LootSystemComponent_C.GetNextWeaponIfDrop
struct ULootSystemComponent_C_GetNextWeaponIfDrop_Params
{
	TEnumAsByte<Cv2_LootType_ECv2_LootType>            DropWeaponlootType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanChange;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               LootNeedUse;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NextWeaponIndex;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DropIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootSystemComponent.LootSystemComponent_C.GetLootBytype
struct ULootSystemComponent_C_GetLootBytype_Params
{
	TEnumAsByte<Cv2_LootType_ECv2_LootType>            Loottypee;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_InventorySlot>                    typeLootArray;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function LootSystemComponent.LootSystemComponent_C.Heal_Me
struct ULootSystemComponent_C_Heal_Me_Params
{
};

// Function LootSystemComponent.LootSystemComponent_C.GetSplitLoot
struct ULootSystemComponent_C_GetSplitLoot_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FromOtherPanel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                SplitCouint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FCv2_LootCargoStructure                     UseLoot;                                                   // (Parm, OutParm, HasGetValueTypeHash)
	struct FCv2_LootCargoStructure                     ResidueLoot;                                               // (Parm, OutParm, HasGetValueTypeHash)
	bool                                               Use_SplitMode;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootSystemComponent.LootSystemComponent_C.GetTypeCount
struct ULootSystemComponent_C_GetTypeCount_Params
{
	TEnumAsByte<Cv2_LootType_ECv2_LootType>            LootType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TypeCount;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootSystemComponent.LootSystemComponent_C.CharacterToLoot
struct ULootSystemComponent_C_CharacterToLoot_Params
{
	struct FCV2_CharacterTypeStructure                 CV2_CharacterTypeStructure;                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class APlayerController*                           PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootSystemComponent.LootSystemComponent_C.UseUsableLoot
struct ULootSystemComponent_C_UseUsableLoot_Params
{
	struct FCv2_LootCargoStructure                     Use_Loot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FullUse;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FCv2_LootCargoStructure                     ReturnLoot;                                                // (Parm, OutParm, HasGetValueTypeHash)
};

// Function LootSystemComponent.LootSystemComponent_C.UpdateSlotsOnAll
struct ULootSystemComponent_C_UpdateSlotsOnAll_Params
{
};

// Function LootSystemComponent.LootSystemComponent_C.UseLoot
struct ULootSystemComponent_C_UseLoot_Params
{
	bool                                               FromOtherPanel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<int>                                        Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               MoveOnly;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                SplitCouunt;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootSystemComponent.LootSystemComponent_C.RemoveLoot
struct ULootSystemComponent_C_RemoveLoot_Params
{
	TArray<struct FCv2_LootCargoStructure>             RemoveLoot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LootSystemComponent.LootSystemComponent_C.CheckResourcesForCraft
struct ULootSystemComponent_C_CheckResourcesForCraft_Params
{
	TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> CraftType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootSystemComponent.LootSystemComponent_C.CheckCouantbleLoot
struct ULootSystemComponent_C_CheckCouantbleLoot_Params
{
	struct FCv2_LootCargoStructure                     Loot_Cargo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               IsCouanteble;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HaveReturnLoot;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FCv2_LootCargoStructure                     ReturnLoot;                                                // (Parm, OutParm, HasGetValueTypeHash)
};

// Function LootSystemComponent.LootSystemComponent_C.GetEmptySlotsIndexes
struct ULootSystemComponent_C_GetEmptySlotsIndexes_Params
{
	TArray<int>                                        emptyIndexes;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function LootSystemComponent.LootSystemComponent_C.GetLootIndexes
struct ULootSystemComponent_C_GetLootIndexes_Params
{
	TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>            Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        LootIndexes;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function LootSystemComponent.LootSystemComponent_C.GetLootcount
struct ULootSystemComponent_C_GetLootcount_Params
{
	TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>            Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootSystemComponent.LootSystemComponent_C.OnRep_InventoryActor
struct ULootSystemComponent_C_OnRep_InventoryActor_Params
{
};

// Function LootSystemComponent.LootSystemComponent_C.ClearSlots
struct ULootSystemComponent_C_ClearSlots_Params
{
};

// Function LootSystemComponent.LootSystemComponent_C.ClearID
struct ULootSystemComponent_C_ClearID_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootSystemComponent.LootSystemComponent_C.GetLoot
struct ULootSystemComponent_C_GetLoot_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCv2_LootCargoStructure>             Loot;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function LootSystemComponent.LootSystemComponent_C.AddLoot
struct ULootSystemComponent_C_AddLoot_Params
{
	TArray<struct FCv2_LootCargoStructure>             LootGargoArray;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FCv2_LootCargoStructure>             ReturnLoot;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function LootSystemComponent.LootSystemComponent_C.RemoveLootFromSlot
struct ULootSystemComponent_C_RemoveLootFromSlot_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootSystemComponent.LootSystemComponent_C.Add_Loot_To_Slot
struct ULootSystemComponent_C_Add_Loot_To_Slot_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCv2_LootCargoStructure                     LootCargo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function LootSystemComponent.LootSystemComponent_C.Add_Loot_to_Id
struct ULootSystemComponent_C_Add_Loot_to_Id_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCv2_LootCargoStructure                     Loot_Cargo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               EmptyOnly;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WasEmpty;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FCv2_LootCargoStructure                     WHAT_IT_LIES;                                              // (Parm, OutParm, HasGetValueTypeHash)
};

// Function LootSystemComponent.LootSystemComponent_C.Get ID Indexes
struct ULootSystemComponent_C_Get_ID_Indexes_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        ID_Indexes;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function LootSystemComponent.LootSystemComponent_C.IndexateLootArray
struct ULootSystemComponent_C_IndexateLootArray_Params
{
};

// Function LootSystemComponent.LootSystemComponent_C.UpdateLootArray
struct ULootSystemComponent_C_UpdateLootArray_Params
{
	TArray<struct FS_InventorySlot>                    LootSlotsArray;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LootSystemComponent.LootSystemComponent_C.Server_MoveLoot_In
struct ULootSystemComponent_C_Server_MoveLoot_In_Params
{
	TArray<int>                                        SelectedItems;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LootSystemComponent.LootSystemComponent_C.Server_MoveLootOut
struct ULootSystemComponent_C_Server_MoveLootOut_Params
{
	TArray<int>                                        SelectedLoot;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LootSystemComponent.LootSystemComponent_C.Server_Use_Loot
struct ULootSystemComponent_C_Server_Use_Loot_Params
{
	int                                                LootIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FromOther;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MoveOnly;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                SplitCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootSystemComponent.LootSystemComponent_C.UpdatePlayerSlotsArrayFROM_SERVER
struct ULootSystemComponent_C_UpdatePlayerSlotsArrayFROM_SERVER_Params
{
	TArray<struct FS_InventorySlot>                    BaseLootSlotsArray;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LootSystemComponent.LootSystemComponent_C.UpdatePlayerSlotsON_Client
struct ULootSystemComponent_C_UpdatePlayerSlotsON_Client_Params
{
	TArray<struct FS_InventorySlot>                    SlotsArray;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LootSystemComponent.LootSystemComponent_C.UpdateActorSlotsON_CLIENT
struct ULootSystemComponent_C_UpdateActorSlotsON_CLIENT_Params
{
	TArray<struct FS_InventorySlot>                    SlotsArray;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LootSystemComponent.LootSystemComponent_C.UpdateActorSlotsFromServer
struct ULootSystemComponent_C_UpdateActorSlotsFromServer_Params
{
	TArray<struct FS_InventorySlot>                    LootSlots;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LootSystemComponent.LootSystemComponent_C.Server_DropLoot
struct ULootSystemComponent_C_Server_DropLoot_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SplitCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootSystemComponent.LootSystemComponent_C.UpdateComponentFromServer
struct ULootSystemComponent_C_UpdateComponentFromServer_Params
{
};

// Function LootSystemComponent.LootSystemComponent_C.ClientUseLoot
struct ULootSystemComponent_C_ClientUseLoot_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SplitCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FromOtherPanel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MoveOnly;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootSystemComponent.LootSystemComponent_C.Client_Drop_Weapon_From_Hand
struct ULootSystemComponent_C_Client_Drop_Weapon_From_Hand_Params
{
};

// Function LootSystemComponent.LootSystemComponent_C.ReceiveBeginPlay
struct ULootSystemComponent_C_ReceiveBeginPlay_Params
{
};

// Function LootSystemComponent.LootSystemComponent_C.ReceiveTick
struct ULootSystemComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootSystemComponent.LootSystemComponent_C.ExecuteUbergraph_LootSystemComponent
struct ULootSystemComponent_C_ExecuteUbergraph_LootSystemComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootSystemComponent.LootSystemComponent_C.RefreashWidgets__DelegateSignature
struct ULootSystemComponent_C_RefreashWidgets__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
