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

// Function SettingsSlider.SettingsSlider_C.PreConstruct
struct USettingsSlider_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SettingsSlider.SettingsSlider_C.Tick
struct USettingsSlider_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsSlider.SettingsSlider_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
struct USettingsSlider_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsSlider.SettingsSlider_C.SetStep
struct USettingsSlider_C_SetStep_Params
{
	int                                                Step;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsSlider.SettingsSlider_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct USettingsSlider_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SettingsSlider.SettingsSlider_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct USettingsSlider_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SettingsSlider.SettingsSlider_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct USettingsSlider_C_BndEvt__Button_3_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SettingsSlider.SettingsSlider_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct USettingsSlider_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SettingsSlider.SettingsSlider_C.SetSelectedStyle
struct USettingsSlider_C_SetSelectedStyle_Params
{
	int                                                Step;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsSlider.SettingsSlider_C.SetColor
struct USettingsSlider_C_SetColor_Params
{
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsSlider.SettingsSlider_C.MoveDynamic
struct USettingsSlider_C_MoveDynamic_Params
{
};

// Function SettingsSlider.SettingsSlider_C.SetDynamycPosition
struct USettingsSlider_C_SetDynamycPosition_Params
{
	float                                              PlayerValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsSlider.SettingsSlider_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature
struct USettingsSlider_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function SettingsSlider.SettingsSlider_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
struct USettingsSlider_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function SettingsSlider.SettingsSlider_C.ExecuteUbergraph_SettingsSlider
struct USettingsSlider_C_ExecuteUbergraph_SettingsSlider_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsSlider.SettingsSlider_C.SliderMouseUp__DelegateSignature
struct USettingsSlider_C_SliderMouseUp__DelegateSignature_Params
{
};

// Function SettingsSlider.SettingsSlider_C.SliderMouseDown__DelegateSignature
struct USettingsSlider_C_SliderMouseDown__DelegateSignature_Params
{
};

// Function SettingsSlider.SettingsSlider_C.ChangeDynamic__DelegateSignature
struct USettingsSlider_C_ChangeDynamic__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsSlider.SettingsSlider_C.ChangeStep__DelegateSignature
struct USettingsSlider_C_ChangeStep__DelegateSignature_Params
{
	int                                                Step;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
