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

// Function Z_InventoryManager.Z_InventoryManager_C.ZL_CONTROLLER_GetSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_SlotStr>      Slots                          (Parm, OutParm, ZeroConstructor)
void UZ_InventoryManager_C::STATIC_ZL_CONTROLLER_GetSlots(TArray<struct FZ_SlotStr>* Slots)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50322);

	UZ_InventoryManager_C_ZL_CONTROLLER_GetSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Slots != nullptr)
		*Slots = params.Slots;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Loot_UnloadMagazine
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_Loot_UnloadMagazine(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50274);

	UZ_InventoryManager_C_Loot_UnloadMagazine_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.TrayLootFromPlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_TrayLootFromPlayer(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50272);

	UZ_InventoryManager_C_TrayLootFromPlayer_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.NewFunction_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZ_InventoryComponent_C* self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index2                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZ_InventoryComponent_C* self3                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index3                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_NewFunction_1(int Index, class UZ_InventoryComponent_C* self2, int Index2, class UZ_InventoryComponent_C* self3, int Index3, int B)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50270);

	UZ_InventoryManager_C_NewFunction_1_Params params;
	params.Index = Index;
	params.self2 = self2;
	params.Index2 = Index2;
	params.self3 = self3;
	params.Index3 = Index3;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Container_OpenBarigaActor(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            BarigaIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ToAll                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryManager_C::STATIC_Container_OpenBarigaActor_Server_(int BarigaIndex, bool ToAll, bool* Ok)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50268);

	UZ_InventoryManager_C_Container_OpenBarigaActor_Server__Params params;
	params.BarigaIndex = BarigaIndex;
	params.ToAll = ToAll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ok != nullptr)
		*Ok = params.Ok;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Loot_DropWeaponFromHand(ServerFunc)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_Loot_DropWeaponFromHand_ServerFunc_()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50266);

	UZ_InventoryManager_C_Loot_DropWeaponFromHand_ServerFunc__Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.CheckBackpackMass
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_CheckBackpackMass()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50264);

	UZ_InventoryManager_C_CheckBackpackMass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SplitCount
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            SplitCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SplitCount(int SplitCount, int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50262);

	UZ_InventoryManager_C_SplitCount_Params params;
	params.SplitCount = SplitCount;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Container_GetContainerPosition
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UZ_InventoryManager_C::Container_GetContainerPosition()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50260);

	UZ_InventoryManager_C_Container_GetContainerPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Z_InventoryManager.Z_InventoryManager_C.Container_CheckMoveOut
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_Container_CheckMoveOut()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50258);

	UZ_InventoryManager_C_Container_CheckMoveOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Slots_CheckMass
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          ServerMAss                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_Slots_CheckMass(float ServerMAss)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50256);

	UZ_InventoryManager_C_Slots_CheckMass_Params params;
	params.ServerMAss = ServerMAss;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Slots_CalculateMass
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      ZLoot                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Mass                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_Slots_CalculateMass(TArray<struct FZ_LootStr>* ZLoot, float* Mass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50253);

	UZ_InventoryManager_C_Slots_CalculateMass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ZLoot != nullptr)
		*ZLoot = params.ZLoot;
	if (Mass != nullptr)
		*Mass = params.Mass;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Inventory_Update_DBActorInfo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_Inventory_Update_DBActorInfo()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50251);

	UZ_InventoryManager_C_Inventory_Update_DBActorInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.OPEN_RESPAWN_MODE(ServerOnly)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_OPEN_RESPAWN_MODE_ServerOnly_()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50250);

	UZ_InventoryManager_C_OPEN_RESPAWN_MODE_ServerOnly__Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.GET_LOOT_BY_SOCKET
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_Equp_Socket                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              Loot                           (Parm, OutParm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_GET_LOOT_BY_SOCKET(TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_Equp_Socket, struct FZ_LootStr* Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50248);

	UZ_InventoryManager_C_GET_LOOT_BY_SOCKET_Params params;
	params.Z_Equp_Socket = Z_Equp_Socket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loot != nullptr)
		*Loot = params.Loot;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Slots_CanBackpackUnEqpt
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryComponent_C* Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CanUnEqpt                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryManager_C::STATIC_Slots_CanBackpackUnEqpt(class UZ_InventoryComponent_C* Inventory, int Index, bool* CanUnEqpt)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50246);

	UZ_InventoryManager_C_Slots_CanBackpackUnEqpt_Params params;
	params.Inventory = Inventory;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanUnEqpt != nullptr)
		*CanUnEqpt = params.CanUnEqpt;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Slots_CheckOverload
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryComponent_C* InventoryComp                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              ZLoot                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           NoOverload                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            InCont                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          LootMassIfOverload             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_Slots_CheckOverload(class UZ_InventoryComponent_C* InventoryComp, const struct FZ_LootStr& ZLoot, bool* NoOverload, int* InCont, float* LootMassIfOverload)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50244);

	UZ_InventoryManager_C_Slots_CheckOverload_Params params;
	params.InventoryComp = InventoryComp;
	params.ZLoot = ZLoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NoOverload != nullptr)
		*NoOverload = params.NoOverload;
	if (InCont != nullptr)
		*InCont = params.InCont;
	if (LootMassIfOverload != nullptr)
		*LootMassIfOverload = params.LootMassIfOverload;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Loot_GetSocetIndex
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_Loot_GetSocetIndex(TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Selection, int* Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50242);

	UZ_InventoryManager_C_Loot_GetSocetIndex_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Fire
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            AmmoCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_Fire(TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Selection, int AmmoCount)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50240);

	UZ_InventoryManager_C_Fire_Params params;
	params.Selection = Selection;
	params.AmmoCount = AmmoCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootTryAddToHand
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              ZLoot                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UZ_InventoryComponent_C* Z_Inventory                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Added                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryManager_C::STATIC_LootTryAddToHand(const struct FZ_LootStr& ZLoot, class UZ_InventoryComponent_C* Z_Inventory, bool* Added)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50238);

	UZ_InventoryManager_C_LootTryAddToHand_Params params;
	params.ZLoot = ZLoot;
	params.Z_Inventory = Z_Inventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Added != nullptr)
		*Added = params.Added;

}


