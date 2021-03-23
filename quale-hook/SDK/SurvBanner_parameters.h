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

// Function SurvBanner.SurvBanner_C.OnMouseButtonDown
struct USurvBanner_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function SurvBanner.SurvBanner_C.DrawBanner
struct USurvBanner_C_DrawBanner_Params
{
	struct FSurv_Banner_Str                            BannerStr;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvBanner.SurvBanner_C.ShowMe
struct USurvBanner_C_ShowMe_Params
{
};

// Function SurvBanner.SurvBanner_C.HideMe
struct USurvBanner_C_HideMe_Params
{
};

// Function SurvBanner.SurvBanner_C.SetVisible
struct USurvBanner_C_SetVisible_Params
{
};

// Function SurvBanner.SurvBanner_C.ExecuteUbergraph_SurvBanner
struct USurvBanner_C_ExecuteUbergraph_SurvBanner_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
