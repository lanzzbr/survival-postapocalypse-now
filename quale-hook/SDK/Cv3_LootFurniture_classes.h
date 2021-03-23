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

// BlueprintGeneratedClass Cv3_LootFurniture.Cv3_LootFurniture_C
// 0x005A (FullSize[0x03C2] - InheritedSize[0x0368])
class ACv3_LootFurniture_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0368(0x0008) (Transient, DuplicateTransient)
	class UZ_InventoryComponent_C*                     Z_InventoryComponent;                                      // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOpen;                                                    // 0x0390(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	TEnumAsByte<Cv3_FurnitureLootType_ECv3_FurnitureLootType> FurnitureType;                                             // 0x0391(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isDestroy;                                                 // 0x0392(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_Z4JG[0x5];                                     // 0x0393(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   Open_Sound;                                                // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                                   Close_Sound;                                               // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartTime;                                                 // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                proxyIndex;                                                // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       proxyLootName;                                             // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       KeyItemName;                                               // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isLock;                                                    // 0x03C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               playersNoSpawn;                                            // 0x03C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(52258);
		return ptr;
	}



	void STATIC_ZL_CONTROLLER_GetSlots(TArray<struct FZ_SlotStr>* Slots);
	void STATIC_OnRep_isDestroy();
	void STATIC_OnRep_isOpen();
	void STATIC_UserConstructionScript();
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
	void STATIC_RegenerateLoot();
	void STATIC_ReceiveBeginPlay();
	void STATIC_CheckRegenerateLoot();
	void STATIC_CheckState();
	void STATIC_ExecuteUbergraph_Cv3_LootFurniture(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
