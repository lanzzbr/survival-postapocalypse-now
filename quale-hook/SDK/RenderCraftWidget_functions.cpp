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

// Function RenderCraftWidget.RenderCraftWidget_C.OnMouseButtonUp
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply URenderCraftWidget_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69043);

	URenderCraftWidget_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function RenderCraftWidget.RenderCraftWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply URenderCraftWidget_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69038);

	URenderCraftWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function RenderCraftWidget.RenderCraftWidget_C.PreConstruct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URenderCraftWidget_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69026);

	URenderCraftWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RenderCraftWidget.RenderCraftWidget_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void URenderCraftWidget_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69025);

	URenderCraftWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RenderCraftWidget.RenderCraftWidget_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URenderCraftWidget_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69023);

	URenderCraftWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RenderCraftWidget.RenderCraftWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonPressedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void URenderCraftWidget_C::STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69022);

	URenderCraftWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RenderCraftWidget.RenderCraftWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void URenderCraftWidget_C::STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69021);

	URenderCraftWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RenderCraftWidget.RenderCraftWidget_C.OnMouseLeave
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void URenderCraftWidget_C::STATIC_OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69019);

	URenderCraftWidget_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RenderCraftWidget.RenderCraftWidget_C.Reset
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void URenderCraftWidget_C::STATIC_Reset()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69018);

	URenderCraftWidget_C_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RenderCraftWidget.RenderCraftWidget_C.SetMesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void URenderCraftWidget_C::STATIC_SetMesh()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69017);

	URenderCraftWidget_C_SetMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RenderCraftWidget.RenderCraftWidget_C.ExecuteUbergraph_RenderCraftWidget
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URenderCraftWidget_C::STATIC_ExecuteUbergraph_RenderCraftWidget(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69003);

	URenderCraftWidget_C_ExecuteUbergraph_RenderCraftWidget_Params params;
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
