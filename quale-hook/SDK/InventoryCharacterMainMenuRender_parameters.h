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

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.UserConstructionScript
struct AInventoryCharacterMainMenuRender_C_UserConstructionScript_Params
{
};

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.Turbine__FinishedFunc
struct AInventoryCharacterMainMenuRender_C_Turbine__FinishedFunc_Params
{
};

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.Turbine__UpdateFunc
struct AInventoryCharacterMainMenuRender_C_Turbine__UpdateFunc_Params
{
};

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.SetHelmet
struct AInventoryCharacterMainMenuRender_C_SetHelmet_Params
{
	class UStaticMesh*                                 Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.SetPrymaryWeapon
struct AInventoryCharacterMainMenuRender_C_SetPrymaryWeapon_Params
{
	class UStaticMesh*                                 Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 Mod_Mesh;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 Silencer_Mesh;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.SetSecondaryWeapon
struct AInventoryCharacterMainMenuRender_C_SetSecondaryWeapon_Params
{
	class UStaticMesh*                                 Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.SetCharacterMesh
struct AInventoryCharacterMainMenuRender_C_SetCharacterMesh_Params
{
	class USkeletalMesh*                               NewMesh;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.SetMaterialRenderChar
struct AInventoryCharacterMainMenuRender_C_SetMaterialRenderChar_Params
{
	class UMaterialInterface*                          Material;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.TurbineCharacter
struct AInventoryCharacterMainMenuRender_C_TurbineCharacter_Params
{
	bool                                               ToRight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.SetGrenade
struct AInventoryCharacterMainMenuRender_C_SetGrenade_Params
{
	class UStaticMesh*                                 Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.SetMeleeWeapon
struct AInventoryCharacterMainMenuRender_C_SetMeleeWeapon_Params
{
	class UStaticMesh*                                 Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.UpdateRenderMesh
struct AInventoryCharacterMainMenuRender_C_UpdateRenderMesh_Params
{
};

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.SetBackPack
struct AInventoryCharacterMainMenuRender_C_SetBackPack_Params
{
	class UStaticMesh*                                 Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.ReceiveBeginPlay
struct AInventoryCharacterMainMenuRender_C_ReceiveBeginPlay_Params
{
};

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.Set_FOOT_Mesh
struct AInventoryCharacterMainMenuRender_C_Set_FOOT_Mesh_Params
{
	class USkeletalMesh*                               Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.Set_HANDS_Mesh
struct AInventoryCharacterMainMenuRender_C_Set_HANDS_Mesh_Params
{
	class USkeletalMesh*                               Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.Set_LEGS_Mesh
struct AInventoryCharacterMainMenuRender_C_Set_LEGS_Mesh_Params
{
	class USkeletalMesh*                               Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.Set_TORSE_Mesh
struct AInventoryCharacterMainMenuRender_C_Set_TORSE_Mesh_Params
{
	class USkeletalMesh*                               Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.UpdateBodyParts
struct AInventoryCharacterMainMenuRender_C_UpdateBodyParts_Params
{
};

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.Set_FACE_Mesh
struct AInventoryCharacterMainMenuRender_C_Set_FACE_Mesh_Params
{
	class UStaticMesh*                                 Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C.ExecuteUbergraph_InventoryCharacterMainMenuRender
struct AInventoryCharacterMainMenuRender_C_ExecuteUbergraph_InventoryCharacterMainMenuRender_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
