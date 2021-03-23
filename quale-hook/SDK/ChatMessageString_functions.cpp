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

// Function ChatMessageString.ChatMessageString_C.CorrectNIckname
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            NickLength                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   NewParam                       (Parm, OutParm)
void UChatMessageString_C::STATIC_CorrectNIckname(struct FText* InText, int NickLength, struct FText* NewParam)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(42991);

	UChatMessageString_C_CorrectNIckname_Params params;
	params.NickLength = NickLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InText != nullptr)
		*InText = params.InText;
	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function ChatMessageString.ChatMessageString_C.DrawString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGUI_ChatMessageStructure ChatStruct                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           ShowMute                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChatWidgetBASE_C*       ChatWidgetBASE                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatMessageString_C::STATIC_DrawString(const struct FGUI_ChatMessageStructure& ChatStruct, bool ShowMute, class UChatWidgetBASE_C* ChatWidgetBASE)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(42989);

	UChatMessageString_C_DrawString_Params params;
	params.ChatStruct = ChatStruct;
	params.ShowMute = ShowMute;
	params.ChatWidgetBASE = ChatWidgetBASE;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatMessageString.ChatMessageString_C.BndEvt__Button_116_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChatMessageString_C::STATIC_BndEvt__Button_116_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(42988);

	UChatMessageString_C_BndEvt__Button_116_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatMessageString.ChatMessageString_C.SetMutedStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsMuted                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChatMessageString_C::STATIC_SetMutedStyle(bool IsMuted)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(42986);

	UChatMessageString_C_SetMutedStyle_Params params;
	params.IsMuted = IsMuted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatMessageString.ChatMessageString_C.ExecuteUbergraph_ChatMessageString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatMessageString_C::STATIC_ExecuteUbergraph_ChatMessageString(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(42974);

	UChatMessageString_C_ExecuteUbergraph_ChatMessageString_Params params;
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
