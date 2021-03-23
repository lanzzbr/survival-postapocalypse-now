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

// Function Cv3_RespawnVehicle.Cv3_RespawnVehicle_C.CheckSpawn
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           isDisabledSpawn                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACv3_RespawnVehicle_C::STATIC_CheckSpawn(bool* isDisabledSpawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96755);

	ACv3_RespawnVehicle_C_CheckSpawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (isDisabledSpawn != nullptr)
		*isDisabledSpawn = params.isDisabledSpawn;

}


// Function Cv3_RespawnVehicle.Cv3_RespawnVehicle_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv3_RespawnVehicle_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96753);

	ACv3_RespawnVehicle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv3_RespawnVehicle.Cv3_RespawnVehicle_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv3_RespawnVehicle_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96752);

	ACv3_RespawnVehicle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv3_RespawnVehicle.Cv3_RespawnVehicle_C.RespawnVehicle_Timer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv3_RespawnVehicle_C::STATIC_RespawnVehicle_Timer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96751);

	ACv3_RespawnVehicle_C_RespawnVehicle_Timer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv3_RespawnVehicle.Cv3_RespawnVehicle_C.ExecuteUbergraph_Cv3_RespawnVehicle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv3_RespawnVehicle_C::STATIC_ExecuteUbergraph_Cv3_RespawnVehicle(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96749);

	ACv3_RespawnVehicle_C_ExecuteUbergraph_Cv3_RespawnVehicle_Params params;
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
