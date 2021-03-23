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

// Function LootSystemComponent.LootSystemComponent_C.RemoveAmmo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            indexSlot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootSystemComponent_C::STATIC_RemoveAmmo(int indexSlot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(71404);

	ULootSystemComponent_C_RemoveAmmo_Params params;
	params.indexSlot = indexSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.GetNextWeaponInType
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_LootType_ECv2_LootType> LootType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CanChange                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            NextWeaponIndex                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootSystemComponent_C::STATIC_GetNextWeaponInType(TEnumAsByte<Cv2_LootType_ECv2_LootType> LootType, bool* CanChange, int* NextWeaponIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(71127);

	ULootSystemComponent_C_GetNextWeaponInType_Params params;
	params.LootType = LootType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanChange != nullptr)
		*CanChange = params.CanChange;
	if (NextWeaponIndex != nullptr)
		*NextWeaponIndex = params.NextWeaponIndex;

}


// Function LootSystemComponent.LootSystemComponent_C.GetNextWeaponIfDrop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_LootType_ECv2_LootType> DropWeaponlootType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CanChange                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           LootNeedUse                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            NextWeaponIndex                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            DropIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootSystemComponent_C::STATIC_GetNextWeaponIfDrop(TEnumAsByte<Cv2_LootType_ECv2_LootType> DropWeaponlootType, bool* CanChange, bool* LootNeedUse, int* NextWeaponIndex, int* DropIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(71119);

	ULootSystemComponent_C_GetNextWeaponIfDrop_Params params;
	params.DropWeaponlootType = DropWeaponlootType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanChange != nullptr)
		*CanChange = params.CanChange;
	if (LootNeedUse != nullptr)
		*LootNeedUse = params.LootNeedUse;
	if (NextWeaponIndex != nullptr)
		*NextWeaponIndex = params.NextWeaponIndex;
	if (DropIndex != nullptr)
		*DropIndex = params.DropIndex;

}


// Function LootSystemComponent.LootSystemComponent_C.GetLootBytype
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_LootType_ECv2_LootType> Loottypee                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InventorySlot> typeLootArray                  (Parm, OutParm, ZeroConstructor)
void ULootSystemComponent_C::STATIC_GetLootBytype(TEnumAsByte<Cv2_LootType_ECv2_LootType> Loottypee, TArray<struct FS_InventorySlot>* typeLootArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(71109);

	ULootSystemComponent_C_GetLootBytype_Params params;
	params.Loottypee = Loottypee;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (typeLootArray != nullptr)
		*typeLootArray = params.typeLootArray;

}


// Function LootSystemComponent.LootSystemComponent_C.Heal_Me
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ULootSystemComponent_C::STATIC_Heal_Me()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(71107);

	ULootSystemComponent_C_Heal_Me_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.GetSplitLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           FromOtherPanel                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            SplitCouint                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCv2_LootCargoStructure UseLoot                        (Parm, OutParm, HasGetValueTypeHash)
// struct FCv2_LootCargoStructure ResidueLoot                    (Parm, OutParm, HasGetValueTypeHash)
// bool                           Use_SplitMode                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULootSystemComponent_C::STATIC_GetSplitLoot(int Index, bool FromOtherPanel, int SplitCouint, bool* Ok, struct FCv2_LootCargoStructure* UseLoot, struct FCv2_LootCargoStructure* ResidueLoot, bool* Use_SplitMode)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(71105);

	ULootSystemComponent_C_GetSplitLoot_Params params;
	params.Index = Index;
	params.FromOtherPanel = FromOtherPanel;
	params.SplitCouint = SplitCouint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ok != nullptr)
		*Ok = params.Ok;
	if (UseLoot != nullptr)
		*UseLoot = params.UseLoot;
	if (ResidueLoot != nullptr)
		*ResidueLoot = params.ResidueLoot;
	if (Use_SplitMode != nullptr)
		*Use_SplitMode = params.Use_SplitMode;

}


// Function LootSystemComponent.LootSystemComponent_C.GetTypeCount
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_LootType_ECv2_LootType> LootType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            TypeCount                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootSystemComponent_C::STATIC_GetTypeCount(TEnumAsByte<Cv2_LootType_ECv2_LootType> LootType, int* TypeCount)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(71103);

	ULootSystemComponent_C_GetTypeCount_Params params;
	params.LootType = LootType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TypeCount != nullptr)
		*TypeCount = params.TypeCount;

}


