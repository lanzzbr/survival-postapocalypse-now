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

// Function BP_AnimalsWolf_Wolf.BP_AnimalsWolf_Wolf_C.OnRep_isDeath
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_AnimalsWolf_Wolf_C::STATIC_OnRep_isDeath()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108783);

	ABP_AnimalsWolf_Wolf_C_OnRep_isDeath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsWolf_Wolf.BP_AnimalsWolf_Wolf_C.OnRep_Distance
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_AnimalsWolf_Wolf_C::STATIC_OnRep_Distance()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108694);

	ABP_AnimalsWolf_Wolf_C_OnRep_Distance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsWolf_Wolf.BP_AnimalsWolf_Wolf_C.CheckPatrol
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_AnimalsWolf_Wolf_C::STATIC_CheckPatrol()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108656);

	ABP_AnimalsWolf_Wolf_C_CheckPatrol_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsWolf_Wolf.BP_AnimalsWolf_Wolf_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_AnimalsWolf_Wolf_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108655);

	ABP_AnimalsWolf_Wolf_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsWolf_Wolf.BP_AnimalsWolf_Wolf_C.OnLoaded_FD2EB3AF451D69FC42A0AA8FFAC1076B
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsWolf_Wolf_C::STATIC_OnLoaded_FD2EB3AF451D69FC42A0AA8FFAC1076B(class UObject* Loaded)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108653);

	ABP_AnimalsWolf_Wolf_C_OnLoaded_FD2EB3AF451D69FC42A0AA8FFAC1076B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsWolf_Wolf.BP_AnimalsWolf_Wolf_C.OnLoaded_9E93184F4FCD21A431C99E87B2836323
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsWolf_Wolf_C::STATIC_OnLoaded_9E93184F4FCD21A431C99E87B2836323(class UObject* Loaded)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108651);

	ABP_AnimalsWolf_Wolf_C_OnLoaded_9E93184F4FCD21A431C99E87B2836323_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsWolf_Wolf.BP_AnimalsWolf_Wolf_C.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsWolf_Wolf_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108649);

	ABP_AnimalsWolf_Wolf_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsWolf_Wolf.BP_AnimalsWolf_Wolf_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_6_SeePawnDelegate__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsWolf_Wolf_C::STATIC_BndEvt__PawnSensing_K2Node_ComponentBoundEvent_6_SeePawnDelegate__DelegateSignature(class APawn* Pawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108647);

	ABP_AnimalsWolf_Wolf_C_BndEvt__PawnSensing_K2Node_ComponentBoundEvent_6_SeePawnDelegate__DelegateSignature_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsWolf_Wolf.BP_AnimalsWolf_Wolf_C.CreateBloodEffect
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FVector                 Impulse                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsWolf_Wolf_C::STATIC_CreateBloodEffect(const struct FName& BoneName, const struct FRotator& Rotation, const struct FVector& Impulse)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108645);

	ABP_AnimalsWolf_Wolf_C_CreateBloodEffect_Params params;
	params.BoneName = BoneName;
	params.Rotation = Rotation;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsWolf_Wolf.BP_AnimalsWolf_Wolf_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_AnimalsWolf_Wolf_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108644);

	ABP_AnimalsWolf_Wolf_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsWolf_Wolf.BP_AnimalsWolf_Wolf_C.ReceiveAnyDamage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsWolf_Wolf_C::STATIC_ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108642);

	ABP_AnimalsWolf_Wolf_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsWolf_Wolf.BP_AnimalsWolf_Wolf_C.ServerDestroyActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_AnimalsWolf_Wolf_C::STATIC_ServerDestroyActor()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108641);

	ABP_AnimalsWolf_Wolf_C_ServerDestroyActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsWolf_Wolf.BP_AnimalsWolf_Wolf_C.ServerAttack
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_AnimalsWolf_Wolf_C::STATIC_ServerAttack()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108640);

	ABP_AnimalsWolf_Wolf_C_ServerAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsWolf_Wolf.BP_AnimalsWolf_Wolf_C.ServerAUUU!!!
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_AnimalsWolf_Wolf_C::STATIC_ServerAUUU()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108639);

	ABP_AnimalsWolf_Wolf_C_ServerAUUU_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsWolf_Wolf.BP_AnimalsWolf_Wolf_C.ExecuteUbergraph_BP_AnimalsWolf_Wolf
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsWolf_Wolf_C::STATIC_ExecuteUbergraph_BP_AnimalsWolf_Wolf(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108633);

	ABP_AnimalsWolf_Wolf_C_ExecuteUbergraph_BP_AnimalsWolf_Wolf_Params params;
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
