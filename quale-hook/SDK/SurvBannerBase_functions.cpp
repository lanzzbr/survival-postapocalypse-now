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

// Function SurvBannerBase.SurvBannerBase_C.SelectPoint
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvBannerBase_C::STATIC_SelectPoint(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86422);

	USurvBannerBase_C_SelectPoint_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvBannerBase.SurvBannerBase_C.CreatePoints
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvBannerBase_C::STATIC_CreatePoints()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86411);

	USurvBannerBase_C_CreatePoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvBannerBase.SurvBannerBase_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvBannerBase_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86410);

	USurvBannerBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvBannerBase.SurvBannerBase_C.OnClick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvBannerBase_C::STATIC_OnClick()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86409);

	USurvBannerBase_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvBannerBase.SurvBannerBase_C.Destruct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvBannerBase_C::STATIC_Destruct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86408);

	USurvBannerBase_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvBannerBase.SurvBannerBase_C.ChangeBannerNew
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvBannerBase_C::STATIC_ChangeBannerNew()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86407);

	USurvBannerBase_C_ChangeBannerNew_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvBannerBase.SurvBannerBase_C.Reset
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USurvBannerBase_C::STATIC_Reset()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86406);

	USurvBannerBase_C_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvBannerBase.SurvBannerBase_C.ExecuteUbergraph_SurvBannerBase
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvBannerBase_C::STATIC_ExecuteUbergraph_SurvBannerBase(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86404);

	USurvBannerBase_C_ExecuteUbergraph_SurvBannerBase_Params params;
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
