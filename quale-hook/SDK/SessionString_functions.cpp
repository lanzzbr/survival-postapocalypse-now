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

// Function SessionString.SessionString_C.OnFailure_4F4ED60C4492AE08BE74B2B07A3AAE72
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USessionString_C::STATIC_OnFailure_4F4ED60C4492AE08BE74B2B07A3AAE72()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44183);

	USessionString_C_OnFailure_4F4ED60C4492AE08BE74B2B07A3AAE72_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SessionString.SessionString_C.OnSuccess_4F4ED60C4492AE08BE74B2B07A3AAE72
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USessionString_C::STATIC_OnSuccess_4F4ED60C4492AE08BE74B2B07A3AAE72()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44184);

	USessionString_C_OnSuccess_4F4ED60C4492AE08BE74B2B07A3AAE72_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SessionString.SessionString_C.Draw
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBlueprintSessionResult Session                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UConnectToMainMenuBase_C* Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USessionString_C::STATIC_Draw(const struct FBlueprintSessionResult& Session, class UConnectToMainMenuBase_C* Parent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44179);

	USessionString_C_Draw_Params params;
	params.Session = Session;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SessionString.SessionString_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USessionString_C::STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44176);

	USessionString_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SessionString.SessionString_C.GO
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USessionString_C::STATIC_GO()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44182);

	USessionString_C_GO_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SessionString.SessionString_C.ExecuteUbergraph_SessionString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USessionString_C::STATIC_ExecuteUbergraph_SessionString(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44142);

	USessionString_C_ExecuteUbergraph_SessionString_Params params;
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
