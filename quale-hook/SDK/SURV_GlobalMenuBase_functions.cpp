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

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.UpdatePlayersCount
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuBase_C::STATIC_UpdatePlayersCount()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78479);

	USURV_GlobalMenuBase_C_UpdatePlayersCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.OnMouseWheel
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply USURV_GlobalMenuBase_C::OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78477);

	USURV_GlobalMenuBase_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           InMouseEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply USURV_GlobalMenuBase_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78475);

	USURV_GlobalMenuBase_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InMouseEvent != nullptr)
		*InMouseEvent = params.InMouseEvent;


	return params.ReturnValue;
}


// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.OnMouseButtonDown
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply USURV_GlobalMenuBase_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78473);

	USURV_GlobalMenuBase_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuBase_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78472);

	USURV_GlobalMenuBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.Root_ShowExitMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuBase_C::STATIC_Root_ShowExitMenu()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78669);

	USURV_GlobalMenuBase_C_Root_ShowExitMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.Root_ShowInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuBase_C::STATIC_Root_ShowInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78690);

	USURV_GlobalMenuBase_C_Root_ShowInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.Root_ShowOptions
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuBase_C::STATIC_Root_ShowOptions()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78689);

	USURV_GlobalMenuBase_C_Root_ShowOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_805_OnClick_button__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuBase_C::STATIC_BndEvt__Inventory_K2Node_ComponentBoundEvent_805_OnClick_button__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78471);

	USURV_GlobalMenuBase_C_BndEvt__Inventory_K2Node_ComponentBoundEvent_805_OnClick_button__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.BndEvt__Options_K2Node_ComponentBoundEvent_815_OnClick_button__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuBase_C::STATIC_BndEvt__Options_K2Node_ComponentBoundEvent_815_OnClick_button__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78470);

	USURV_GlobalMenuBase_C_BndEvt__Options_K2Node_ComponentBoundEvent_815_OnClick_button__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.BndEvt__Respawn_K2Node_ComponentBoundEvent_0_OnClick_button__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuBase_C::STATIC_BndEvt__Respawn_K2Node_ComponentBoundEvent_0_OnClick_button__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78469);

	USURV_GlobalMenuBase_C_BndEvt__Respawn_K2Node_ComponentBoundEvent_0_OnClick_button__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.BndEvt__Exit_K2Node_ComponentBoundEvent_32_OnClick_button__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuBase_C::STATIC_BndEvt__Exit_K2Node_ComponentBoundEvent_32_OnClick_button__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78468);

	USURV_GlobalMenuBase_C_BndEvt__Exit_K2Node_ComponentBoundEvent_32_OnClick_button__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.BndEvt__Close_K2Node_ComponentBoundEvent_1_OnClick_button__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuBase_C::STATIC_BndEvt__Close_K2Node_ComponentBoundEvent_1_OnClick_button__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78467);

	USURV_GlobalMenuBase_C_BndEvt__Close_K2Node_ComponentBoundEvent_1_OnClick_button__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.Root_ShowActorCraft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USURV_GlobalMenuBase_C::STATIC_Root_ShowActorCraft(class AActor* Actor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78667);

	USURV_GlobalMenuBase_C_Root_ShowActorCraft_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.RootShowInventory_NoAnim
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuBase_C::STATIC_RootShowInventory_NoAnim()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78666);

	USURV_GlobalMenuBase_C_RootShowInventory_NoAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.Root_MinimalMode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           SetMinimalistic                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USURV_GlobalMenuBase_C::STATIC_Root_MinimalMode(bool SetMinimalistic)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78664);

	USURV_GlobalMenuBase_C_Root_MinimalMode_Params params;
	params.SetMinimalistic = SetMinimalistic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.Root_HideBlur
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USURV_GlobalMenuBase_C::STATIC_Root_HideBlur(bool Hide)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78662);

	USURV_GlobalMenuBase_C_Root_HideBlur_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.Root_RespanwMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuBase_C::STATIC_Root_RespanwMenu()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78661);

	USURV_GlobalMenuBase_C_Root_RespanwMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.Root_OnOpen
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuBase_C::STATIC_Root_OnOpen()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78660);

	USURV_GlobalMenuBase_C_Root_OnOpen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.Root_OnClose
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuBase_C::STATIC_Root_OnClose()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78659);

	USURV_GlobalMenuBase_C_Root_OnClose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.BndEvt__SURV_GlobalMenuExit_K2Node_ComponentBoundEvent_1_ON START EXIT__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_GlobalMenuBase_C::STATIC_BndEvt__SURV_GlobalMenuExit_K2Node_ComponentBoundEvent_1_ON_START_EXIT__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78466);

	USURV_GlobalMenuBase_C_BndEvt__SURV_GlobalMenuExit_K2Node_ComponentBoundEvent_1_ON_START_EXIT__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.ExecuteUbergraph_SURV_GlobalMenuBase
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USURV_GlobalMenuBase_C::STATIC_ExecuteUbergraph_SURV_GlobalMenuBase(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78464);

	USURV_GlobalMenuBase_C_ExecuteUbergraph_SURV_GlobalMenuBase_Params params;
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
