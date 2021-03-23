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

// Function Cv2_LootBP.Cv2_LootBP_C.OnRep_LootName
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_LootBP_C::STATIC_OnRep_LootName()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34425);

	ACv2_LootBP_C_OnRep_LootName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_LootBP.Cv2_LootBP_C.OnRep_isLooted
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_LootBP_C::STATIC_OnRep_isLooted()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34414);

	ACv2_LootBP_C_OnRep_isLooted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_LootBP.Cv2_LootBP_C.OnRep_isDrop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_LootBP_C::STATIC_OnRep_isDrop()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34413);

	ACv2_LootBP_C_OnRep_isDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_LootBP.Cv2_LootBP_C.SetStaticMesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_LootBP_C::STATIC_SetStaticMesh()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34411);

	ACv2_LootBP_C_SetStaticMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_LootBP.Cv2_LootBP_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_LootBP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34410);

	ACv2_LootBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_LootBP.Cv2_LootBP_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_LootBP_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34409);

	ACv2_LootBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_LootBP.Cv2_LootBP_C.SetPhysics
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_LootBP_C::STATIC_SetPhysics()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34408);

	ACv2_LootBP_C_SetPhysics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_LootBP.Cv2_LootBP_C.GenerateLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv3_FurnitureLootType_ECv3_FurnitureLootType> Loot_Type                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_LootBP_C::STATIC_GenerateLoot(TEnumAsByte<Cv3_FurnitureLootType_ECv3_FurnitureLootType> Loot_Type)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34406);

	ACv2_LootBP_C_GenerateLoot_Params params;
	params.Loot_Type = Loot_Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_LootBP.Cv2_LootBP_C.SetZLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_LootBP_C::STATIC_SetZLoot()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34405);

	ACv2_LootBP_C_SetZLoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_LootBP.Cv2_LootBP_C.Root_UpdateMesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_LootBP_C::STATIC_Root_UpdateMesh()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36863);

	ACv2_LootBP_C_Root_UpdateMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_LootBP.Cv2_LootBP_C.OffPhysics
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_LootBP_C::STATIC_OffPhysics()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34404);

	ACv2_LootBP_C_OffPhysics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_LootBP.Cv2_LootBP_C.SetCustomLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> Loot_Type                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_LootBP_C::STATIC_SetCustomLoot(TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> Loot_Type, int Count)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34402);

	ACv2_LootBP_C_SetCustomLoot_Params params;
	params.Loot_Type = Loot_Type;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_LootBP.Cv2_LootBP_C.SetCustomLootName
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   Loot_Type                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_LootBP_C::STATIC_SetCustomLootName(const struct FName& Loot_Type, int Count)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34400);

	ACv2_LootBP_C_SetCustomLootName_Params params;
	params.Loot_Type = Loot_Type;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_LootBP.Cv2_LootBP_C.ExecuteUbergraph_Cv2_LootBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_LootBP_C::STATIC_ExecuteUbergraph_Cv2_LootBP(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34390);

	ACv2_LootBP_C_ExecuteUbergraph_Cv2_LootBP_Params params;
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
