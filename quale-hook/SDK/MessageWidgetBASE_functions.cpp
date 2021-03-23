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

// Function MessageWidgetBASE.MessageWidgetBASE_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMessageWidgetBASE_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73362);

	UMessageWidgetBASE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MessageWidgetBASE.MessageWidgetBASE_C.ShowHintAction
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UMessageWidgetBASE_C::STATIC_ShowHintAction(const struct FText& Text)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73364);

	UMessageWidgetBASE_C_ShowHintAction_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MessageWidgetBASE.MessageWidgetBASE_C.ShowLevelUp
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMessageWidgetBASE_C::STATIC_ShowLevelUp(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73367);

	UMessageWidgetBASE_C_ShowLevelUp_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MessageWidgetBASE.MessageWidgetBASE_C.ShowNoCraft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMessageWidgetBASE_C::STATIC_ShowNoCraft(bool Show)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73346);

	UMessageWidgetBASE_C_ShowNoCraft_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MessageWidgetBASE.MessageWidgetBASE_C.ShowZoneMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<GUI_ZoneMessageType_EGUI_ZoneMessageType> ZoneMessageType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACv2_ScenarioZone_C*     Zone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMessageWidgetBASE_C::STATIC_ShowZoneMessage(TEnumAsByte<GUI_ZoneMessageType_EGUI_ZoneMessageType> ZoneMessageType, class ACv2_ScenarioZone_C* Zone)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73344);

	UMessageWidgetBASE_C_ShowZoneMessage_Params params;
	params.ZoneMessageType = ZoneMessageType;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MessageWidgetBASE.MessageWidgetBASE_C.ShowCustomMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Tune                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMessageWidgetBASE_C::STATIC_ShowCustomMessage(const struct FText& Text, int Tune)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73342);

	UMessageWidgetBASE_C_ShowCustomMessage_Params params;
	params.Text = Text;
	params.Tune = Tune;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MessageWidgetBASE.MessageWidgetBASE_C.ShowEvacuation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMessageWidgetBASE_C::STATIC_ShowEvacuation()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73341);

	UMessageWidgetBASE_C_ShowEvacuation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MessageWidgetBASE.MessageWidgetBASE_C.ShowGlobalMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Speed_0_2_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMessageWidgetBASE_C::STATIC_ShowGlobalMessage(const struct FText& InText, float Speed_0_2_)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73339);

	UMessageWidgetBASE_C_ShowGlobalMessage_Params params;
	params.InText = InText;
	params.Speed_0_2_ = Speed_0_2_;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MessageWidgetBASE.MessageWidgetBASE_C.ExecuteUbergraph_MessageWidgetBASE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMessageWidgetBASE_C::STATIC_ExecuteUbergraph_MessageWidgetBASE(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73318);

	UMessageWidgetBASE_C_ExecuteUbergraph_MessageWidgetBASE_Params params;
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
