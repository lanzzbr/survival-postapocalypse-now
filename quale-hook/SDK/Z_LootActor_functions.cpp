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

// Function Z_LootActor.Z_LootActor_C.Root_UpdateMesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AZ_LootActor_C::STATIC_Root_UpdateMesh()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34441);

	AZ_LootActor_C_Root_UpdateMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_LootActor.Z_LootActor_C.OnRep_ZTransportLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AZ_LootActor_C::STATIC_OnRep_ZTransportLoot()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34386);

	AZ_LootActor_C_OnRep_ZTransportLoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_LootActor.Z_LootActor_C.LootIsValid
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AZ_LootActor_C::STATIC_LootIsValid(bool* Valid)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34383);

	AZ_LootActor_C_LootIsValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;

}


// Function Z_LootActor.Z_LootActor_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AZ_LootActor_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34382);

	AZ_LootActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_LootActor.Z_LootActor_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AZ_LootActor_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34381);

	AZ_LootActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_LootActor.Z_LootActor_C.DRAW_LOOT
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot_Struct                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AZ_LootActor_C::STATIC_DRAW_LOOT(const struct FZ_LootStr& Loot_Struct)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34379);

	AZ_LootActor_C_DRAW_LOOT_Params params;
	params.Loot_Struct = Loot_Struct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_LootActor.Z_LootActor_C.ExecuteUbergraph_Z_LootActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZ_LootActor_C::STATIC_ExecuteUbergraph_Z_LootActor(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34375);

	AZ_LootActor_C_ExecuteUbergraph_Z_LootActor_Params params;
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
