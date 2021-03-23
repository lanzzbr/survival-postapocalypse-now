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

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.CheckProneBoxTraceTimer
struct UCv2_CharacterComponent_C_CheckProneBoxTraceTimer_Params
{
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.CheckProneBoxTrace
struct UCv2_CharacterComponent_C_CheckProneBoxTrace_Params
{
	bool                                               isDisableProne;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.CheckPlayerMeshVisible
struct UCv2_CharacterComponent_C_CheckPlayerMeshVisible_Params
{
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.CheckAntiCheat
struct UCv2_CharacterComponent_C_CheckAntiCheat_Params
{
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.CheckStamina
struct UCv2_CharacterComponent_C_CheckStamina_Params
{
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.AddResourceShkafLoot
struct UCv2_CharacterComponent_C_AddResourceShkafLoot_Params
{
	class ACv2_playerController_C*                     PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  LootStructure;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.CheckStand
struct UCv2_CharacterComponent_C_CheckStand_Params
{
	bool                                               isStandEnabled;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.SetKillerCamera
struct UCv2_CharacterComponent_C_SetKillerCamera_Params
{
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.ClientTakeLoot
struct UCv2_CharacterComponent_C_ClientTakeLoot_Params
{
	class ACv2_LootBP_C*                               LootObject;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.SetAiming
struct UCv2_CharacterComponent_C_SetAiming_Params
{
	bool                                               IsAim;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               isBinocular;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.HideOptic
struct UCv2_CharacterComponent_C_HideOptic_Params
{
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.ShowOptic
struct UCv2_CharacterComponent_C_ShowOptic_Params
{
	class UClass*                                      OpticGUI;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.SetPlayerNick
struct UCv2_CharacterComponent_C_SetPlayerNick_Params
{
	int                                                Meters;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.CheckToPlayersDistance
struct UCv2_CharacterComponent_C_CheckToPlayersDistance_Params
{
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.ShowChatClient
struct UCv2_CharacterComponent_C_ShowChatClient_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     GovorunLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.DeadCameraMove
struct UCv2_CharacterComponent_C_DeadCameraMove_Params
{
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.GetGrenadesCount
struct UCv2_CharacterComponent_C_GetGrenadesCount_Params
{
	bool                                               isThrowed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>            GrenadeEnum;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.ClearAllLoot
struct UCv2_CharacterComponent_C_ClearAllLoot_Params
{
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.DropAllLoot
struct UCv2_CharacterComponent_C_DropAllLoot_Params
{
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.SetInHandsWeaponAmmo
struct UCv2_CharacterComponent_C_SetInHandsWeaponAmmo_Params
{
	int                                                SetAmmo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.GetInHandsWeaponAmmo
struct UCv2_CharacterComponent_C_GetInHandsWeaponAmmo_Params
{
	int                                                GetAmmo;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.ThrowGrenade
struct UCv2_CharacterComponent_C_ThrowGrenade_Params
{
	TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>            Grenade;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.InitializeOnlyServer
struct UCv2_CharacterComponent_C_InitializeOnlyServer_Params
{
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.ReceiveBeginPlay
struct UCv2_CharacterComponent_C_ReceiveBeginPlay_Params
{
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.InitializeClient
struct UCv2_CharacterComponent_C_InitializeClient_Params
{
};

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.ExecuteUbergraph_Cv2_CharacterComponent
struct UCv2_CharacterComponent_C_ExecuteUbergraph_Cv2_CharacterComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
