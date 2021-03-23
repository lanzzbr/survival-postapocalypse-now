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

// Function Cv4_BulletComponent.Cv4_BulletComponent_C.FoliageHitPointTimer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv4_BulletComponent_C::STATIC_FoliageHitPointTimer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(92911);

	UCv4_BulletComponent_C_FoliageHitPointTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_BulletComponent.Cv4_BulletComponent_C.SpawnBloodDecal
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
void UCv4_BulletComponent_C::STATIC_SpawnBloodDecal(const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(92909);

	UCv4_BulletComponent_C_SpawnBloodDecal_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_BulletComponent.Cv4_BulletComponent_C.ApplyDamageServer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv4_BulletComponent_C::STATIC_ApplyDamageServer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(92907);

	UCv4_BulletComponent_C_ApplyDamageServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_BulletComponent.Cv4_BulletComponent_C.SpawnBullet
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FCv2_WeaponsStructure   WeaponStructure                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 FireLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   OwnerPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv4_BulletComponent_C::STATIC_SpawnBullet(const struct FCv2_WeaponsStructure& WeaponStructure, float Pitch, float Yaw, const struct FVector& FireLocation, class APawn* OwnerPawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(92905);

	UCv4_BulletComponent_C_SpawnBullet_Params params;
	params.WeaponStructure = WeaponStructure;
	params.Pitch = Pitch;
	params.Yaw = Yaw;
	params.FireLocation = FireLocation;
	params.OwnerPawn = OwnerPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