// Function Z_InventoryManager.Z_InventoryManager_C.CheckTradeSuccess
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryComponent_C* FromInventory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZ_InventoryComponent_C* ToInventory                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FromIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Toindex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           TradeOk                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryManager_C::STATIC_CheckTradeSuccess(class UZ_InventoryComponent_C* FromInventory, class UZ_InventoryComponent_C* ToInventory, int FromIndex, int Toindex, bool* TradeOk)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50236);

	UZ_InventoryManager_C_CheckTradeSuccess_Params params;
	params.FromInventory = FromInventory;
	params.ToInventory = ToInventory;
	params.FromIndex = FromIndex;
	params.Toindex = Toindex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TradeOk != nullptr)
		*TradeOk = params.TradeOk;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootUNAttach_OnCharacter(ServerFunc)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              WeaponLoot                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_LootUNAttach_OnCharacter_ServerFunc_(const struct FZ_LootStr& WeaponLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50234);

	UZ_InventoryManager_C_LootUNAttach_OnCharacter_ServerFunc__Params params;
	params.WeaponLoot = WeaponLoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Slots_GetAttachSlotsIndexes
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<int>                    AttachIndexes                  (Parm, OutParm, ZeroConstructor)
void UZ_InventoryManager_C::STATIC_Slots_GetAttachSlotsIndexes(TArray<int>* AttachIndexes)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50231);

	UZ_InventoryManager_C_Slots_GetAttachSlotsIndexes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AttachIndexes != nullptr)
		*AttachIndexes = params.AttachIndexes;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootAttachOnFloor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            PlayerItemIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FloorWeaponindex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_LootAttachOnFloor(int PlayerItemIndex, int FloorWeaponindex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50229);

	UZ_InventoryManager_C_LootAttachOnFloor_Params params;
	params.PlayerItemIndex = PlayerItemIndex;
	params.FloorWeaponindex = FloorWeaponindex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.AddHealth(ServerOnly)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_AddHealth_ServerOnly_()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50227);

	UZ_InventoryManager_C_AddHealth_ServerOnly__Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootGetMedicineArray
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FCv2_LootStructure> MedicLoot                      (Parm, OutParm, ZeroConstructor)
// TArray<int>                    InventroyIndex                 (Parm, OutParm, ZeroConstructor)
// int                            MinimalIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_LootGetMedicineArray(TArray<struct FCv2_LootStructure>* MedicLoot, TArray<int>* InventroyIndex, int* MinimalIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50224);

	UZ_InventoryManager_C_LootGetMedicineArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MedicLoot != nullptr)
		*MedicLoot = params.MedicLoot;
	if (InventroyIndex != nullptr)
		*InventroyIndex = params.InventroyIndex;
	if (MinimalIndex != nullptr)
		*MinimalIndex = params.MinimalIndex;

}


// Function Z_InventoryManager.Z_InventoryManager_C.TRY_HEAL_ME
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_TRY_HEAL_ME()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50223);

	UZ_InventoryManager_C_TRY_HEAL_ME_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SHOW_ACTOR_CRAFT
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SHOW_ACTOR_CRAFT(class AActor* Actor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50221);

	UZ_InventoryManager_C_SHOW_ACTOR_CRAFT_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootCombine
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryComponent_C* WhatInventory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZ_InventoryComponent_C* With_what_Inventory            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            What_index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            With_what_index                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_LootCombine(class UZ_InventoryComponent_C* WhatInventory, class UZ_InventoryComponent_C* With_what_Inventory, int What_index, int With_what_index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50219);

	UZ_InventoryManager_C_LootCombine_Params params;
	params.WhatInventory = WhatInventory;
	params.With_what_Inventory = With_what_Inventory;
	params.What_index = What_index;
	params.With_what_index = With_what_index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SET_BACKPACK_Mass
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Mass                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SET_BACKPACK_Mass(int Mass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50217);

	UZ_InventoryManager_C_SET_BACKPACK_Mass_Params params;
	params.Mass = Mass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootUseThis
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Z_Loot                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           FullUse                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FZ_LootStr              ReturnLoot                     (Parm, OutParm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_LootUseThis(const struct FZ_LootStr& Z_Loot, bool* FullUse, struct FZ_LootStr* ReturnLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50215);

	UZ_InventoryManager_C_LootUseThis_Params params;
	params.Z_Loot = Z_Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FullUse != nullptr)
		*FullUse = params.FullUse;
	if (ReturnLoot != nullptr)
		*ReturnLoot = params.ReturnLoot;

}


// Function Z_InventoryManager.Z_InventoryManager_C.TRY_ADD_ARRAY_LOOT_TO_INVENTORY
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryComponent_C* Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FZ_LootStr>      LootNames                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FZ_LootStr>      LocalReturnLoott               (Parm, OutParm, ZeroConstructor)
void UZ_InventoryManager_C::STATIC_TRY_ADD_ARRAY_LOOT_TO_INVENTORY(class UZ_InventoryComponent_C* Inventory, TArray<struct FZ_LootStr>* LootNames, TArray<struct FZ_LootStr>* LocalReturnLoott)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50213);

	UZ_InventoryManager_C_TRY_ADD_ARRAY_LOOT_TO_INVENTORY_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LootNames != nullptr)
		*LootNames = params.LootNames;
	if (LocalReturnLoott != nullptr)
		*LocalReturnLoott = params.LocalReturnLoott;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Loot_Drop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_Loot_Drop(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50209);

	UZ_InventoryManager_C_Loot_Drop_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LOOT_DROP_NO_INVENTORY
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_LOOT_DROP_NO_INVENTORY(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50207);

	UZ_InventoryManager_C_LOOT_DROP_NO_INVENTORY_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.External_Close(ServerFunc)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_External_Close_ServerFunc_()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50205);

	UZ_InventoryManager_C_External_Close_ServerFunc__Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.External_SetInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UZ_InventoryManager_C::STATIC_External_SetInventory(TArray<struct FZ_LootStr>* Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50180);

	UZ_InventoryManager_C_External_SetInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loot != nullptr)
		*Loot = params.Loot;

}


// Function Z_InventoryManager.Z_InventoryManager_C.External_Open(ServerFunc)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  ExrternalActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_External_Open_ServerFunc_(class AActor* ExrternalActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50172);

	UZ_InventoryManager_C_External_Open_ServerFunc__Params params;
	params.ExrternalActor = ExrternalActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Slots_ClearAllLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_Slots_ClearAllLoot()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50170);

	UZ_InventoryManager_C_Slots_ClearAllLoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.GET_ALL_LOOT_BY_SOCKET(NoSlot)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_Equp_Socket                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FZ_LootStr>      Loot                           (Parm, OutParm, ZeroConstructor)
