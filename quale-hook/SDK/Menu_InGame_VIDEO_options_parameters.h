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

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.SettingChanges
struct UMenu_InGame_VIDEO_options_C_SettingChanges_Params
{
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.StepToResscale
struct UMenu_InGame_VIDEO_options_C_StepToResscale_Params
{
	int                                                Step;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ResScale;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.ResScaleToStep
struct UMenu_InGame_VIDEO_options_C_ResScaleToStep_Params
{
	float                                              ResScale;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Step;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.OnMouseWheel
struct UMenu_InGame_VIDEO_options_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.GetSettings
struct UMenu_InGame_VIDEO_options_C_GetSettings_Params
{
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.Save
struct UMenu_InGame_VIDEO_options_C_Save_Params
{
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.ApplyVideoPresset
struct UMenu_InGame_VIDEO_options_C_ApplyVideoPresset_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.PreConstruct
struct UMenu_InGame_VIDEO_options_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.Construct
struct UMenu_InGame_VIDEO_options_C_Construct_Params
{
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__Accept_K2Node_ComponentBoundEvent_54_OnClick__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_BndEvt__Accept_K2Node_ComponentBoundEvent_54_OnClick__DelegateSignature_Params
{
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__Back_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_BndEvt__Back_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params
{
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_BndEvt__Button_5_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_216_OnButtonClickedEvent__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_BndEvt__Button_6_K2Node_ComponentBoundEvent_216_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__ComboBoxString_49_K2Node_ComponentBoundEvent_262_OnSelectionChangedEvent__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_BndEvt__ComboBoxString_49_K2Node_ComponentBoundEvent_262_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.On_Open
struct UMenu_InGame_VIDEO_options_C_On_Open_Params
{
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__WindowedCB_K2Node_ComponentBoundEvent_28_OnCheckBoxComponentStateChanged__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_BndEvt__WindowedCB_K2Node_ComponentBoundEvent_28_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__Postprocess_K2Node_ComponentBoundEvent_4_ChangeStep__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_BndEvt__Postprocess_K2Node_ComponentBoundEvent_4_ChangeStep__DelegateSignature_Params
{
	int                                                Step;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__ShadowQuality_K2Node_ComponentBoundEvent_5_ChangeStep__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_BndEvt__ShadowQuality_K2Node_ComponentBoundEvent_5_ChangeStep__DelegateSignature_Params
{
	int                                                Step;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__Texture_K2Node_ComponentBoundEvent_6_ChangeStep__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_BndEvt__Texture_K2Node_ComponentBoundEvent_6_ChangeStep__DelegateSignature_Params
{
	int                                                Step;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__alising_K2Node_ComponentBoundEvent_7_ChangeStep__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_BndEvt__alising_K2Node_ComponentBoundEvent_7_ChangeStep__DelegateSignature_Params
{
	int                                                Step;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__distance_K2Node_ComponentBoundEvent_8_ChangeStep__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_BndEvt__distance_K2Node_ComponentBoundEvent_8_ChangeStep__DelegateSignature_Params
{
	int                                                Step;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__effects_K2Node_ComponentBoundEvent_9_ChangeStep__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_BndEvt__effects_K2Node_ComponentBoundEvent_9_ChangeStep__DelegateSignature_Params
{
	int                                                Step;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__FoliageBar_K2Node_ComponentBoundEvent_10_ChangeStep__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_BndEvt__FoliageBar_K2Node_ComponentBoundEvent_10_ChangeStep__DelegateSignature_Params
{
	int                                                Step;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__resolutionScale_K2Node_ComponentBoundEvent_11_ChangeStep__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_BndEvt__resolutionScale_K2Node_ComponentBoundEvent_11_ChangeStep__DelegateSignature_Params
{
	int                                                Step;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__CheckBox_VSync_K2Node_ComponentBoundEvent_2024_OnCheckBoxComponentStateChanged__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_BndEvt__CheckBox_VSync_K2Node_ComponentBoundEvent_2024_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__Brightness_K2Node_ComponentBoundEvent_50_ChangeStep__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_BndEvt__Brightness_K2Node_ComponentBoundEvent_50_ChangeStep__DelegateSignature_Params
{
	int                                                Step;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.ApplySettings
struct UMenu_InGame_VIDEO_options_C_ApplySettings_Params
{
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__FOV_K2Node_ComponentBoundEvent_0_ChangeDynamic__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_BndEvt__FOV_K2Node_ComponentBoundEvent_0_ChangeDynamic__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__FOV_K2Node_ComponentBoundEvent_2_SliderMouseDown__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_BndEvt__FOV_K2Node_ComponentBoundEvent_2_SliderMouseDown__DelegateSignature_Params
{
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__FOV_K2Node_ComponentBoundEvent_3_SliderMouseUp__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_BndEvt__FOV_K2Node_ComponentBoundEvent_3_SliderMouseUp__DelegateSignature_Params
{
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__FrameRateSlider_K2Node_ComponentBoundEvent_1_ChangeDynamic__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_BndEvt__FrameRateSlider_K2Node_ComponentBoundEvent_1_ChangeDynamic__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.ExecuteUbergraph_Menu_InGame_VIDEO_options
struct UMenu_InGame_VIDEO_options_C_ExecuteUbergraph_Menu_InGame_VIDEO_options_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.ShowApplyButton__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_ShowApplyButton__DelegateSignature_Params
{
};

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.HideApplyButton__DelegateSignature
struct UMenu_InGame_VIDEO_options_C_HideApplyButton__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
