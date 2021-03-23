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

// Function GameOverStatisticString.GameOverStatisticString_C.PreConstruct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameOverStatisticString_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(41798);

	UGameOverStatisticString_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverStatisticString.GameOverStatisticString_C.Draw
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   ParametrName                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Game                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Total                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UGameOverStatisticString_C::STATIC_Draw(const struct FText& ParametrName, const struct FText& Game, const struct FText& Total)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(41796);

	UGameOverStatisticString_C_Draw_Params params;
	params.ParametrName = ParametrName;
	params.Game = Game;
	params.Total = Total;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverStatisticString.GameOverStatisticString_C.ShowMe
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameOverStatisticString_C::STATIC_ShowMe(float Duration)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(41794);

	UGameOverStatisticString_C_ShowMe_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverStatisticString.GameOverStatisticString_C.ExecuteUbergraph_GameOverStatisticString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameOverStatisticString_C::STATIC_ExecuteUbergraph_GameOverStatisticString(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(41791);

	UGameOverStatisticString_C_ExecuteUbergraph_GameOverStatisticString_Params params;
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
