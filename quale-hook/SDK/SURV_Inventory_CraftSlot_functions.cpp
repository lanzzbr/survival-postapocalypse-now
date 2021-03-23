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

// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.ConvertToMyString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 SourceString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 NewString                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void USURV_Inventory_CraftSlot_C::STATIC_ConvertToMyString(const struct FString& SourceString, struct FString* NewString)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81596);

	USURV_Inventory_CraftSlot_C_ConvertToMyString_Params params;
	params.SourceString = SourceString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewString != nullptr)
		*NewString = params.NewString;

}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.Get_RANK_Lock_Visibility_1
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility USURV_Inventory_CraftSlot_C::Get_RANK_Lock_Visibility_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81593);

	USURV_Inventory_CraftSlot_C_Get_RANK_Lock_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.GetVisibility_4
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility USURV_Inventory_CraftSlot_C::GetVisibility_4()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81590);

	USURV_Inventory_CraftSlot_C_GetVisibility_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.GetVisibility_Progress
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility USURV_Inventory_CraftSlot_C::GetVisibility_Progress()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81587);

	USURV_Inventory_CraftSlot_C_GetVisibility_Progress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.GetVisibilityButton
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility USURV_Inventory_CraftSlot_C::GetVisibilityButton()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81584);

	USURV_Inventory_CraftSlot_C_GetVisibilityButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.CalculatePercent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_Inventory_CraftSlot_C::STATIC_CalculatePercent()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81582);

	USURV_Inventory_CraftSlot_C_CalculatePercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.Get_PercentText_Visibility_1
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility USURV_Inventory_CraftSlot_C::Get_PercentText_Visibility_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81579);

	USURV_Inventory_CraftSlot_C_Get_PercentText_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.GetVisibility_1
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility USURV_Inventory_CraftSlot_C::GetVisibility_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81576);

	USURV_Inventory_CraftSlot_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.GetText_1
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText USURV_Inventory_CraftSlot_C::GetText_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81574);

	USURV_Inventory_CraftSlot_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.GetShadowColorAndOpacity_1
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor USURV_Inventory_CraftSlot_C::GetShadowColorAndOpacity_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81572);

	USURV_Inventory_CraftSlot_C_GetShadowColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.OnMouseButtonDown
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply USURV_Inventory_CraftSlot_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81570);

	USURV_Inventory_CraftSlot_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.GetFillColorAndOpacity_2
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor USURV_Inventory_CraftSlot_C::GetFillColorAndOpacity_2()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81568);

	USURV_Inventory_CraftSlot_C_GetFillColorAndOpacity_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.GetPercent_1
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float USURV_Inventory_CraftSlot_C::GetPercent_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81566);

	USURV_Inventory_CraftSlot_C_GetPercent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_Inventory_CraftSlot_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81565);

	USURV_Inventory_CraftSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.OnMouseEnter
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void USURV_Inventory_CraftSlot_C::STATIC_OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81563);

	USURV_Inventory_CraftSlot_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.OnMouseLeave
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void USURV_Inventory_CraftSlot_C::STATIC_OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81561);

	USURV_Inventory_CraftSlot_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.MouseDown
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_Inventory_CraftSlot_C::STATIC_MouseDown()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81560);

	USURV_Inventory_CraftSlot_C_MouseDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USURV_Inventory_CraftSlot_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81558);

	USURV_Inventory_CraftSlot_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_Inventory_CraftSlot_C::STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81557);

	USURV_Inventory_CraftSlot_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_Inventory_CraftSlot_C::STATIC_BndEvt__Button_2_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81556);

	USURV_Inventory_CraftSlot_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.RootShowThrober
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_Inventory_CraftSlot_C::STATIC_RootShowThrober()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81555);

	USURV_Inventory_CraftSlot_C_RootShowThrober_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.RootDrawCard
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_Inventory_CraftSlot_C::STATIC_RootDrawCard()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81554);

	USURV_Inventory_CraftSlot_C_RootDrawCard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.RootHideThrober
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_Inventory_CraftSlot_C::STATIC_RootHideThrober()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81553);

	USURV_Inventory_CraftSlot_C_RootHideThrober_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.RootClearSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_Inventory_CraftSlot_C::STATIC_RootClearSlots()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81552);

	USURV_Inventory_CraftSlot_C_RootClearSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C.ExecuteUbergraph_SURV_Inventory_CraftSlot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USURV_Inventory_CraftSlot_C::STATIC_ExecuteUbergraph_SURV_Inventory_CraftSlot(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81550);

	USURV_Inventory_CraftSlot_C_ExecuteUbergraph_SURV_Inventory_CraftSlot_Params params;
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
