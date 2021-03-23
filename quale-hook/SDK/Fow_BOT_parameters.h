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

// Function Fow_BOT.Fow_BOT_C.OnRep_Health
struct AFow_BOT_C_OnRep_Health_Params
{
};

// Function Fow_BOT.Fow_BOT_C.OnRep_AttackTarget
struct AFow_BOT_C_OnRep_AttackTarget_Params
{
};

// Function Fow_BOT.Fow_BOT_C.OnRep_CommanderPawn
struct AFow_BOT_C_OnRep_CommanderPawn_Params
{
};

// Function Fow_BOT.Fow_BOT_C.EquipWeapon
struct AFow_BOT_C_EquipWeapon_Params
{
};

// Function Fow_BOT.Fow_BOT_C.CheckAttack
struct AFow_BOT_C_CheckAttack_Params
{
};

// Function Fow_BOT.Fow_BOT_C.OffWarMode
struct AFow_BOT_C_OffWarMode_Params
{
};

// Function Fow_BOT.Fow_BOT_C.OnRep_WeaponEnum
struct AFow_BOT_C_OnRep_WeaponEnum_Params
{
};

// Function Fow_BOT.Fow_BOT_C.OnRep_WeaponBack
struct AFow_BOT_C_OnRep_WeaponBack_Params
{
};

// Function Fow_BOT.Fow_BOT_C.CheckMonagePlays
struct AFow_BOT_C_CheckMonagePlays_Params
{
};

// Function Fow_BOT.Fow_BOT_C.OnRep_BotResource
struct AFow_BOT_C_OnRep_BotResource_Params
{
};

// Function Fow_BOT.Fow_BOT_C.Fire
struct AFow_BOT_C_Fire_Params
{
	float                                              Pitch;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Yaw;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Fow_BOT.Fow_BOT_C.OnRep_IsProne
struct AFow_BOT_C_OnRep_IsProne_Params
{
};

// Function Fow_BOT.Fow_BOT_C.OnRep_isSprint
struct AFow_BOT_C_OnRep_isSprint_Params
{
};

// Function Fow_BOT.Fow_BOT_C.OnRep_isDeath
struct AFow_BOT_C_OnRep_isDeath_Params
{
};

// Function Fow_BOT.Fow_BOT_C.PoseDead
struct AFow_BOT_C_PoseDead_Params
{
};

// Function Fow_BOT.Fow_BOT_C.OnRep_Team
struct AFow_BOT_C_OnRep_Team_Params
{
};

// Function Fow_BOT.Fow_BOT_C.OnRep_Behavior
struct AFow_BOT_C_OnRep_Behavior_Params
{
};

// Function Fow_BOT.Fow_BOT_C.CheckPatrol
struct AFow_BOT_C_CheckPatrol_Params
{
};

// Function Fow_BOT.Fow_BOT_C.UserConstructionScript
struct AFow_BOT_C_UserConstructionScript_Params
{
};

// Function Fow_BOT.Fow_BOT_C.OnLoaded_F3993EC540DF4C1554D6EFB729A15C1C
struct AFow_BOT_C_OnLoaded_F3993EC540DF4C1554D6EFB729A15C1C_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Fow_BOT.Fow_BOT_C.OnLoaded_DB3828E541E8DF0A7787EE9628D714E0
struct AFow_BOT_C_OnLoaded_DB3828E541E8DF0A7787EE9628D714E0_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Fow_BOT.Fow_BOT_C.CreateBloodEffect
struct AFow_BOT_C_CreateBloodEffect_Params
{
	struct FName                                       BoneName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FVector                                     Impulse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Fow_BOT.Fow_BOT_C.ServerDestroyActor
struct AFow_BOT_C_ServerDestroyActor_Params
{
};

// Function Fow_BOT.Fow_BOT_C.StopFire
struct AFow_BOT_C_StopFire_Params
{
};

// Function Fow_BOT.Fow_BOT_C.StartFire
struct AFow_BOT_C_StartFire_Params
{
};

// Function Fow_BOT.Fow_BOT_C.ReceiveAnyDamage
struct AFow_BOT_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Fow_BOT.Fow_BOT_C.ServerBotFire
struct AFow_BOT_C_ServerBotFire_Params
{
	float                                              Pitch;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Yaw;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Fow_BOT.Fow_BOT_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_6_SeePawnDelegate__DelegateSignature
struct AFow_BOT_C_BndEvt__PawnSensing_K2Node_ComponentBoundEvent_6_SeePawnDelegate__DelegateSignature_Params
{
	class APawn*                                       Pawn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Fow_BOT.Fow_BOT_C.ReceiveTick
struct AFow_BOT_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Fow_BOT.Fow_BOT_C.ReceiveBeginPlay
struct AFow_BOT_C_ReceiveBeginPlay_Params
{
};

// Function Fow_BOT.Fow_BOT_C.MultiCastThrowGrenade
struct AFow_BOT_C_MultiCastThrowGrenade_Params
{
	float                                              Pitch;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Yaw;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>            GrenadeEnum;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Fow_BOT.Fow_BOT_C.SendKillSheepMessageToAll(Server)
struct AFow_BOT_C_SendKillSheepMessageToAll_Server__Params
{
	struct FS_GUI_ShipKillerStrukt                     KillSheepStruct;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Fow_BOT.Fow_BOT_C.ExecuteUbergraph_Fow_BOT
struct AFow_BOT_C_ExecuteUbergraph_Fow_BOT_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
