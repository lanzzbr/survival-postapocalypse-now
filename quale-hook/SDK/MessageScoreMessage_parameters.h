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

// Function MessageScoreMessage.MessageScoreMessage_C.AddMessage
struct UMessageScoreMessage_C_AddMessage_Params
{
	TEnumAsByte<GUI_ScoreMessageType_EGUI_ScoreMessageType> MessageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       MessageText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MessageScoreMessage.MessageScoreMessage_C.ExecuteUbergraph_MessageScoreMessage
struct UMessageScoreMessage_C_ExecuteUbergraph_MessageScoreMessage_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
