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

// Function LobbyPlayerString.LobbyPlayerString_C.CancelInvite
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ULobbyPlayerString_C::STATIC_CancelInvite()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78161);

	ULobbyPlayerString_C_CancelInvite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPlayerString.LobbyPlayerString_C.Draw
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPFriendInfo           FriendStr                      (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<GUI_FriendListPlayerState_EGUI_FriendListPlayerState> LobbyState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULobbyPlayerString_C::STATIC_Draw(const struct FBPFriendInfo& FriendStr, TEnumAsByte<GUI_FriendListPlayerState_EGUI_FriendListPlayerState> LobbyState)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78159);

	ULobbyPlayerString_C_Draw_Params params;
	params.FriendStr = FriendStr;
	params.LobbyState = LobbyState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPlayerString.LobbyPlayerString_C.BndEvt__AddButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ULobbyPlayerString_C::STATIC_BndEvt__AddButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78158);

	ULobbyPlayerString_C_BndEvt__AddButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPlayerString.LobbyPlayerString_C.BndEvt__AddButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ULobbyPlayerString_C::STATIC_BndEvt__AddButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78157);

	ULobbyPlayerString_C_BndEvt__AddButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPlayerString.LobbyPlayerString_C.BndEvt__AddButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ULobbyPlayerString_C::STATIC_BndEvt__AddButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78156);

	ULobbyPlayerString_C_BndEvt__AddButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPlayerString.LobbyPlayerString_C.ExecuteUbergraph_LobbyPlayerString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULobbyPlayerString_C::STATIC_ExecuteUbergraph_LobbyPlayerString(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78154);

	ULobbyPlayerString_C_ExecuteUbergraph_LobbyPlayerString_Params params;
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
