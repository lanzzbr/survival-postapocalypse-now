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

// Function Shoting_Target.Shoting_Target_C.UserConstructionScript
struct AShoting_Target_C_UserConstructionScript_Params
{
};

// Function Shoting_Target.Shoting_Target_C.Timeline_0__FinishedFunc
struct AShoting_Target_C_Timeline_0__FinishedFunc_Params
{
};

// Function Shoting_Target.Shoting_Target_C.Timeline_0__UpdateFunc
struct AShoting_Target_C_Timeline_0__UpdateFunc_Params
{
};

// Function Shoting_Target.Shoting_Target_C.Timeline_1__FinishedFunc
struct AShoting_Target_C_Timeline_1__FinishedFunc_Params
{
};

// Function Shoting_Target.Shoting_Target_C.Timeline_1__UpdateFunc
struct AShoting_Target_C_Timeline_1__UpdateFunc_Params
{
};

// Function Shoting_Target.Shoting_Target_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct AShoting_Target_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Shoting_Target.Shoting_Target_C.OnBulletHit
struct AShoting_Target_C_OnBulletHit_Params
{
	struct FVector                                     HitLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     PlayerLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Shoting_Target.Shoting_Target_C.ExecuteUbergraph_Shoting_Target
struct AShoting_Target_C_ExecuteUbergraph_Shoting_Target_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