void UZ_InventoryManager_C::STATIC_GET_ALL_LOOT_BY_SOCKET_NoSlot_(TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_Equp_Socket, TArray<struct FZ_LootStr>* Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50168);

	UZ_InventoryManager_C_GET_ALL_LOOT_BY_SOCKET_NoSlot__Params params;
	params.Z_Equp_Socket = Z_Equp_Socket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loot != nullptr)
		*Loot = params.Loot;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Loot_SetLoot_InSocket
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_Loot_SetLoot_InSocket(TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Socket, int Count)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50166);

	UZ_InventoryManager_C_Loot_SetLoot_InSocket_Params params;
	params.Socket = Socket;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootIsAttachExist
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryComponent_C* Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsScope                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsMagazine                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           AttachExist                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FZ_LootStr              AttachedLoot                   (Parm, OutParm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_LootIsAttachExist(class UZ_InventoryComponent_C* Inventory, int Index, bool IsScope, bool IsMagazine, bool* AttachExist, struct FZ_LootStr* AttachedLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50164);

	UZ_InventoryManager_C_LootIsAttachExist_Params params;
	params.Inventory = Inventory;
	params.Index = Index;
	params.IsScope = IsScope;
	params.IsMagazine = IsMagazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AttachExist != nullptr)
		*AttachExist = params.AttachExist;
	if (AttachedLoot != nullptr)
		*AttachedLoot = params.AttachedLoot;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootClearAttach
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryComponent_C* Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsScope                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsMagazine                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryManager_C::STATIC_LootClearAttach(class UZ_InventoryComponent_C* Inventory, int Index, bool IsScope, bool IsMagazine)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50162);

	UZ_InventoryManager_C_LootClearAttach_Params params;
	params.Inventory = Inventory;
	params.Index = Index;
	params.IsScope = IsScope;
	params.IsMagazine = IsMagazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootUnAttach
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryComponent_C* FromInventory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FromWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZ_InventoryComponent_C* ToInventory                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ToSlotIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsScope                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsMagazine                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryManager_C::STATIC_LootUnAttach(class UZ_InventoryComponent_C* FromInventory, int FromWeapon, class UZ_InventoryComponent_C* ToInventory, int ToSlotIndex, bool IsScope, bool IsMagazine)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50160);

	UZ_InventoryManager_C_LootUnAttach_Params params;
	params.FromInventory = FromInventory;
	params.FromWeapon = FromWeapon;
	params.ToInventory = ToInventory;
	params.ToSlotIndex = ToSlotIndex;
	params.IsScope = IsScope;
	params.IsMagazine = IsMagazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootCheckCanAttachAnywhere
// (Net)
// Parameters:
// struct FZ_LootStr              LootAttachTo                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int                            SlotIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WeaponIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UZ_InventoryManager_C::LootCheckCanAttachAnywhere(const struct FZ_LootStr& LootAttachTo, int* SlotIndex, int* WeaponIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50158);

	UZ_InventoryManager_C_LootCheckCanAttachAnywhere_Params params;
	params.LootAttachTo = LootAttachTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SlotIndex != nullptr)
		*SlotIndex = params.SlotIndex;
	if (WeaponIndex != nullptr)
		*WeaponIndex = params.WeaponIndex;


	return params.ReturnValue;
}


// Function Z_InventoryManager.Z_InventoryManager_C.LootFloorMove
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            From                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            To                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZ_InventoryComponent_C* FromInventory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZ_InventoryComponent_C* ToInventory                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_LootFloorMove(int From, int To, class UZ_InventoryComponent_C* FromInventory, class UZ_InventoryComponent_C* ToInventory)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50156);

	UZ_InventoryManager_C_LootFloorMove_Params params;
	params.From = From;
	params.To = To;
	params.FromInventory = FromInventory;
	params.ToInventory = ToInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootRemoveLootFromFloor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_LootRemoveLootFromFloor(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50154);

	UZ_InventoryManager_C_LootRemoveLootFromFloor_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.GUI_DrawClientLootNear
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      LootNear                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UZ_InventoryManager_C::STATIC_GUI_DrawClientLootNear(TArray<struct FZ_LootStr>* LootNear)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50151);

	UZ_InventoryManager_C_GUI_DrawClientLootNear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LootNear != nullptr)
		*LootNear = params.LootNear;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootSeekLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_LootSeekLoot()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50149);

	UZ_InventoryManager_C_LootSeekLoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootGetLootNear
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      Z_LootArray                    (Parm, OutParm, ZeroConstructor)
// TArray<class AZ_LootActor_C*>  LootActors                     (Parm, OutParm, ZeroConstructor)
// bool                           LootFound                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryManager_C::STATIC_LootGetLootNear(TArray<struct FZ_LootStr>* Z_LootArray, TArray<class AZ_LootActor_C*>* LootActors, bool* LootFound)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50146);

	UZ_InventoryManager_C_LootGetLootNear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Z_LootArray != nullptr)
		*Z_LootArray = params.Z_LootArray;
	if (LootActors != nullptr)
		*LootActors = params.LootActors;
	if (LootFound != nullptr)
		*LootFound = params.LootFound;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootRemoveLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   NameLoot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            RemoveCount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnCount                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_LootRemoveLoot(const struct FName& NameLoot, int RemoveCount, int* ReturnCount)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50144);

	UZ_InventoryManager_C_LootRemoveLoot_Params params;
	params.NameLoot = NameLoot;
	params.RemoveCount = RemoveCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ReturnCount != nullptr)
		*ReturnCount = params.ReturnCount;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Slots_ClearAttachmentOnParentSlot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            ParentIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsScope                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsMagazine                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryManager_C::STATIC_Slots_ClearAttachmentOnParentSlot(int ParentIndex, bool IsScope, bool IsMagazine)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50142);

	UZ_InventoryManager_C_Slots_ClearAttachmentOnParentSlot_Params params;
	params.ParentIndex = ParentIndex;
	params.IsScope = IsScope;
	params.IsMagazine = IsMagazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootAttach_OnCharacter(ServerFunc)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              WeaponLoot                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_LootAttach_OnCharacter_ServerFunc_(const struct FZ_LootStr& WeaponLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50140);

	UZ_InventoryManager_C_LootAttach_OnCharacter_ServerFunc__Params params;
	params.WeaponLoot = WeaponLoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootSetAttachInWeapStr
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryComponent_C* Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WeaponIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              Z_LootStr                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FZ_LootStr              WeapLoot                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_LootSetAttachInWeapStr(class UZ_InventoryComponent_C* Inventory, int WeaponIndex, struct FZ_LootStr* Z_LootStr, const struct FZ_LootStr& WeapLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50138);

	UZ_InventoryManager_C_LootSetAttachInWeapStr_Params params;
	params.Inventory = Inventory;
	params.WeaponIndex = WeaponIndex;
	params.WeapLoot = WeapLoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Z_LootStr != nullptr)
		*Z_LootStr = params.Z_LootStr;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Slots_SetAttachmentSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            ParentIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              WeaponLoot                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_Slots_SetAttachmentSlots(int ParentIndex, const struct FZ_LootStr& WeaponLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50136);

	UZ_InventoryManager_C_Slots_SetAttachmentSlots_Params params;
	params.ParentIndex = ParentIndex;
	params.WeaponLoot = WeaponLoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Slots_ClearAttachmentSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            ParentIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_Slots_ClearAttachmentSlots(int ParentIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50134);

	UZ_InventoryManager_C_Slots_ClearAttachmentSlots_Params params;
	params.ParentIndex = ParentIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Slots_GetAttachSlotsByParentIndex
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            ParentIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int>                    AttachesIndexes                (Parm, OutParm, ZeroConstructor)
void UZ_InventoryManager_C::STATIC_Slots_GetAttachSlotsByParentIndex(int ParentIndex, bool* Ok, TArray<int>* AttachesIndexes)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50132);

	UZ_InventoryManager_C_Slots_GetAttachSlotsByParentIndex_Params params;
	params.ParentIndex = ParentIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ok != nullptr)
		*Ok = params.Ok;
	if (AttachesIndexes != nullptr)
		*AttachesIndexes = params.AttachesIndexes;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootTryAttach
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryComponent_C* FromInventory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WeaponIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            AttachSlotIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_LootTryAttach(class UZ_InventoryComponent_C* FromInventory, int WeaponIndex, int ItemIndex, int AttachSlotIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50130);

	UZ_InventoryManager_C_LootTryAttach_Params params;
	params.FromInventory = FromInventory;
	params.WeaponIndex = WeaponIndex;
	params.ItemIndex = ItemIndex;
	params.AttachSlotIndex = AttachSlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootCheckCanAttachToWeapon
