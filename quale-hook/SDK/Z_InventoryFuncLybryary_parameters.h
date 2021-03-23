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

// Function Z_InventoryFuncLybryary.Z_InventoryFuncLybryary_C.ZFL_GetLootCost
struct UZ_InventoryFuncLybryary_C_ZFL_GetLootCost_Params
{
	struct FZ_LootStr                                  ZLoot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Cost;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryFuncLybryary.Z_InventoryFuncLybryary_C.ZFL_BackpackGetMass
struct UZ_InventoryFuncLybryary_C_ZFL_BackpackGetMass_Params
{
	struct FName                                       BackPackName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GetedMass;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryFuncLybryary.Z_InventoryFuncLybryary_C.ZFL_GetLootMass
struct UZ_InventoryFuncLybryary_C_ZFL_GetLootMass_Params
{
	struct FZ_LootStr                                  ZLoot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Mass;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryFuncLybryary.Z_InventoryFuncLybryary_C.ZFL_Transport_To_Loot
struct UZ_InventoryFuncLybryary_C_ZFL_Transport_To_Loot_Params
{
	struct FZ_TransportLoot                            TransportStr;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  Loot;                                                      // (Parm, OutParm, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryFuncLybryary.Z_InventoryFuncLybryary_C.ZFL_Loot_To_Transport
struct UZ_InventoryFuncLybryary_C_ZFL_Loot_To_Transport_Params
{
	struct FZ_LootStr                                  Z_LootStr;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_TransportLoot                            Z_TransportLoot;                                           // (Parm, OutParm, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
