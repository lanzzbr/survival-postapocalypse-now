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

// Function ChatWidgetBASE.ChatWidgetBASE_C.MutePlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   PlayerNick                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Mute                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChatWidgetBASE_C::STATIC_MutePlayer(const struct FText& PlayerNick, bool Mute)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43499);

	UChatWidgetBASE_C_MutePlayer_Params params;
	params.PlayerNick = PlayerNick;
	params.Mute = Mute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWidgetBASE.ChatWidgetBASE_C.EncryptOnClient
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           LocalEncrypt1                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChatWidgetBASE_C::STATIC_EncryptOnClient(const struct FText& Text, bool* LocalEncrypt1)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43482);

	UChatWidgetBASE_C_EncryptOnClient_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LocalEncrypt1 != nullptr)
		*LocalEncrypt1 = params.LocalEncrypt1;

}


// Function ChatWidgetBASE.ChatWidgetBASE_C.SelectButton
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<GUI_ChatMessageType_EGUI_ChatMessageType> CurrentMessageType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatWidgetBASE_C::STATIC_SelectButton(TEnumAsByte<GUI_ChatMessageType_EGUI_ChatMessageType> CurrentMessageType)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43480);

	UChatWidgetBASE_C_SelectButton_Params params;
	params.CurrentMessageType = CurrentMessageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWidgetBASE.ChatWidgetBASE_C.Get_EditableTextBoxCHAT_HintText_1
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UChatWidgetBASE_C::Get_EditableTextBoxCHAT_HintText_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43478);

	UChatWidgetBASE_C_Get_EditableTextBoxCHAT_HintText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChatWidgetBASE.ChatWidgetBASE_C.GetColorAndOpacity_3
// ()
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UChatWidgetBASE_C::GetColorAndOpacity_3()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43476);

	UChatWidgetBASE_C_GetColorAndOpacity_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChatWidgetBASE.ChatWidgetBASE_C.GetColorAndOpacity_2
// ()
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UChatWidgetBASE_C::GetColorAndOpacity_2()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43474);

	UChatWidgetBASE_C_GetColorAndOpacity_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChatWidgetBASE.ChatWidgetBASE_C.GetColorAndOpacity_1
// ()
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UChatWidgetBASE_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43472);

	UChatWidgetBASE_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChatWidgetBASE.ChatWidgetBASE_C.SetMouseOnWidget
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChatWidgetBASE_C::STATIC_SetMouseOnWidget()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43470);

	UChatWidgetBASE_C_SetMouseOnWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWidgetBASE.ChatWidgetBASE_C.SetbuttonStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UButton*                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<SlateCore_ESlateBrushDrawType> Draw_As                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatWidgetBASE_C::STATIC_SetbuttonStyle(class UButton* Target, TEnumAsByte<SlateCore_ESlateBrushDrawType> Draw_As)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43468);

	UChatWidgetBASE_C_SetbuttonStyle_Params params;
	params.Target = Target;
	params.Draw_As = Draw_As;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWidgetBASE.ChatWidgetBASE_C.AddChatMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGUI_ChatMessageStructure ChatStr                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UChatWidgetBASE_C::STATIC_AddChatMessage(const struct FGUI_ChatMessageStructure& ChatStr)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43466);

	UChatWidgetBASE_C_AddChatMessage_Params params;
	params.ChatStr = ChatStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWidgetBASE.ChatWidgetBASE_C.BndEvt__EditableTextBoxCHAT_K2Node_ComponentBoundEvent_62_OnEditableTextBoxCommittedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatWidgetBASE_C::STATIC_BndEvt__EditableTextBoxCHAT_K2Node_ComponentBoundEvent_62_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43464);

	UChatWidgetBASE_C_BndEvt__EditableTextBoxCHAT_K2Node_ComponentBoundEvent_62_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWidgetBASE.ChatWidgetBASE_C.BndEvt__Button_ToAll_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChatWidgetBASE_C::STATIC_BndEvt__Button_ToAll_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43463);

	UChatWidgetBASE_C_BndEvt__Button_ToAll_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWidgetBASE.ChatWidgetBASE_C.BndEvt__Button_ToTeam_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChatWidgetBASE_C::STATIC_BndEvt__Button_ToTeam_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43462);

	UChatWidgetBASE_C_BndEvt__Button_ToTeam_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWidgetBASE.ChatWidgetBASE_C.ReciveChatMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGUI_ChatMessageStructure ChatStruct                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UChatWidgetBASE_C::STATIC_ReciveChatMessage(const struct FGUI_ChatMessageStructure& ChatStruct)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43460);

	UChatWidgetBASE_C_ReciveChatMessage_Params params;
	params.ChatStruct = ChatStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWidgetBASE.ChatWidgetBASE_C.CloseMainChatWindow
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChatWidgetBASE_C::STATIC_CloseMainChatWindow()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43459);

	UChatWidgetBASE_C_CloseMainChatWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWidgetBASE.ChatWidgetBASE_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_195_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChatWidgetBASE_C::STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_195_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43458);

	UChatWidgetBASE_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_195_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWidgetBASE.ChatWidgetBASE_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChatWidgetBASE_C::STATIC_BndEvt__Button_Close_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43457);

	UChatWidgetBASE_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWidgetBASE.ChatWidgetBASE_C.BndEvt__Button_ToFriends_K2Node_ComponentBoundEvent_458_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChatWidgetBASE_C::STATIC_BndEvt__Button_ToFriends_K2Node_ComponentBoundEvent_458_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43456);

	UChatWidgetBASE_C_BndEvt__Button_ToFriends_K2Node_ComponentBoundEvent_458_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWidgetBASE.ChatWidgetBASE_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChatWidgetBASE_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43455);

	UChatWidgetBASE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWidgetBASE.ChatWidgetBASE_C.OpenChat
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChatWidgetBASE_C::STATIC_OpenChat()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43454);

	UChatWidgetBASE_C_OpenChat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWidgetBASE.ChatWidgetBASE_C.On_OpenMainWindow
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChatWidgetBASE_C::STATIC_On_OpenMainWindow()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43453);

	UChatWidgetBASE_C_On_OpenMainWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWidgetBASE.ChatWidgetBASE_C.ExecuteUbergraph_ChatWidgetBASE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatWidgetBASE_C::STATIC_ExecuteUbergraph_ChatWidgetBASE(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43451);

	UChatWidgetBASE_C_ExecuteUbergraph_ChatWidgetBASE_Params params;
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