// (Net, NetReliable)
// Parameters:
// struct FZ_LootStr              AttachedLoot                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FZ_LootStr              Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UZ_InventoryManager_C::LootCheckCanAttachToWeapon(const struct FZ_LootStr& AttachedLoot, const struct FZ_LootStr& Weapon)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50128);

	UZ_InventoryManager_C_LootCheckCanAttachToWeapon_Params params;
	params.AttachedLoot = AttachedLoot;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Z_InventoryManager.Z_InventoryManager_C.GET_LOOT_By_Equipment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Z_LootEquipCategory_EZ_LootEquipCategory> Z_EquipmetCategory             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_EquipSocket                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              Loot                           (Parm, OutParm, HasGetValueTypeHash)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_GET_LOOT_By_Equipment(TEnumAsByte<Z_LootEquipCategory_EZ_LootEquipCategory> Z_EquipmetCategory, TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_EquipSocket, struct FZ_LootStr* Loot, int* Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50126);

	UZ_InventoryManager_C_GET_LOOT_By_Equipment_Params params;
	params.Z_EquipmetCategory = Z_EquipmetCategory;
	params.Z_EquipSocket = Z_EquipSocket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loot != nullptr)
		*Loot = params.Loot;
	if (Index != nullptr)
		*Index = params.Index;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootCheckCanSetToSlot
// (NetReliable)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FZ_SlotStr              Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UZ_InventoryManager_C::LootCheckCanSetToSlot(const struct FZ_LootStr& Loot, const struct FZ_SlotStr& Slot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50124);

	UZ_InventoryManager_C_LootCheckCanSetToSlot_Params params;
	params.Loot = Loot;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Z_InventoryManager.Z_InventoryManager_C.TRY_ADD_LOOT_TO_SOCKET
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryComponent_C* Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              AddLoot                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_TRY_ADD_LOOT_TO_SOCKET(class UZ_InventoryComponent_C* Inventory, const struct FZ_LootStr& AddLoot, TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Socket)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50122);

	UZ_InventoryManager_C_TRY_ADD_LOOT_TO_SOCKET_Params params;
	params.Inventory = Inventory;
	params.AddLoot = AddLoot;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.GET_INVENTORY_LOOT_COUNT
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   LootName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZ_InventoryComponent_C* Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_GET_INVENTORY_LOOT_COUNT(const struct FName& LootName, class UZ_InventoryComponent_C* Inventory, int* Count)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50120);

	UZ_InventoryManager_C_GET_INVENTORY_LOOT_COUNT_Params params;
	params.LootName = LootName;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function Z_InventoryManager.Z_InventoryManager_C.GET_PLAYER_LOOT_COUNT
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   LootName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_GET_PLAYER_LOOT_COUNT(const struct FName& LootName, int* Count)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50118);

	UZ_InventoryManager_C_GET_PLAYER_LOOT_COUNT_Params params;
	params.LootName = LootName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function Z_InventoryManager.Z_InventoryManager_C.GET_LOOT_COUNT_By_Socet
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_EquipSocket                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_GET_LOOT_COUNT_By_Socet(TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_EquipSocket, int* Count)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50116);

	UZ_InventoryManager_C_GET_LOOT_COUNT_By_Socet_Params params;
	params.Z_EquipSocket = Z_EquipSocket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootCombineEqual
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              LootFrom                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FZ_LootStr              LootTo                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FZ_LootStr              NewLootFrom                    (Parm, OutParm, HasGetValueTypeHash)
// struct FZ_LootStr              NewToLoot                      (Parm, OutParm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_LootCombineEqual(const struct FZ_LootStr& LootFrom, const struct FZ_LootStr& LootTo, struct FZ_LootStr* NewLootFrom, struct FZ_LootStr* NewToLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50114);

	UZ_InventoryManager_C_LootCombineEqual_Params params;
	params.LootFrom = LootFrom;
	params.LootTo = LootTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewLootFrom != nullptr)
		*NewLootFrom = params.NewLootFrom;
	if (NewToLoot != nullptr)
		*NewToLoot = params.NewToLoot;

}


// Function Z_InventoryManager.Z_InventoryManager_C.DECREMENT_SOCET_COUNT
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_EquipSocket                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_DECREMENT_SOCET_COUNT(TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_EquipSocket)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50112);

	UZ_InventoryManager_C_DECREMENT_SOCET_COUNT_Params params;
	params.Z_EquipSocket = Z_EquipSocket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.GET_LOOT_FROM_Socet
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_EquipSocket                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              Loot                           (Parm, OutParm, HasGetValueTypeHash)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_GET_LOOT_FROM_Socet(TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_EquipSocket, struct FZ_LootStr* Loot, int* Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50110);

	UZ_InventoryManager_C_GET_LOOT_FROM_Socet_Params params;
	params.Z_EquipSocket = Z_EquipSocket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loot != nullptr)
		*Loot = params.Loot;
	if (Index != nullptr)
		*Index = params.Index;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootUnEquip
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryComponent_C* Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_LootUnEquip(class UZ_InventoryComponent_C* Inventory, int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50108);

	UZ_InventoryManager_C_LootUnEquip_Params params;
	params.Inventory = Inventory;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootUnEquip_OnCharacter(ServerFunc)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_LootUnEquip_OnCharacter_ServerFunc_(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50106);

	UZ_InventoryManager_C_LootUnEquip_OnCharacter_ServerFunc__Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Slots_GetEquipSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryComponent_C* Inventroy                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           FreeOnly                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           WasFound                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int>                    EqupSlotsIndexes               (Parm, OutParm, ZeroConstructor)
