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

// BlueprintGeneratedClass Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UZ_CV3_FunctionLybryary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(52454);
		return ptr;
	}



	void STATIC_Z_CV3_VaresResponceToArray(const struct FString& String, class UObject* __WorldContext, TArray<struct FIntegerVector>* IntegerArray);
	void STATIC_Z_CV3_ConvertGetPlayerStateInfo(const struct FString& SourceString, class UObject* __WorldContext, bool* Ok, int* Hunger1, int* Thirst1, float* Tempirature1, int* Health1);
	void STATIC_Z_CV3_IsSingleMode(class UObject* __WorldContext, bool* IsSingle);
	void STATIC_Z_CV3_SereverSetLootActorBP_GET_ON_GROUND_ServerOnly_(class ACv2_LootBP_C* LootActorBP, const struct FZ_LootStr& Z_Loot, class UObject* __WorldContext);
	void STATIC_Z_CV3_CharacterSwichWeapon(class APlayerController* PlayerController, TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_Socet, class UObject* __WorldContext);
	void STATIC_Z_CV3_Name_To_ZLoot(const struct FName& LootName, int Count, class UObject* __WorldContext, struct FZ_LootStr* ZLoot);
	void STATIC_Z_CV3_ClearSplit(class UObject* __WorldContext);
	void STATIC_Z_CV3_SetDebugMode(bool SetDebug, class UObject* __WorldContext);
	void STATIC_Z_CV3_PrintDebugMessage_ClientOnly_(const struct FString& Name, const struct FString& Text, const struct FString& Param, float Time, class UObject* __WorldContext);
	void STATIC_Z_CV3_GetDebugMode(class UObject* __WorldContext, bool* IsDebugMode);
	void STATIC_Z_CV3_CheckCanSplit(const struct FName& LootName, class UObject* __WorldContext, bool* CanSplit);
	void STATIC_Z_CV3_UseAlcohol(float Effectivity, class UObject* PlayerController, class UObject* __WorldContext);
	void STATIC_Z_CV3_UseFood(float Effectivuty, class UObject* PlayerController, class UObject* __WorldContext, bool* ChangeThirsty);
	void STATIC_Z_CV3_UseDrink(float Effectivuty, class UObject* PlayerController, class UObject* __WorldContext, bool* ChangeThirsty);
	void STATIC_Z_CV3_UseUsable(const struct FZ_LootStr& Z_Loot, class UObject* PlayerController, class UObject* __WorldContext, bool* WasUsefull);
	void STATIC_Z_CV3_UseExplosive(const struct FZ_LootStr& Z_Loot, class UObject* PlayerController, class UObject* __WorldContext);
	void STATIC_Z_CV3_UseMedicine(float Effectivuty, class UObject* PlayerController, class UObject* __WorldContext, bool* ChangeHP);
	void STATIC_Z_CV3_GetEffectivity(const struct FName& Name, class UObject* __WorldContext, float* Effectivity);
	void STATIC_Z_CV3_SereverSetLootActorBP_ServerOnly_(class ACv2_LootBP_C* LootActorBP, const struct FZ_LootStr& Z_Loot, class UObject* __WorldContext);
	void STATIC_Z_CV3_CheckResourceForCraft(class ACv2_playerController_C* Cv2_playerController, TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> Craft, class UObject* __WorldContext, bool* Ok);
	void STATIC_Z_CV3_Cv3LootType_ToZ_Equip_Socket(TEnumAsByte<Cv2_LootType_ECv2_LootType> LootType, class UObject* __WorldContext, TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>* Z_EquipSocket);
	void STATIC_F_CV3_GetCv3Loot(class UObject* __WorldContext);
	void STATIC_Z_CV3_GetLootByType(class UZ_InventoryComponent_C* Inventory, TEnumAsByte<Cv2_LootType_ECv2_LootType> LootType, class UObject* __WorldContext, TArray<struct FZ_LootStr>* ZLoot);
	void STATIC_Z_CV3_ZLoot_to_Loot(TArray<struct FZ_LootStr>* Z_Loot, class UObject* __WorldContext, TArray<struct FCv2_LootStructure>* Loot);
	void STATIC_Z_CV3Loot_To_Z_Loot_ONLYCARGO(const struct FCv2_LootStructure& CV3Loot, const struct FCv2_LootCargoStructure& Cargo_Loot, bool IsCargo, class UObject* __WorldContext, struct FZ_LootStr* Z_Loot);
	void STATIC_Z_CV3_WeaponToZLoot(TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum> Weapon, class UObject* __WorldContext, struct FZ_LootStr* Out_Row);
	void STATIC_Z_CV3_CharacterToInventory(class UZ_InventoryManager_C* Manager, struct FCV2_CharacterTypeStructure* CV2_CharacterTypeStructure, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
