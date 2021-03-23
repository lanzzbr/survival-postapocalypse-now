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

// BlueprintGeneratedClass Z_InventoryFuncLybryary.Z_InventoryFuncLybryary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UZ_InventoryFuncLybryary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(34522);
		return ptr;
	}



	void STATIC_ZFL_GetLootCost(const struct FZ_LootStr& ZLoot, class UObject* __WorldContext, int* Cost);
	void STATIC_ZFL_BackpackGetMass(const struct FName& BackPackName, class UObject* __WorldContext, float* GetedMass);
	void STATIC_ZFL_GetLootMass(const struct FZ_LootStr& ZLoot, class UObject* __WorldContext, float* Mass);
	void STATIC_ZFL_Transport_To_Loot(const struct FZ_TransportLoot& TransportStr, class UObject* __WorldContext, struct FZ_LootStr* Loot, bool* Ok);
	void STATIC_ZFL_Loot_To_Transport(struct FZ_LootStr* Z_LootStr, class UObject* __WorldContext, struct FZ_TransportLoot* Z_TransportLoot);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
