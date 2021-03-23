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

// Function StatisticString.StatisticString_C.PreConstruct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStatisticString_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44401);

	UStatisticString_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticString.StatisticString_C.Draw
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   TotalText                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   InGameText                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UStatisticString_C::STATIC_Draw(const struct FText& TotalText, const struct FText& InGameText)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44399);

	UStatisticString_C_Draw_Params params;
	params.TotalText = TotalText;
	params.InGameText = InGameText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticString.StatisticString_C.ExecuteUbergraph_StatisticString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatisticString_C::STATIC_ExecuteUbergraph_StatisticString(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44395);

	UStatisticString_C_ExecuteUbergraph_StatisticString_Params params;
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
