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

// Function Surv_Top_List.Surv_Top_List_C.SetTopStringFromJSON
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UTextBlock*              Name_widget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*              ScoreWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                  Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurv_Top_List_C::STATIC_SetTopStringFromJSON(class UTextBlock* Name_widget, class UTextBlock* ScoreWidget, class UImage* Icon, int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(101460);

	USurv_Top_List_C_SetTopStringFromJSON_Params params;
	params.Name_widget = Name_widget;
	params.ScoreWidget = ScoreWidget;
	params.Icon = Icon;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_Top_List.Surv_Top_List_C.UpdateTop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurv_Top_List_C::STATIC_UpdateTop()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(101458);

	USurv_Top_List_C_UpdateTop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_Top_List.Surv_Top_List_C.UpdateTopEvent1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UTextBlock*              NameWidgetRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*              ScoreWidgetRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                  AvatarRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurv_Top_List_C::STATIC_UpdateTopEvent1(class UTextBlock* NameWidgetRef, class UTextBlock* ScoreWidgetRef, class UImage* AvatarRef, int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(101456);

	USurv_Top_List_C_UpdateTopEvent1_Params params;
	params.NameWidgetRef = NameWidgetRef;
	params.ScoreWidgetRef = ScoreWidgetRef;
	params.AvatarRef = AvatarRef;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_Top_List.Surv_Top_List_C.UpdateTopEvent2
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UTextBlock*              NameWidgetRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*              ScoreWidgetRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                  AvatarRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurv_Top_List_C::STATIC_UpdateTopEvent2(class UTextBlock* NameWidgetRef, class UTextBlock* ScoreWidgetRef, class UImage* AvatarRef, int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(101454);

	USurv_Top_List_C_UpdateTopEvent2_Params params;
	params.NameWidgetRef = NameWidgetRef;
	params.ScoreWidgetRef = ScoreWidgetRef;
	params.AvatarRef = AvatarRef;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_Top_List.Surv_Top_List_C.UPDATETOPEVENT3
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UTextBlock*              NameWidgetRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*              ScoreWidgetRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                  AvatarRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurv_Top_List_C::STATIC_UPDATETOPEVENT3(class UTextBlock* NameWidgetRef, class UTextBlock* ScoreWidgetRef, class UImage* AvatarRef, int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(101452);

	USurv_Top_List_C_UPDATETOPEVENT3_Params params;
	params.NameWidgetRef = NameWidgetRef;
	params.ScoreWidgetRef = ScoreWidgetRef;
	params.AvatarRef = AvatarRef;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_Top_List.Surv_Top_List_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurv_Top_List_C::STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(101451);

	USurv_Top_List_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_Top_List.Surv_Top_List_C.ExecuteUbergraph_Surv_Top_List
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurv_Top_List_C::STATIC_ExecuteUbergraph_Surv_Top_List(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(101432);

	USurv_Top_List_C_ExecuteUbergraph_Surv_Top_List_Params params;
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
