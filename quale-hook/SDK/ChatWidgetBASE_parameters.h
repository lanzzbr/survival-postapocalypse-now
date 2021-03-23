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

// Function ChatWidgetBASE.ChatWidgetBASE_C.MutePlayer
struct UChatWidgetBASE_C_MutePlayer_Params
{
	struct FText                                       PlayerNick;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Mute;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ChatWidgetBASE.ChatWidgetBASE_C.EncryptOnClient
struct UChatWidgetBASE_C_EncryptOnClient_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               LocalEncrypt1;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ChatWidgetBASE.ChatWidgetBASE_C.SelectButton
struct UChatWidgetBASE_C_SelectButton_Params
{
	TEnumAsByte<GUI_ChatMessageType_EGUI_ChatMessageType> CurrentMessageType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChatWidgetBASE.ChatWidgetBASE_C.Get_EditableTextBoxCHAT_HintText_1
struct UChatWidgetBASE_C_Get_EditableTextBoxCHAT_HintText_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ChatWidgetBASE.ChatWidgetBASE_C.GetColorAndOpacity_3
struct UChatWidgetBASE_C_GetColorAndOpacity_3_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ChatWidgetBASE.ChatWidgetBASE_C.GetColorAndOpacity_2
struct UChatWidgetBASE_C_GetColorAndOpacity_2_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ChatWidgetBASE.ChatWidgetBASE_C.GetColorAndOpacity_1
struct UChatWidgetBASE_C_GetColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ChatWidgetBASE.ChatWidgetBASE_C.SetMouseOnWidget
struct UChatWidgetBASE_C_SetMouseOnWidget_Params
{
};

// Function ChatWidgetBASE.ChatWidgetBASE_C.SetbuttonStyle
struct UChatWidgetBASE_C_SetbuttonStyle_Params
{
	class UButton*                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESlateBrushDrawType>         Draw_As;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChatWidgetBASE.ChatWidgetBASE_C.AddChatMessage
struct UChatWidgetBASE_C_AddChatMessage_Params
{
	struct FGUI_ChatMessageStructure                   ChatStr;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ChatWidgetBASE.ChatWidgetBASE_C.BndEvt__EditableTextBoxCHAT_K2Node_ComponentBoundEvent_62_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UChatWidgetBASE_C_BndEvt__EditableTextBoxCHAT_K2Node_ComponentBoundEvent_62_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChatWidgetBASE.ChatWidgetBASE_C.BndEvt__Button_ToAll_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UChatWidgetBASE_C_BndEvt__Button_ToAll_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ChatWidgetBASE.ChatWidgetBASE_C.BndEvt__Button_ToTeam_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UChatWidgetBASE_C_BndEvt__Button_ToTeam_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ChatWidgetBASE.ChatWidgetBASE_C.ReciveChatMessage
struct UChatWidgetBASE_C_ReciveChatMessage_Params
{
	struct FGUI_ChatMessageStructure                   ChatStruct;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ChatWidgetBASE.ChatWidgetBASE_C.CloseMainChatWindow
struct UChatWidgetBASE_C_CloseMainChatWindow_Params
{
};

// Function ChatWidgetBASE.ChatWidgetBASE_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_195_OnButtonClickedEvent__DelegateSignature
struct UChatWidgetBASE_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_195_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ChatWidgetBASE.ChatWidgetBASE_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature
struct UChatWidgetBASE_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ChatWidgetBASE.ChatWidgetBASE_C.BndEvt__Button_ToFriends_K2Node_ComponentBoundEvent_458_OnButtonClickedEvent__DelegateSignature
struct UChatWidgetBASE_C_BndEvt__Button_ToFriends_K2Node_ComponentBoundEvent_458_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ChatWidgetBASE.ChatWidgetBASE_C.Construct
struct UChatWidgetBASE_C_Construct_Params
{
};

// Function ChatWidgetBASE.ChatWidgetBASE_C.OpenChat
struct UChatWidgetBASE_C_OpenChat_Params
{
};

// Function ChatWidgetBASE.ChatWidgetBASE_C.On_OpenMainWindow
struct UChatWidgetBASE_C_On_OpenMainWindow_Params
{
};

// Function ChatWidgetBASE.ChatWidgetBASE_C.ExecuteUbergraph_ChatWidgetBASE
struct UChatWidgetBASE_C_ExecuteUbergraph_ChatWidgetBASE_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
