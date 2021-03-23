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

// Function InfoPanelRoot.InfoPanelRoot_C.Root_Check
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfoPanelRoot_C::STATIC_Root_Check()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80007);

	UInfoPanelRoot_C_Root_Check_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoPanelRoot.InfoPanelRoot_C.OnPanelEndShow
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfoPanelRoot_C::STATIC_OnPanelEndShow()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80006);

	UInfoPanelRoot_C_OnPanelEndShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoPanelRoot.InfoPanelRoot_C.OnPanelBeginShow
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfoPanelRoot_C::STATIC_OnPanelBeginShow()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80005);

	UInfoPanelRoot_C_OnPanelBeginShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoPanelRoot.InfoPanelRoot_C.ShowThisPanel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfoPanelRoot_C::STATIC_ShowThisPanel()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80008);

	UInfoPanelRoot_C_ShowThisPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoPanelRoot.InfoPanelRoot_C.HideThisPanel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfoPanelRoot_C::STATIC_HideThisPanel()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80004);

	UInfoPanelRoot_C_HideThisPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoPanelRoot.InfoPanelRoot_C.ExecuteUbergraph_InfoPanelRoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfoPanelRoot_C::STATIC_ExecuteUbergraph_InfoPanelRoot(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79874);

	UInfoPanelRoot_C_ExecuteUbergraph_InfoPanelRoot_Params params;
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
