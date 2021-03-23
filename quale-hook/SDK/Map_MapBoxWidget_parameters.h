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

// Function Map_MapBoxWidget.Map_MapBoxWidget_C.OnMouseWheel
struct UMap_MapBoxWidget_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Map_MapBoxWidget.Map_MapBoxWidget_C.OnMouseButtonDoubleClick
struct UMap_MapBoxWidget_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               InMouseEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Map_MapBoxWidget.Map_MapBoxWidget_C.OnMouseButtonDown
struct UMap_MapBoxWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Map_MapBoxWidget.Map_MapBoxWidget_C.SortPlayers
struct UMap_MapBoxWidget_C_SortPlayers_Params
{
	TEnumAsByte<GUI_SortPlayerParam_EGUI_SortPlayerParam> SoptParametr;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FromMin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Map_MapBoxWidget.Map_MapBoxWidget_C.ChekPercent
struct UMap_MapBoxWidget_C_ChekPercent_Params
{
};

// Function Map_MapBoxWidget.Map_MapBoxWidget_C.CheckPlayers
struct UMap_MapBoxWidget_C_CheckPlayers_Params
{
};

// Function Map_MapBoxWidget.Map_MapBoxWidget_C.Construct
struct UMap_MapBoxWidget_C_Construct_Params
{
};

// Function Map_MapBoxWidget.Map_MapBoxWidget_C.Destruct
struct UMap_MapBoxWidget_C_Destruct_Params
{
};

// Function Map_MapBoxWidget.Map_MapBoxWidget_C.Tick
struct UMap_MapBoxWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Map_MapBoxWidget.Map_MapBoxWidget_C.ExecuteUbergraph_Map_MapBoxWidget
struct UMap_MapBoxWidget_C_ExecuteUbergraph_Map_MapBoxWidget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
