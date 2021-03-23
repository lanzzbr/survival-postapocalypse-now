#pragma once

// Name: ANUSGAME, Version: 4.18


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function MENU_ROOT.MENU_ROOT_C.Root_SaveSettings
struct UMENU_ROOT_C_Root_SaveSettings_Params
{
};

// Function MENU_ROOT.MENU_ROOT_C.Root_LoadSettings
struct UMENU_ROOT_C_Root_LoadSettings_Params
{
};

// Function MENU_ROOT.MENU_ROOT_C.OnMenuStateChanged
struct UMENU_ROOT_C_OnMenuStateChanged_Params
{
	TEnumAsByte<GUI_Menu_InGameState_EGUI_Menu_InGameState> CurrentState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MENU_ROOT.MENU_ROOT_C.ShowMenu
struct UMENU_ROOT_C_ShowMenu_Params
{
	TEnumAsByte<GUI_Menu_InGameState_EGUI_Menu_InGameState> MenuType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
