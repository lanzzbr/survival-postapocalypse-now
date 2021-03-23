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

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_ini_Buttons(IsValid)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UGlobalMenuButton_ROOT_C* Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalMenuButton_ROOT_C* Craft                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalMenuButton_ROOT_C* Map                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalMenuButton_ROOT_C* Options                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalMenuButton_ROOT_C* Exit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalMenuButton_ROOT_C* Close                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalMenuButton_ROOT_C* Respawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGlobalMenu_ROOT_C::STATIC_Root_ini_Buttons_IsValid_(class UGlobalMenuButton_ROOT_C* Inventory, class UGlobalMenuButton_ROOT_C* Craft, class UGlobalMenuButton_ROOT_C* Map, class UGlobalMenuButton_ROOT_C* Options, class UGlobalMenuButton_ROOT_C* Exit, class UGlobalMenuButton_ROOT_C* Close, class UGlobalMenuButton_ROOT_C* Respawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78678);

	UGlobalMenu_ROOT_C_Root_ini_Buttons_IsValid__Params params;
	params.Inventory = Inventory;
	params.Craft = Craft;
	params.Map = Map;
	params.Options = Options;
	params.Exit = Exit;
	params.Close = Close;
	params.Respawn = Respawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.RootHideAllPanels
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenu_ROOT_C::STATIC_RootHideAllPanels()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78676);

	UGlobalMenu_ROOT_C_RootHideAllPanels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.RootUnselectAll
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenu_ROOT_C::STATIC_RootUnselectAll()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78674);

	UGlobalMenu_ROOT_C_RootUnselectAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_ShowInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenu_ROOT_C::STATIC_Root_ShowInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78673);

	UGlobalMenu_ROOT_C_Root_ShowInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_ShowCraft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenu_ROOT_C::STATIC_Root_ShowCraft()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78672);

	UGlobalMenu_ROOT_C_Root_ShowCraft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_ShowMap
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenu_ROOT_C::STATIC_Root_ShowMap()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78671);

	UGlobalMenu_ROOT_C_Root_ShowMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_ShowOptions
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenu_ROOT_C::STATIC_Root_ShowOptions()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78670);

	UGlobalMenu_ROOT_C_Root_ShowOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_ShowActorCraft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGlobalMenu_ROOT_C::STATIC_Root_ShowActorCraft(class AActor* Actor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78657);

	UGlobalMenu_ROOT_C_Root_ShowActorCraft_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_ShowExitMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenu_ROOT_C::STATIC_Root_ShowExitMenu()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78656);

	UGlobalMenu_ROOT_C_Root_ShowExitMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.RootShowInventory_NoAnim
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenu_ROOT_C::STATIC_RootShowInventory_NoAnim()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78655);

	UGlobalMenu_ROOT_C_RootShowInventory_NoAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_MinimalMode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           SetMinimalistic                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGlobalMenu_ROOT_C::STATIC_Root_MinimalMode(bool SetMinimalistic)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78653);

	UGlobalMenu_ROOT_C_Root_MinimalMode_Params params;
	params.SetMinimalistic = SetMinimalistic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_HideBlur
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGlobalMenu_ROOT_C::STATIC_Root_HideBlur(bool Hide)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78651);

	UGlobalMenu_ROOT_C_Root_HideBlur_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_RespanwMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenu_ROOT_C::STATIC_Root_RespanwMenu()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78650);

	UGlobalMenu_ROOT_C_Root_RespanwMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_OnOpen
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenu_ROOT_C::STATIC_Root_OnOpen()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78649);

	UGlobalMenu_ROOT_C_Root_OnOpen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_OnClose
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenu_ROOT_C::STATIC_Root_OnClose()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78648);

	UGlobalMenu_ROOT_C_Root_OnClose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.ExecuteUbergraph_GlobalMenu_ROOT
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGlobalMenu_ROOT_C::STATIC_ExecuteUbergraph_GlobalMenu_ROOT(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78644);

	UGlobalMenu_ROOT_C_ExecuteUbergraph_GlobalMenu_ROOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Click_EXIT_Button__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenu_ROOT_C::STATIC_Click_EXIT_Button__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78643);

	UGlobalMenu_ROOT_C_Click_EXIT_Button__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Click_RESPAWN_Button__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenu_ROOT_C::STATIC_Click_RESPAWN_Button__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78642);

	UGlobalMenu_ROOT_C_Click_RESPAWN_Button__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Click_CLOSE_Button__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenu_ROOT_C::STATIC_Click_CLOSE_Button__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78641);

	UGlobalMenu_ROOT_C_Click_CLOSE_Button__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Click_Options_Button__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenu_ROOT_C::STATIC_Click_Options_Button__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78640);

	UGlobalMenu_ROOT_C_Click_Options_Button__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Click_MAP_Button__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenu_ROOT_C::STATIC_Click_MAP_Button__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78460);

	UGlobalMenu_ROOT_C_Click_MAP_Button__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Click_CRAFT_Button__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenu_ROOT_C::STATIC_Click_CRAFT_Button__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78459);

	UGlobalMenu_ROOT_C_Click_CRAFT_Button__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