// Function LootSystemComponent.LootSystemComponent_C.CharacterToLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FCV2_CharacterTypeStructure CV2_CharacterTypeStructure     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootSystemComponent_C::STATIC_CharacterToLoot(struct FCV2_CharacterTypeStructure* CV2_CharacterTypeStructure, class APlayerController* PlayerController)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69156);

	ULootSystemComponent_C_CharacterToLoot_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CV2_CharacterTypeStructure != nullptr)
		*CV2_CharacterTypeStructure = params.CV2_CharacterTypeStructure;

}


// Function LootSystemComponent.LootSystemComponent_C.UseUsableLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FCv2_LootCargoStructure Use_Loot                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           FullUse                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCv2_LootCargoStructure ReturnLoot                     (Parm, OutParm, HasGetValueTypeHash)
void ULootSystemComponent_C::STATIC_UseUsableLoot(const struct FCv2_LootCargoStructure& Use_Loot, int Index, bool* FullUse, struct FCv2_LootCargoStructure* ReturnLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69154);

	ULootSystemComponent_C_UseUsableLoot_Params params;
	params.Use_Loot = Use_Loot;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FullUse != nullptr)
		*FullUse = params.FullUse;
	if (ReturnLoot != nullptr)
		*ReturnLoot = params.ReturnLoot;

}


// Function LootSystemComponent.LootSystemComponent_C.UpdateSlotsOnAll
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ULootSystemComponent_C::STATIC_UpdateSlotsOnAll()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69152);

	ULootSystemComponent_C_UpdateSlotsOnAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.UseLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           FromOtherPanel                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int>                    Index                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           MoveOnly                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            SplitCouunt                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootSystemComponent_C::STATIC_UseLoot(bool FromOtherPanel, TArray<int>* Index, bool MoveOnly, int SplitCouunt)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69150);

	ULootSystemComponent_C_UseLoot_Params params;
	params.FromOtherPanel = FromOtherPanel;
	params.MoveOnly = MoveOnly;
	params.SplitCouunt = SplitCouunt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function LootSystemComponent.LootSystemComponent_C.RemoveLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FCv2_LootCargoStructure> RemoveLoot                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ULootSystemComponent_C::STATIC_RemoveLoot(TArray<struct FCv2_LootCargoStructure>* RemoveLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69147);

	ULootSystemComponent_C_RemoveLoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RemoveLoot != nullptr)
		*RemoveLoot = params.RemoveLoot;

}


// Function LootSystemComponent.LootSystemComponent_C.CheckResourcesForCraft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> CraftType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULootSystemComponent_C::STATIC_CheckResourcesForCraft(TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> CraftType, bool* Ok)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69145);

	ULootSystemComponent_C_CheckResourcesForCraft_Params params;
	params.CraftType = CraftType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ok != nullptr)
		*Ok = params.Ok;

}


// Function LootSystemComponent.LootSystemComponent_C.CheckCouantbleLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FCv2_LootCargoStructure Loot_Cargo                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           IsCouanteble                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           HaveReturnLoot                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCv2_LootCargoStructure ReturnLoot                     (Parm, OutParm, HasGetValueTypeHash)
void ULootSystemComponent_C::STATIC_CheckCouantbleLoot(const struct FCv2_LootCargoStructure& Loot_Cargo, bool* IsCouanteble, bool* HaveReturnLoot, struct FCv2_LootCargoStructure* ReturnLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69143);

	ULootSystemComponent_C_CheckCouantbleLoot_Params params;
	params.Loot_Cargo = Loot_Cargo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsCouanteble != nullptr)
		*IsCouanteble = params.IsCouanteble;
	if (HaveReturnLoot != nullptr)
		*HaveReturnLoot = params.HaveReturnLoot;
	if (ReturnLoot != nullptr)
		*ReturnLoot = params.ReturnLoot;

}


// Function LootSystemComponent.LootSystemComponent_C.GetEmptySlotsIndexes
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<int>                    emptyIndexes                   (Parm, OutParm, ZeroConstructor)
void ULootSystemComponent_C::STATIC_GetEmptySlotsIndexes(TArray<int>* emptyIndexes)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69140);

	ULootSystemComponent_C_GetEmptySlotsIndexes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (emptyIndexes != nullptr)
		*emptyIndexes = params.emptyIndexes;

}


// Function LootSystemComponent.LootSystemComponent_C.GetLootIndexes
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int>                    LootIndexes                    (Parm, OutParm, ZeroConstructor)
void ULootSystemComponent_C::STATIC_GetLootIndexes(TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> Loot, TArray<int>* LootIndexes)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69138);

	ULootSystemComponent_C_GetLootIndexes_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LootIndexes != nullptr)
		*LootIndexes = params.LootIndexes;

}


