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

// Function BP_AnimalsBear_Bear.BP_AnimalsBear_Bear_C.CheckPatrol
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_AnimalsBear_Bear_C::STATIC_CheckPatrol()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108313);

	ABP_AnimalsBear_Bear_C_CheckPatrol_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsBear_Bear.BP_AnimalsBear_Bear_C.OnRep_Distance
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_AnimalsBear_Bear_C::STATIC_OnRep_Distance()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108311);

	ABP_AnimalsBear_Bear_C_OnRep_Distance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsBear_Bear.BP_AnimalsBear_Bear_C.OnRep_isDeath
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_AnimalsBear_Bear_C::STATIC_OnRep_isDeath()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108309);

	ABP_AnimalsBear_Bear_C_OnRep_isDeath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsBear_Bear.BP_AnimalsBear_Bear_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_AnimalsBear_Bear_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108308);

	ABP_AnimalsBear_Bear_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsBear_Bear.BP_AnimalsBear_Bear_C.OnLoaded_F28CA0514489AF047F5BA98F6D701841
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsBear_Bear_C::STATIC_OnLoaded_F28CA0514489AF047F5BA98F6D701841(class UObject* Loaded)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108306);

	ABP_AnimalsBear_Bear_C_OnLoaded_F28CA0514489AF047F5BA98F6D701841_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsBear_Bear.BP_AnimalsBear_Bear_C.OnLoaded_587BD4934FA6D3514327CEA1749AE881
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsBear_Bear_C::STATIC_OnLoaded_587BD4934FA6D3514327CEA1749AE881(class UObject* Loaded)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108304);

	ABP_AnimalsBear_Bear_C_OnLoaded_587BD4934FA6D3514327CEA1749AE881_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsBear_Bear.BP_AnimalsBear_Bear_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_AnimalsBear_Bear_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108303);

	ABP_AnimalsBear_Bear_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsBear_Bear.BP_AnimalsBear_Bear_C.CreateBloodEffect
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FVector                 Impulse                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsBear_Bear_C::STATIC_CreateBloodEffect(const struct FName& BoneName, const struct FRotator& Rotation, const struct FVector& Impulse)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108301);

	ABP_AnimalsBear_Bear_C_CreateBloodEffect_Params params;
	params.BoneName = BoneName;
	params.Rotation = Rotation;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsBear_Bear.BP_AnimalsBear_Bear_C.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsBear_Bear_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108299);

	ABP_AnimalsBear_Bear_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsBear_Bear.BP_AnimalsBear_Bear_C.ServerAttack
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_AnimalsBear_Bear_C::STATIC_ServerAttack()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108298);

	ABP_AnimalsBear_Bear_C_ServerAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsBear_Bear.BP_AnimalsBear_Bear_C.ServerAUUU!!!
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_AnimalsBear_Bear_C::STATIC_ServerAUUU()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108297);

	ABP_AnimalsBear_Bear_C_ServerAUUU_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsBear_Bear.BP_AnimalsBear_Bear_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_6_SeePawnDelegate__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsBear_Bear_C::STATIC_BndEvt__PawnSensing_K2Node_ComponentBoundEvent_6_SeePawnDelegate__DelegateSignature(class APawn* Pawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108295);

	ABP_AnimalsBear_Bear_C_BndEvt__PawnSensing_K2Node_ComponentBoundEvent_6_SeePawnDelegate__DelegateSignature_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsBear_Bear.BP_AnimalsBear_Bear_C.ReceiveAnyDamage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsBear_Bear_C::STATIC_ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108293);

	ABP_AnimalsBear_Bear_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsBear_Bear.BP_AnimalsBear_Bear_C.ServerDestroyActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_AnimalsBear_Bear_C::STATIC_ServerDestroyActor()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108292);

	ABP_AnimalsBear_Bear_C_ServerDestroyActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsBear_Bear.BP_AnimalsBear_Bear_C.ExecuteUbergraph_BP_AnimalsBear_Bear
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsBear_Bear_C::STATIC_ExecuteUbergraph_BP_AnimalsBear_Bear(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(108286);

	ABP_AnimalsBear_Bear_C_ExecuteUbergraph_BP_AnimalsBear_Bear_Params params;
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
