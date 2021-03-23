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

// Function OverheadWidgetBASE.OverheadWidgetBASE_C.CheckIsFriend
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUniqueNetId          SteamID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 UniqNetId                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// bool                           IsFriend                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UOverheadWidgetBASE_C::STATIC_CheckIsFriend(const struct FBPUniqueNetId& SteamID, struct FString* UniqNetId, bool* IsFriend)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64054);

	UOverheadWidgetBASE_C_CheckIsFriend_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UniqNetId != nullptr)
		*UniqNetId = params.UniqNetId;
	if (IsFriend != nullptr)
		*IsFriend = params.IsFriend;

}


// Function OverheadWidgetBASE.OverheadWidgetBASE_C.SetNickText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   NickName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            LobbyIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Meters                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOverheadWidgetBASE_C::STATIC_SetNickText(const struct FText& NickName, int LobbyIndex, int Meters)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64052);

	UOverheadWidgetBASE_C_SetNickText_Params params;
	params.NickName = NickName;
	params.LobbyIndex = LobbyIndex;
	params.Meters = Meters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OverheadWidgetBASE.OverheadWidgetBASE_C.ReciveChatMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGUI_ChatMessageStructure ChatStruct                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UOverheadWidgetBASE_C::STATIC_ReciveChatMessage(const struct FGUI_ChatMessageStructure& ChatStruct)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64050);

	UOverheadWidgetBASE_C_ReciveChatMessage_Params params;
	params.ChatStruct = ChatStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OverheadWidgetBASE.OverheadWidgetBASE_C.ShowSpeak
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UOverheadWidgetBASE_C::STATIC_ShowSpeak()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64049);

	UOverheadWidgetBASE_C_ShowSpeak_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OverheadWidgetBASE.OverheadWidgetBASE_C.HideSpeak
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UOverheadWidgetBASE_C::STATIC_HideSpeak()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64048);

	UOverheadWidgetBASE_C_HideSpeak_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OverheadWidgetBASE.OverheadWidgetBASE_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UOverheadWidgetBASE_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64047);

	UOverheadWidgetBASE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OverheadWidgetBASE.OverheadWidgetBASE_C.OpenChat
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UOverheadWidgetBASE_C::STATIC_OpenChat()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64046);

	UOverheadWidgetBASE_C_OpenChat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OverheadWidgetBASE.OverheadWidgetBASE_C.EventShowChatText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   TextProxy                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UOverheadWidgetBASE_C::STATIC_EventShowChatText(const struct FText& TextProxy)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64044);

	UOverheadWidgetBASE_C_EventShowChatText_Params params;
	params.TextProxy = TextProxy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OverheadWidgetBASE.OverheadWidgetBASE_C.ExecuteUbergraph_OverheadWidgetBASE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOverheadWidgetBASE_C::STATIC_ExecuteUbergraph_OverheadWidgetBASE(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64040);

	UOverheadWidgetBASE_C_ExecuteUbergraph_OverheadWidgetBASE_Params params;
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
