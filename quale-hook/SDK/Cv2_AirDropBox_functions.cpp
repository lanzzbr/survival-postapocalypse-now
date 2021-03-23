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

// Function Cv2_AirDropBox.Cv2_AirDropBox_C.GenerateRandoomLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> LootID                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_AirDropBox_C::STATIC_GenerateRandoomLoot(TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>* LootID, int* Count)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58439);

	ACv2_AirDropBox_C_GenerateRandoomLoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LootID != nullptr)
		*LootID = params.LootID;
	if (Count != nullptr)
		*Count = params.Count;

}


// Function Cv2_AirDropBox.Cv2_AirDropBox_C.OnRep_isDestroy
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_AirDropBox_C::STATIC_OnRep_isDestroy()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58437);

	ACv2_AirDropBox_C_OnRep_isDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_AirDropBox.Cv2_AirDropBox_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_AirDropBox_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58436);

	ACv2_AirDropBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_AirDropBox.Cv2_AirDropBox_C.UpdateLootArray
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FS_InventorySlot> LootSlotsArray                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ACv2_AirDropBox_C::STATIC_UpdateLootArray(TArray<struct FS_InventorySlot>* LootSlotsArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58425);

	ACv2_AirDropBox_C_UpdateLootArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LootSlotsArray != nullptr)
		*LootSlotsArray = params.LootSlotsArray;

}


// Function Cv2_AirDropBox.Cv2_AirDropBox_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_AirDropBox_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58424);

	ACv2_AirDropBox_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_AirDropBox.Cv2_AirDropBox_C.ReceiveAnyDamage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_AirDropBox_C::STATIC_ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58422);

	ACv2_AirDropBox_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_AirDropBox.Cv2_AirDropBox_C.ExecuteUbergraph_Cv2_AirDropBox
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_AirDropBox_C::STATIC_ExecuteUbergraph_Cv2_AirDropBox(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58416);

	ACv2_AirDropBox_C_ExecuteUbergraph_Cv2_AirDropBox_Params params;
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
