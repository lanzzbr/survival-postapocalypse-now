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

// Function Surv_HUD.Surv_HUD_C.SetAmmoStructures
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_HUD_C::STATIC_SetAmmoStructures()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(47711);

	ASurv_HUD_C_SetAmmoStructures_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_HUD.Surv_HUD_C.LoadInventoy
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_HUD_C::STATIC_LoadInventoy()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(47696);

	ASurv_HUD_C_LoadInventoy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_HUD.Surv_HUD_C.CheckSlotsCreate
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_HUD_C::STATIC_CheckSlotsCreate()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(47690);

	ASurv_HUD_C_CheckSlotsCreate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_HUD.Surv_HUD_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_HUD_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(47689);

	ASurv_HUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_HUD.Surv_HUD_C.HideInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_HUD_C::STATIC_HideInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(47688);

	ASurv_HUD_C_HideInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_HUD.Surv_HUD_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_HUD_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(47687);

	ASurv_HUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_HUD.Surv_HUD_C.EnableRenderActors
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           SetEnable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurv_HUD_C::STATIC_EnableRenderActors(bool SetEnable)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(47685);

	ASurv_HUD_C_EnableRenderActors_Params params;
	params.SetEnable = SetEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_HUD.Surv_HUD_C.ShowInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_HUD_C::STATIC_ShowInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(47684);

	ASurv_HUD_C_ShowInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_HUD.Surv_HUD_C.ShowTradeInfo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_TradeStr             TradeStr                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurv_HUD_C::STATIC_ShowTradeInfo(const struct FZ_TradeStr& TradeStr)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(47682);

	ASurv_HUD_C_ShowTradeInfo_Params params;
	params.TradeStr = TradeStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_HUD.Surv_HUD_C.SetMoneyText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            MoneysCount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurv_HUD_C::STATIC_SetMoneyText(int MoneysCount)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(47680);

	ASurv_HUD_C_SetMoneyText_Params params;
	params.MoneysCount = MoneysCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_HUD.Surv_HUD_C.Show Select Game Mode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_HUD_C::STATIC_Show_Select_Game_Mode()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(47679);

	ASurv_HUD_C_Show_Select_Game_Mode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_HUD.Surv_HUD_C.ExecuteUbergraph_Surv_HUD
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurv_HUD_C::STATIC_ExecuteUbergraph_Surv_HUD(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(47677);

	ASurv_HUD_C_ExecuteUbergraph_Surv_HUD_Params params;
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