void UZ_InventoryManager_C::STATIC_Slots_GetEquipSlots(class UZ_InventoryComponent_C* Inventroy, bool FreeOnly, bool* WasFound, TArray<int>* EqupSlotsIndexes)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50104);

	UZ_InventoryManager_C_Slots_GetEquipSlots_Params params;
	params.Inventroy = Inventroy;
	params.FreeOnly = FreeOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WasFound != nullptr)
		*WasFound = params.WasFound;
	if (EqupSlotsIndexes != nullptr)
		*EqupSlotsIndexes = params.EqupSlotsIndexes;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootCheckCanEquip
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           CanEquip                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              LootWasHere                    (Parm, OutParm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_LootCheckCanEquip(const struct FZ_LootStr& Loot, bool* CanEquip, int* Index, struct FZ_LootStr* LootWasHere)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50102);

	UZ_InventoryManager_C_LootCheckCanEquip_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanEquip != nullptr)
		*CanEquip = params.CanEquip;
	if (Index != nullptr)
		*Index = params.Index;
	if (LootWasHere != nullptr)
		*LootWasHere = params.LootWasHere;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootDrop_OnCharacter(ServerFunc)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryComponent_C* Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_LootDrop_OnCharacter_ServerFunc_(class UZ_InventoryComponent_C* Inventory, int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50100);

	UZ_InventoryManager_C_LootDrop_OnCharacter_ServerFunc__Params params;
	params.Inventory = Inventory;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootEquip_OnCharacter(ServerFunc)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_LootEquip_OnCharacter_ServerFunc_(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50098);

	UZ_InventoryManager_C_LootEquip_OnCharacter_ServerFunc__Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootCheckUsable
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           WasUsable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryManager_C::STATIC_LootCheckUsable(const struct FZ_LootStr& Loot, bool* WasUsable)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50096);

	UZ_InventoryManager_C_LootCheckUsable_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WasUsable != nullptr)
		*WasUsable = params.WasUsable;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootUse
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryComponent_C* Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_LootUse(class UZ_InventoryComponent_C* Inventory, int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50094);

	UZ_InventoryManager_C_LootUse_Params params;
	params.Inventory = Inventory;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ContainerClose(ServerFunc)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_ContainerClose_ServerFunc_()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50092);

	UZ_InventoryManager_C_ContainerClose_ServerFunc__Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.TransportTOInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_TransportLoot> TransportInventory             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FZ_LootStr>      Inventory                      (Parm, OutParm, ZeroConstructor)
void UZ_InventoryManager_C::STATIC_TransportTOInventory(TArray<struct FZ_TransportLoot>* TransportInventory, TArray<struct FZ_LootStr>* Inventory)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50089);

	UZ_InventoryManager_C_TransportTOInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TransportInventory != nullptr)
		*TransportInventory = params.TransportInventory;
	if (Inventory != nullptr)
		*Inventory = params.Inventory;

}


// Function Z_InventoryManager.Z_InventoryManager_C.InventoryTOTransport
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FZ_TransportLoot> TransportArray                 (Parm, OutParm, ZeroConstructor)
void UZ_InventoryManager_C::STATIC_InventoryTOTransport(TArray<struct FZ_LootStr>* Inventory, TArray<struct FZ_TransportLoot>* TransportArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50086);

	UZ_InventoryManager_C_InventoryTOTransport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
	if (TransportArray != nullptr)
		*TransportArray = params.TransportArray;

}


// Function Z_InventoryManager.Z_InventoryManager_C.GUI_OpenContainer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_ContainerInfo        ContInform                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<struct FZ_LootStr>      ContainerInventory             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UZ_InventoryManager_C::STATIC_GUI_OpenContainer(const struct FZ_ContainerInfo& ContInform, TArray<struct FZ_LootStr>* ContainerInventory)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50084);

	UZ_InventoryManager_C_GUI_OpenContainer_Params params;
	params.ContInform = ContInform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ContainerInventory != nullptr)
		*ContainerInventory = params.ContainerInventory;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ContainerOpen(ServerFunc)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  ContainerActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_ContainerOpen_ServerFunc_(class AActor* ContainerActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50036);

	UZ_InventoryManager_C_ContainerOpen_ServerFunc__Params params;
	params.ContainerActor = ContainerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.LootMove
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryComponent_C* FromInventory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZ_InventoryComponent_C* ToInventory                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            From                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            To                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_LootMove(class UZ_InventoryComponent_C* FromInventory, class UZ_InventoryComponent_C* ToInventory, int From, int To)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50034);

	UZ_InventoryManager_C_LootMove_Params params;
	params.FromInventory = FromInventory;
	params.ToInventory = ToInventory;
	params.From = From;
	params.To = To;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.GUI_HideInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_GUI_HideInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50032);

	UZ_InventoryManager_C_GUI_HideInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.GUI_ShowInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_GUI_ShowInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50030);

	UZ_InventoryManager_C_GUI_ShowInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.GUI_StopUpdate
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_GUI_StopUpdate()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50029);

	UZ_InventoryManager_C_GUI_StopUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.GUI_StartUpdate
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_GUI_StartUpdate()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50028);

	UZ_InventoryManager_C_GUI_StartUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.GUI_Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_GUI_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50026);

	UZ_InventoryManager_C_GUI_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.GUI_Update
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_GUI_Update()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50024);

	UZ_InventoryManager_C_GUI_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.INITIALIZE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryComponent_C* Player_Inventory               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FZ_SlotStr>      PLAYER_InventorySLOTS          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AHUD*                    HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_INITIALIZE(class UZ_InventoryComponent_C* Player_Inventory, TArray<struct FZ_SlotStr>* PLAYER_InventorySLOTS, class AHUD* HUD)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50022);

	UZ_InventoryManager_C_INITIALIZE_Params params;
	params.Player_Inventory = Player_Inventory;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PLAYER_InventorySLOTS != nullptr)
		*PLAYER_InventorySLOTS = params.PLAYER_InventorySLOTS;

}


