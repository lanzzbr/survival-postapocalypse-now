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

// Function Info_VehicleInfoBar.Info_VehicleInfoBar_C.ShowNoFuel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInfo_VehicleInfoBar_C::STATIC_ShowNoFuel(bool Show)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79818);

	UInfo_VehicleInfoBar_C_ShowNoFuel_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_VehicleInfoBar.Info_VehicleInfoBar_C.ShowNoBattery
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInfo_VehicleInfoBar_C::STATIC_ShowNoBattery(bool Show)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79816);

	UInfo_VehicleInfoBar_C_ShowNoBattery_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_VehicleInfoBar.Info_VehicleInfoBar_C.ExecuteUbergraph_Info_VehicleInfoBar
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfo_VehicleInfoBar_C::STATIC_ExecuteUbergraph_Info_VehicleInfoBar(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79810);

	UInfo_VehicleInfoBar_C_ExecuteUbergraph_Info_VehicleInfoBar_Params params;
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
