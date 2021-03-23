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

// Function PlayerString.PlayerString_C.ShowPlayerOnAdmin
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPlayerString_C::STATIC_ShowPlayerOnAdmin()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(62903);

	UPlayerString_C_ShowPlayerOnAdmin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerString.PlayerString_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPlayerString_C::STATIC_BndEvt__MainButton_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(62902);

	UPlayerString_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerString.PlayerString_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPlayerString_C::STATIC_BndEvt__Button_1_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(62901);

	UPlayerString_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerString.PlayerString_C.SetSelfStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPlayerString_C::STATIC_SetSelfStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(62900);

	UPlayerString_C_SetSelfStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerString.PlayerString_C.BndEvt__FriendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPlayerString_C::STATIC_BndEvt__FriendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(62899);

	UPlayerString_C_BndEvt__FriendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerString.PlayerString_C.SetFriendStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPlayerString_C::STATIC_SetFriendStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(62898);

	UPlayerString_C_SetFriendStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerString.PlayerString_C.SetNormalStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPlayerString_C::STATIC_SetNormalStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(62897);

	UPlayerString_C_SetNormalStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerString.PlayerString_C.OnMouseLeave
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UPlayerString_C::STATIC_OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(62895);

	UPlayerString_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerString.PlayerString_C.DrawString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Ping                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Nick                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Kills                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Death                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Damage                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Score                          (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> Side                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId          SteamID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 UniqIDString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           SpeedHack                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           AntiCheatOK                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerString_C::STATIC_DrawString(const struct FText& Ping, const struct FText& Nick, const struct FText& Kills, const struct FText& Death, const struct FText& Damage, const struct FText& Score, TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> Side, const struct FBPUniqueNetId& SteamID, int Rank, const struct FString& UniqIDString, bool SpeedHack, bool AntiCheatOK)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(62867);

	UPlayerString_C_DrawString_Params params;
	params.Ping = Ping;
	params.Nick = Nick;
	params.Kills = Kills;
	params.Death = Death;
	params.Damage = Damage;
	params.Score = Score;
	params.Side = Side;
	params.SteamID = SteamID;
	params.Rank = Rank;
	params.UniqIDString = UniqIDString;
	params.SpeedHack = SpeedHack;
	params.AntiCheatOK = AntiCheatOK;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerString.PlayerString_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPlayerString_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(62866);

	UPlayerString_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerString.PlayerString_C.PreConstruct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerString_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(62864);

	UPlayerString_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerString.PlayerString_C.SetSelected
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerString_C::STATIC_SetSelected(bool IsSelected)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(62862);

	UPlayerString_C_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerString.PlayerString_C.ExecuteUbergraph_PlayerString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerString_C::STATIC_ExecuteUbergraph_PlayerString(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(62860);

	UPlayerString_C_ExecuteUbergraph_PlayerString_Params params;
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
