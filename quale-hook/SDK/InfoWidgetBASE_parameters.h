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

// Function InfoWidgetBASE.InfoWidgetBASE_C.CheckTemp
struct UInfoWidgetBASE_C_CheckTemp_Params
{
};

// Function InfoWidgetBASE.InfoWidgetBASE_C.UpdateTemper
struct UInfoWidgetBASE_C_UpdateTemper_Params
{
};

// Function InfoWidgetBASE.InfoWidgetBASE_C.TimeToTemper
struct UInfoWidgetBASE_C_TimeToTemper_Params
{
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Temp;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InfoWidgetBASE.InfoWidgetBASE_C.Timer
struct UInfoWidgetBASE_C_Timer_Params
{
};

// Function InfoWidgetBASE.InfoWidgetBASE_C.CheckPing
struct UInfoWidgetBASE_C_CheckPing_Params
{
};

// Function InfoWidgetBASE.InfoWidgetBASE_C.CheckPanels
struct UInfoWidgetBASE_C_CheckPanels_Params
{
};

// Function InfoWidgetBASE.InfoWidgetBASE_C.Construct
struct UInfoWidgetBASE_C_Construct_Params
{
};

// Function InfoWidgetBASE.InfoWidgetBASE_C.ShowPanel
struct UInfoWidgetBASE_C_ShowPanel_Params
{
	TEnumAsByte<GUI_InfoWidget_PanelTypes_EGUI_InfoWidget_PanelTypes> Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InfoWidgetBASE.InfoWidgetBASE_C.GoIntown
struct UInfoWidgetBASE_C_GoIntown_Params
{
};

// Function InfoWidgetBASE.InfoWidgetBASE_C.GoOutTown
struct UInfoWidgetBASE_C_GoOutTown_Params
{
};

// Function InfoWidgetBASE.InfoWidgetBASE_C.Destruct
struct UInfoWidgetBASE_C_Destruct_Params
{
};

// Function InfoWidgetBASE.InfoWidgetBASE_C.ShowAddSurvCoins
struct UInfoWidgetBASE_C_ShowAddSurvCoins_Params
{
};

// Function InfoWidgetBASE.InfoWidgetBASE_C.ExecuteUbergraph_InfoWidgetBASE
struct UInfoWidgetBASE_C_ExecuteUbergraph_InfoWidgetBASE_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
