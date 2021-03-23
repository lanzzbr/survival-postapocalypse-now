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

// Function MENU_ROOT.MENU_ROOT_C.Root_SaveSettings
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMENU_ROOT_C::STATIC_Root_SaveSettings()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63870);

	UMENU_ROOT_C_Root_SaveSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MENU_ROOT.MENU_ROOT_C.Root_LoadSettings
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMENU_ROOT_C::STATIC_Root_LoadSettings()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63869);

	UMENU_ROOT_C_Root_LoadSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MENU_ROOT.MENU_ROOT_C.OnMenuStateChanged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<GUI_Menu_InGameState_EGUI_Menu_InGameState> CurrentState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMENU_ROOT_C::STATIC_OnMenuStateChanged(TEnumAsByte<GUI_Menu_InGameState_EGUI_Menu_InGameState> CurrentState)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63867);

	UMENU_ROOT_C_OnMenuStateChanged_Params params;
	params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MENU_ROOT.MENU_ROOT_C.ShowMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<GUI_Menu_InGameState_EGUI_Menu_InGameState> MenuType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMENU_ROOT_C::STATIC_ShowMenu(TEnumAsByte<GUI_Menu_InGameState_EGUI_Menu_InGameState> MenuType)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63865);

	UMENU_ROOT_C_ShowMenu_Params params;
	params.MenuType = MenuType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
