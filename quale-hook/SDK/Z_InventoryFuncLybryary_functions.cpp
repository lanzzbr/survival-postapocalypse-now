// Name: ANUSGAME, Version: 4.18

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Z_InventoryFuncLybryary.Z_InventoryFuncLybryary_C.ZFL_GetLootCost
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              ZLoot                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Cost                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryFuncLybryary_C::STATIC_ZFL_GetLootCost(const struct FZ_LootStr& ZLoot, class UObject* __WorldContext, int* Cost)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34531);

	UZ_InventoryFuncLybryary_C_ZFL_GetLootCost_Params params;
	params.ZLoot = ZLoot;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Cost != nullptr)
		*Cost = params.Cost;

}


// Function Z_InventoryFuncLybryary.Z_InventoryFuncLybryary_C.ZFL_BackpackGetMass
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   BackPackName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          GetedMass                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryFuncLybryary_C::STATIC_ZFL_BackpackGetMass(const struct FName& BackPackName, class UObject* __WorldContext, float* GetedMass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34529);

	UZ_InventoryFuncLybryary_C_ZFL_BackpackGetMass_Params params;
	params.BackPackName = BackPackName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GetedMass != nullptr)
		*GetedMass = params.GetedMass;

}


// Function Z_InventoryFuncLybryary.Z_InventoryFuncLybryary_C.ZFL_GetLootMass
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              ZLoot                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Mass                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryFuncLybryary_C::STATIC_ZFL_GetLootMass(const struct FZ_LootStr& ZLoot, class UObject* __WorldContext, float* Mass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34527);

	UZ_InventoryFuncLybryary_C_ZFL_GetLootMass_Params params;
	params.ZLoot = ZLoot;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mass != nullptr)
		*Mass = params.Mass;

}


// Function Z_InventoryFuncLybryary.Z_InventoryFuncLybryary_C.ZFL_Transport_To_Loot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_TransportLoot        TransportStr                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              Loot                           (Parm, OutParm, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryFuncLybryary_C::STATIC_ZFL_Transport_To_Loot(const struct FZ_TransportLoot& TransportStr, class UObject* __WorldContext, struct FZ_LootStr* Loot, bool* Ok)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34525);

	UZ_InventoryFuncLybryary_C_ZFL_Transport_To_Loot_Params params;
	params.TransportStr = TransportStr;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loot != nullptr)
		*Loot = params.Loot;
	if (Ok != nullptr)
		*Ok = params.Ok;

}


// Function Z_InventoryFuncLybryary.Z_InventoryFuncLybryary_C.ZFL_Loot_To_Transport
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Z_LootStr                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_TransportLoot        Z_TransportLoot                (Parm, OutParm, HasGetValueTypeHash)
void UZ_InventoryFuncLybryary_C::STATIC_ZFL_Loot_To_Transport(struct FZ_LootStr* Z_LootStr, class UObject* __WorldContext, struct FZ_TransportLoot* Z_TransportLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34523);

	UZ_InventoryFuncLybryary_C_ZFL_Loot_To_Transport_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Z_LootStr != nullptr)
		*Z_LootStr = params.Z_LootStr;
	if (Z_TransportLoot != nullptr)
		*Z_TransportLoot = params.Z_TransportLoot;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
