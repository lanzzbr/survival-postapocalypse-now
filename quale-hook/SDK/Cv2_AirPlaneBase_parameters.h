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

// Function Cv2_AirPlaneBase.Cv2_AirPlaneBase_C.OnRep_isDeath
struct ACv2_AirPlaneBase_C_OnRep_isDeath_Params
{
};

// Function Cv2_AirPlaneBase.Cv2_AirPlaneBase_C.OnRep_HitPoints
struct ACv2_AirPlaneBase_C_OnRep_HitPoints_Params
{
};

// Function Cv2_AirPlaneBase.Cv2_AirPlaneBase_C.OnRep_IsDamage
struct ACv2_AirPlaneBase_C_OnRep_IsDamage_Params
{
};

// Function Cv2_AirPlaneBase.Cv2_AirPlaneBase_C.UserConstructionScript
struct ACv2_AirPlaneBase_C_UserConstructionScript_Params
{
};

// Function Cv2_AirPlaneBase.Cv2_AirPlaneBase_C.DropBombsFunc
struct ACv2_AirPlaneBase_C_DropBombsFunc_Params
{
};

// Function Cv2_AirPlaneBase.Cv2_AirPlaneBase_C.DropBombMultiCast
struct ACv2_AirPlaneBase_C_DropBombMultiCast_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_AirPlaneBase.Cv2_AirPlaneBase_C.DropLoot
struct ACv2_AirPlaneBase_C_DropLoot_Params
{
};

// Function Cv2_AirPlaneBase.Cv2_AirPlaneBase_C.DropLootMultiCast
struct ACv2_AirPlaneBase_C_DropLootMultiCast_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_AirPlaneBase.Cv2_AirPlaneBase_C.ReceiveBeginPlay
struct ACv2_AirPlaneBase_C_ReceiveBeginPlay_Params
{
};

// Function Cv2_AirPlaneBase.Cv2_AirPlaneBase_C.ReceiveAnyDamage
struct ACv2_AirPlaneBase_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_AirPlaneBase.Cv2_AirPlaneBase_C.ReceiveTick
struct ACv2_AirPlaneBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_AirPlaneBase.Cv2_AirPlaneBase_C.BndEvt__StaticMesh1_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
struct ACv2_AirPlaneBase_C_BndEvt__StaticMesh1_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Cv2_AirPlaneBase.Cv2_AirPlaneBase_C.ExecuteUbergraph_Cv2_AirPlaneBase
struct ACv2_AirPlaneBase_C_ExecuteUbergraph_Cv2_AirPlaneBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
