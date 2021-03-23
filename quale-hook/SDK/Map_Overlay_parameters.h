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

// Function Map_Overlay.Map_Overlay_C.PrintMapParametrs
struct UMap_Overlay_C_PrintMapParametrs_Params
{
};

// Function Map_Overlay.Map_Overlay_C.ADD_Friends_Bots
struct UMap_Overlay_C_ADD_Friends_Bots_Params
{
};

// Function Map_Overlay.Map_Overlay_C.ADD_Turrels
struct UMap_Overlay_C_ADD_Turrels_Params
{
};

// Function Map_Overlay.Map_Overlay_C.ADD_MapActors
struct UMap_Overlay_C_ADD_MapActors_Params
{
};

// Function Map_Overlay.Map_Overlay_C.DrawStep3
struct UMap_Overlay_C_DrawStep3_Params
{
	float                                              Procent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Reverce;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Map_Overlay.Map_Overlay_C.ADD_MyDead
struct UMap_Overlay_C_ADD_MyDead_Params
{
};

// Function Map_Overlay.Map_Overlay_C.ADD_Deads
struct UMap_Overlay_C_ADD_Deads_Params
{
};

// Function Map_Overlay.Map_Overlay_C.ADD_Spawns
struct UMap_Overlay_C_ADD_Spawns_Params
{
};

// Function Map_Overlay.Map_Overlay_C.DrawStep2
struct UMap_Overlay_C_DrawStep2_Params
{
	float                                              Procent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Reverce;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Map_Overlay.Map_Overlay_C.DrawStep0
struct UMap_Overlay_C_DrawStep0_Params
{
	float                                              Percent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Map_Overlay.Map_Overlay_C.DrawStep1
struct UMap_Overlay_C_DrawStep1_Params
{
	float                                              InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Map_Overlay.Map_Overlay_C.SetZoomStep
struct UMap_Overlay_C_SetZoomStep_Params
{
	int                                                Step;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Map_Overlay.Map_Overlay_C.MapToRange
struct UMap_Overlay_C_MapToRange_Params
{
	struct FVector2D                                   MapTranslation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   CorrectTranslation;                                        // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Map_Overlay.Map_Overlay_C.Zoom
struct UMap_Overlay_C_Zoom_Params
{
	float                                              Direction;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Map_Overlay.Map_Overlay_C.OnMouseWheel
struct UMap_Overlay_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Map_Overlay.Map_Overlay_C.SetMapPARAMETRS
struct UMap_Overlay_C_SetMapPARAMETRS_Params
{
};

// Function Map_Overlay.Map_Overlay_C.MoveMap
struct UMap_Overlay_C_MoveMap_Params
{
};

// Function Map_Overlay.Map_Overlay_C.OnMouseButtonDoubleClick
struct UMap_Overlay_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               InMouseEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Map_Overlay.Map_Overlay_C.OnMouseButtonUp
struct UMap_Overlay_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Map_Overlay.Map_Overlay_C.OnMouseButtonDown
struct UMap_Overlay_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Map_Overlay.Map_Overlay_C.SetProportionAndScale
struct UMap_Overlay_C_SetProportionAndScale_Params
{
	bool                                               WasTransform;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Map_Overlay.Map_Overlay_C.ADD_Radiostation
struct UMap_Overlay_C_ADD_Radiostation_Params
{
};

// Function Map_Overlay.Map_Overlay_C.GetSize
struct UMap_Overlay_C_GetSize_Params
{
	struct FVector2D                                   Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   OverlaySize;                                               // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Map_Overlay.Map_Overlay_C.ADD_ScenarioZone
struct UMap_Overlay_C_ADD_ScenarioZone_Params
{
};

// Function Map_Overlay.Map_Overlay_C.RemoveActorFromMap
struct UMap_Overlay_C_RemoveActorFromMap_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GUI_MAP_MarkerType_EGUI_MAP_MarkerType> Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Map_Overlay.Map_Overlay_C.CheckEnemis
struct UMap_Overlay_C_CheckEnemis_Params
{
};

// Function Map_Overlay.Map_Overlay_C.ADD_Enemy
struct UMap_Overlay_C_ADD_Enemy_Params
{
};

// Function Map_Overlay.Map_Overlay_C.ADD_STATIC_ACTORS
struct UMap_Overlay_C_ADD_STATIC_ACTORS_Params
{
};

// Function Map_Overlay.Map_Overlay_C.ADD_Towns
struct UMap_Overlay_C_ADD_Towns_Params
{
};

// Function Map_Overlay.Map_Overlay_C.ADD_Tents
struct UMap_Overlay_C_ADD_Tents_Params
{
};

// Function Map_Overlay.Map_Overlay_C.ADD_BildingsMarkers
struct UMap_Overlay_C_ADD_BildingsMarkers_Params
{
};

// Function Map_Overlay.Map_Overlay_C.ADD_Vehicle
struct UMap_Overlay_C_ADD_Vehicle_Params
{
};

// Function Map_Overlay.Map_Overlay_C.ADD_Friends
struct UMap_Overlay_C_ADD_Friends_Params
{
};

// Function Map_Overlay.Map_Overlay_C.ADD_My
struct UMap_Overlay_C_ADD_My_Params
{
};

// Function Map_Overlay.Map_Overlay_C.GoToCharacter
struct UMap_Overlay_C_GoToCharacter_Params
{
	bool                                               No_Rotation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Map_Overlay.Map_Overlay_C.GetStartInformation
struct UMap_Overlay_C_GetStartInformation_Params
{
};

// Function Map_Overlay.Map_Overlay_C.CheckActorArrayValid
struct UMap_Overlay_C_CheckActorArrayValid_Params
{
};

// Function Map_Overlay.Map_Overlay_C.AddActorOnMap
struct UMap_Overlay_C_AddActorOnMap_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GUI_MAP_MarkerType_EGUI_MAP_MarkerType> MarkerType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Coords;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Map_Overlay.Map_Overlay_C.ADD_DYNAMIC_ACTORS
struct UMap_Overlay_C_ADD_DYNAMIC_ACTORS_Params
{
};

// Function Map_Overlay.Map_Overlay_C.UpdateCoordinates
struct UMap_Overlay_C_UpdateCoordinates_Params
{
};

// Function Map_Overlay.Map_Overlay_C.GetSelfSize
struct UMap_Overlay_C_GetSelfSize_Params
{
	struct FVector2D                                   LocalSelfSize;                                             // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Map_Overlay.Map_Overlay_C.Construct
struct UMap_Overlay_C_Construct_Params
{
};

// Function Map_Overlay.Map_Overlay_C.Tick
struct UMap_Overlay_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Map_Overlay.Map_Overlay_C.Destruct
struct UMap_Overlay_C_Destruct_Params
{
};

// Function Map_Overlay.Map_Overlay_C.OnMouseLeave
struct UMap_Overlay_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Map_Overlay.Map_Overlay_C.SetSpawnMode
struct UMap_Overlay_C_SetSpawnMode_Params
{
};

// Function Map_Overlay.Map_Overlay_C.HoverSpawnMarker
struct UMap_Overlay_C_HoverSpawnMarker_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Map_Overlay.Map_Overlay_C.UnhoverSpawnMarker
struct UMap_Overlay_C_UnhoverSpawnMarker_Params
{
};

// Function Map_Overlay.Map_Overlay_C.SelectSpawnMarker
struct UMap_Overlay_C_SelectSpawnMarker_Params
{
	class UObject*                                     Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Map_Overlay.Map_Overlay_C.ExecuteUbergraph_Map_Overlay
struct UMap_Overlay_C_ExecuteUbergraph_Map_Overlay_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Map_Overlay.Map_Overlay_C.AddSpawns__DelegateSignature
struct UMap_Overlay_C_AddSpawns__DelegateSignature_Params
{
	bool                                               Stop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Remove;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
