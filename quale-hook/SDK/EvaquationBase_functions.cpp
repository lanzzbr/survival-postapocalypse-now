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

// Function EvaquationBase.EvaquationBase_C.Draw
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   MainText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEvaquationBase_C::STATIC_Draw(const struct FText& MainText, int Seconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43341);

	UEvaquationBase_C_Draw_Params params;
	params.MainText = MainText;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EvaquationBase.EvaquationBase_C.Timer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UEvaquationBase_C::STATIC_Timer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43345);

	UEvaquationBase_C_Timer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EvaquationBase.EvaquationBase_C.Reboot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UEvaquationBase_C::STATIC_Reboot()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43344);

	UEvaquationBase_C_Reboot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EvaquationBase.EvaquationBase_C.ExecuteUbergraph_EvaquationBase
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEvaquationBase_C::STATIC_ExecuteUbergraph_EvaquationBase(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43324);

	UEvaquationBase_C_ExecuteUbergraph_EvaquationBase_Params params;
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
