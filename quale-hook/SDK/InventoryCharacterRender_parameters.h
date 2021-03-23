#pragma once

// Name: ANUSGAME, Version: 4.18


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function InventoryCharacterRender.InventoryCharacterRender_C.UserConstructionScript
struct AInventoryCharacterRender_C_UserConstructionScript_Params
{
};

// Function InventoryCharacterRender.InventoryCharacterRender_C.Turbine__FinishedFunc
struct AInventoryCharacterRender_C_Turbine__FinishedFunc_Params
{
};

// Function InventoryCharacterRender.InventoryCharacterRender_C.Turbine__UpdateFunc
struct AInventoryCharacterRender_C_Turbine__UpdateFunc_Params
{
};

// Function InventoryCharacterRender.InventoryCharacterRender_C.SetHelmet
struct AInventoryCharacterRender_C_SetHelmet_Params
{
	class UStaticMesh*                                 Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCharacterRender.InventoryCharacterRender_C.SetPrymaryWeapon
struct AInventoryCharacterRender_C_SetPrymaryWeapon_Params
{
	class UStaticMesh*                                 Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 Mod_Mesh;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 Silencer_Mesh;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsMagazine;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InventoryCharacterRender.InventoryCharacterRender_C.SetSecondaryWeapon
struct AInventoryCharacterRender_C_SetSecondaryWeapon_Params
{
	class UStaticMesh*                                 Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCharacterRender.InventoryCharacterRender_C.SetCharacterMesh
struct AInventoryCharacterRender_C_SetCharacterMesh_Params
{
	class USkeletalMesh*                               NewMesh;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCharacterRender.InventoryCharacterRender_C.SetMaterialRenderChar
struct AInventoryCharacterRender_C_SetMaterialRenderChar_Params
{
	class UMaterialInterface*                          Material;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCharacterRender.InventoryCharacterRender_C.TurbineCharacter
struct AInventoryCharacterRender_C_TurbineCharacter_Params
{
	bool                                               ToRight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InventoryCharacterRender.InventoryCharacterRender_C.SetGrenade
struct AInventoryCharacterRender_C_SetGrenade_Params
{
	class UStaticMesh*                                 Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCharacterRender.InventoryCharacterRender_C.SetMeleeWeapon
struct AInventoryCharacterRender_C_SetMeleeWeapon_Params
{
	class UStaticMesh*                                 Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCharacterRender.InventoryCharacterRender_C.UpdateRenderMesh
struct AInventoryCharacterRender_C_UpdateRenderMesh_Params
{
};

// Function InventoryCharacterRender.InventoryCharacterRender_C.SetBackPack
struct AInventoryCharacterRender_C_SetBackPack_Params
{
	class UStaticMesh*                                 Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCharacterRender.InventoryCharacterRender_C.Set_FACE_Mesh
struct AInventoryCharacterRender_C_Set_FACE_Mesh_Params
{
	class UStaticMesh*                                 Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCharacterRender.InventoryCharacterRender_C.ExecuteUbergraph_InventoryCharacterRender
struct AInventoryCharacterRender_C_ExecuteUbergraph_InventoryCharacterRender_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
