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

// Function BOT_CreatureBase.BOT_CreatureBase_C.RandomPatrolAlarm
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureBase_C::STATIC_RandomPatrolAlarm()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94767);

	ABOT_CreatureBase_C_RandomPatrolAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.GoToBase
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureBase_C::STATIC_GoToBase()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94685);

	ABOT_CreatureBase_C_GoToBase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.GoToEating
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureBase_C::STATIC_GoToEating()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94684);

	ABOT_CreatureBase_C_GoToEating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.OnPhysic
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureBase_C::STATIC_OnPhysic()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94683);

	ABOT_CreatureBase_C_OnPhysic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.OffPhysics
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureBase_C::STATIC_OffPhysics()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94682);

	ABOT_CreatureBase_C_OffPhysics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.OnRep_Target
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureBase_C::STATIC_OnRep_Target()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94680);

	ABOT_CreatureBase_C_OnRep_Target_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.RandomTargetLocation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 RandomLoc                      (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABOT_CreatureBase_C::STATIC_RandomTargetLocation(struct FVector* RandomLoc)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94678);

	ABOT_CreatureBase_C_RandomTargetLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomLoc != nullptr)
		*RandomLoc = params.RandomLoc;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.OnRep_GlobalIsSleep
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureBase_C::STATIC_OnRep_GlobalIsSleep()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94677);

	ABOT_CreatureBase_C_OnRep_GlobalIsSleep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.CheckSleep
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureBase_C::STATIC_CheckSleep()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94612);

	ABOT_CreatureBase_C_CheckSleep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.RandomPatrol
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureBase_C::STATIC_RandomPatrol()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94610);

	ABOT_CreatureBase_C_RandomPatrol_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.AttackCheckDistance
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureBase_C::STATIC_AttackCheckDistance()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94605);

	ABOT_CreatureBase_C_AttackCheckDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.RestartTargets
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureBase_C::STATIC_RestartTargets()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94604);

	ABOT_CreatureBase_C_RestartTargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.OnRep_isDeath
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureBase_C::STATIC_OnRep_isDeath()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94580);

	ABOT_CreatureBase_C_OnRep_isDeath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.OnRep_HitPoints
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureBase_C::STATIC_OnRep_HitPoints()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94578);

	ABOT_CreatureBase_C_OnRep_HitPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.CheckSpeed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureBase_C::STATIC_CheckSpeed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94576);

	ABOT_CreatureBase_C_CheckSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureBase_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94575);

	ABOT_CreatureBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureBase_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94574);

	ABOT_CreatureBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABOT_CreatureBase_C::STATIC_BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94572);

	ABOT_CreatureBase_C_BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.CustomMoveFunction
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureBase_C::STATIC_CustomMoveFunction()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94571);

	ABOT_CreatureBase_C_CustomMoveFunction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABOT_CreatureBase_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94569);

	ABOT_CreatureBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.ReceiveAnyDamage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABOT_CreatureBase_C::STATIC_ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94567);

	ABOT_CreatureBase_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.BotAttackServer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureBase_C::STATIC_BotAttackServer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94529);

	ABOT_CreatureBase_C_BotAttackServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.BotAttackMultiCast
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureBase_C::STATIC_BotAttackMultiCast()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94528);

	ABOT_CreatureBase_C_BotAttackMultiCast_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.CheckGround
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureBase_C::STATIC_CheckGround()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94527);

	ABOT_CreatureBase_C_CheckGround_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.ReceiveRadialDamage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABOT_CreatureBase_C::STATIC_ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94525);

	ABOT_CreatureBase_C_ReceiveRadialDamage_Params params;
	params.DamageReceived = DamageReceived;
	params.DamageType = DamageType;
	params.Origin = Origin;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.SaveMy_RPCAll
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureBase_C::STATIC_SaveMy_RPCAll()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94524);

	ABOT_CreatureBase_C_SaveMy_RPCAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureBase.BOT_CreatureBase_C.ExecuteUbergraph_BOT_CreatureBase
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABOT_CreatureBase_C::STATIC_ExecuteUbergraph_BOT_CreatureBase(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(94522);

	ABOT_CreatureBase_C_ExecuteUbergraph_BOT_CreatureBase_Params params;
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
