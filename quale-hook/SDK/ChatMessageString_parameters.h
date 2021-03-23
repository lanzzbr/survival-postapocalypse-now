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

// Function ChatMessageString.ChatMessageString_C.CorrectNIckname
struct UChatMessageString_C_CorrectNIckname_Params
{
	struct FText                                       InText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                NickLength;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       NewParam;                                                  // (Parm, OutParm)
};

// Function ChatMessageString.ChatMessageString_C.DrawString
struct UChatMessageString_C_DrawString_Params
{
	struct FGUI_ChatMessageStructure                   ChatStruct;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               ShowMute;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UChatWidgetBASE_C*                           ChatWidgetBASE;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChatMessageString.ChatMessageString_C.BndEvt__Button_116_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
struct UChatMessageString_C_BndEvt__Button_116_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ChatMessageString.ChatMessageString_C.SetMutedStyle
struct UChatMessageString_C_SetMutedStyle_Params
{
	bool                                               IsMuted;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ChatMessageString.ChatMessageString_C.ExecuteUbergraph_ChatMessageString
struct UChatMessageString_C_ExecuteUbergraph_ChatMessageString_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
