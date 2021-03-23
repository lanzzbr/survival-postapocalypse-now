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

// Function InfoWidgetBASE.InfoWidgetBASE_C.CheckTemp
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfoWidgetBASE_C::STATIC_CheckTemp()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80707);

	UInfoWidgetBASE_C_CheckTemp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoWidgetBASE.InfoWidgetBASE_C.UpdateTemper
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfoWidgetBASE_C::STATIC_UpdateTemper()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80705);

	UInfoWidgetBASE_C_UpdateTemper_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoWidgetBASE.InfoWidgetBASE_C.TimeToTemper
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Temp                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfoWidgetBASE_C::STATIC_TimeToTemper(float Time, float* Temp)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80703);

	UInfoWidgetBASE_C_TimeToTemper_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Temp != nullptr)
		*Temp = params.Temp;

}


// Function InfoWidgetBASE.InfoWidgetBASE_C.Timer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfoWidgetBASE_C::STATIC_Timer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80687);

	UInfoWidgetBASE_C_Timer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoWidgetBASE.InfoWidgetBASE_C.CheckPing
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfoWidgetBASE_C::STATIC_CheckPing()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80685);

	UInfoWidgetBASE_C_CheckPing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoWidgetBASE.InfoWidgetBASE_C.CheckPanels
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfoWidgetBASE_C::STATIC_CheckPanels()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80683);

	UInfoWidgetBASE_C_CheckPanels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoWidgetBASE.InfoWidgetBASE_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfoWidgetBASE_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80682);

	UInfoWidgetBASE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoWidgetBASE.InfoWidgetBASE_C.ShowPanel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<GUI_InfoWidget_PanelTypes_EGUI_InfoWidget_PanelTypes> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfoWidgetBASE_C::STATIC_ShowPanel(TEnumAsByte<GUI_InfoWidget_PanelTypes_EGUI_InfoWidget_PanelTypes> Type)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80680);

	UInfoWidgetBASE_C_ShowPanel_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoWidgetBASE.InfoWidgetBASE_C.GoIntown
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfoWidgetBASE_C::STATIC_GoIntown()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80679);

	UInfoWidgetBASE_C_GoIntown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoWidgetBASE.InfoWidgetBASE_C.GoOutTown
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfoWidgetBASE_C::STATIC_GoOutTown()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80678);

	UInfoWidgetBASE_C_GoOutTown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoWidgetBASE.InfoWidgetBASE_C.Destruct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfoWidgetBASE_C::STATIC_Destruct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80677);

	UInfoWidgetBASE_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoWidgetBASE.InfoWidgetBASE_C.ShowAddSurvCoins
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfoWidgetBASE_C::STATIC_ShowAddSurvCoins()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80676);

	UInfoWidgetBASE_C_ShowAddSurvCoins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoWidgetBASE.InfoWidgetBASE_C.ExecuteUbergraph_InfoWidgetBASE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfoWidgetBASE_C::STATIC_ExecuteUbergraph_InfoWidgetBASE(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80668);

	UInfoWidgetBASE_C_ExecuteUbergraph_InfoWidgetBASE_Params params;
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
