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

// Function MAP_CharacterMarker.MAP_CharacterMarker_C.Construct
struct UMAP_CharacterMarker_C_Construct_Params
{
};

// Function MAP_CharacterMarker.MAP_CharacterMarker_C.Tick
struct UMAP_CharacterMarker_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MAP_CharacterMarker.MAP_CharacterMarker_C.SetBrushROOT
struct UMAP_CharacterMarker_C_SetBrushROOT_Params
{
	struct FSlateBrush                                 Brush;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MAP_CharacterMarker.MAP_CharacterMarker_C.ExecuteUbergraph_MAP_CharacterMarker
struct UMAP_CharacterMarker_C_ExecuteUbergraph_MAP_CharacterMarker_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