// Function LootSystemComponent.LootSystemComponent_C.GetLootcount
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootSystemComponent_C::STATIC_GetLootcount(TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> Loot, int* Count)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69136);

	ULootSystemComponent_C_GetLootcount_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function LootSystemComponent.LootSystemComponent_C.OnRep_InventoryActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ULootSystemComponent_C::STATIC_OnRep_InventoryActor()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69134);

	ULootSystemComponent_C_OnRep_InventoryActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.ClearSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ULootSystemComponent_C::STATIC_ClearSlots()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69132);

	ULootSystemComponent_C_ClearSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.ClearID
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootSystemComponent_C::STATIC_ClearID(int ID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69130);

	ULootSystemComponent_C_ClearID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.GetLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCv2_LootCargoStructure> Loot                           (Parm, OutParm, ZeroConstructor)
void ULootSystemComponent_C::STATIC_GetLoot(int ID, TArray<struct FCv2_LootCargoStructure>* Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69128);

	ULootSystemComponent_C_GetLoot_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loot != nullptr)
		*Loot = params.Loot;

}


// Function LootSystemComponent.LootSystemComponent_C.AddLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FCv2_LootCargoStructure> LootGargoArray                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FCv2_LootCargoStructure> ReturnLoot                     (Parm, OutParm, ZeroConstructor)
void ULootSystemComponent_C::STATIC_AddLoot(TArray<struct FCv2_LootCargoStructure>* LootGargoArray, TArray<struct FCv2_LootCargoStructure>* ReturnLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69119);

	ULootSystemComponent_C_AddLoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LootGargoArray != nullptr)
		*LootGargoArray = params.LootGargoArray;
	if (ReturnLoot != nullptr)
		*ReturnLoot = params.ReturnLoot;

}


// Function LootSystemComponent.LootSystemComponent_C.RemoveLootFromSlot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootSystemComponent_C::STATIC_RemoveLootFromSlot(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69117);

	ULootSystemComponent_C_RemoveLootFromSlot_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.Add_Loot_To_Slot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCv2_LootCargoStructure LootCargo                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ULootSystemComponent_C::STATIC_Add_Loot_To_Slot(int Index, const struct FCv2_LootCargoStructure& LootCargo)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69115);

	ULootSystemComponent_C_Add_Loot_To_Slot_Params params;
	params.Index = Index;
	params.LootCargo = LootCargo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.Add_Loot_to_Id
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCv2_LootCargoStructure Loot_Cargo                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           EmptyOnly                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           WasEmpty                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCv2_LootCargoStructure WHAT_IT_LIES                   (Parm, OutParm, HasGetValueTypeHash)
void ULootSystemComponent_C::STATIC_Add_Loot_to_Id(int ID, const struct FCv2_LootCargoStructure& Loot_Cargo, bool EmptyOnly, bool* Ok, bool* WasEmpty, struct FCv2_LootCargoStructure* WHAT_IT_LIES)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69113);

	ULootSystemComponent_C_Add_Loot_to_Id_Params params;
	params.ID = ID;
	params.Loot_Cargo = Loot_Cargo;
	params.EmptyOnly = EmptyOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ok != nullptr)
		*Ok = params.Ok;
	if (WasEmpty != nullptr)
		*WasEmpty = params.WasEmpty;
	if (WHAT_IT_LIES != nullptr)
		*WHAT_IT_LIES = params.WHAT_IT_LIES;

}


// Function LootSystemComponent.LootSystemComponent_C.Get ID Indexes
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int>                    ID_Indexes                     (Parm, OutParm, ZeroConstructor)
void ULootSystemComponent_C::STATIC_Get_ID_Indexes(int ID, TArray<int>* ID_Indexes)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69111);

	ULootSystemComponent_C_Get_ID_Indexes_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID_Indexes != nullptr)
		*ID_Indexes = params.ID_Indexes;

}


// Function LootSystemComponent.LootSystemComponent_C.IndexateLootArray
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ULootSystemComponent_C::STATIC_IndexateLootArray()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69108);

	ULootSystemComponent_C_IndexateLootArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.UpdateLootArray
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FS_InventorySlot> LootSlotsArray                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ULootSystemComponent_C::STATIC_UpdateLootArray(TArray<struct FS_InventorySlot>* LootSlotsArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69105);

	ULootSystemComponent_C_UpdateLootArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LootSlotsArray != nullptr)
		*LootSlotsArray = params.LootSlotsArray;

}


