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

// BlueprintGeneratedClass Z_InventoryManager.Z_InventoryManager_C
// 0x0117 (FullSize[0x0207] - InheritedSize[0x00F0])
class UZ_InventoryManager_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class UZ_InventoryComponent_C*                     PlayerInventory;                                           // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                UpdateGUITimer;                                            // 0x0100(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                                LootSeekTimer;                                             // 0x0108(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                               InventoryIsShow;                                           // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UseContainer_ClintOnly_;                                   // 0x0111(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BlockDrop;                                                 // 0x0112(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UseAutomaticGUI_Update;                                    // 0x0113(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VQ1F[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AZ_OnFloorInventoryActor_C*                  FloorLootActor;                                            // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ExternalActor;                                             // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Container;                                                 // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UZ_InventoryComponent_C*                     ContainerInventory;                                        // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FZ_LootStr>                          ContainerInventory_ClientOnly_;                            // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UZ_InventoryComponent_C*                     FloorComponent;                                            // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ProxyRemovebleLootCount;                                   // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_20SP[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UZ_InventoryComponent_C*                     ExternalInventory;                                         // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LocalTemp;                                                 // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SplitCount_ServerOnly_;                                    // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaHealth;                                               // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZYX9[0x4];                                     // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                HealthTimer;                                               // 0x0170(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class ACv2_Character_C*                            HealthCharacter;                                           // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EndHealth;                                                 // 0x0180(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsDoubleClick;                                             // 0x0184(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsTradeMode;                                               // 0x0185(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4UM9[0x2];                                     // 0x0186(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PrymaryIndex;                                              // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SecondaryIndex;                                            // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MeleeIndex;                                                // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GrenadeIndex;                                              // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BackPackDefaultMass;                                       // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2OU1[0x4];                                     // 0x019C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FZ_TransportLoot                            CraftingMainLoot;                                          // 0x01A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FZ_TransportLoot                            CraftingOtherLoot;                                         // 0x01B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTimerHandle                                DebugTimer;                                                // 0x01C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AActor*                                      DBActor;                                                   // 0x01C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Parametr_ContainerOnlyMode;                                // 0x01D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Parametr_BlockUse;                                         // 0x01D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Parametr_DragNDropOnly;                                    // 0x01D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Parametr_CreateBarigaActor;                                // 0x01D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y3NP[0x4];                                     // 0x01D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASurvBarigaBaseActor_C*                      BarigaActor;                                               // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     onContainerPosition;                                       // 0x01E0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CKI0[0x4];                                     // 0x01EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                ContainerGoOutTimer;                                       // 0x01F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                              Parametr_ContainerOutDistance;                             // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Parametr_BlockAutoMousePosition;                           // 0x01FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5GC0[0x3];                                     // 0x01FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Parametr_BarigaDiscountPercent;                            // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TradeToAll_Server_;                                        // 0x0204(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSeekLoot;                                                // 0x0205(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsClassicalmode_ClientOnly_;                               // 0x0206(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(49857);
		return ptr;
	}



	void STATIC_ZL_CONTROLLER_GetSlots(TArray<struct FZ_SlotStr>* Slots);
	void STATIC_Loot_UnloadMagazine(int Index);
	void STATIC_TrayLootFromPlayer(int Index);
	void STATIC_NewFunction_1(int Index, class UZ_InventoryComponent_C* self2, int Index2, class UZ_InventoryComponent_C* self3, int Index3, int B);
	void STATIC_Container_OpenBarigaActor_Server_(int BarigaIndex, bool ToAll, bool* Ok);
	void STATIC_Loot_DropWeaponFromHand_ServerFunc_();
	void STATIC_CheckBackpackMass();
	void STATIC_SplitCount(int SplitCount, int Index);
	struct FVector Container_GetContainerPosition();
	void STATIC_Container_CheckMoveOut();
	void STATIC_Slots_CheckMass(float ServerMAss);
	void STATIC_Slots_CalculateMass(TArray<struct FZ_LootStr>* ZLoot, float* Mass);
	void STATIC_Inventory_Update_DBActorInfo();
	void STATIC_OPEN_RESPAWN_MODE_ServerOnly_();
	void STATIC_GET_LOOT_BY_SOCKET(TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_Equp_Socket, struct FZ_LootStr* Loot);
	void STATIC_Slots_CanBackpackUnEqpt(class UZ_InventoryComponent_C* Inventory, int Index, bool* CanUnEqpt);
	void STATIC_Slots_CheckOverload(class UZ_InventoryComponent_C* InventoryComp, const struct FZ_LootStr& ZLoot, bool* NoOverload, int* InCont, float* LootMassIfOverload);
	void STATIC_Loot_GetSocetIndex(TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Selection, int* Index);
	void STATIC_Fire(TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Selection, int AmmoCount);
	void STATIC_LootTryAddToHand(const struct FZ_LootStr& ZLoot, class UZ_InventoryComponent_C* Z_Inventory, bool* Added);
	void STATIC_CheckTradeSuccess(class UZ_InventoryComponent_C* FromInventory, class UZ_InventoryComponent_C* ToInventory, int FromIndex, int Toindex, bool* TradeOk);
	void STATIC_LootUNAttach_OnCharacter_ServerFunc_(const struct FZ_LootStr& WeaponLoot);
	void STATIC_Slots_GetAttachSlotsIndexes(TArray<int>* AttachIndexes);
	void STATIC_LootAttachOnFloor(int PlayerItemIndex, int FloorWeaponindex);
	void STATIC_AddHealth_ServerOnly_();
	void STATIC_LootGetMedicineArray(TArray<struct FCv2_LootStructure>* MedicLoot, TArray<int>* InventroyIndex, int* MinimalIndex);
	void STATIC_TRY_HEAL_ME();
	void STATIC_SHOW_ACTOR_CRAFT(class AActor* Actor);
	void STATIC_LootCombine(class UZ_InventoryComponent_C* WhatInventory, class UZ_InventoryComponent_C* With_what_Inventory, int What_index, int With_what_index);
	void STATIC_SET_BACKPACK_Mass(int Mass);
	void STATIC_LootUseThis(const struct FZ_LootStr& Z_Loot, bool* FullUse, struct FZ_LootStr* ReturnLoot);
	void STATIC_TRY_ADD_ARRAY_LOOT_TO_INVENTORY(class UZ_InventoryComponent_C* Inventory, TArray<struct FZ_LootStr>* LootNames, TArray<struct FZ_LootStr>* LocalReturnLoott);
	void STATIC_Loot_Drop(const struct FZ_LootStr& Loot);
	void STATIC_LOOT_DROP_NO_INVENTORY(const struct FZ_LootStr& Loot);
	void STATIC_External_Close_ServerFunc_();
	void STATIC_External_SetInventory(TArray<struct FZ_LootStr>* Loot);
	void STATIC_External_Open_ServerFunc_(class AActor* ExrternalActor);
	void STATIC_Slots_ClearAllLoot();
	void STATIC_GET_ALL_LOOT_BY_SOCKET_NoSlot_(TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_Equp_Socket, TArray<struct FZ_LootStr>* Loot);
	void STATIC_Loot_SetLoot_InSocket(TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Socket, int Count);
	void STATIC_LootIsAttachExist(class UZ_InventoryComponent_C* Inventory, int Index, bool IsScope, bool IsMagazine, bool* AttachExist, struct FZ_LootStr* AttachedLoot);
	void STATIC_LootClearAttach(class UZ_InventoryComponent_C* Inventory, int Index, bool IsScope, bool IsMagazine);
	void STATIC_LootUnAttach(class UZ_InventoryComponent_C* FromInventory, int FromWeapon, class UZ_InventoryComponent_C* ToInventory, int ToSlotIndex, bool IsScope, bool IsMagazine);
	bool LootCheckCanAttachAnywhere(const struct FZ_LootStr& LootAttachTo, int* SlotIndex, int* WeaponIndex);
	void STATIC_LootFloorMove(int From, int To, class UZ_InventoryComponent_C* FromInventory, class UZ_InventoryComponent_C* ToInventory);
	void STATIC_LootRemoveLootFromFloor(int Index);
	void STATIC_GUI_DrawClientLootNear(TArray<struct FZ_LootStr>* LootNear);
	void STATIC_LootSeekLoot();
	void STATIC_LootGetLootNear(TArray<struct FZ_LootStr>* Z_LootArray, TArray<class AZ_LootActor_C*>* LootActors, bool* LootFound);
	void STATIC_LootRemoveLoot(const struct FName& NameLoot, int RemoveCount, int* ReturnCount);
	void STATIC_Slots_ClearAttachmentOnParentSlot(int ParentIndex, bool IsScope, bool IsMagazine);
	void STATIC_LootAttach_OnCharacter_ServerFunc_(const struct FZ_LootStr& WeaponLoot);
	void STATIC_LootSetAttachInWeapStr(class UZ_InventoryComponent_C* Inventory, int WeaponIndex, struct FZ_LootStr* Z_LootStr, const struct FZ_LootStr& WeapLoot);
	void STATIC_Slots_SetAttachmentSlots(int ParentIndex, const struct FZ_LootStr& WeaponLoot);
	void STATIC_Slots_ClearAttachmentSlots(int ParentIndex);
	void STATIC_Slots_GetAttachSlotsByParentIndex(int ParentIndex, bool* Ok, TArray<int>* AttachesIndexes);
	void STATIC_LootTryAttach(class UZ_InventoryComponent_C* FromInventory, int WeaponIndex, int ItemIndex, int AttachSlotIndex);
	bool LootCheckCanAttachToWeapon(const struct FZ_LootStr& AttachedLoot, const struct FZ_LootStr& Weapon);
	void STATIC_GET_LOOT_By_Equipment(TEnumAsByte<Z_LootEquipCategory_EZ_LootEquipCategory> Z_EquipmetCategory, TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_EquipSocket, struct FZ_LootStr* Loot, int* Index);
	bool LootCheckCanSetToSlot(const struct FZ_LootStr& Loot, const struct FZ_SlotStr& Slot);
	void STATIC_TRY_ADD_LOOT_TO_SOCKET(class UZ_InventoryComponent_C* Inventory, const struct FZ_LootStr& AddLoot, TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Socket);
	void STATIC_GET_INVENTORY_LOOT_COUNT(const struct FName& LootName, class UZ_InventoryComponent_C* Inventory, int* Count);
	void STATIC_GET_PLAYER_LOOT_COUNT(const struct FName& LootName, int* Count);
	void STATIC_GET_LOOT_COUNT_By_Socet(TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_EquipSocket, int* Count);
	void STATIC_LootCombineEqual(const struct FZ_LootStr& LootFrom, const struct FZ_LootStr& LootTo, struct FZ_LootStr* NewLootFrom, struct FZ_LootStr* NewToLoot);
	void STATIC_DECREMENT_SOCET_COUNT(TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_EquipSocket);
	void STATIC_GET_LOOT_FROM_Socet(TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_EquipSocket, struct FZ_LootStr* Loot, int* Index);
	void STATIC_LootUnEquip(class UZ_InventoryComponent_C* Inventory, int Index);
	void STATIC_LootUnEquip_OnCharacter_ServerFunc_(const struct FZ_LootStr& Loot);
	void STATIC_Slots_GetEquipSlots(class UZ_InventoryComponent_C* Inventroy, bool FreeOnly, bool* WasFound, TArray<int>* EqupSlotsIndexes);
	void STATIC_LootCheckCanEquip(const struct FZ_LootStr& Loot, bool* CanEquip, int* Index, struct FZ_LootStr* LootWasHere);
	void STATIC_LootDrop_OnCharacter_ServerFunc_(class UZ_InventoryComponent_C* Inventory, int Index);
	void STATIC_LootEquip_OnCharacter_ServerFunc_(const struct FZ_LootStr& Loot);
	void STATIC_LootCheckUsable(const struct FZ_LootStr& Loot, bool* WasUsable);
	void STATIC_LootUse(class UZ_InventoryComponent_C* Inventory, int Index);
	void STATIC_ContainerClose_ServerFunc_();
	void STATIC_TransportTOInventory(TArray<struct FZ_TransportLoot>* TransportInventory, TArray<struct FZ_LootStr>* Inventory);
	void STATIC_InventoryTOTransport(TArray<struct FZ_LootStr>* Inventory, TArray<struct FZ_TransportLoot>* TransportArray);
	void STATIC_GUI_OpenContainer(const struct FZ_ContainerInfo& ContInform, TArray<struct FZ_LootStr>* ContainerInventory);
	void STATIC_ContainerOpen_ServerFunc_(class AActor* ContainerActor);
	void STATIC_LootMove(class UZ_InventoryComponent_C* FromInventory, class UZ_InventoryComponent_C* ToInventory, int From, int To);
	void STATIC_GUI_HideInventory();
	void STATIC_GUI_ShowInventory();
	void STATIC_GUI_StopUpdate();
	void STATIC_GUI_StartUpdate();
	void STATIC_GUI_Construct();
	void STATIC_GUI_Update();
	void STATIC_INITIALIZE(class UZ_InventoryComponent_C* Player_Inventory, TArray<struct FZ_SlotStr>* PLAYER_InventorySLOTS, class AHUD* HUD);
	void STATIC_TRY_ADD_LOOT_TO_INVENTORY(class UZ_InventoryComponent_C* Inventory, const struct FZ_LootStr& AddLoot, bool* Ok, struct FZ_LootStr* ReturnLoot);
	void STATIC_ZL_GUI_ConstructMenu(TArray<struct FZ_SlotStr>* Slots);
	void STATIC_ZL_GUI_Update(TArray<struct FZ_LootStr>* Inventori, TArray<struct FZ_LootStr>* Container, bool IsOnFloorMode);
	void STATIC_ZL_GUI_ShowInventory();
	void STATIC_ZL_GUI_HideInventory();
	void STATIC_ZL_GUI_Construkt_Container(TArray<struct FZ_LootStr>* ContainerInventory, const struct FZ_ContainerInfo& ContInform);
	void STATIC_ZL_GUI_ClearContainer();
	void STATIC_ZL_GUI_DnD_Drag(class UUserWidget* DragSlot);
	void STATIC_ZL_GUI_DND_Drop();
	void STATIC_ZL_CHARACTER_EquipThis_Server_(const struct FZ_LootStr& Loot);
	void STATIC_ZL_CHARACTER_DropThis_Server_(const struct FZ_LootStr& LootStr);
	void STATIC_ZL_CHARACTER_USEThis_Server_(const struct FZ_LootStr& Loot);
	void STATIC_ZL_CHARACTER_Unequip_Serever_(const struct FZ_LootStr& Loot);
	void STATIC_ZL_GUI_SLOT_Hovered(const struct FZ_LootStr& Loot);
	void STATIC_ZL_GUI_SLOT_Unhovered();
	void STATIC_ZL_CHARACTER_AttachToWeapon_Server_(TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes> Scopes, TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer> Silencer, const struct FName& Weapon);
	void STATIC_ZL_GUI_DrawLootNear(TArray<struct FZ_LootStr>* Loot);
	void STATIC_ZL_CHARACTER_UNAttach_Server_(const struct FName& Weapon);
	void STATIC_ZL_GUI_Overload(float OverloadMass);
	void STATIC_ZL_GUI_InventoryRespawnMode();
	void STATIC_CLIENT_PLAYER_SetLootInSlot(int Index, const struct FZ_TransportLoot& TransportLoot);
	void STATIC_InitializeGUI();
	void STATIC_CLIENT_PLAYER_ClearSlot(int Index);
	void STATIC_SERVER_PLAYER_MoveLoot(int From, int To);
	void STATIC_SERVER_Open_Container(class AActor* ContainerActor);
	void STATIC_CLIENT_OPEN_CONTAINER(const struct FZ_ContainerInfo& ContainerInfo, TArray<struct FZ_TransportLoot> Inventorytransport, bool OpenInventory);
	void STATIC_SERVER_CONTAINER_MoveLoot(int From, int To);
	void STATIC_CLIENT_CONTAINER_ClearSlot(int Index);
	void STATIC_CLIENT_CONTAINER_SetLootInSlot(int Index, const struct FZ_TransportLoot& TransportLoot);
	void STATIC_SERVER_MOVE_FromContainerToPlayer(int From, int To);
	void STATIC_SERVER_MOVE_FromPlayerToContainer(int From, int To);
	void STATIC_SERVER_CLOSE_CONTAINER(bool StartSeekLoot);
	void STATIC_CLIENT_CLOSE_CONTAINER();
	void STATIC_SERVER_CONTAINER_DROPItem(int Index);
	void STATIC_SERVER_PLAYER_DROPItem(int Index);
	void STATIC_SERVER_PLAYER_USEItem(int Index);
	void STATIC_SERVER_CONTAINER_USEitem(int Index);
	void STATIC_SERVER_PLAYER_TryUnEquip(int Index);
	void STATIC_CLIENT_SIHRONIZE(TArray<struct FZ_TransportLoot> TransportInventory, TArray<struct FZ_TransportLoot> TransportContainer, float PlayerMass);
	void STATIC_SERVER_SINHRONIZE();
	void STATIC_SERVER_PLAYER_AttachToWeapon(int WeaponSlotIndex, int AttachItemIndex, int AttachSlotIndex);
	void STATIC_StartSeekLoot();
	void STATIC_StopSeekLoot();
	void STATIC_CLIENT_ONFLOOR_SetLootItem(int Index, const struct FZ_TransportLoot& TransportLoot);
	void STATIC_CLIENT_ONFLOOR_RemoveLoot(int Index);
	void STATIC_CLIENT_ONFLOOR_Setloot(TArray<struct FZ_TransportLoot> TransportInventory);
	void STATIC_SERVER_ONFLOOR_FromFloorToPlayer(int From, int To);
	void STATIC_SERVER_ONFLOOR_FromPlayerToFloor(int From, int To);
	void STATIC_SERVER_ONFLOOR_UseItem(int Index);
	void STATIC_SERVER_CONTAINER_attach(int WeaponIndex, int ItemIndex, int AttachSlotIndex);
	void STATIC_SERVER_UNATTACH_PLAYER_PLAYER(int FromWeaponIndex, int ToSlot, bool IsScope, bool IsMagazine);
	void STATIC_SERVER_UNATTACH_PLAYER_CONTAINER(int FromWeaponIndex, int ToSlot, bool IsScope, bool IsMagazine);
	void STATIC_SERVER_UNATTACH_CONTAINER_PLAYER(int FromWeapon, int ToSlotIndex, bool IsScope, bool IsMagazine);
	void STATIC_SERVER_UNATTACH_CONTAINER_CONTAINER(int FromWeapon, int ToSlotIndex, bool IsScope, bool IsMagazine);
	void STATIC_CLIENT_Extrernal_Open(TArray<struct FZ_TransportLoot> TransportLoot, class AActor* ExternalActor);
	void STATIC_CLIENT_External_Close();
	void STATIC_CLIENT_External_Set(int Index, const struct FZ_TransportLoot& TransportStr);
	void STATIC_CLIENT_External_Clear(int Index);
	void STATIC_CLIENT_PLAYER_Setbackpack(int Mass);
	void STATIC_SERVER_PLAYER_COMBINE(int WhatIndex, int With_what);
	void STATIC_CLIENT_ShowActorCraft(class AActor* Actor);
	void STATIC_SERVER_Split_count(int SplitCount, int PlayerinventoryIndex);
	void STATIC_SERVER_HEAL_KEY();
	void STATIC_StartAddHealth(float AddHealth);
	void STATIC_StopAddHealth();
	void STATIC_SERVER_ONFLOOR_AttachFromPlayer(int WeaponIndex, int ItemIndex, int AttachSlotIndex);
	void STATIC_SERVER_IsDoubleClick(bool IsDoubleClick);
	void STATIC_SERVER_TRADE_Begin(int BarigaIndex, bool IsTradeAll);
	void STATIC_Print_mass();
	void STATIC_SERVER_StartDebug();
	void STATIC_CLIENT_PrintDEbug(float ServerMAss);
	void STATIC_ReceiveBeginPlay();
	void STATIC_SERVER_UpdateDBActorInfo();
	void STATIC_SERVER_OPEN_DB();
	void STATIC_SERVER_Cheat_Moneys();
	void STATIC_CLIENT_SHOW_TRADE_INFO(const struct FZ_TradeStr& TradeStr);
	void STATIC_SERVER_CorectMass();
	void STATIC_SERVER_DropWeaponFromHand();
	void STATIC_SERVER_CreateDbActor(int SlotsCount, bool Supporter, bool SpecialForces, bool AppOwner);
	void STATIC_ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void STATIC_Delete();
	void STATIC_SERVER_PLAYER_TrashItem(int PlayerinventoryIndex);
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_Server_Open_InventoryEmpty();
	void STATIC_CLIENT_SHOW_RESPAWN_CLASSICAL_MODE();
	void STATIC_SERVER_PLAYER_UNLOAD_MAGAZINE(int MagazineIndex);
	void STATIC_ExecuteUbergraph_Z_InventoryManager(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
