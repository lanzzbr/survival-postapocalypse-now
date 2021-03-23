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

// Function Message_GlobalString.Message_GlobalString_C.ShowMessageEvacuation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ACv2_ScenarioZone_C*     ScenarioActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMessage_GlobalString_C::STATIC_ShowMessageEvacuation(class ACv2_ScenarioZone_C* ScenarioActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73193);

	UMessage_GlobalString_C_ShowMessageEvacuation_Params params;
	params.ScenarioActor = ScenarioActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Message_GlobalString.Message_GlobalString_C.ShowMyMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Speed_0_2_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMessage_GlobalString_C::STATIC_ShowMyMessage(const struct FText& InText, float Speed_0_2_)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73189);

	UMessage_GlobalString_C_ShowMyMessage_Params params;
	params.InText = InText;
	params.Speed_0_2_ = Speed_0_2_;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Message_GlobalString.Message_GlobalString_C.BndEvt__Show_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMessage_GlobalString_C::STATIC_BndEvt__Show_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73188);

	UMessage_GlobalString_C_BndEvt__Show_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Message_GlobalString.Message_GlobalString_C.ExecuteUbergraph_Message_GlobalString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMessage_GlobalString_C::STATIC_ExecuteUbergraph_Message_GlobalString(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73178);

	UMessage_GlobalString_C_ExecuteUbergraph_Message_GlobalString_Params params;
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
