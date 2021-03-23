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

// Function MessageWidgetBASE.MessageWidgetBASE_C.Construct
struct UMessageWidgetBASE_C_Construct_Params
{
};

// Function MessageWidgetBASE.MessageWidgetBASE_C.ShowHintAction
struct UMessageWidgetBASE_C_ShowHintAction_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MessageWidgetBASE.MessageWidgetBASE_C.ShowLevelUp
struct UMessageWidgetBASE_C_ShowLevelUp_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MessageWidgetBASE.MessageWidgetBASE_C.ShowNoCraft
struct UMessageWidgetBASE_C_ShowNoCraft_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MessageWidgetBASE.MessageWidgetBASE_C.ShowZoneMessage
struct UMessageWidgetBASE_C_ShowZoneMessage_Params
{
	TEnumAsByte<GUI_ZoneMessageType_EGUI_ZoneMessageType> ZoneMessageType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACv2_ScenarioZone_C*                         Zone;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MessageWidgetBASE.MessageWidgetBASE_C.ShowCustomMessage
struct UMessageWidgetBASE_C_ShowCustomMessage_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Tune;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MessageWidgetBASE.MessageWidgetBASE_C.ShowEvacuation
struct UMessageWidgetBASE_C_ShowEvacuation_Params
{
};

// Function MessageWidgetBASE.MessageWidgetBASE_C.ShowGlobalMessage
struct UMessageWidgetBASE_C_ShowGlobalMessage_Params
{
	struct FText                                       InText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Speed_0_2_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MessageWidgetBASE.MessageWidgetBASE_C.ExecuteUbergraph_MessageWidgetBASE
struct UMessageWidgetBASE_C_ExecuteUbergraph_MessageWidgetBASE_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
