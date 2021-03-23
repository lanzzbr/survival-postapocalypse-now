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

// Function MessageScoreMessage.MessageScoreMessage_C.AddMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<GUI_ScoreMessageType_EGUI_ScoreMessageType> MessageType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   MessageText                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UMessageScoreMessage_C::STATIC_AddMessage(TEnumAsByte<GUI_ScoreMessageType_EGUI_ScoreMessageType> MessageType, const struct FText& MessageText)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73154);

	UMessageScoreMessage_C_AddMessage_Params params;
	params.MessageType = MessageType;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MessageScoreMessage.MessageScoreMessage_C.ExecuteUbergraph_MessageScoreMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMessageScoreMessage_C::STATIC_ExecuteUbergraph_MessageScoreMessage(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73151);

	UMessageScoreMessage_C_ExecuteUbergraph_MessageScoreMessage_Params params;
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