// Function Z_InventoryManager.Z_InventoryManager_C.TRY_ADD_LOOT_TO_INVENTORY
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryComponent_C* Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              AddLoot                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FZ_LootStr              ReturnLoot                     (Parm, OutParm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_TRY_ADD_LOOT_TO_INVENTORY(class UZ_InventoryComponent_C* Inventory, const struct FZ_LootStr& AddLoot, bool* Ok, struct FZ_LootStr* ReturnLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50020);

	UZ_InventoryManager_C_TRY_ADD_LOOT_TO_INVENTORY_Params params;
	params.Inventory = Inventory;
	params.AddLoot = AddLoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ok != nullptr)
		*Ok = params.Ok;
	if (ReturnLoot != nullptr)
		*ReturnLoot = params.ReturnLoot;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_ConstructMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_SlotStr>      Slots                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UZ_InventoryManager_C::STATIC_ZL_GUI_ConstructMenu(TArray<struct FZ_SlotStr>* Slots)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50017);

	UZ_InventoryManager_C_ZL_GUI_ConstructMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Slots != nullptr)
		*Slots = params.Slots;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_Update
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      Inventori                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FZ_LootStr>      Container                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsOnFloorMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryManager_C::STATIC_ZL_GUI_Update(TArray<struct FZ_LootStr>* Inventori, TArray<struct FZ_LootStr>* Container, bool IsOnFloorMode)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50014);

	UZ_InventoryManager_C_ZL_GUI_Update_Params params;
	params.IsOnFloorMode = IsOnFloorMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Inventori != nullptr)
		*Inventori = params.Inventori;
	if (Container != nullptr)
		*Container = params.Container;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_ShowInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_ZL_GUI_ShowInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50013);

	UZ_InventoryManager_C_ZL_GUI_ShowInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_HideInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_ZL_GUI_HideInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50012);

	UZ_InventoryManager_C_ZL_GUI_HideInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_Construkt_Container
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      ContainerInventory             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FZ_ContainerInfo        ContInform                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_ZL_GUI_Construkt_Container(TArray<struct FZ_LootStr>* ContainerInventory, const struct FZ_ContainerInfo& ContInform)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50009);

	UZ_InventoryManager_C_ZL_GUI_Construkt_Container_Params params;
	params.ContInform = ContInform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ContainerInventory != nullptr)
		*ContainerInventory = params.ContainerInventory;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_ClearContainer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_ZL_GUI_ClearContainer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50008);

	UZ_InventoryManager_C_ZL_GUI_ClearContainer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_DnD_Drag
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UUserWidget*             DragSlot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_ZL_GUI_DnD_Drag(class UUserWidget* DragSlot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50006);

	UZ_InventoryManager_C_ZL_GUI_DnD_Drag_Params params;
	params.DragSlot = DragSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_DND_Drop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_ZL_GUI_DND_Drop()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50005);

	UZ_InventoryManager_C_ZL_GUI_DND_Drop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ZL_CHARACTER_EquipThis(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_ZL_CHARACTER_EquipThis_Server_(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50003);

	UZ_InventoryManager_C_ZL_CHARACTER_EquipThis_Server__Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ZL_CHARACTER_DropThis(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              LootStr                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_ZL_CHARACTER_DropThis_Server_(const struct FZ_LootStr& LootStr)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50001);

	UZ_InventoryManager_C_ZL_CHARACTER_DropThis_Server__Params params;
	params.LootStr = LootStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ZL_CHARACTER_USEThis(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_ZL_CHARACTER_USEThis_Server_(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49999);

	UZ_InventoryManager_C_ZL_CHARACTER_USEThis_Server__Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ZL_CHARACTER_Unequip(Serever)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_ZL_CHARACTER_Unequip_Serever_(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49997);

	UZ_InventoryManager_C_ZL_CHARACTER_Unequip_Serever__Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_SLOT_Hovered
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_ZL_GUI_SLOT_Hovered(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49995);

	UZ_InventoryManager_C_ZL_GUI_SLOT_Hovered_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_SLOT_Unhovered
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_ZL_GUI_SLOT_Unhovered()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49994);

	UZ_InventoryManager_C_ZL_GUI_SLOT_Unhovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ZL_CHARACTER_AttachToWeapon(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes> Scopes                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer> Silencer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_ZL_CHARACTER_AttachToWeapon_Server_(TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes> Scopes, TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer> Silencer, const struct FName& Weapon)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49992);

	UZ_InventoryManager_C_ZL_CHARACTER_AttachToWeapon_Server__Params params;
	params.Scopes = Scopes;
	params.Silencer = Silencer;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_DrawLootNear
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UZ_InventoryManager_C::STATIC_ZL_GUI_DrawLootNear(TArray<struct FZ_LootStr>* Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49989);

	UZ_InventoryManager_C_ZL_GUI_DrawLootNear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loot != nullptr)
		*Loot = params.Loot;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ZL_CHARACTER_UNAttach(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_ZL_CHARACTER_UNAttach_Server_(const struct FName& Weapon)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49987);

	UZ_InventoryManager_C_ZL_CHARACTER_UNAttach_Server__Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_Overload
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          OverloadMass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_ZL_GUI_Overload(float OverloadMass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49985);

	UZ_InventoryManager_C_ZL_GUI_Overload_Params params;
	params.OverloadMass = OverloadMass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ZL_GUI_InventoryRespawnMode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_ZL_GUI_InventoryRespawnMode()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49984);

	UZ_InventoryManager_C_ZL_GUI_InventoryRespawnMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_PLAYER_SetLootInSlot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_TransportLoot        TransportLoot                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_CLIENT_PLAYER_SetLootInSlot(int Index, const struct FZ_TransportLoot& TransportLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49982);

	UZ_InventoryManager_C_CLIENT_PLAYER_SetLootInSlot_Params params;
	params.Index = Index;
	params.TransportLoot = TransportLoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.InitializeGUI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_InitializeGUI()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49981);

	UZ_InventoryManager_C_InitializeGUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_PLAYER_ClearSlot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_CLIENT_PLAYER_ClearSlot(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49979);

	UZ_InventoryManager_C_CLIENT_PLAYER_ClearSlot_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_PLAYER_MoveLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            From                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            To                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SERVER_PLAYER_MoveLoot(int From, int To)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49977);

	UZ_InventoryManager_C_SERVER_PLAYER_MoveLoot_Params params;
	params.From = From;
	params.To = To;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_Open_Container
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  ContainerActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SERVER_Open_Container(class AActor* ContainerActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49975);

	UZ_InventoryManager_C_SERVER_Open_Container_Params params;
	params.ContainerActor = ContainerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_OPEN_CONTAINER
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_ContainerInfo        ContainerInfo                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<struct FZ_TransportLoot> Inventorytransport             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           OpenInventory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryManager_C::STATIC_CLIENT_OPEN_CONTAINER(const struct FZ_ContainerInfo& ContainerInfo, TArray<struct FZ_TransportLoot> Inventorytransport, bool OpenInventory)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49967);

	UZ_InventoryManager_C_CLIENT_OPEN_CONTAINER_Params params;
	params.ContainerInfo = ContainerInfo;
	params.Inventorytransport = Inventorytransport;
	params.OpenInventory = OpenInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_CONTAINER_MoveLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            From                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            To                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SERVER_CONTAINER_MoveLoot(int From, int To)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49965);

	UZ_InventoryManager_C_SERVER_CONTAINER_MoveLoot_Params params;
	params.From = From;
	params.To = To;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_CONTAINER_ClearSlot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_CLIENT_CONTAINER_ClearSlot(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49963);

	UZ_InventoryManager_C_CLIENT_CONTAINER_ClearSlot_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_CONTAINER_SetLootInSlot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_TransportLoot        TransportLoot                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_CLIENT_CONTAINER_SetLootInSlot(int Index, const struct FZ_TransportLoot& TransportLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49961);

	UZ_InventoryManager_C_CLIENT_CONTAINER_SetLootInSlot_Params params;
	params.Index = Index;
	params.TransportLoot = TransportLoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_MOVE_FromContainerToPlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            From                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            To                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SERVER_MOVE_FromContainerToPlayer(int From, int To)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49959);

	UZ_InventoryManager_C_SERVER_MOVE_FromContainerToPlayer_Params params;
	params.From = From;
	params.To = To;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_MOVE_FromPlayerToContainer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            From                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            To                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SERVER_MOVE_FromPlayerToContainer(int From, int To)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49957);

	UZ_InventoryManager_C_SERVER_MOVE_FromPlayerToContainer_Params params;
	params.From = From;
	params.To = To;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_CLOSE_CONTAINER
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           StartSeekLoot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryManager_C::STATIC_SERVER_CLOSE_CONTAINER(bool StartSeekLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49955);

	UZ_InventoryManager_C_SERVER_CLOSE_CONTAINER_Params params;
	params.StartSeekLoot = StartSeekLoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_CLOSE_CONTAINER
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_CLIENT_CLOSE_CONTAINER()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49954);

	UZ_InventoryManager_C_CLIENT_CLOSE_CONTAINER_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_CONTAINER_DROPItem
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SERVER_CONTAINER_DROPItem(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49952);

	UZ_InventoryManager_C_SERVER_CONTAINER_DROPItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_PLAYER_DROPItem
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SERVER_PLAYER_DROPItem(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49950);

	UZ_InventoryManager_C_SERVER_PLAYER_DROPItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_PLAYER_USEItem
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SERVER_PLAYER_USEItem(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49948);

	UZ_InventoryManager_C_SERVER_PLAYER_USEItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_CONTAINER_USEitem
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SERVER_CONTAINER_USEitem(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49946);

	UZ_InventoryManager_C_SERVER_CONTAINER_USEitem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_PLAYER_TryUnEquip
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SERVER_PLAYER_TryUnEquip(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49944);

	UZ_InventoryManager_C_SERVER_PLAYER_TryUnEquip_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_SIHRONIZE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_TransportLoot> TransportInventory             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FZ_TransportLoot> TransportContainer             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          PlayerMass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_CLIENT_SIHRONIZE(TArray<struct FZ_TransportLoot> TransportInventory, TArray<struct FZ_TransportLoot> TransportContainer, float PlayerMass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49941);

	UZ_InventoryManager_C_CLIENT_SIHRONIZE_Params params;
	params.TransportInventory = TransportInventory;
	params.TransportContainer = TransportContainer;
	params.PlayerMass = PlayerMass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_SINHRONIZE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_SERVER_SINHRONIZE()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49940);

	UZ_InventoryManager_C_SERVER_SINHRONIZE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_PLAYER_AttachToWeapon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            WeaponSlotIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            AttachItemIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            AttachSlotIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SERVER_PLAYER_AttachToWeapon(int WeaponSlotIndex, int AttachItemIndex, int AttachSlotIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49938);

	UZ_InventoryManager_C_SERVER_PLAYER_AttachToWeapon_Params params;
	params.WeaponSlotIndex = WeaponSlotIndex;
	params.AttachItemIndex = AttachItemIndex;
	params.AttachSlotIndex = AttachSlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.StartSeekLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_StartSeekLoot()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49937);

	UZ_InventoryManager_C_StartSeekLoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.StopSeekLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_StopSeekLoot()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49936);

	UZ_InventoryManager_C_StopSeekLoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_ONFLOOR_SetLootItem
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_TransportLoot        TransportLoot                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_CLIENT_ONFLOOR_SetLootItem(int Index, const struct FZ_TransportLoot& TransportLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49934);

	UZ_InventoryManager_C_CLIENT_ONFLOOR_SetLootItem_Params params;
	params.Index = Index;
	params.TransportLoot = TransportLoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_ONFLOOR_RemoveLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_CLIENT_ONFLOOR_RemoveLoot(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49932);

	UZ_InventoryManager_C_CLIENT_ONFLOOR_RemoveLoot_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_ONFLOOR_Setloot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_TransportLoot> TransportInventory             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UZ_InventoryManager_C::STATIC_CLIENT_ONFLOOR_Setloot(TArray<struct FZ_TransportLoot> TransportInventory)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49929);

	UZ_InventoryManager_C_CLIENT_ONFLOOR_Setloot_Params params;
	params.TransportInventory = TransportInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_ONFLOOR_FromFloorToPlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            From                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            To                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SERVER_ONFLOOR_FromFloorToPlayer(int From, int To)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49927);

	UZ_InventoryManager_C_SERVER_ONFLOOR_FromFloorToPlayer_Params params;
	params.From = From;
	params.To = To;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_ONFLOOR_FromPlayerToFloor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            From                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            To                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SERVER_ONFLOOR_FromPlayerToFloor(int From, int To)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49925);

	UZ_InventoryManager_C_SERVER_ONFLOOR_FromPlayerToFloor_Params params;
	params.From = From;
	params.To = To;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_ONFLOOR_UseItem
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SERVER_ONFLOOR_UseItem(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49923);

	UZ_InventoryManager_C_SERVER_ONFLOOR_UseItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_CONTAINER_attach
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            WeaponIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            AttachSlotIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SERVER_CONTAINER_attach(int WeaponIndex, int ItemIndex, int AttachSlotIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49921);

	UZ_InventoryManager_C_SERVER_CONTAINER_attach_Params params;
	params.WeaponIndex = WeaponIndex;
	params.ItemIndex = ItemIndex;
	params.AttachSlotIndex = AttachSlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_UNATTACH_PLAYER_PLAYER
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            FromWeaponIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ToSlot                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsScope                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsMagazine                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryManager_C::STATIC_SERVER_UNATTACH_PLAYER_PLAYER(int FromWeaponIndex, int ToSlot, bool IsScope, bool IsMagazine)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49919);

	UZ_InventoryManager_C_SERVER_UNATTACH_PLAYER_PLAYER_Params params;
	params.FromWeaponIndex = FromWeaponIndex;
	params.ToSlot = ToSlot;
	params.IsScope = IsScope;
	params.IsMagazine = IsMagazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_UNATTACH_PLAYER_CONTAINER
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            FromWeaponIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ToSlot                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsScope                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsMagazine                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryManager_C::STATIC_SERVER_UNATTACH_PLAYER_CONTAINER(int FromWeaponIndex, int ToSlot, bool IsScope, bool IsMagazine)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49917);

	UZ_InventoryManager_C_SERVER_UNATTACH_PLAYER_CONTAINER_Params params;
	params.FromWeaponIndex = FromWeaponIndex;
	params.ToSlot = ToSlot;
	params.IsScope = IsScope;
	params.IsMagazine = IsMagazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_UNATTACH_CONTAINER_PLAYER
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            FromWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ToSlotIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsScope                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsMagazine                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryManager_C::STATIC_SERVER_UNATTACH_CONTAINER_PLAYER(int FromWeapon, int ToSlotIndex, bool IsScope, bool IsMagazine)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49915);

	UZ_InventoryManager_C_SERVER_UNATTACH_CONTAINER_PLAYER_Params params;
	params.FromWeapon = FromWeapon;
	params.ToSlotIndex = ToSlotIndex;
	params.IsScope = IsScope;
	params.IsMagazine = IsMagazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_UNATTACH_CONTAINER_CONTAINER
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            FromWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ToSlotIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsScope                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsMagazine                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryManager_C::STATIC_SERVER_UNATTACH_CONTAINER_CONTAINER(int FromWeapon, int ToSlotIndex, bool IsScope, bool IsMagazine)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49913);

	UZ_InventoryManager_C_SERVER_UNATTACH_CONTAINER_CONTAINER_Params params;
	params.FromWeapon = FromWeapon;
	params.ToSlotIndex = ToSlotIndex;
	params.IsScope = IsScope;
	params.IsMagazine = IsMagazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_Extrernal_Open
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_TransportLoot> TransportLoot                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  ExternalActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_CLIENT_Extrernal_Open(TArray<struct FZ_TransportLoot> TransportLoot, class AActor* ExternalActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49910);

	UZ_InventoryManager_C_CLIENT_Extrernal_Open_Params params;
	params.TransportLoot = TransportLoot;
	params.ExternalActor = ExternalActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_External_Close
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_CLIENT_External_Close()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49909);

	UZ_InventoryManager_C_CLIENT_External_Close_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_External_Set
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_TransportLoot        TransportStr                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_CLIENT_External_Set(int Index, const struct FZ_TransportLoot& TransportStr)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49907);

	UZ_InventoryManager_C_CLIENT_External_Set_Params params;
	params.Index = Index;
	params.TransportStr = TransportStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_External_Clear
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_CLIENT_External_Clear(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49905);

	UZ_InventoryManager_C_CLIENT_External_Clear_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_PLAYER_Setbackpack
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Mass                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_CLIENT_PLAYER_Setbackpack(int Mass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49903);

	UZ_InventoryManager_C_CLIENT_PLAYER_Setbackpack_Params params;
	params.Mass = Mass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_PLAYER_COMBINE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            WhatIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            With_what                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SERVER_PLAYER_COMBINE(int WhatIndex, int With_what)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49901);

	UZ_InventoryManager_C_SERVER_PLAYER_COMBINE_Params params;
	params.WhatIndex = WhatIndex;
	params.With_what = With_what;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_ShowActorCraft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_CLIENT_ShowActorCraft(class AActor* Actor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49899);

	UZ_InventoryManager_C_CLIENT_ShowActorCraft_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_Split_count
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            SplitCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PlayerinventoryIndex           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SERVER_Split_count(int SplitCount, int PlayerinventoryIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49897);

	UZ_InventoryManager_C_SERVER_Split_count_Params params;
	params.SplitCount = SplitCount;
	params.PlayerinventoryIndex = PlayerinventoryIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_HEAL_KEY
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_SERVER_HEAL_KEY()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49896);

	UZ_InventoryManager_C_SERVER_HEAL_KEY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.StartAddHealth
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          AddHealth                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_StartAddHealth(float AddHealth)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49894);

	UZ_InventoryManager_C_StartAddHealth_Params params;
	params.AddHealth = AddHealth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.StopAddHealth
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_StopAddHealth()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49893);

	UZ_InventoryManager_C_StopAddHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_ONFLOOR_AttachFromPlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            WeaponIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            AttachSlotIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SERVER_ONFLOOR_AttachFromPlayer(int WeaponIndex, int ItemIndex, int AttachSlotIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49891);

	UZ_InventoryManager_C_SERVER_ONFLOOR_AttachFromPlayer_Params params;
	params.WeaponIndex = WeaponIndex;
	params.ItemIndex = ItemIndex;
	params.AttachSlotIndex = AttachSlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_IsDoubleClick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsDoubleClick                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryManager_C::STATIC_SERVER_IsDoubleClick(bool IsDoubleClick)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49889);

	UZ_InventoryManager_C_SERVER_IsDoubleClick_Params params;
	params.IsDoubleClick = IsDoubleClick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_TRADE_Begin
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            BarigaIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsTradeAll                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryManager_C::STATIC_SERVER_TRADE_Begin(int BarigaIndex, bool IsTradeAll)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49887);

	UZ_InventoryManager_C_SERVER_TRADE_Begin_Params params;
	params.BarigaIndex = BarigaIndex;
	params.IsTradeAll = IsTradeAll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Print mass
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_Print_mass()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49886);

	UZ_InventoryManager_C_Print_mass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_StartDebug
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_SERVER_StartDebug()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49885);

	UZ_InventoryManager_C_SERVER_StartDebug_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_PrintDEbug
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          ServerMAss                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_CLIENT_PrintDEbug(float ServerMAss)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49883);

	UZ_InventoryManager_C_CLIENT_PrintDEbug_Params params;
	params.ServerMAss = ServerMAss;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49882);

	UZ_InventoryManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_UpdateDBActorInfo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_SERVER_UpdateDBActorInfo()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49881);

	UZ_InventoryManager_C_SERVER_UpdateDBActorInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_OPEN_DB
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_SERVER_OPEN_DB()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49880);

	UZ_InventoryManager_C_SERVER_OPEN_DB_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_Cheat_Moneys
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_SERVER_Cheat_Moneys()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49879);

	UZ_InventoryManager_C_SERVER_Cheat_Moneys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_SHOW_TRADE_INFO
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_TradeStr             TradeStr                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_CLIENT_SHOW_TRADE_INFO(const struct FZ_TradeStr& TradeStr)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49877);

	UZ_InventoryManager_C_CLIENT_SHOW_TRADE_INFO_Params params;
	params.TradeStr = TradeStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_CorectMass
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_SERVER_CorectMass()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49876);

	UZ_InventoryManager_C_SERVER_CorectMass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_DropWeaponFromHand
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_SERVER_DropWeaponFromHand()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49875);

	UZ_InventoryManager_C_SERVER_DropWeaponFromHand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_CreateDbActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            SlotsCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Supporter                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SpecialForces                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           AppOwner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryManager_C::STATIC_SERVER_CreateDbActor(int SlotsCount, bool Supporter, bool SpecialForces, bool AppOwner)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49873);

	UZ_InventoryManager_C_SERVER_CreateDbActor_Params params;
	params.SlotsCount = SlotsCount;
	params.Supporter = Supporter;
	params.SpecialForces = SpecialForces;
	params.AppOwner = AppOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ReceiveEndPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49871);

	UZ_InventoryManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Delete
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_Delete()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49870);

	UZ_InventoryManager_C_Delete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_PLAYER_TrashItem
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            PlayerinventoryIndex           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SERVER_PLAYER_TrashItem(int PlayerinventoryIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49868);

	UZ_InventoryManager_C_SERVER_PLAYER_TrashItem_Params params;
	params.PlayerinventoryIndex = PlayerinventoryIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49866);

	UZ_InventoryManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.Server_Open_InventoryEmpty
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_Server_Open_InventoryEmpty()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49865);

	UZ_InventoryManager_C_Server_Open_InventoryEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.CLIENT_SHOW_RESPAWN_CLASSICAL_MODE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryManager_C::STATIC_CLIENT_SHOW_RESPAWN_CLASSICAL_MODE()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49864);

	UZ_InventoryManager_C_CLIENT_SHOW_RESPAWN_CLASSICAL_MODE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.SERVER_PLAYER_UNLOAD_MAGAZINE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            MagazineIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_SERVER_PLAYER_UNLOAD_MAGAZINE(int MagazineIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49862);

	UZ_InventoryManager_C_SERVER_PLAYER_UNLOAD_MAGAZINE_Params params;
	params.MagazineIndex = MagazineIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryManager.Z_InventoryManager_C.ExecuteUbergraph_Z_InventoryManager
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryManager_C::STATIC_ExecuteUbergraph_Z_InventoryManager(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49860);

	UZ_InventoryManager_C_ExecuteUbergraph_Z_InventoryManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
