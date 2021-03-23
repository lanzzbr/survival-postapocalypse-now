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

// Function EndGameBase.EndGameBase_C.ShowVictoryLost
struct UEndGameBase_C_ShowVictoryLost_Params
{
};

// Function EndGameBase.EndGameBase_C.GetGameXP
struct UEndGameBase_C_GetGameXP_Params
{
};

// Function EndGameBase.EndGameBase_C.SetAcurTopStrings
struct UEndGameBase_C_SetAcurTopStrings_Params
{
};

// Function EndGameBase.EndGameBase_C.SetDamageTopStrings
struct UEndGameBase_C_SetDamageTopStrings_Params
{
};

// Function EndGameBase.EndGameBase_C.GetPlayersInformation
struct UEndGameBase_C_GetPlayersInformation_Params
{
};

// Function EndGameBase.EndGameBase_C.GetText_1
struct UEndGameBase_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function EndGameBase.EndGameBase_C.AddScore
struct UEndGameBase_C_AddScore_Params
{
	int                                                Add_score;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NewScore;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EndGameBase.EndGameBase_C.AddScoreAnimated
struct UEndGameBase_C_AddScoreAnimated_Params
{
};

// Function EndGameBase.EndGameBase_C.Tick
struct UEndGameBase_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EndGameBase.EndGameBase_C.Construct
struct UEndGameBase_C_Construct_Params
{
};

// Function EndGameBase.EndGameBase_C.ExecuteUbergraph_EndGameBase
struct UEndGameBase_C_ExecuteUbergraph_EndGameBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
