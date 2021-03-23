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

// BlueprintGeneratedClass Z_InventoryInterface.Z_InventoryInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UZ_InventoryInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(32583);
		return ptr;
	}



	void STATIC_ZL_GUI_InventoryRespawnMode();
	void STATIC_ZL_GUI_Overload(float OverloadMass);
	void STATIC_ZL_CONTROLLER_GetSlots(TArray<struct FZ_SlotStr>* Slots);
	void STATIC_ZL_CHARACTER_UNAttach_Server_(const struct FName& Weapon);
	void STATIC_ZL_GUI_DrawLootNear(TArray<struct FZ_LootStr>* Loot);
	void STATIC_ZL_CHARACTER_AttachToWeapon_Server_(TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes> Scopes, TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer> Silencer, const struct FName& Weapon);
	void STATIC_ZL_GUI_SLOT_Unhovered();
	void STATIC_ZL_GUI_SLOT_Hovered(const struct FZ_LootStr& Loot);
	void STATIC_ZL_CHARACTER_Unequip_Serever_(const struct FZ_LootStr& Loot);
	void STATIC_ZL_CHARACTER_USEThis_Server_(const struct FZ_LootStr& Loot);
	void STATIC_ZL_CHARACTER_DropThis_Server_(const struct FZ_LootStr& LootStr);
	void STATIC_ZL_CHARACTER_EquipThis_Server_(const struct FZ_LootStr& Loot);
	void STATIC_ZL_GUI_DND_Drop();
	void STATIC_ZL_GUI_DnD_Drag(class UUserWidget* DragSlot);
	void STATIC_ZL_GUI_ClearContainer();
	void STATIC_ZL_GUI_Construkt_Container(TArray<struct FZ_LootStr>* ContainerInventory, const struct FZ_ContainerInfo& ContInform);
	void STATIC_ZL_GUI_HideInventory();
	void STATIC_ZL_GUI_ShowInventory();
	void STATIC_ZL_GUI_Update(TArray<struct FZ_LootStr>* Inventori, TArray<struct FZ_LootStr>* Container, bool IsOnFloorMode);
	void STATIC_ZL_GUI_ConstructMenu(TArray<struct FZ_SlotStr>* Slots);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
