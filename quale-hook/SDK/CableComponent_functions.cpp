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

// Function CableComponent.CableComponent.SetAttachEndTo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ComponentProperty              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCableComponent::STATIC_SetAttachEndTo(class AActor* Actor, const struct FName& ComponentProperty, const struct FName& SocketName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29388);

	UCableComponent_SetAttachEndTo_Params params;
	params.Actor = Actor;
	params.ComponentProperty = ComponentProperty;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CableComponent.CableComponent.GetCableParticleLocations
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FVector>         Locations                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UCableComponent::STATIC_GetCableParticleLocations(TArray<struct FVector>* Locations)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29385);

	UCableComponent_GetCableParticleLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Locations != nullptr)
		*Locations = params.Locations;

}


// Function CableComponent.CableComponent.GetAttachedComponent
// ()
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USceneComponent* UCableComponent::GetAttachedComponent()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29383);

	UCableComponent_GetAttachedComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CableComponent.CableComponent.GetAttachedActor
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UCableComponent::GetAttachedActor()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29381);

	UCableComponent_GetAttachedActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
