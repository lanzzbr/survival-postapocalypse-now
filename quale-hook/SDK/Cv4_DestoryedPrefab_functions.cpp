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

// Function Cv4_DestoryedPrefab.Cv4_DestoryedPrefab_C.CheckRespawnPrefab
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv4_DestoryedPrefab_C::STATIC_CheckRespawnPrefab()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(54982);

	ACv4_DestoryedPrefab_C_CheckRespawnPrefab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_DestoryedPrefab.Cv4_DestoryedPrefab_C.OnRep_isDestroy
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv4_DestoryedPrefab_C::STATIC_OnRep_isDestroy()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(54980);

	ACv4_DestoryedPrefab_C_OnRep_isDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_DestoryedPrefab.Cv4_DestoryedPrefab_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv4_DestoryedPrefab_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(54979);

	ACv4_DestoryedPrefab_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_DestoryedPrefab.Cv4_DestoryedPrefab_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv4_DestoryedPrefab_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(54978);

	ACv4_DestoryedPrefab_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_DestoryedPrefab.Cv4_DestoryedPrefab_C.CustomApplyDamage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv4_DestoryedPrefab_C::STATIC_CustomApplyDamage(float Damage)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(54976);

	ACv4_DestoryedPrefab_C_CustomApplyDamage_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_DestoryedPrefab.Cv4_DestoryedPrefab_C.ExecuteUbergraph_Cv4_DestoryedPrefab
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv4_DestoryedPrefab_C::STATIC_ExecuteUbergraph_Cv4_DestoryedPrefab(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(54974);

	ACv4_DestoryedPrefab_C_ExecuteUbergraph_Cv4_DestoryedPrefab_Params params;
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
