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

// Function Cv2_WeaponsComponent.Cv2_WeaponsComponent_C.SwitchMagazineMesh
struct UCv2_WeaponsComponent_C_SwitchMagazineMesh_Params
{
};

// Function Cv2_WeaponsComponent.Cv2_WeaponsComponent_C.SetAimSceneRotation
struct UCv2_WeaponsComponent_C_SetAimSceneRotation_Params
{
};

// Function Cv2_WeaponsComponent.Cv2_WeaponsComponent_C.SwitchFiringMode
struct UCv2_WeaponsComponent_C_SwitchFiringMode_Params
{
};

// Function Cv2_WeaponsComponent.Cv2_WeaponsComponent_C.FireClientOnly
struct UCv2_WeaponsComponent_C_FireClientOnly_Params
{
};

// Function Cv2_WeaponsComponent.Cv2_WeaponsComponent_C.CheckAntiHacker
struct UCv2_WeaponsComponent_C_CheckAntiHacker_Params
{
};

// Function Cv2_WeaponsComponent.Cv2_WeaponsComponent_C.SetAmmoProtected
struct UCv2_WeaponsComponent_C_SetAmmoProtected_Params
{
	int                                                NewAmmo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_WeaponsComponent.Cv2_WeaponsComponent_C.LoopReloading
struct UCv2_WeaponsComponent_C_LoopReloading_Params
{
};

// Function Cv2_WeaponsComponent.Cv2_WeaponsComponent_C.Reloading
struct UCv2_WeaponsComponent_C_Reloading_Params
{
};

// Function Cv2_WeaponsComponent.Cv2_WeaponsComponent_C.EndReloading
struct UCv2_WeaponsComponent_C_EndReloading_Params
{
};

// Function Cv2_WeaponsComponent.Cv2_WeaponsComponent_C.RemoveAmmoWeapon
struct UCv2_WeaponsComponent_C_RemoveAmmoWeapon_Params
{
	TEnumAsByte<Cv2_WeaponsTypeEnum_ECv2_WeaponsTypeEnum> WeaponType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_WeaponsComponent.Cv2_WeaponsComponent_C.SpawnShell
struct UCv2_WeaponsComponent_C_SpawnShell_Params
{
	class USceneComponent*                             Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             Gilza;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_WeaponsComponent.Cv2_WeaponsComponent_C.MultiCastFireCharacter
struct UCv2_WeaponsComponent_C_MultiCastFireCharacter_Params
{
	float                                              Pitch;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Yaw;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector_NetQuantize                         Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Cv2_WeaponsComponent.Cv2_WeaponsComponent_C.Init
struct UCv2_WeaponsComponent_C_Init_Params
{
};

// Function Cv2_WeaponsComponent.Cv2_WeaponsComponent_C.ExecuteUbergraph_Cv2_WeaponsComponent
struct UCv2_WeaponsComponent_C_ExecuteUbergraph_Cv2_WeaponsComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
