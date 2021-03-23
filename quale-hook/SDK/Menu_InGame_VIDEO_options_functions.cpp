// Name: ANUSGAME, Version: 4.18

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.SettingChanges
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_InGame_VIDEO_options_C::STATIC_SettingChanges()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99999);

	UMenu_InGame_VIDEO_options_C_SettingChanges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.StepToResscale
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ResScale                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_InGame_VIDEO_options_C::STATIC_StepToResscale(int Step, float* ResScale)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99982);

	UMenu_InGame_VIDEO_options_C_StepToResscale_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResScale != nullptr)
		*ResScale = params.ResScale;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.ResScaleToStep
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          ResScale                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Step                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_InGame_VIDEO_options_C::STATIC_ResScaleToStep(float ResScale, int* Step)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99976);

	UMenu_InGame_VIDEO_options_C_ResScaleToStep_Params params;
	params.ResScale = ResScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Step != nullptr)
		*Step = params.Step;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.OnMouseWheel
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UMenu_InGame_VIDEO_options_C::OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99974);

	UMenu_InGame_VIDEO_options_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.GetSettings
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_InGame_VIDEO_options_C::STATIC_GetSettings()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99971);

	UMenu_InGame_VIDEO_options_C_GetSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.Save
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_InGame_VIDEO_options_C::STATIC_Save()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99969);

	UMenu_InGame_VIDEO_options_C_Save_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.ApplyVideoPresset
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_InGame_VIDEO_options_C::STATIC_ApplyVideoPresset(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99943);

	UMenu_InGame_VIDEO_options_C_ApplyVideoPresset_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.PreConstruct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMenu_InGame_VIDEO_options_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99941);

	UMenu_InGame_VIDEO_options_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_InGame_VIDEO_options_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99940);

	UMenu_InGame_VIDEO_options_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__Accept_K2Node_ComponentBoundEvent_54_OnClick__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_InGame_VIDEO_options_C::STATIC_BndEvt__Accept_K2Node_ComponentBoundEvent_54_OnClick__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99939);

	UMenu_InGame_VIDEO_options_C_BndEvt__Accept_K2Node_ComponentBoundEvent_54_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__Back_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_InGame_VIDEO_options_C::STATIC_BndEvt__Back_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99938);

	UMenu_InGame_VIDEO_options_C_BndEvt__Back_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_InGame_VIDEO_options_C::STATIC_BndEvt__Button_2_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99937);

	UMenu_InGame_VIDEO_options_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_InGame_VIDEO_options_C::STATIC_BndEvt__Button_5_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99936);

	UMenu_InGame_VIDEO_options_C_BndEvt__Button_5_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_216_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_InGame_VIDEO_options_C::STATIC_BndEvt__Button_6_K2Node_ComponentBoundEvent_216_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99935);

	UMenu_InGame_VIDEO_options_C_BndEvt__Button_6_K2Node_ComponentBoundEvent_216_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__ComboBoxString_49_K2Node_ComponentBoundEvent_262_OnSelectionChangedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<SlateCore_ESelectInfo> SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_InGame_VIDEO_options_C::STATIC_BndEvt__ComboBoxString_49_K2Node_ComponentBoundEvent_262_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99933);

	UMenu_InGame_VIDEO_options_C_BndEvt__ComboBoxString_49_K2Node_ComponentBoundEvent_262_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.On_Open
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_InGame_VIDEO_options_C::STATIC_On_Open()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99932);

	UMenu_InGame_VIDEO_options_C_On_Open_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__WindowedCB_K2Node_ComponentBoundEvent_28_OnCheckBoxComponentStateChanged__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMenu_InGame_VIDEO_options_C::STATIC_BndEvt__WindowedCB_K2Node_ComponentBoundEvent_28_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99930);

	UMenu_InGame_VIDEO_options_C_BndEvt__WindowedCB_K2Node_ComponentBoundEvent_28_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__Postprocess_K2Node_ComponentBoundEvent_4_ChangeStep__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_InGame_VIDEO_options_C::STATIC_BndEvt__Postprocess_K2Node_ComponentBoundEvent_4_ChangeStep__DelegateSignature(int Step)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99928);

	UMenu_InGame_VIDEO_options_C_BndEvt__Postprocess_K2Node_ComponentBoundEvent_4_ChangeStep__DelegateSignature_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__ShadowQuality_K2Node_ComponentBoundEvent_5_ChangeStep__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_InGame_VIDEO_options_C::STATIC_BndEvt__ShadowQuality_K2Node_ComponentBoundEvent_5_ChangeStep__DelegateSignature(int Step)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99926);

	UMenu_InGame_VIDEO_options_C_BndEvt__ShadowQuality_K2Node_ComponentBoundEvent_5_ChangeStep__DelegateSignature_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__Texture_K2Node_ComponentBoundEvent_6_ChangeStep__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_InGame_VIDEO_options_C::STATIC_BndEvt__Texture_K2Node_ComponentBoundEvent_6_ChangeStep__DelegateSignature(int Step)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99924);

	UMenu_InGame_VIDEO_options_C_BndEvt__Texture_K2Node_ComponentBoundEvent_6_ChangeStep__DelegateSignature_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__alising_K2Node_ComponentBoundEvent_7_ChangeStep__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_InGame_VIDEO_options_C::STATIC_BndEvt__alising_K2Node_ComponentBoundEvent_7_ChangeStep__DelegateSignature(int Step)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99922);

	UMenu_InGame_VIDEO_options_C_BndEvt__alising_K2Node_ComponentBoundEvent_7_ChangeStep__DelegateSignature_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__distance_K2Node_ComponentBoundEvent_8_ChangeStep__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_InGame_VIDEO_options_C::STATIC_BndEvt__distance_K2Node_ComponentBoundEvent_8_ChangeStep__DelegateSignature(int Step)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99920);

	UMenu_InGame_VIDEO_options_C_BndEvt__distance_K2Node_ComponentBoundEvent_8_ChangeStep__DelegateSignature_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__effects_K2Node_ComponentBoundEvent_9_ChangeStep__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_InGame_VIDEO_options_C::STATIC_BndEvt__effects_K2Node_ComponentBoundEvent_9_ChangeStep__DelegateSignature(int Step)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99918);

	UMenu_InGame_VIDEO_options_C_BndEvt__effects_K2Node_ComponentBoundEvent_9_ChangeStep__DelegateSignature_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__FoliageBar_K2Node_ComponentBoundEvent_10_ChangeStep__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_InGame_VIDEO_options_C::STATIC_BndEvt__FoliageBar_K2Node_ComponentBoundEvent_10_ChangeStep__DelegateSignature(int Step)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99916);

	UMenu_InGame_VIDEO_options_C_BndEvt__FoliageBar_K2Node_ComponentBoundEvent_10_ChangeStep__DelegateSignature_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__resolutionScale_K2Node_ComponentBoundEvent_11_ChangeStep__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_InGame_VIDEO_options_C::STATIC_BndEvt__resolutionScale_K2Node_ComponentBoundEvent_11_ChangeStep__DelegateSignature(int Step)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99914);

	UMenu_InGame_VIDEO_options_C_BndEvt__resolutionScale_K2Node_ComponentBoundEvent_11_ChangeStep__DelegateSignature_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__CheckBox_VSync_K2Node_ComponentBoundEvent_2024_OnCheckBoxComponentStateChanged__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMenu_InGame_VIDEO_options_C::STATIC_BndEvt__CheckBox_VSync_K2Node_ComponentBoundEvent_2024_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99912);

	UMenu_InGame_VIDEO_options_C_BndEvt__CheckBox_VSync_K2Node_ComponentBoundEvent_2024_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__Brightness_K2Node_ComponentBoundEvent_50_ChangeStep__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_InGame_VIDEO_options_C::STATIC_BndEvt__Brightness_K2Node_ComponentBoundEvent_50_ChangeStep__DelegateSignature(int Step)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99910);

	UMenu_InGame_VIDEO_options_C_BndEvt__Brightness_K2Node_ComponentBoundEvent_50_ChangeStep__DelegateSignature_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.ApplySettings
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_InGame_VIDEO_options_C::STATIC_ApplySettings()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99909);

	UMenu_InGame_VIDEO_options_C_ApplySettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__FOV_K2Node_ComponentBoundEvent_0_ChangeDynamic__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_InGame_VIDEO_options_C::STATIC_BndEvt__FOV_K2Node_ComponentBoundEvent_0_ChangeDynamic__DelegateSignature(float Value)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99907);

	UMenu_InGame_VIDEO_options_C_BndEvt__FOV_K2Node_ComponentBoundEvent_0_ChangeDynamic__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__FOV_K2Node_ComponentBoundEvent_2_SliderMouseDown__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_InGame_VIDEO_options_C::STATIC_BndEvt__FOV_K2Node_ComponentBoundEvent_2_SliderMouseDown__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99906);

	UMenu_InGame_VIDEO_options_C_BndEvt__FOV_K2Node_ComponentBoundEvent_2_SliderMouseDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__FOV_K2Node_ComponentBoundEvent_3_SliderMouseUp__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_InGame_VIDEO_options_C::STATIC_BndEvt__FOV_K2Node_ComponentBoundEvent_3_SliderMouseUp__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99905);

	UMenu_InGame_VIDEO_options_C_BndEvt__FOV_K2Node_ComponentBoundEvent_3_SliderMouseUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.BndEvt__FrameRateSlider_K2Node_ComponentBoundEvent_1_ChangeDynamic__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_InGame_VIDEO_options_C::STATIC_BndEvt__FrameRateSlider_K2Node_ComponentBoundEvent_1_ChangeDynamic__DelegateSignature(float Value)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99903);

	UMenu_InGame_VIDEO_options_C_BndEvt__FrameRateSlider_K2Node_ComponentBoundEvent_1_ChangeDynamic__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.ExecuteUbergraph_Menu_InGame_VIDEO_options
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_InGame_VIDEO_options_C::STATIC_ExecuteUbergraph_Menu_InGame_VIDEO_options(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99899);

	UMenu_InGame_VIDEO_options_C_ExecuteUbergraph_Menu_InGame_VIDEO_options_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.ShowApplyButton__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_InGame_VIDEO_options_C::STATIC_ShowApplyButton__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99898);

	UMenu_InGame_VIDEO_options_C_ShowApplyButton__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C.HideApplyButton__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_InGame_VIDEO_options_C::STATIC_HideApplyButton__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(99897);

	UMenu_InGame_VIDEO_options_C_HideApplyButton__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
