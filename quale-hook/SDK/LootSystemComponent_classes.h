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

// BlueprintGeneratedClass LootSystemComponent.LootSystemComponent_C
// 0x00A8 (FullSize[0x0338] - InheritedSize[0x0290])
class ULootSystemComponent_C : public USceneComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (Transient, DuplicateTransient)
	TArray<struct FS_InventorySlot>                    BaseLootSlotsArray;                                        // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FS_Loot_ID_Idexes>                   LootSlots__ID_Indexes;                                     // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    RefreashWidgets;                                           // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FCv2_LootCargoStructure>             OtherPanelInventory;                                       // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      InventoryActor;                                            // 0x02D8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCv2_LootCargoStructure>             TempLoot;                                                  // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsMainLootSystem;                                          // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P9BB[0x7];                                     // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      InventoryPanelClass;                                       // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings>> BaseCraftArray;                                            // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class APlayerController*                           PlayerController;                                          // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        UseLootArray;                                              // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings>> SortedCraftArray;                                          // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(69069);
		return ptr;
	}



	void STATIC_RemoveAmmo(int indexSlot);
	void STATIC_GetNextWeaponInType(TEnumAsByte<Cv2_LootType_ECv2_LootType> LootType, bool* CanChange, int* NextWeaponIndex);
	void STATIC_GetNextWeaponIfDrop(TEnumAsByte<Cv2_LootType_ECv2_LootType> DropWeaponlootType, bool* CanChange, bool* LootNeedUse, int* NextWeaponIndex, int* DropIndex);
	void STATIC_GetLootBytype(TEnumAsByte<Cv2_LootType_ECv2_LootType> Loottypee, TArray<struct FS_InventorySlot>* typeLootArray);
	void STATIC_Heal_Me();
	void STATIC_GetSplitLoot(int Index, bool FromOtherPanel, int SplitCouint, bool* Ok, struct FCv2_LootCargoStructure* UseLoot, struct FCv2_LootCargoStructure* ResidueLoot, bool* Use_SplitMode);
	void STATIC_GetTypeCount(TEnumAsByte<Cv2_LootType_ECv2_LootType> LootType, int* TypeCount);
	void STATIC_CharacterToLoot(struct FCV2_CharacterTypeStructure* CV2_CharacterTypeStructure, class APlayerController* PlayerController);
	void STATIC_UseUsableLoot(const struct FCv2_LootCargoStructure& Use_Loot, int Index, bool* FullUse, struct FCv2_LootCargoStructure* ReturnLoot);
	void STATIC_UpdateSlotsOnAll();
	void STATIC_UseLoot(bool FromOtherPanel, TArray<int>* Index, bool MoveOnly, int SplitCouunt);
	void STATIC_RemoveLoot(TArray<struct FCv2_LootCargoStructure>* RemoveLoot);
	void STATIC_CheckResourcesForCraft(TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> CraftType, bool* Ok);
	void STATIC_CheckCouantbleLoot(const struct FCv2_LootCargoStructure& Loot_Cargo, bool* IsCouanteble, bool* HaveReturnLoot, struct FCv2_LootCargoStructure* ReturnLoot);
	void STATIC_GetEmptySlotsIndexes(TArray<int>* emptyIndexes);
	void STATIC_GetLootIndexes(TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> Loot, TArray<int>* LootIndexes);
	void STATIC_GetLootcount(TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> Loot, int* Count);
	void STATIC_OnRep_InventoryActor();
	void STATIC_ClearSlots();
	void STATIC_ClearID(int ID);
	void STATIC_GetLoot(int ID, TArray<struct FCv2_LootCargoStructure>* Loot);
	void STATIC_AddLoot(TArray<struct FCv2_LootCargoStructure>* LootGargoArray, TArray<struct FCv2_LootCargoStructure>* ReturnLoot);
	void STATIC_RemoveLootFromSlot(int Index);
	void STATIC_Add_Loot_To_Slot(int Index, const struct FCv2_LootCargoStructure& LootCargo);
	void STATIC_Add_Loot_to_Id(int ID, const struct FCv2_LootCargoStructure& Loot_Cargo, bool EmptyOnly, bool* Ok, bool* WasEmpty, struct FCv2_LootCargoStructure* WHAT_IT_LIES);
	void STATIC_Get_ID_Indexes(int ID, TArray<int>* ID_Indexes);
	void STATIC_IndexateLootArray();
	void STATIC_UpdateLootArray(TArray<struct FS_InventorySlot>* LootSlotsArray);
	void STATIC_Server_MoveLoot_In(TArray<int> SelectedItems);
	void STATIC_Server_MoveLootOut(TArray<int> SelectedLoot);
	void STATIC_Server_Use_Loot(int LootIndex, bool FromOther, bool MoveOnly, int SplitCount);
	void STATIC_UpdatePlayerSlotsArrayFROM_SERVER(TArray<struct FS_InventorySlot> BaseLootSlotsArray);
	void STATIC_UpdatePlayerSlotsON_Client(TArray<struct FS_InventorySlot> SlotsArray);
	void STATIC_UpdateActorSlotsON_CLIENT(TArray<struct FS_InventorySlot> SlotsArray);
	void STATIC_UpdateActorSlotsFromServer(TArray<struct FS_InventorySlot> LootSlots);
	void STATIC_Server_DropLoot(int Index, int SplitCount);
	void STATIC_UpdateComponentFromServer();
	void STATIC_ClientUseLoot(int Index, int SplitCount, bool FromOtherPanel, bool MoveOnly);
	void STATIC_Client_Drop_Weapon_From_Hand();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_ExecuteUbergraph_LootSystemComponent(int EntryPoint);
	void STATIC_RefreashWidgets__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
