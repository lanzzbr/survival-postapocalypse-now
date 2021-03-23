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

// Function GameOverStatisticString.GameOverStatisticString_C.PreConstruct
struct UGameOverStatisticString_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameOverStatisticString.GameOverStatisticString_C.Draw
struct UGameOverStatisticString_C_Draw_Params
{
	struct FText                                       ParametrName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Game;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Total;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameOverStatisticString.GameOverStatisticString_C.ShowMe
struct UGameOverStatisticString_C_ShowMe_Params
{
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameOverStatisticString.GameOverStatisticString_C.ExecuteUbergraph_GameOverStatisticString
struct UGameOverStatisticString_C_ExecuteUbergraph_GameOverStatisticString_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
