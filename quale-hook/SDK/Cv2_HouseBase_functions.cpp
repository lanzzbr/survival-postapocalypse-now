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

// Function Cv2_HouseBase.Cv2_HouseBase_C.CheckSpawnBot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_HouseBase_C::STATIC_CheckSpawnBot()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57117);

	ACv2_HouseBase_C_CheckSpawnBot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_HouseBase.Cv2_HouseBase_C.CheckDestoyPercent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsDestroyHouse                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            PercentDamage                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_HouseBase_C::STATIC_CheckDestoyPercent(bool* IsDestroyHouse, int* PercentDamage)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57112);

	ACv2_HouseBase_C_CheckDestoyPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsDestroyHouse != nullptr)
		*IsDestroyHouse = params.IsDestroyHouse;
	if (PercentDamage != nullptr)
		*PercentDamage = params.PercentDamage;

}


// Function Cv2_HouseBase.Cv2_HouseBase_C.OnRep_DestroyObjects
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_HouseBase_C::STATIC_OnRep_DestroyObjects()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57102);

	ACv2_HouseBase_C_OnRep_DestroyObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_HouseBase.Cv2_HouseBase_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_HouseBase_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57101);

	ACv2_HouseBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_HouseBase.Cv2_HouseBase_C.OnLoaded_E945D1C649384BD7045B4BBB712F78DA
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_HouseBase_C::STATIC_OnLoaded_E945D1C649384BD7045B4BBB712F78DA(class UObject* Loaded)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57099);

	ACv2_HouseBase_C_OnLoaded_E945D1C649384BD7045B4BBB712F78DA_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_HouseBase.Cv2_HouseBase_C.OnLoaded_337361B14043E5B9D49A1D99BA6EFE26
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_HouseBase_C::STATIC_OnLoaded_337361B14043E5B9D49A1D99BA6EFE26(class UObject* Loaded)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57097);

	ACv2_HouseBase_C_OnLoaded_337361B14043E5B9D49A1D99BA6EFE26_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_HouseBase.Cv2_HouseBase_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_HouseBase_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57096);

	ACv2_HouseBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_HouseBase.Cv2_HouseBase_C.AsyncLoadDestroyMesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_HouseBase_C::STATIC_AsyncLoadDestroyMesh()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57094);

	ACv2_HouseBase_C_AsyncLoadDestroyMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_HouseBase.Cv2_HouseBase_C.ExecuteUbergraph_Cv2_HouseBase
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_HouseBase_C::STATIC_ExecuteUbergraph_Cv2_HouseBase(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57092);

	ACv2_HouseBase_C_ExecuteUbergraph_Cv2_HouseBase_Params params;
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
