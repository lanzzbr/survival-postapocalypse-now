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

// Function KillsMultiplier_WB.KillsMultiplier_WB_C.DrawXKIllsWidget
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Kills                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKillsMultiplier_WB_C::STATIC_DrawXKIllsWidget(int Kills)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(62798);

	UKillsMultiplier_WB_C_DrawXKIllsWidget_Params params;
	params.Kills = Kills;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function KillsMultiplier_WB.KillsMultiplier_WB_C.ExecuteUbergraph_KillsMultiplier_WB
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKillsMultiplier_WB_C::STATIC_ExecuteUbergraph_KillsMultiplier_WB(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(62793);

	UKillsMultiplier_WB_C_ExecuteUbergraph_KillsMultiplier_WB_Params params;
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
