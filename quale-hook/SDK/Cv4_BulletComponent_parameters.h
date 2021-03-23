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

// Function Cv4_BulletComponent.Cv4_BulletComponent_C.FoliageHitPointTimer
struct UCv4_BulletComponent_C_FoliageHitPointTimer_Params
{
};

// Function Cv4_BulletComponent.Cv4_BulletComponent_C.SpawnBloodDecal
struct UCv4_BulletComponent_C_SpawnBloodDecal_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function Cv4_BulletComponent.Cv4_BulletComponent_C.ApplyDamageServer
struct UCv4_BulletComponent_C_ApplyDamageServer_Params
{
};

// Function Cv4_BulletComponent.Cv4_BulletComponent_C.SpawnBullet
struct UCv4_BulletComponent_C_SpawnBullet_Params
{
	struct FCv2_WeaponsStructure                       WeaponStructure;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	float                                              Pitch;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Yaw;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     FireLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       OwnerPawn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
