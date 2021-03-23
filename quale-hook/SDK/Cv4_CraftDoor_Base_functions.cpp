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

// Function Cv4_CraftDoor_Base.Cv4_CraftDoor_Base_C.ApplyDamageCustom
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv4_CraftDoor_Base_C::STATIC_ApplyDamageCustom(float Damage)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55029);

	ACv4_CraftDoor_Base_C_ApplyDamageCustom_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_CraftDoor_Base.Cv4_CraftDoor_Base_C.OnRep_IsDestroyed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv4_CraftDoor_Base_C::STATIC_OnRep_IsDestroyed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55027);

	ACv4_CraftDoor_Base_C_OnRep_IsDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_CraftDoor_Base.Cv4_CraftDoor_Base_C.OnRep_IsDamaged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv4_CraftDoor_Base_C::STATIC_OnRep_IsDamaged()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55025);

	ACv4_CraftDoor_Base_C_OnRep_IsDamaged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_CraftDoor_Base.Cv4_CraftDoor_Base_C.OnRep_isOpen
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv4_CraftDoor_Base_C::STATIC_OnRep_isOpen()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55023);

	ACv4_CraftDoor_Base_C_OnRep_isOpen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_CraftDoor_Base.Cv4_CraftDoor_Base_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv4_CraftDoor_Base_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55022);

	ACv4_CraftDoor_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_CraftDoor_Base.Cv4_CraftDoor_Base_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv4_CraftDoor_Base_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55021);

	ACv4_CraftDoor_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_CraftDoor_Base.Cv4_CraftDoor_Base_C.ExecuteUbergraph_Cv4_CraftDoor_Base
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv4_CraftDoor_Base_C::STATIC_ExecuteUbergraph_Cv4_CraftDoor_Base(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55019);

	ACv4_CraftDoor_Base_C_ExecuteUbergraph_Cv4_CraftDoor_Base_Params params;
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
