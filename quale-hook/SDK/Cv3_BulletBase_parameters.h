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

// Function Cv3_BulletBase.Cv3_BulletBase_C.FoliageHitPointTimer
struct ACv3_BulletBase_C_FoliageHitPointTimer_Params
{
};

// Function Cv3_BulletBase.Cv3_BulletBase_C.SpawnBloodDecal
struct ACv3_BulletBase_C_SpawnBloodDecal_Params
{
	struct FVector                                     Loca;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv3_BulletBase.Cv3_BulletBase_C.ApplyDamageServer
struct ACv3_BulletBase_C_ApplyDamageServer_Params
{
};

// Function Cv3_BulletBase.Cv3_BulletBase_C.CheckParticle
struct ACv3_BulletBase_C_CheckParticle_Params
{
};

// Function Cv3_BulletBase.Cv3_BulletBase_C.UserConstructionScript
struct ACv3_BulletBase_C_UserConstructionScript_Params
{
};

// Function Cv3_BulletBase.Cv3_BulletBase_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ACv3_BulletBase_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Cv3_BulletBase.Cv3_BulletBase_C.ExecuteUbergraph_Cv3_BulletBase
struct ACv3_BulletBase_C_ExecuteUbergraph_Cv3_BulletBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
