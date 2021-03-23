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

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.GetBattery
struct UCv2_VehicleComponent_C_GetBattery_Params
{
	int                                                GetFuel;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.HideCrewMesh
struct UCv2_VehicleComponent_C_HideCrewMesh_Params
{
	TEnumAsByte<CrewEnum_ECrewEnum>                    TypeCrew;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACv2_Character_C*                            Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.ShowCrewMesh
struct UCv2_VehicleComponent_C_ShowCrewMesh_Params
{
	TEnumAsByte<CrewEnum_ECrewEnum>                    TypeCrew;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACv2_Character_C*                            Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.CheckCarDamageCrash
struct UCv2_VehicleComponent_C_CheckCarDamageCrash_Params
{
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.SetWinterPaint
struct UCv2_VehicleComponent_C_SetWinterPaint_Params
{
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.HideComRepPassenger
struct UCv2_VehicleComponent_C_HideComRepPassenger_Params
{
	TEnumAsByte<CrewEnum_ECrewEnum>                    Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.Damage_LeftTrack
struct UCv2_VehicleComponent_C_Damage_LeftTrack_Params
{
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.Damage_RightTrack
struct UCv2_VehicleComponent_C_Damage_RightTrack_Params
{
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.SetPaint
struct UCv2_VehicleComponent_C_SetPaint_Params
{
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.CheckCarBoom!
struct UCv2_VehicleComponent_C_CheckCarBoom_Params
{
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.ActivateVeh
struct UCv2_VehicleComponent_C_ActivateVeh_Params
{
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.DeactivateVeh
struct UCv2_VehicleComponent_C_DeactivateVeh_Params
{
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.FireArt
struct UCv2_VehicleComponent_C_FireArt_Params
{
	float                                              Pitch;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Yaw;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.SetLight
struct UCv2_VehicleComponent_C_SetLight_Params
{
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.UpdateCrewsServer
struct UCv2_VehicleComponent_C_UpdateCrewsServer_Params
{
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.AttackCarVelocity
struct UCv2_VehicleComponent_C_AttackCarVelocity_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         Component;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.Comp_OnRep
struct UCv2_VehicleComponent_C_Comp_OnRep_Params
{
	TArray<struct FCrewStructure2>                     Crews;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.GetAmmo
struct UCv2_VehicleComponent_C_GetAmmo_Params
{
	TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>            AmmoType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GetAmmo;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.GetFuel
struct UCv2_VehicleComponent_C_GetFuel_Params
{
	int                                                GetFuel;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.TankReloadingSoundPlay
struct UCv2_VehicleComponent_C_TankReloadingSoundPlay_Params
{
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.UpdateWheelEffects
struct UCv2_VehicleComponent_C_UpdateWheelEffects_Params
{
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.AttackVelocity
struct UCv2_VehicleComponent_C_AttackVelocity_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         Component;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.FireTank
struct UCv2_VehicleComponent_C_FireTank_Params
{
	float                                              Pitch;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Yaw;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVehStructure                               VehStructure;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       Pawn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.CheckCrews
struct UCv2_VehicleComponent_C_CheckCrews_Params
{
	TArray<struct FCrewStructure2>                     Crews;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          PlayerSide;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACv2_playerController_C*                     PlayerControooller;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOpen;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<CrewEnum_ECrewEnum>                    EmptyCrewz;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.ExitVehicleServer
struct UCv2_VehicleComponent_C_ExitVehicleServer_Params
{
	TEnumAsByte<CrewEnum_ECrewEnum>                    CrewEnum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.DestroyVehicle
struct UCv2_VehicleComponent_C_DestroyVehicle_Params
{
	class UDestructibleMesh*                           DestructMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      DestroyActorClass;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.CheckActionSide
struct UCv2_VehicleComponent_C_CheckActionSide_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_VehicleSides_ECv2_VehicleSides>    outside;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.CheckTankDamage
struct UCv2_VehicleComponent_C_CheckTankDamage_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              hitDamage;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OutDamage;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_VehicleSides_ECv2_VehicleSides>    Side_Veh;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.ReceiveBeginPlay
struct UCv2_VehicleComponent_C_ReceiveBeginPlay_Params
{
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.Comp_OnRepTimer
struct UCv2_VehicleComponent_C_Comp_OnRepTimer_Params
{
	TArray<struct FCrewStructure2>                     Crews;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.ExecuteUbergraph_Cv2_VehicleComponent
struct UCv2_VehicleComponent_C_ExecuteUbergraph_Cv2_VehicleComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
