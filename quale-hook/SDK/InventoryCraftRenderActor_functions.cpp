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

// Function InventoryCraftRenderActor.InventoryCraftRenderActor_C.RotateActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AInventoryCraftRenderActor_C::STATIC_RotateActor()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69209);

	AInventoryCraftRenderActor_C_RotateActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCraftRenderActor.InventoryCraftRenderActor_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AInventoryCraftRenderActor_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69213);

	AInventoryCraftRenderActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCraftRenderActor.InventoryCraftRenderActor_C.Timeline_0__FinishedFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AInventoryCraftRenderActor_C::STATIC_Timeline_0__FinishedFunc()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69211);

	AInventoryCraftRenderActor_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCraftRenderActor.InventoryCraftRenderActor_C.Timeline_0__UpdateFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AInventoryCraftRenderActor_C::STATIC_Timeline_0__UpdateFunc()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69212);

	AInventoryCraftRenderActor_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCraftRenderActor.InventoryCraftRenderActor_C.SetActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> CraftEnum                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCraftRenderActor_C::STATIC_SetActor(TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> CraftEnum)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69199);

	AInventoryCraftRenderActor_C_SetActor_Params params;
	params.CraftEnum = CraftEnum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCraftRenderActor.InventoryCraftRenderActor_C.SetLootActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   LootName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCraftRenderActor_C::STATIC_SetLootActor(const struct FName& LootName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69197);

	AInventoryCraftRenderActor_C_SetLootActor_Params params;
	params.LootName = LootName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCraftRenderActor.InventoryCraftRenderActor_C.ExecuteUbergraph_InventoryCraftRenderActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCraftRenderActor_C::STATIC_ExecuteUbergraph_InventoryCraftRenderActor(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69188);

	AInventoryCraftRenderActor_C_ExecuteUbergraph_InventoryCraftRenderActor_Params params;
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
