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

// Function Cv2_PlayerState.Cv2_PlayerState_C.SetKillsBot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   NameBot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_PlayerState_C::STATIC_SetKillsBot(const struct FName& NameBot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61492);

	ACv2_PlayerState_C_SetKillsBot_Params params;
	params.NameBot = NameBot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.CheckFireDistance
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_PlayerState_C::STATIC_CheckFireDistance()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61468);

	ACv2_PlayerState_C_CheckFireDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.CheckFrostEffect
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_PlayerState_C::STATIC_CheckFrostEffect()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61466);

	ACv2_PlayerState_C_CheckFrostEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.BoostMe
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_PlayerState_C::STATIC_BoostMe()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61464);

	ACv2_PlayerState_C_BoostMe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.GetBattleXP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           GetTotalXp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            XP                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_PlayerState_C::STATIC_GetBattleXP(bool GetTotalXp, int* XP)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61462);

	ACv2_PlayerState_C_GetBattleXP_Params params;
	params.GetTotalXp = GetTotalXp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (XP != nullptr)
		*XP = params.XP;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.GetCoolScores
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ACv2_PlayerState_C::GetCoolScores()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61460);

	ACv2_PlayerState_C_GetCoolScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Cv2_PlayerState.Cv2_PlayerState_C.GetRankXP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NeedXp                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_PlayerState_C::STATIC_GetRankXP(int Rank, int* NeedXp)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61458);

	ACv2_PlayerState_C_GetRankXP_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NeedXp != nullptr)
		*NeedXp = params.NeedXp;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.SetBeginVariables
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_PlayerState_C::STATIC_SetBeginVariables()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61457);

	ACv2_PlayerState_C_SetBeginVariables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.Gets Honors
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_PlayerState_C::STATIC_Gets_Honors()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61455);

	ACv2_PlayerState_C_Gets_Honors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.CheckHungry
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_PlayerState_C::STATIC_CheckHungry()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61453);

	ACv2_PlayerState_C_CheckHungry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.OnRep_Nation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_PlayerState_C::STATIC_OnRep_Nation()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61451);

	ACv2_PlayerState_C_OnRep_Nation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.CheckNeededXP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            NeededXP                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_PlayerState_C::STATIC_CheckNeededXP(int* NeededXP)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61449);

	ACv2_PlayerState_C_CheckNeededXP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NeededXP != nullptr)
		*NeededXP = params.NeededXP;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.AddXP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            CountXP                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_PlayerState_C::STATIC_AddXP(int CountXP)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61447);

	ACv2_PlayerState_C_AddXP_Params params;
	params.CountXP = CountXP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.OnRep_Deaths
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_PlayerState_C::STATIC_OnRep_Deaths()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61445);

	ACv2_PlayerState_C_OnRep_Deaths_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.OnRep_Kills
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_PlayerState_C::STATIC_OnRep_Kills()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61443);

	ACv2_PlayerState_C_OnRep_Kills_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_PlayerState_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61442);

	ACv2_PlayerState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.OnFailure_2F3E86754CF5F7CE7666AC82FEA194AA
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_PlayerState_C::STATIC_OnFailure_2F3E86754CF5F7CE7666AC82FEA194AA()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61441);

	ACv2_PlayerState_C_OnFailure_2F3E86754CF5F7CE7666AC82FEA194AA_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.OnSuccess_2F3E86754CF5F7CE7666AC82FEA194AA
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_PlayerState_C::STATIC_OnSuccess_2F3E86754CF5F7CE7666AC82FEA194AA()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61440);

	ACv2_PlayerState_C_OnSuccess_2F3E86754CF5F7CE7666AC82FEA194AA_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.OnFailure_AF52F9F04D606FEBBF9FE4909BE121F1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_PlayerState_C::STATIC_OnFailure_AF52F9F04D606FEBBF9FE4909BE121F1(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61438);

	ACv2_PlayerState_C_OnFailure_AF52F9F04D606FEBBF9FE4909BE121F1_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.OnSuccess_AF52F9F04D606FEBBF9FE4909BE121F1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_PlayerState_C::STATIC_OnSuccess_AF52F9F04D606FEBBF9FE4909BE121F1(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61436);

	ACv2_PlayerState_C_OnSuccess_AF52F9F04D606FEBBF9FE4909BE121F1_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_PlayerState_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61435);

	ACv2_PlayerState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.ShowKillMultiplier
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            KillsByLife                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_PlayerState_C::STATIC_ShowKillMultiplier(int KillsByLife)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61433);

	ACv2_PlayerState_C_ShowKillMultiplier_Params params;
	params.KillsByLife = KillsByLife;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.SetSide_Server
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> Side                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Cv2_Nations_ECv2_Nations> Nation                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_PlayerState_C::STATIC_SetSide_Server(TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> Side, TEnumAsByte<Cv2_Nations_ECv2_Nations> Nation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61431);

	ACv2_PlayerState_C_SetSide_Server_Params params;
	params.Side = Side;
	params.Nation = Nation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.Gets Achievements
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   AchievementName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Cv3_HonorsEnum_ECv3_HonorsEnum> Enum                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_PlayerState_C::STATIC_Gets_Achievements(const struct FName& AchievementName, TEnumAsByte<Cv3_HonorsEnum_ECv3_HonorsEnum> Enum)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61429);

	ACv2_PlayerState_C_Gets_Achievements_Params params;
	params.AchievementName = AchievementName;
	params.Enum = Enum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.LoadPlayerStatistics
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_PlayerState_C::STATIC_LoadPlayerStatistics()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61428);

	ACv2_PlayerState_C_LoadPlayerStatistics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.SavePlayerStatistics
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_PlayerState_C::STATIC_SavePlayerStatistics()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61427);

	ACv2_PlayerState_C_SavePlayerStatistics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.MultiCastPlayVoice
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv3_VoicesEnum_ECv3_VoicesEnum> VoiceEnum                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> Side                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_PlayerState_C::STATIC_MultiCastPlayVoice(TEnumAsByte<Cv3_VoicesEnum_ECv3_VoicesEnum> VoiceEnum, TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> Side, const struct FVector& Location)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61425);

	ACv2_PlayerState_C_MultiCastPlayVoice_Params params;
	params.VoiceEnum = VoiceEnum;
	params.Side = Side;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.AddBoost
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_PlayerState_C::STATIC_AddBoost(int Points)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61423);

	ACv2_PlayerState_C_AddBoost_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.StopBoost
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_PlayerState_C::STATIC_StopBoost()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61422);

	ACv2_PlayerState_C_StopBoost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_PlayerState.Cv2_PlayerState_C.ExecuteUbergraph_Cv2_PlayerState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_PlayerState_C::STATIC_ExecuteUbergraph_Cv2_PlayerState(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61420);

	ACv2_PlayerState_C_ExecuteUbergraph_Cv2_PlayerState_Params params;
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
