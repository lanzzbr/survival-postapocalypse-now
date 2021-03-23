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

// Function EndGame_TopString.EndGame_TopString_C.SetGreenStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UEndGame_TopString_C::STATIC_SetGreenStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63052);

	UEndGame_TopString_C_SetGreenStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EndGame_TopString.EndGame_TopString_C.PreConstruct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UEndGame_TopString_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63044);

	UEndGame_TopString_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EndGame_TopString.EndGame_TopString_C.SetNormalStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UEndGame_TopString_C::STATIC_SetNormalStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63043);

	UEndGame_TopString_C_SetNormalStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EndGame_TopString.EndGame_TopString_C.DrawString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsDP                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UEndGame_TopString_C::STATIC_DrawString(class APlayerState* PlayerState, bool IsDP)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63029);

	UEndGame_TopString_C_DrawString_Params params;
	params.PlayerState = PlayerState;
	params.IsDP = IsDP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EndGame_TopString.EndGame_TopString_C.Clear
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UEndGame_TopString_C::STATIC_Clear()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63028);

	UEndGame_TopString_C_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EndGame_TopString.EndGame_TopString_C.ExecuteUbergraph_EndGame_TopString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEndGame_TopString_C::STATIC_ExecuteUbergraph_EndGame_TopString(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63026);

	UEndGame_TopString_C_ExecuteUbergraph_EndGame_TopString_Params params;
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