// Function LootSystemComponent.LootSystemComponent_C.Server_MoveLoot_In
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<int>                    SelectedItems                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ULootSystemComponent_C::STATIC_Server_MoveLoot_In(TArray<int> SelectedItems)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69102);

	ULootSystemComponent_C_Server_MoveLoot_In_Params params;
	params.SelectedItems = SelectedItems;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.Server_MoveLootOut
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<int>                    SelectedLoot                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ULootSystemComponent_C::STATIC_Server_MoveLootOut(TArray<int> SelectedLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69099);

	ULootSystemComponent_C_Server_MoveLootOut_Params params;
	params.SelectedLoot = SelectedLoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.Server_Use_Loot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            LootIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           FromOther                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           MoveOnly                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            SplitCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootSystemComponent_C::STATIC_Server_Use_Loot(int LootIndex, bool FromOther, bool MoveOnly, int SplitCount)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69097);

	ULootSystemComponent_C_Server_Use_Loot_Params params;
	params.LootIndex = LootIndex;
	params.FromOther = FromOther;
	params.MoveOnly = MoveOnly;
	params.SplitCount = SplitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.UpdatePlayerSlotsArrayFROM_SERVER
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FS_InventorySlot> BaseLootSlotsArray             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ULootSystemComponent_C::STATIC_UpdatePlayerSlotsArrayFROM_SERVER(TArray<struct FS_InventorySlot> BaseLootSlotsArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69094);

	ULootSystemComponent_C_UpdatePlayerSlotsArrayFROM_SERVER_Params params;
	params.BaseLootSlotsArray = BaseLootSlotsArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.UpdatePlayerSlotsON_Client
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FS_InventorySlot> SlotsArray                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ULootSystemComponent_C::STATIC_UpdatePlayerSlotsON_Client(TArray<struct FS_InventorySlot> SlotsArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69091);

	ULootSystemComponent_C_UpdatePlayerSlotsON_Client_Params params;
	params.SlotsArray = SlotsArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.UpdateActorSlotsON_CLIENT
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FS_InventorySlot> SlotsArray                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ULootSystemComponent_C::STATIC_UpdateActorSlotsON_CLIENT(TArray<struct FS_InventorySlot> SlotsArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69088);

	ULootSystemComponent_C_UpdateActorSlotsON_CLIENT_Params params;
	params.SlotsArray = SlotsArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.UpdateActorSlotsFromServer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FS_InventorySlot> LootSlots                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ULootSystemComponent_C::STATIC_UpdateActorSlotsFromServer(TArray<struct FS_InventorySlot> LootSlots)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69085);

	ULootSystemComponent_C_UpdateActorSlotsFromServer_Params params;
	params.LootSlots = LootSlots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.Server_DropLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SplitCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootSystemComponent_C::STATIC_Server_DropLoot(int Index, int SplitCount)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69083);

	ULootSystemComponent_C_Server_DropLoot_Params params;
	params.Index = Index;
	params.SplitCount = SplitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.UpdateComponentFromServer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ULootSystemComponent_C::STATIC_UpdateComponentFromServer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69082);

	ULootSystemComponent_C_UpdateComponentFromServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.ClientUseLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SplitCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           FromOtherPanel                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           MoveOnly                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULootSystemComponent_C::STATIC_ClientUseLoot(int Index, int SplitCount, bool FromOtherPanel, bool MoveOnly)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69080);

	ULootSystemComponent_C_ClientUseLoot_Params params;
	params.Index = Index;
	params.SplitCount = SplitCount;
	params.FromOtherPanel = FromOtherPanel;
	params.MoveOnly = MoveOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.Client_Drop_Weapon_From_Hand
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ULootSystemComponent_C::STATIC_Client_Drop_Weapon_From_Hand()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69079);

	ULootSystemComponent_C_Client_Drop_Weapon_From_Hand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ULootSystemComponent_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69078);

	ULootSystemComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootSystemComponent_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69076);

	ULootSystemComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.ExecuteUbergraph_LootSystemComponent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootSystemComponent_C::STATIC_ExecuteUbergraph_LootSystemComponent(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69074);

	ULootSystemComponent_C_ExecuteUbergraph_LootSystemComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootSystemComponent.LootSystemComponent_C.RefreashWidgets__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ULootSystemComponent_C::STATIC_RefreashWidgets__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69073);

	ULootSystemComponent_C_RefreashWidgets__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
