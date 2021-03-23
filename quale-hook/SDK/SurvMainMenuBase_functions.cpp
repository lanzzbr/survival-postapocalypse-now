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

// Function SurvMainMenuBase.SurvMainMenuBase_C.OnKeyDown
// (BlueprintCosmetic, Net)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply USurvMainMenuBase_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81158);

	USurvMainMenuBase_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SurvMainMenuBase.SurvMainMenuBase_C.SetMoneyText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            MoneysCount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvMainMenuBase_C::STATIC_SetMoneyText(int MoneysCount)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81156);

	USurvMainMenuBase_C_SetMoneyText_Params params;
	params.MoneysCount = MoneysCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.ControllStat
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_ControllStat()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81122);

	USurvMainMenuBase_C_ControllStat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.ShowMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class USurvMainMenuButton_C*   Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*             panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvMainMenuBase_C::STATIC_ShowMenu(class USurvMainMenuButton_C* Button, class UUserWidget* panel)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81120);

	USurvMainMenuBase_C_ShowMenu_Params params;
	params.Button = Button;
	params.panel = panel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.OnMouseWheel
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply USurvMainMenuBase_C::OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81118);

	USurvMainMenuBase_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function SurvMainMenuBase.SurvMainMenuBase_C.HideAllPanels
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_HideAllPanels()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81117);

	USurvMainMenuBase_C_HideAllPanels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.UnselectAll
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_UnselectAll()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81115);

	USurvMainMenuBase_C_UnselectAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           InMouseEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply USurvMainMenuBase_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81113);

	USurvMainMenuBase_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InMouseEvent != nullptr)
		*InMouseEvent = params.InMouseEvent;


	return params.ReturnValue;
}


// Function SurvMainMenuBase.SurvMainMenuBase_C.OnMouseButtonDown
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply USurvMainMenuBase_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81111);

	USurvMainMenuBase_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function SurvMainMenuBase.SurvMainMenuBase_C.BndEvt__Home_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_BndEvt__Home_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81110);

	USurvMainMenuBase_C_BndEvt__Home_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.BndEvt__Exit_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_BndEvt__Exit_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81109);

	USurvMainMenuBase_C_BndEvt__Exit_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.BndEvt__Trade_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_BndEvt__Trade_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81108);

	USurvMainMenuBase_C_BndEvt__Trade_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_BndEvt__ServerList_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81107);

	USurvMainMenuBase_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_57_OnButtonHoverEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_57_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81106);

	USurvMainMenuBase_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_57_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81105);

	USurvMainMenuBase_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.BndEvt__Button_Settings_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_BndEvt__Button_Settings_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81104);

	USurvMainMenuBase_C_BndEvt__Button_Settings_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.BndEvt__Button_Settings_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_BndEvt__Button_Settings_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81103);

	USurvMainMenuBase_C_BndEvt__Button_Settings_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.BndEvt__Character_K2Node_ComponentBoundEvent_63_OnClick__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_BndEvt__Character_K2Node_ComponentBoundEvent_63_OnClick__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81102);

	USurvMainMenuBase_C_BndEvt__Character_K2Node_ComponentBoundEvent_63_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.GetPlayerInfo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_GetPlayerInfo()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81101);

	USurvMainMenuBase_C_GetPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_BndEvt__OptionsButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81100);

	USurvMainMenuBase_C_BndEvt__OptionsButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.BndEvt__SurvMainMenuButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_BndEvt__SurvMainMenuButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81099);

	USurvMainMenuBase_C_BndEvt__SurvMainMenuButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.BndEvt__CheatButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_BndEvt__CheatButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81098);

	USurvMainMenuBase_C_BndEvt__CheatButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.ShowTradeInfo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_TradeStr             TradeStr                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void USurvMainMenuBase_C::STATIC_ShowTradeInfo(const struct FZ_TradeStr& TradeStr)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81096);

	USurvMainMenuBase_C_ShowTradeInfo_Params params;
	params.TradeStr = TradeStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81095);

	USurvMainMenuBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.BndEvt__Surv_GET_GameMODe_K2Node_ComponentBoundEvent_6_SetClassical__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_BndEvt__Surv_GET_GameMODe_K2Node_ComponentBoundEvent_6_SetClassical__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81094);

	USurvMainMenuBase_C_BndEvt__Surv_GET_GameMODe_K2Node_ComponentBoundEvent_6_SetClassical__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.BndEvt__Surv_GET_GameMODe_K2Node_ComponentBoundEvent_7_SetAction__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_BndEvt__Surv_GET_GameMODe_K2Node_ComponentBoundEvent_7_SetAction__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81093);

	USurvMainMenuBase_C_BndEvt__Surv_GET_GameMODe_K2Node_ComponentBoundEvent_7_SetAction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.NO_DB_CONNECT
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_NO_DB_CONNECT()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81092);

	USurvMainMenuBase_C_NO_DB_CONNECT_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.UPDATE_CLASSICAL_INFORMATION
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_UPDATE_CLASSICAL_INFORMATION()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81091);

	USurvMainMenuBase_C_UPDATE_CLASSICAL_INFORMATION_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.BndEvt__ClassicalHome_K2Node_ComponentBoundEvent_123_OnClick__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_BndEvt__ClassicalHome_K2Node_ComponentBoundEvent_123_OnClick__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81090);

	USurvMainMenuBase_C_BndEvt__ClassicalHome_K2Node_ComponentBoundEvent_123_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.BndEvt__ClassicServers_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_BndEvt__ClassicServers_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81089);

	USurvMainMenuBase_C_BndEvt__ClassicServers_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.BndEvt__Tutorial_Button_K2Node_ComponentBoundEvent_63_OnClick__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_BndEvt__Tutorial_Button_K2Node_ComponentBoundEvent_63_OnClick__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81088);

	USurvMainMenuBase_C_BndEvt__Tutorial_Button_K2Node_ComponentBoundEvent_63_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.ShowHome
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_ShowHome()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81087);

	USurvMainMenuBase_C_ShowHome_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.OPEN_CLASSICAL_EVENT
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvMainMenuBase_C::STATIC_OPEN_CLASSICAL_EVENT()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81086);

	USurvMainMenuBase_C_OPEN_CLASSICAL_EVENT_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvMainMenuBase.SurvMainMenuBase_C.ExecuteUbergraph_SurvMainMenuBase
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvMainMenuBase_C::STATIC_ExecuteUbergraph_SurvMainMenuBase(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81084);

	USurvMainMenuBase_C_ExecuteUbergraph_SurvMainMenuBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
