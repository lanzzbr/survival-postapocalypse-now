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

// Function MapMarkerROOT.MapMarkerROOT_C.RootShowMarker
struct UMapMarkerROOT_C_RootShowMarker_Params
{
};

// Function MapMarkerROOT.MapMarkerROOT_C.RootHideMarker
struct UMapMarkerROOT_C_RootHideMarker_Params
{
};

// Function MapMarkerROOT.MapMarkerROOT_C.CheckCarSide
struct UMapMarkerROOT_C_CheckCarSide_Params
{
	bool                                               Destroy;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MapMarkerROOT.MapMarkerROOT_C.SetBestFriendStyle
struct UMapMarkerROOT_C_SetBestFriendStyle_Params
{
	bool                                               Yes;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MapMarkerROOT.MapMarkerROOT_C.SetUnselectedStyle
struct UMapMarkerROOT_C_SetUnselectedStyle_Params
{
};

// Function MapMarkerROOT.MapMarkerROOT_C.SetSelectedStyle
struct UMapMarkerROOT_C_SetSelectedStyle_Params
{
};

// Function MapMarkerROOT.MapMarkerROOT_C.CheckEnemyOrFriend
struct UMapMarkerROOT_C_CheckEnemyOrFriend_Params
{
	bool                                               IsFriend;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MapMarkerROOT.MapMarkerROOT_C.SetBrushROOT
struct UMapMarkerROOT_C_SetBrushROOT_Params
{
	struct FSlateBrush                                 Brush;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MapMarkerROOT.MapMarkerROOT_C.CheckActorValid
struct UMapMarkerROOT_C_CheckActorValid_Params
{
};

// Function MapMarkerROOT.MapMarkerROOT_C.Construct
struct UMapMarkerROOT_C_Construct_Params
{
};

// Function MapMarkerROOT.MapMarkerROOT_C.RemoveMe
struct UMapMarkerROOT_C_RemoveMe_Params
{
};

// Function MapMarkerROOT.MapMarkerROOT_C.ExecuteUbergraph_MapMarkerROOT
struct UMapMarkerROOT_C_ExecuteUbergraph_MapMarkerROOT_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
