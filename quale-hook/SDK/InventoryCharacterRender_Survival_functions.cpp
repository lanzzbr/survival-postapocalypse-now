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

// Function InventoryCharacterRender_Survival.InventoryCharacterRender_Survival_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AInventoryCharacterRender_Survival_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70907);

	AInventoryCharacterRender_Survival_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterRender_Survival.InventoryCharacterRender_Survival_C.Set_FOOT_Mesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class USkeletalMesh*           Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterRender_Survival_C::STATIC_Set_FOOT_Mesh(class USkeletalMesh* Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70736);

	AInventoryCharacterRender_Survival_C_Set_FOOT_Mesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterRender_Survival.InventoryCharacterRender_Survival_C.Set_HANDS_Mesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class USkeletalMesh*           Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterRender_Survival_C::STATIC_Set_HANDS_Mesh(class USkeletalMesh* Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70739);

	AInventoryCharacterRender_Survival_C_Set_HANDS_Mesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterRender_Survival.InventoryCharacterRender_Survival_C.Set_LEGS_Mesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class USkeletalMesh*           Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterRender_Survival_C::STATIC_Set_LEGS_Mesh(class USkeletalMesh* Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70742);

	AInventoryCharacterRender_Survival_C_Set_LEGS_Mesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterRender_Survival.InventoryCharacterRender_Survival_C.Set_TORSE_Mesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class USkeletalMesh*           Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterRender_Survival_C::STATIC_Set_TORSE_Mesh(class USkeletalMesh* Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70745);

	AInventoryCharacterRender_Survival_C_Set_TORSE_Mesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterRender_Survival.InventoryCharacterRender_Survival_C.UpdateBodyParts
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AInventoryCharacterRender_Survival_C::STATIC_UpdateBodyParts()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70747);

	AInventoryCharacterRender_Survival_C_UpdateBodyParts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterRender_Survival.InventoryCharacterRender_Survival_C.ExecuteUbergraph_InventoryCharacterRender_Survival
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterRender_Survival_C::STATIC_ExecuteUbergraph_InventoryCharacterRender_Survival(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70723);

	AInventoryCharacterRender_Survival_C_ExecuteUbergraph_InventoryCharacterRender_Survival_Params params;
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
