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

// BlueprintGeneratedClass Z_InventoryComponent.Z_InventoryComponent_C
// 0x0190 (FullSize[0x0280] - InheritedSize[0x00F0])
class UZ_InventoryComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F0(0x0008) (Transient, DuplicateTransient)
	struct FZ_ContainerInfo                            ContainerInfo_IfContainer_;                                // 0x00F8(0x0038) (Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                               IsContainer;                                               // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O86K[0x7];                                     // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UZ_InventoryManager_C*>               InventoryManagers;                                         // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FZ_LootStr                                  LootIfClear;                                               // 0x0148(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FZ_LootStr>                          Inventory;                                                 // 0x01A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FZ_SlotStr>                          InventorySLOTS;                                            // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsOnFloor;                                                 // 0x01C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q7Q5[0x7];                                     // 0x01C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        BackPackIndexes;                                           // 0x01D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnLootAdded_ServerOnly_;                                   // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FZ_LootStr                                  OldLoot;                                                   // 0x01F0(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               IndexMainSlots;                                            // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5GKF[0x3];                                     // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Mass;                                                      // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnLootRemove;                                              // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              MaxMass;                                                   // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VFWV[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        AttachSlotsIndexes;                                        // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(36223);
		return ptr;
	}



	void STATIC_ZL_CONTROLLER_GetSlots(TArray<struct FZ_SlotStr>* Slots);
	void STATIC_CheckAmmo_ClientOnly_(int Index, const struct FName& OldLootName, const struct FZ_LootStr& NewLoo);
	void STATIC_GetInventorySummaryCost(int* Cost);
	void STATIC_TrySetToInventoryIndex(int Index, const struct FZ_LootStr& Loot);
	void STATIC_InventoryClear_NoSync_();
	void STATIC_LootAddLootStr(const struct FZ_LootStr& Z_LootStr, bool* HaveReturn, struct FZ_LootStr* Z_Loot);
	void STATIC_IsInventoryEmpty(bool* IsEmpty);
	void STATIC_LootDecrementLootCount_ServerOnly_(const struct FName& LootName, int Count);
	void STATIC_LootAddLoot(const struct FName& LootName, int Count, bool* HaveReturn, struct FZ_LootStr* Z_Loot);
	void STATIC_Loot_IncrementLoot_ServerOnly_(const struct FName& LootName);
	void STATIC_LootGetLootCount(const struct FName& LootName, int* Count);
	void STATIC_LootDecrementLoot_ServerOnly_(const struct FName& LootName);
	void STATIC_DisconnectManager(class UZ_InventoryManager_C** Manager);
	void STATIC_ConnectManager(class UZ_InventoryManager_C** Manager);
	void STATIC_UpdateInfo(TEnumAsByte<Z_InventoryActions_EZ_InventoryActions> Actions, const struct FZ_LootStr& Loot, int Index, const struct FZ_LootStr& OldLoot);
	void STATIC_Slot_ClearLoot(int Index);
	void STATIC_Slot_GetEmpty_NoToEqpt_(bool BackPackOnly, bool* IsOk, int* EmptyIndex);
	void STATIC_Slot_GetLoot(int Index, struct FZ_LootStr* Loot);
	void STATIC_Slot_SetLoot(int Index, struct FZ_LootStr* Loot);
	void STATIC_InitializeInventory(TArray<struct FZ_SlotStr>* InventorySLOTS);
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
	void STATIC_ExecuteUbergraph_Z_InventoryComponent(int EntryPoint);
	void STATIC_OnLootRemove__DelegateSignature(const struct FZ_LootStr& RemovedLoot);
	void STATIC_OnLootAdded_ServerOnly___DelegateSignature(const struct FZ_LootStr& Z_Loot);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
