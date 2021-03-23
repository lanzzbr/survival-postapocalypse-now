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

// Function RenderWidget.RenderWidget_C.OnMouseButtonUp
struct URenderWidget_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function RenderWidget.RenderWidget_C.OnMouseButtonDown
struct URenderWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function RenderWidget.RenderWidget_C.Construct
struct URenderWidget_C_Construct_Params
{
};

// Function RenderWidget.RenderWidget_C.Tick
struct URenderWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RenderWidget.RenderWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonPressedEvent__DelegateSignature
struct URenderWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function RenderWidget.RenderWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
struct URenderWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function RenderWidget.RenderWidget_C.OnMouseLeave
struct URenderWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function RenderWidget.RenderWidget_C.Reset
struct URenderWidget_C_Reset_Params
{
};

// Function RenderWidget.RenderWidget_C.ExecuteUbergraph_RenderWidget
struct URenderWidget_C_ExecuteUbergraph_RenderWidget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
