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

// Function Cv2_ScenarioZone.Cv2_ScenarioZone_C.OnRep_Is_Capture
struct ACv2_ScenarioZone_C_OnRep_Is_Capture_Params
{
};

// Function Cv2_ScenarioZone.Cv2_ScenarioZone_C.Check_IsAlliesShturm
struct ACv2_ScenarioZone_C_Check_IsAlliesShturm_Params
{
};

// Function Cv2_ScenarioZone.Cv2_ScenarioZone_C.Check_IsAxisShturm
struct ACv2_ScenarioZone_C_Check_IsAxisShturm_Params
{
};

// Function Cv2_ScenarioZone.Cv2_ScenarioZone_C.OnRep_Is_Allies_Shturm_now
struct ACv2_ScenarioZone_C_OnRep_Is_Allies_Shturm_now_Params
{
};

// Function Cv2_ScenarioZone.Cv2_ScenarioZone_C.OnRep_Is_Axes_Shturm_now
struct ACv2_ScenarioZone_C_OnRep_Is_Axes_Shturm_now_Params
{
};

// Function Cv2_ScenarioZone.Cv2_ScenarioZone_C.Check_IsAllies_in
struct ACv2_ScenarioZone_C_Check_IsAllies_in_Params
{
};

// Function Cv2_ScenarioZone.Cv2_ScenarioZone_C.OnRep_Is_Axes_in
struct ACv2_ScenarioZone_C_OnRep_Is_Axes_in_Params
{
};

// Function Cv2_ScenarioZone.Cv2_ScenarioZone_C.Check_IsAxesIn
struct ACv2_ScenarioZone_C_Check_IsAxesIn_Params
{
};

// Function Cv2_ScenarioZone.Cv2_ScenarioZone_C.Check_IsBattleHere
struct ACv2_ScenarioZone_C_Check_IsBattleHere_Params
{
};

// Function Cv2_ScenarioZone.Cv2_ScenarioZone_C.OnRep_Is_Allies_in
struct ACv2_ScenarioZone_C_OnRep_Is_Allies_in_Params
{
};

// Function Cv2_ScenarioZone.Cv2_ScenarioZone_C.CheckDestroyVillage
struct ACv2_ScenarioZone_C_CheckDestroyVillage_Params
{
	bool                                               isDestroyVillage;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv2_ScenarioZone.Cv2_ScenarioZone_C.UpdateProgresToTeam
struct ACv2_ScenarioZone_C_UpdateProgresToTeam_Params
{
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_ScenarioZone.Cv2_ScenarioZone_C.CheckPlayerTakeLootTime
struct ACv2_ScenarioZone_C_CheckPlayerTakeLootTime_Params
{
	class APlayerController*                           PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isDisabledVal;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_ScenarioZone.Cv2_ScenarioZone_C.UserConstructionScript
struct ACv2_ScenarioZone_C_UserConstructionScript_Params
{
};

// Function Cv2_ScenarioZone.Cv2_ScenarioZone_C.CheckPlayersDistance
struct ACv2_ScenarioZone_C_CheckPlayersDistance_Params
{
};

// Function Cv2_ScenarioZone.Cv2_ScenarioZone_C.ReceiveBeginPlay
struct ACv2_ScenarioZone_C_ReceiveBeginPlay_Params
{
};

// Function Cv2_ScenarioZone.Cv2_ScenarioZone_C.ClientChekWidget
struct ACv2_ScenarioZone_C_ClientChekWidget_Params
{
};

// Function Cv2_ScenarioZone.Cv2_ScenarioZone_C.ReceiveDestroyed
struct ACv2_ScenarioZone_C_ReceiveDestroyed_Params
{
};

// Function Cv2_ScenarioZone.Cv2_ScenarioZone_C.AddXPLocal
struct ACv2_ScenarioZone_C_AddXPLocal_Params
{
};

// Function Cv2_ScenarioZone.Cv2_ScenarioZone_C.ExecuteUbergraph_Cv2_ScenarioZone
struct ACv2_ScenarioZone_C_ExecuteUbergraph_Cv2_ScenarioZone_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
