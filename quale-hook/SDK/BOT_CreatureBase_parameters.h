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

// Function BOT_CreatureBase.BOT_CreatureBase_C.RandomPatrolAlarm
struct ABOT_CreatureBase_C_RandomPatrolAlarm_Params
{
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.GoToBase
struct ABOT_CreatureBase_C_GoToBase_Params
{
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.GoToEating
struct ABOT_CreatureBase_C_GoToEating_Params
{
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.OnPhysic
struct ABOT_CreatureBase_C_OnPhysic_Params
{
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.OffPhysics
struct ABOT_CreatureBase_C_OffPhysics_Params
{
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.OnRep_Target
struct ABOT_CreatureBase_C_OnRep_Target_Params
{
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.RandomTargetLocation
struct ABOT_CreatureBase_C_RandomTargetLocation_Params
{
	struct FVector                                     RandomLoc;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.OnRep_GlobalIsSleep
struct ABOT_CreatureBase_C_OnRep_GlobalIsSleep_Params
{
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.CheckSleep
struct ABOT_CreatureBase_C_CheckSleep_Params
{
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.RandomPatrol
struct ABOT_CreatureBase_C_RandomPatrol_Params
{
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.AttackCheckDistance
struct ABOT_CreatureBase_C_AttackCheckDistance_Params
{
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.RestartTargets
struct ABOT_CreatureBase_C_RestartTargets_Params
{
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.OnRep_isDeath
struct ABOT_CreatureBase_C_OnRep_isDeath_Params
{
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.OnRep_HitPoints
struct ABOT_CreatureBase_C_OnRep_HitPoints_Params
{
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.CheckSpeed
struct ABOT_CreatureBase_C_CheckSpeed_Params
{
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.UserConstructionScript
struct ABOT_CreatureBase_C_UserConstructionScript_Params
{
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.ReceiveBeginPlay
struct ABOT_CreatureBase_C_ReceiveBeginPlay_Params
{
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature
struct ABOT_CreatureBase_C_BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature_Params
{
	class APawn*                                       Pawn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.CustomMoveFunction
struct ABOT_CreatureBase_C_CustomMoveFunction_Params
{
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.ReceiveTick
struct ABOT_CreatureBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.ReceiveAnyDamage
struct ABOT_CreatureBase_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.BotAttackServer
struct ABOT_CreatureBase_C_BotAttackServer_Params
{
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.BotAttackMultiCast
struct ABOT_CreatureBase_C_BotAttackMultiCast_Params
{
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.CheckGround
struct ABOT_CreatureBase_C_CheckGround_Params
{
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.ReceiveRadialDamage
struct ABOT_CreatureBase_C_ReceiveRadialDamage_Params
{
	float                                              DamageReceived;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Origin;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.SaveMy_RPCAll
struct ABOT_CreatureBase_C_SaveMy_RPCAll_Params
{
};

// Function BOT_CreatureBase.BOT_CreatureBase_C.ExecuteUbergraph_BOT_CreatureBase
struct ABOT_CreatureBase_C_ExecuteUbergraph_BOT_CreatureBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
