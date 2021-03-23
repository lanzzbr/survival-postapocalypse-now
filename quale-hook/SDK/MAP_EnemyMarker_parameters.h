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

// Function MAP_EnemyMarker.MAP_EnemyMarker_C.ShowAnimate
struct UMAP_EnemyMarker_C_ShowAnimate_Params
{
};

// Function MAP_EnemyMarker.MAP_EnemyMarker_C.Construct
struct UMAP_EnemyMarker_C_Construct_Params
{
};

// Function MAP_EnemyMarker.MAP_EnemyMarker_C.SetBrushROOT
struct UMAP_EnemyMarker_C_SetBrushROOT_Params
{
	struct FSlateBrush                                 Brush;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MAP_EnemyMarker.MAP_EnemyMarker_C.Tick
struct UMAP_EnemyMarker_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MAP_EnemyMarker.MAP_EnemyMarker_C.Destruct
struct UMAP_EnemyMarker_C_Destruct_Params
{
};

// Function MAP_EnemyMarker.MAP_EnemyMarker_C.ExecuteUbergraph_MAP_EnemyMarker
struct UMAP_EnemyMarker_C_ExecuteUbergraph_MAP_EnemyMarker_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
