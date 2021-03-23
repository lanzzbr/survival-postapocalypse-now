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

// Function Cv2_DestroyComponent.Cv2_DestroyComponent_C.RepairHouse
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ACv2_HouseBase_C*        HouseActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_DestroyComponent_C::STATIC_RepairHouse(class ACv2_HouseBase_C* HouseActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59455);

	UCv2_DestroyComponent_C_RepairHouse_Params params;
	params.HouseActor = HouseActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_DestroyComponent.Cv2_DestroyComponent_C.ServerDestroyFences
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_DestroyComponent_C::STATIC_ServerDestroyFences(class AActor* HitActor, float Damage)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59453);

	UCv2_DestroyComponent_C_ServerDestroyFences_Params params;
	params.HitActor = HitActor;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_DestroyComponent.Cv2_DestroyComponent_C.DestroySphereRayCast
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_DestroyComponent_C::STATIC_DestroySphereRayCast(float Damage, float Radius, const struct FVector& StartLocation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59441);

	UCv2_DestroyComponent_C_DestroySphereRayCast_Params params;
	params.Damage = Damage;
	params.Radius = Radius;
	params.StartLocation = StartLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_DestroyComponent.Cv2_DestroyComponent_C.DestroyHouse
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 DestroyLocation                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_DestroyComponent_C::STATIC_DestroyHouse(class AActor* Actor, class UPrimitiveComponent* Component, const struct FVector& DestroyLocation, float Damage)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59435);

	UCv2_DestroyComponent_C_DestroyHouse_Params params;
	params.Actor = Actor;
	params.Component = Component;
	params.DestroyLocation = DestroyLocation;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_DestroyComponent.Cv2_DestroyComponent_C.FindUpHouse
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 Coords                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACv2_HouseBase_C*        HouseActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                   proxyArrays                    (Parm, OutParm, ZeroConstructor)
void UCv2_DestroyComponent_C::STATIC_FindUpHouse(const struct FVector& Coords, class ACv2_HouseBase_C* HouseActor, TArray<bool>* proxyArrays)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59433);

	UCv2_DestroyComponent_C_FindUpHouse_Params params;
	params.Coords = Coords;
	params.HouseActor = HouseActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (proxyArrays != nullptr)
		*proxyArrays = params.proxyArrays;

}


// Function Cv2_DestroyComponent.Cv2_DestroyComponent_C.DestroyFoliage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UFoliageInstancedStaticMeshComponent* Foliage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_DestroyComponent_C::STATIC_DestroyFoliage(class UFoliageInstancedStaticMeshComponent* Foliage, int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59431);

	UCv2_DestroyComponent_C_DestroyFoliage_Params params;
	params.Foliage = Foliage;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_DestroyComponent.Cv2_DestroyComponent_C.ServerDestroyFurniture
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_DestroyComponent_C::STATIC_ServerDestroyFurniture(class UPrimitiveComponent* HitComponent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59429);

	UCv2_DestroyComponent_C_ServerDestroyFurniture_Params params;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_DestroyComponent.Cv2_DestroyComponent_C.ClientDestroyFurniture
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_DestroyComponent_C::STATIC_ClientDestroyFurniture(class UPrimitiveComponent* HitComponent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59427);

	UCv2_DestroyComponent_C_ClientDestroyFurniture_Params params;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_DestroyComponent.Cv2_DestroyComponent_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_DestroyComponent_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59426);

	UCv2_DestroyComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_DestroyComponent.Cv2_DestroyComponent_C.ExecuteUbergraph_Cv2_DestroyComponent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_DestroyComponent_C::STATIC_ExecuteUbergraph_Cv2_DestroyComponent(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59424);

	UCv2_DestroyComponent_C_ExecuteUbergraph_Cv2_DestroyComponent_Params params;
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
