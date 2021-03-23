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

// Function DataBaseActor.DataBaseActor_C.ReturnSaveState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct Fsurv_2019_FieldsStructure surv_2019_FieldsStructure      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void ADataBaseActor_C::STATIC_ReturnSaveState(struct Fsurv_2019_FieldsStructure* surv_2019_FieldsStructure)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34505);

	ADataBaseActor_C_ReturnSaveState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (surv_2019_FieldsStructure != nullptr)
		*surv_2019_FieldsStructure = params.surv_2019_FieldsStructure;

}


// Function DataBaseActor.DataBaseActor_C.CreateInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ADataBaseActor_C::STATIC_CreateInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34501);

	ADataBaseActor_C_CreateInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DataBaseActor.DataBaseActor_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ADataBaseActor_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34500);

	ADataBaseActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DataBaseActor.DataBaseActor_C.Ini_Inventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ADataBaseActor_C::STATIC_Ini_Inventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34499);

	ADataBaseActor_C_Ini_Inventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DataBaseActor.DataBaseActor_C.SetDataBaseInfo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ADataBaseActor_C::STATIC_SetDataBaseInfo()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34498);

	ADataBaseActor_C_SetDataBaseInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DataBaseActor.DataBaseActor_C.CreateInventory(ServerFunc)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            SlotsCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADataBaseActor_C::STATIC_CreateInventory_ServerFunc_(int SlotsCount)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34496);

	ADataBaseActor_C_CreateInventory_ServerFunc__Params params;
	params.SlotsCount = SlotsCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DataBaseActor.DataBaseActor_C.ExecuteUbergraph_DataBaseActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADataBaseActor_C::STATIC_ExecuteUbergraph_DataBaseActor(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34494);

	ADataBaseActor_C_ExecuteUbergraph_DataBaseActor_Params params;
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
