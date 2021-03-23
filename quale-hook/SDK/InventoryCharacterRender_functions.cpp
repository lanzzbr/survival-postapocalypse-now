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

// Function InventoryCharacterRender.InventoryCharacterRender_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AInventoryCharacterRender_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70899);

	AInventoryCharacterRender_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterRender.InventoryCharacterRender_C.Turbine__FinishedFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AInventoryCharacterRender_C::STATIC_Turbine__FinishedFunc()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70897);

	AInventoryCharacterRender_C_Turbine__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterRender.InventoryCharacterRender_C.Turbine__UpdateFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AInventoryCharacterRender_C::STATIC_Turbine__UpdateFunc()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70898);

	AInventoryCharacterRender_C_Turbine__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterRender.InventoryCharacterRender_C.SetHelmet
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterRender_C::STATIC_SetHelmet(class UStaticMesh* Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70895);

	AInventoryCharacterRender_C_SetHelmet_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterRender.InventoryCharacterRender_C.SetPrymaryWeapon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*             Mod_Mesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*             Silencer_Mesh                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsMagazine                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInventoryCharacterRender_C::STATIC_SetPrymaryWeapon(class UStaticMesh* Mesh, class UStaticMesh* Mod_Mesh, class UStaticMesh* Silencer_Mesh, bool IsMagazine)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70883);

	AInventoryCharacterRender_C_SetPrymaryWeapon_Params params;
	params.Mesh = Mesh;
	params.Mod_Mesh = Mod_Mesh;
	params.Silencer_Mesh = Silencer_Mesh;
	params.IsMagazine = IsMagazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterRender.InventoryCharacterRender_C.SetSecondaryWeapon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterRender_C::STATIC_SetSecondaryWeapon(class UStaticMesh* Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70881);

	AInventoryCharacterRender_C_SetSecondaryWeapon_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterRender.InventoryCharacterRender_C.SetCharacterMesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class USkeletalMesh*           NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterRender_C::STATIC_SetCharacterMesh(class USkeletalMesh* NewMesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70879);

	AInventoryCharacterRender_C_SetCharacterMesh_Params params;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterRender.InventoryCharacterRender_C.SetMaterialRenderChar
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UMaterialInterface*      Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterRender_C::STATIC_SetMaterialRenderChar(class UMaterialInterface* Material, int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70877);

	AInventoryCharacterRender_C_SetMaterialRenderChar_Params params;
	params.Material = Material;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterRender.InventoryCharacterRender_C.TurbineCharacter
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           ToRight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInventoryCharacterRender_C::STATIC_TurbineCharacter(bool ToRight)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70875);

	AInventoryCharacterRender_C_TurbineCharacter_Params params;
	params.ToRight = ToRight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterRender.InventoryCharacterRender_C.SetGrenade
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterRender_C::STATIC_SetGrenade(class UStaticMesh* Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70873);

	AInventoryCharacterRender_C_SetGrenade_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterRender.InventoryCharacterRender_C.SetMeleeWeapon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterRender_C::STATIC_SetMeleeWeapon(class UStaticMesh* Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70871);

	AInventoryCharacterRender_C_SetMeleeWeapon_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterRender.InventoryCharacterRender_C.UpdateRenderMesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AInventoryCharacterRender_C::STATIC_UpdateRenderMesh()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70870);

	AInventoryCharacterRender_C_UpdateRenderMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterRender.InventoryCharacterRender_C.SetBackPack
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterRender_C::STATIC_SetBackPack(class UStaticMesh* Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70868);

	AInventoryCharacterRender_C_SetBackPack_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterRender.InventoryCharacterRender_C.Set_FACE_Mesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterRender_C::STATIC_Set_FACE_Mesh(class UStaticMesh* Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70866);

	AInventoryCharacterRender_C_Set_FACE_Mesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterRender.InventoryCharacterRender_C.ExecuteUbergraph_InventoryCharacterRender
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterRender_C::STATIC_ExecuteUbergraph_InventoryCharacterRender(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70711);

	AInventoryCharacterRender_C_ExecuteUbergraph_InventoryCharacterRender_Params params;
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
