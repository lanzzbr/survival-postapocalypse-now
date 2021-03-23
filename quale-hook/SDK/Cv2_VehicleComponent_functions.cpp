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

// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.GetBattery
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            GetFuel                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_VehicleComponent_C::STATIC_GetBattery(int* GetFuel)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(97498);

	UCv2_VehicleComponent_C_GetBattery_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GetFuel != nullptr)
		*GetFuel = params.GetFuel;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.HideCrewMesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<CrewEnum_ECrewEnum> TypeCrew                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACv2_Character_C*        Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_VehicleComponent_C::STATIC_HideCrewMesh(TEnumAsByte<CrewEnum_ECrewEnum> TypeCrew, class ACv2_Character_C* Character)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(97496);

	UCv2_VehicleComponent_C_HideCrewMesh_Params params;
	params.TypeCrew = TypeCrew;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.ShowCrewMesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<CrewEnum_ECrewEnum> TypeCrew                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACv2_Character_C*        Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_VehicleComponent_C::STATIC_ShowCrewMesh(TEnumAsByte<CrewEnum_ECrewEnum> TypeCrew, class ACv2_Character_C* Character)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(97494);

	UCv2_VehicleComponent_C_ShowCrewMesh_Params params;
	params.TypeCrew = TypeCrew;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.CheckCarDamageCrash
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_VehicleComponent_C::STATIC_CheckCarDamageCrash()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96529);

	UCv2_VehicleComponent_C_CheckCarDamageCrash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.SetWinterPaint
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_VehicleComponent_C::STATIC_SetWinterPaint()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96527);

	UCv2_VehicleComponent_C_SetWinterPaint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.HideComRepPassenger
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<CrewEnum_ECrewEnum> Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_VehicleComponent_C::STATIC_HideComRepPassenger(TEnumAsByte<CrewEnum_ECrewEnum> Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96525);

	UCv2_VehicleComponent_C_HideComRepPassenger_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.Damage_LeftTrack
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_VehicleComponent_C::STATIC_Damage_LeftTrack()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96523);

	UCv2_VehicleComponent_C_Damage_LeftTrack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.Damage_RightTrack
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_VehicleComponent_C::STATIC_Damage_RightTrack()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96521);

	UCv2_VehicleComponent_C_Damage_RightTrack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.SetPaint
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_VehicleComponent_C::STATIC_SetPaint()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96519);

	UCv2_VehicleComponent_C_SetPaint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.CheckCarBoom!
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_VehicleComponent_C::STATIC_CheckCarBoom()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96438);

	UCv2_VehicleComponent_C_CheckCarBoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.ActivateVeh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_VehicleComponent_C::STATIC_ActivateVeh()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96436);

	UCv2_VehicleComponent_C_ActivateVeh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.DeactivateVeh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_VehicleComponent_C::STATIC_DeactivateVeh()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96434);

	UCv2_VehicleComponent_C_DeactivateVeh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.FireArt
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_VehicleComponent_C::STATIC_FireArt(float Pitch, float Yaw)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96432);

	UCv2_VehicleComponent_C_FireArt_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.SetLight
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_VehicleComponent_C::STATIC_SetLight()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96430);

	UCv2_VehicleComponent_C_SetLight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.UpdateCrewsServer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_VehicleComponent_C::STATIC_UpdateCrewsServer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96428);

	UCv2_VehicleComponent_C_UpdateCrewsServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.AttackCarVelocity
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_VehicleComponent_C::STATIC_AttackCarVelocity(class AActor* Actor, class UPrimitiveComponent* Component)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96426);

	UCv2_VehicleComponent_C_AttackCarVelocity_Params params;
	params.Actor = Actor;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.Comp_OnRep
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FCrewStructure2> Crews                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UCv2_VehicleComponent_C::STATIC_Comp_OnRep(TArray<struct FCrewStructure2>* Crews)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96423);

	UCv2_VehicleComponent_C_Comp_OnRep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Crews != nullptr)
		*Crews = params.Crews;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.GetAmmo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> AmmoType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            GetAmmo                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_VehicleComponent_C::STATIC_GetAmmo(TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> AmmoType, int* GetAmmo)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96421);

	UCv2_VehicleComponent_C_GetAmmo_Params params;
	params.AmmoType = AmmoType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GetAmmo != nullptr)
		*GetAmmo = params.GetAmmo;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.GetFuel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            GetFuel                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_VehicleComponent_C::STATIC_GetFuel(int* GetFuel)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96419);

	UCv2_VehicleComponent_C_GetFuel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GetFuel != nullptr)
		*GetFuel = params.GetFuel;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.TankReloadingSoundPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_VehicleComponent_C::STATIC_TankReloadingSoundPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96417);

	UCv2_VehicleComponent_C_TankReloadingSoundPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.UpdateWheelEffects
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_VehicleComponent_C::STATIC_UpdateWheelEffects()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96415);

	UCv2_VehicleComponent_C_UpdateWheelEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.AttackVelocity
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_VehicleComponent_C::STATIC_AttackVelocity(class AActor* Actor, class UPrimitiveComponent* Component, const struct FVector& Location)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96413);

	UCv2_VehicleComponent_C_AttackVelocity_Params params;
	params.Actor = Actor;
	params.Component = Component;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.FireTank
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVehStructure           VehStructure                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class USkeletalMeshComponent*  Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_VehicleComponent_C::STATIC_FireTank(float Pitch, float Yaw, const struct FVehStructure& VehStructure, class USkeletalMeshComponent* Mesh, class APawn* Pawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96411);

	UCv2_VehicleComponent_C_FireTank_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;
	params.VehStructure = VehStructure;
	params.Mesh = Mesh;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.CheckCrews
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FCrewStructure2> Crews                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> PlayerSide                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACv2_playerController_C* PlayerControooller             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsOpen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<CrewEnum_ECrewEnum> EmptyCrewz                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_VehicleComponent_C::STATIC_CheckCrews(TArray<struct FCrewStructure2>* Crews, TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> PlayerSide, class ACv2_playerController_C* PlayerControooller, bool IsOpen, TEnumAsByte<CrewEnum_ECrewEnum>* EmptyCrewz)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96408);

	UCv2_VehicleComponent_C_CheckCrews_Params params;
	params.PlayerSide = PlayerSide;
	params.PlayerControooller = PlayerControooller;
	params.IsOpen = IsOpen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Crews != nullptr)
		*Crews = params.Crews;
	if (EmptyCrewz != nullptr)
		*EmptyCrewz = params.EmptyCrewz;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.ExitVehicleServer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<CrewEnum_ECrewEnum> CrewEnum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_VehicleComponent_C::STATIC_ExitVehicleServer(TEnumAsByte<CrewEnum_ECrewEnum> CrewEnum)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96406);

	UCv2_VehicleComponent_C_ExitVehicleServer_Params params;
	params.CrewEnum = CrewEnum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.DestroyVehicle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UDestructibleMesh*       DestructMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  DestroyActorClass              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_VehicleComponent_C::STATIC_DestroyVehicle(class UDestructibleMesh* DestructMesh, class UClass* DestroyActorClass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96404);

	UCv2_VehicleComponent_C_DestroyVehicle_Params params;
	params.DestructMesh = DestructMesh;
	params.DestroyActorClass = DestroyActorClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.CheckActionSide
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Cv2_VehicleSides_ECv2_VehicleSides> outside                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_VehicleComponent_C::STATIC_CheckActionSide(class USkeletalMeshComponent* SkeletalMesh, const struct FVector& HitLocation, TEnumAsByte<Cv2_VehicleSides_ECv2_VehicleSides>* outside)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96398);

	UCv2_VehicleComponent_C_CheckActionSide_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outside != nullptr)
		*outside = params.outside;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.CheckTankDamage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          hitDamage                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          OutDamage                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Cv2_VehicleSides_ECv2_VehicleSides> Side_Veh                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_VehicleComponent_C::STATIC_CheckTankDamage(class USkeletalMeshComponent* SkeletalMesh, const struct FVector& HitLocation, float hitDamage, float* OutDamage, TEnumAsByte<Cv2_VehicleSides_ECv2_VehicleSides>* Side_Veh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96396);

	UCv2_VehicleComponent_C_CheckTankDamage_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.HitLocation = HitLocation;
	params.hitDamage = hitDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDamage != nullptr)
		*OutDamage = params.OutDamage;
	if (Side_Veh != nullptr)
		*Side_Veh = params.Side_Veh;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_VehicleComponent_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96395);

	UCv2_VehicleComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.Comp_OnRepTimer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FCrewStructure2> Crews                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UCv2_VehicleComponent_C::STATIC_Comp_OnRepTimer(TArray<struct FCrewStructure2> Crews)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96392);

	UCv2_VehicleComponent_C_Comp_OnRepTimer_Params params;
	params.Crews = Crews;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_VehicleComponent.Cv2_VehicleComponent_C.ExecuteUbergraph_Cv2_VehicleComponent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_VehicleComponent_C::STATIC_ExecuteUbergraph_Cv2_VehicleComponent(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96390);

	UCv2_VehicleComponent_C_ExecuteUbergraph_Cv2_VehicleComponent_Params params;
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
