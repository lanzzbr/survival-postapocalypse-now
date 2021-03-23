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

// Function SURV_GlobalMenuButton.SURV_GlobalMenuButton_C.SetText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void USURV_GlobalMenuButton_C::STATIC_SetText(const struct FText& Text)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86526);

	USURV_GlobalMenuButton_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuButton.SURV_GlobalMenuButton_C.ConstructIcon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuButton_C::STATIC_ConstructIcon()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86512);

	USURV_GlobalMenuButton_C_ConstructIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuButton.SURV_GlobalMenuButton_C.OnPreviewKeyDown
// (BlueprintCosmetic, Net)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply USURV_GlobalMenuButton_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86510);

	USURV_GlobalMenuButton_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SURV_GlobalMenuButton.SURV_GlobalMenuButton_C.PreConstruct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USURV_GlobalMenuButton_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86508);

	USURV_GlobalMenuButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuButton.SURV_GlobalMenuButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuButton_C::STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86507);

	USURV_GlobalMenuButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuButton.SURV_GlobalMenuButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuButton_C::STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86506);

	USURV_GlobalMenuButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuButton.SURV_GlobalMenuButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuButton_C::STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86505);

	USURV_GlobalMenuButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuButton.SURV_GlobalMenuButton_C.Root_HideConfirm
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Use_Anim                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USURV_GlobalMenuButton_C::STATIC_Root_HideConfirm(bool Use_Anim)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86503);

	USURV_GlobalMenuButton_C_Root_HideConfirm_Params params;
	params.Use_Anim = Use_Anim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuButton.SURV_GlobalMenuButton_C.Root_ShowConfirm
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuButton_C::STATIC_Root_ShowConfirm()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86502);

	USURV_GlobalMenuButton_C_Root_ShowConfirm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuButton.SURV_GlobalMenuButton_C.Root_Set HoveredStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuButton_C::STATIC_Root_Set_HoveredStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86501);

	USURV_GlobalMenuButton_C_Root_Set_HoveredStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuButton.SURV_GlobalMenuButton_C.Root_Set SelectedStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuButton_C::STATIC_Root_Set_SelectedStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86500);

	USURV_GlobalMenuButton_C_Root_Set_SelectedStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuButton.SURV_GlobalMenuButton_C.Root_SetUnselectedStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuButton_C::STATIC_Root_SetUnselectedStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86499);

	USURV_GlobalMenuButton_C_Root_SetUnselectedStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuButton.SURV_GlobalMenuButton_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuButton_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86498);

	USURV_GlobalMenuButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuButton.SURV_GlobalMenuButton_C.BndEvt__YesNoDialog_K2Node_ComponentBoundEvent_5_Click_Yes__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuButton_C::STATIC_BndEvt__YesNoDialog_K2Node_ComponentBoundEvent_5_Click_Yes__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86497);

	USURV_GlobalMenuButton_C_BndEvt__YesNoDialog_K2Node_ComponentBoundEvent_5_Click_Yes__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuButton.SURV_GlobalMenuButton_C.BndEvt__YesNoDialog_K2Node_ComponentBoundEvent_6_Click_No__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuButton_C::STATIC_BndEvt__YesNoDialog_K2Node_ComponentBoundEvent_6_Click_No__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86496);

	USURV_GlobalMenuButton_C_BndEvt__YesNoDialog_K2Node_ComponentBoundEvent_6_Click_No__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuButton.SURV_GlobalMenuButton_C.ExecuteUbergraph_SURV_GlobalMenuButton
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USURV_GlobalMenuButton_C::STATIC_ExecuteUbergraph_SURV_GlobalMenuButton(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86486);

	USURV_GlobalMenuButton_C_ExecuteUbergraph_SURV_GlobalMenuButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuButton.SURV_GlobalMenuButton_C.OnClick_button__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuButton_C::STATIC_OnClick_button__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86485);

	USURV_GlobalMenuButton_C_OnClick_button__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
