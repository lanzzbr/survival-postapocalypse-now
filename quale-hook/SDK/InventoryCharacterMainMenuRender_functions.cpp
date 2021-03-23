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

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AInventoryCharacterMainMenuRender_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(48886);

	AInventoryCharacterMainMenuRender_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.Turbine__FinishedFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AInventoryCharacterMainMenuRender_C::STATIC_Turbine__FinishedFunc()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(48879);

	AInventoryCharacterMainMenuRender_C_Turbine__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.Turbine__UpdateFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AInventoryCharacterMainMenuRender_C::STATIC_Turbine__UpdateFunc()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(48880);

	AInventoryCharacterMainMenuRender_C_Turbine__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.SetHelmet
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterMainMenuRender_C::STATIC_SetHelmet(class UStaticMesh* Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(48862);

	AInventoryCharacterMainMenuRender_C_SetHelmet_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.SetPrymaryWeapon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*             Mod_Mesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*             Silencer_Mesh                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterMainMenuRender_C::STATIC_SetPrymaryWeapon(class UStaticMesh* Mesh, class UStaticMesh* Mod_Mesh, class UStaticMesh* Silencer_Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(48872);

	AInventoryCharacterMainMenuRender_C_SetPrymaryWeapon_Params params;
	params.Mesh = Mesh;
	params.Mod_Mesh = Mod_Mesh;
	params.Silencer_Mesh = Silencer_Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.SetSecondaryWeapon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterMainMenuRender_C::STATIC_SetSecondaryWeapon(class UStaticMesh* Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(48877);

	AInventoryCharacterMainMenuRender_C_SetSecondaryWeapon_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.SetCharacterMesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class USkeletalMesh*           NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterMainMenuRender_C::STATIC_SetCharacterMesh(class USkeletalMesh* NewMesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(48859);

	AInventoryCharacterMainMenuRender_C_SetCharacterMesh_Params params;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.SetMaterialRenderChar
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UMaterialInterface*      Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterMainMenuRender_C::STATIC_SetMaterialRenderChar(class UMaterialInterface* Material, int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(48866);

	AInventoryCharacterMainMenuRender_C_SetMaterialRenderChar_Params params;
	params.Material = Material;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.TurbineCharacter
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           ToRight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInventoryCharacterMainMenuRender_C::STATIC_TurbineCharacter(bool ToRight)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(48848);

	AInventoryCharacterMainMenuRender_C_TurbineCharacter_Params params;
	params.ToRight = ToRight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.SetGrenade
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterMainMenuRender_C::STATIC_SetGrenade(class UStaticMesh* Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(48846);

	AInventoryCharacterMainMenuRender_C_SetGrenade_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.SetMeleeWeapon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterMainMenuRender_C::STATIC_SetMeleeWeapon(class UStaticMesh* Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(48844);

	AInventoryCharacterMainMenuRender_C_SetMeleeWeapon_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.UpdateRenderMesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AInventoryCharacterMainMenuRender_C::STATIC_UpdateRenderMesh()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(48843);

	AInventoryCharacterMainMenuRender_C_UpdateRenderMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.SetBackPack
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterMainMenuRender_C::STATIC_SetBackPack(class UStaticMesh* Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(48841);

	AInventoryCharacterMainMenuRender_C_SetBackPack_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AInventoryCharacterMainMenuRender_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(48840);

	AInventoryCharacterMainMenuRender_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.Set_FOOT_Mesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class USkeletalMesh*           Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterMainMenuRender_C::STATIC_Set_FOOT_Mesh(class USkeletalMesh* Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(48838);

	AInventoryCharacterMainMenuRender_C_Set_FOOT_Mesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.Set_HANDS_Mesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class USkeletalMesh*           Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterMainMenuRender_C::STATIC_Set_HANDS_Mesh(class USkeletalMesh* Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(48836);

	AInventoryCharacterMainMenuRender_C_Set_HANDS_Mesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.Set_LEGS_Mesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class USkeletalMesh*           Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterMainMenuRender_C::STATIC_Set_LEGS_Mesh(class USkeletalMesh* Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(48834);

	AInventoryCharacterMainMenuRender_C_Set_LEGS_Mesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.Set_TORSE_Mesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class USkeletalMesh*           Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterMainMenuRender_C::STATIC_Set_TORSE_Mesh(class USkeletalMesh* Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(48832);

	AInventoryCharacterMainMenuRender_C_Set_TORSE_Mesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.UpdateBodyParts
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AInventoryCharacterMainMenuRender_C::STATIC_UpdateBodyParts()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(48831);

	AInventoryCharacterMainMenuRender_C_UpdateBodyParts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.Set_FACE_Mesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterMainMenuRender_C::STATIC_Set_FACE_Mesh(class UStaticMesh* Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(48829);

	AInventoryCharacterMainMenuRender_C_Set_FACE_Mesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.ExecuteUbergraph_InventoryCharacterMainMenuRender
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInventoryCharacterMainMenuRender_C::STATIC_ExecuteUbergraph_InventoryCharacterMainMenuRender(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(48741);

	AInventoryCharacterMainMenuRender_C_ExecuteUbergraph_InventoryCharacterMainMenuRender_Params params;
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
