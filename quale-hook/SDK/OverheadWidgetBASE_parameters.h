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

// Function OverheadWidgetBASE.OverheadWidgetBASE_C.CheckIsFriend
struct UOverheadWidgetBASE_C_CheckIsFriend_Params
{
	struct FBPUniqueNetId                              SteamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     UniqNetId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	bool                                               IsFriend;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function OverheadWidgetBASE.OverheadWidgetBASE_C.SetNickText
struct UOverheadWidgetBASE_C_SetNickText_Params
{
	struct FText                                       NickName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                LobbyIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Meters;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OverheadWidgetBASE.OverheadWidgetBASE_C.ReciveChatMessage
struct UOverheadWidgetBASE_C_ReciveChatMessage_Params
{
	struct FGUI_ChatMessageStructure                   ChatStruct;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function OverheadWidgetBASE.OverheadWidgetBASE_C.ShowSpeak
struct UOverheadWidgetBASE_C_ShowSpeak_Params
{
};

// Function OverheadWidgetBASE.OverheadWidgetBASE_C.HideSpeak
struct UOverheadWidgetBASE_C_HideSpeak_Params
{
};

// Function OverheadWidgetBASE.OverheadWidgetBASE_C.Construct
struct UOverheadWidgetBASE_C_Construct_Params
{
};

// Function OverheadWidgetBASE.OverheadWidgetBASE_C.OpenChat
struct UOverheadWidgetBASE_C_OpenChat_Params
{
};

// Function OverheadWidgetBASE.OverheadWidgetBASE_C.EventShowChatText
struct UOverheadWidgetBASE_C_EventShowChatText_Params
{
	struct FText                                       TextProxy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OverheadWidgetBASE.OverheadWidgetBASE_C.ExecuteUbergraph_OverheadWidgetBASE
struct UOverheadWidgetBASE_C_ExecuteUbergraph_OverheadWidgetBASE_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
