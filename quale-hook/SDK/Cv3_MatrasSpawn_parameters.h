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

// Function Cv3_MatrasSpawn.Cv3_MatrasSpawn_C.OnRep_isDestroy
struct ACv3_MatrasSpawn_C_OnRep_isDestroy_Params
{
};

// Function Cv3_MatrasSpawn.Cv3_MatrasSpawn_C.UserConstructionScript
struct ACv3_MatrasSpawn_C_UserConstructionScript_Params
{
};

// Function Cv3_MatrasSpawn.Cv3_MatrasSpawn_C.ReceiveAnyDamage
struct ACv3_MatrasSpawn_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv3_MatrasSpawn.Cv3_MatrasSpawn_C.ReceiveDestroyed
struct ACv3_MatrasSpawn_C_ReceiveDestroyed_Params
{
};

// Function Cv3_MatrasSpawn.Cv3_MatrasSpawn_C.ExecuteUbergraph_Cv3_MatrasSpawn
struct ACv3_MatrasSpawn_C_ExecuteUbergraph_Cv3_MatrasSpawn_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
