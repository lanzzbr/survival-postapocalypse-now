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

// Function MAP_RoundProgress.MAP_RoundProgress_C.CheckActivity
struct UMAP_RoundProgress_C_CheckActivity_Params
{
};

// Function MAP_RoundProgress.MAP_RoundProgress_C.SetEnemyStyle
struct UMAP_RoundProgress_C_SetEnemyStyle_Params
{
	bool                                               EnemyStyle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MAP_RoundProgress.MAP_RoundProgress_C.SetProgress
struct UMAP_RoundProgress_C_SetProgress_Params
{
	class ACv2_ScenarioZone_C*                         Zone;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MAP_RoundProgress.MAP_RoundProgress_C.ShowActivity
struct UMAP_RoundProgress_C_ShowActivity_Params
{
	bool                                               SetActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsEnemy;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Up;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MAP_RoundProgress.MAP_RoundProgress_C.Construct
struct UMAP_RoundProgress_C_Construct_Params
{
};

// Function MAP_RoundProgress.MAP_RoundProgress_C.ExecuteUbergraph_MAP_RoundProgress
struct UMAP_RoundProgress_C_ExecuteUbergraph_MAP_RoundProgress_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
