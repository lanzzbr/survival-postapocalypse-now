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

// Function SurvBannerPoint.SurvBannerPoint_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvBannerPoint_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(101416);

	USurvBannerPoint_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvBannerPoint.SurvBannerPoint_C.SetSelected
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvBannerPoint_C::STATIC_SetSelected()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(101420);

	USurvBannerPoint_C_SetSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvBannerPoint.SurvBannerPoint_C.SetUnSelected
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvBannerPoint_C::STATIC_SetUnSelected()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(101421);

	USurvBannerPoint_C_SetUnSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvBannerPoint.SurvBannerPoint_C.ExecuteUbergraph_SurvBannerPoint
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvBannerPoint_C::STATIC_ExecuteUbergraph_SurvBannerPoint(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(101418);

	USurvBannerPoint_C_ExecuteUbergraph_SurvBannerPoint_Params params;
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
