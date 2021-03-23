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

// Function Cv2_PlayerState.Cv2_PlayerState_C.SetKillsBot
struct ACv2_PlayerState_C_SetKillsBot_Params
{
	struct FName                                       NameBot;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.CheckFireDistance
struct ACv2_PlayerState_C_CheckFireDistance_Params
{
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.CheckFrostEffect
struct ACv2_PlayerState_C_CheckFrostEffect_Params
{
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.BoostMe
struct ACv2_PlayerState_C_BoostMe_Params
{
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.GetBattleXP
struct ACv2_PlayerState_C_GetBattleXP_Params
{
	bool                                               GetTotalXp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                XP;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.GetCoolScores
struct ACv2_PlayerState_C_GetCoolScores_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.GetRankXP
struct ACv2_PlayerState_C_GetRankXP_Params
{
	int                                                Rank;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NeedXp;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.SetBeginVariables
struct ACv2_PlayerState_C_SetBeginVariables_Params
{
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.Gets Honors
struct ACv2_PlayerState_C_Gets_Honors_Params
{
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.CheckHungry
struct ACv2_PlayerState_C_CheckHungry_Params
{
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.OnRep_Nation
struct ACv2_PlayerState_C_OnRep_Nation_Params
{
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.CheckNeededXP
struct ACv2_PlayerState_C_CheckNeededXP_Params
{
	int                                                NeededXP;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.AddXP
struct ACv2_PlayerState_C_AddXP_Params
{
	int                                                CountXP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.OnRep_Deaths
struct ACv2_PlayerState_C_OnRep_Deaths_Params
{
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.OnRep_Kills
struct ACv2_PlayerState_C_OnRep_Kills_Params
{
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.UserConstructionScript
struct ACv2_PlayerState_C_UserConstructionScript_Params
{
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.OnFailure_2F3E86754CF5F7CE7666AC82FEA194AA
struct ACv2_PlayerState_C_OnFailure_2F3E86754CF5F7CE7666AC82FEA194AA_Params
{
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.OnSuccess_2F3E86754CF5F7CE7666AC82FEA194AA
struct ACv2_PlayerState_C_OnSuccess_2F3E86754CF5F7CE7666AC82FEA194AA_Params
{
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.OnFailure_AF52F9F04D606FEBBF9FE4909BE121F1
struct ACv2_PlayerState_C_OnFailure_AF52F9F04D606FEBBF9FE4909BE121F1_Params
{
	struct FName                                       WrittenAchievementName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.OnSuccess_AF52F9F04D606FEBBF9FE4909BE121F1
struct ACv2_PlayerState_C_OnSuccess_AF52F9F04D606FEBBF9FE4909BE121F1_Params
{
	struct FName                                       WrittenAchievementName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.ReceiveBeginPlay
struct ACv2_PlayerState_C_ReceiveBeginPlay_Params
{
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.ShowKillMultiplier
struct ACv2_PlayerState_C_ShowKillMultiplier_Params
{
	int                                                KillsByLife;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.SetSide_Server
struct ACv2_PlayerState_C_SetSide_Server_Params
{
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          Side;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_Nations_ECv2_Nations>              Nation;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.Gets Achievements
struct ACv2_PlayerState_C_Gets_Achievements_Params
{
	struct FName                                       AchievementName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv3_HonorsEnum_ECv3_HonorsEnum>        Enum;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.LoadPlayerStatistics
struct ACv2_PlayerState_C_LoadPlayerStatistics_Params
{
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.SavePlayerStatistics
struct ACv2_PlayerState_C_SavePlayerStatistics_Params
{
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.MultiCastPlayVoice
struct ACv2_PlayerState_C_MultiCastPlayVoice_Params
{
	TEnumAsByte<Cv3_VoicesEnum_ECv3_VoicesEnum>        VoiceEnum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          Side;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.AddBoost
struct ACv2_PlayerState_C_AddBoost_Params
{
	int                                                Points;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.StopBoost
struct ACv2_PlayerState_C_StopBoost_Params
{
};

// Function Cv2_PlayerState.Cv2_PlayerState_C.ExecuteUbergraph_Cv2_PlayerState
struct ACv2_PlayerState_C_ExecuteUbergraph_Cv2_PlayerState_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
