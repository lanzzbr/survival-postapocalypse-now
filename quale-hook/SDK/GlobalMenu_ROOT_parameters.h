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

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_ini_Buttons(IsValid)
struct UGlobalMenu_ROOT_C_Root_ini_Buttons_IsValid__Params
{
	class UGlobalMenuButton_ROOT_C*                    Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGlobalMenuButton_ROOT_C*                    Craft;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGlobalMenuButton_ROOT_C*                    Map;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGlobalMenuButton_ROOT_C*                    Options;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGlobalMenuButton_ROOT_C*                    Exit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGlobalMenuButton_ROOT_C*                    Close;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGlobalMenuButton_ROOT_C*                    Respawn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.RootHideAllPanels
struct UGlobalMenu_ROOT_C_RootHideAllPanels_Params
{
};

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.RootUnselectAll
struct UGlobalMenu_ROOT_C_RootUnselectAll_Params
{
};

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_ShowInventory
struct UGlobalMenu_ROOT_C_Root_ShowInventory_Params
{
};

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_ShowCraft
struct UGlobalMenu_ROOT_C_Root_ShowCraft_Params
{
};

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_ShowMap
struct UGlobalMenu_ROOT_C_Root_ShowMap_Params
{
};

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_ShowOptions
struct UGlobalMenu_ROOT_C_Root_ShowOptions_Params
{
};

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_ShowActorCraft
struct UGlobalMenu_ROOT_C_Root_ShowActorCraft_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_ShowExitMenu
struct UGlobalMenu_ROOT_C_Root_ShowExitMenu_Params
{
};

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.RootShowInventory_NoAnim
struct UGlobalMenu_ROOT_C_RootShowInventory_NoAnim_Params
{
};

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_MinimalMode
struct UGlobalMenu_ROOT_C_Root_MinimalMode_Params
{
	bool                                               SetMinimalistic;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_HideBlur
struct UGlobalMenu_ROOT_C_Root_HideBlur_Params
{
	bool                                               Hide;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_RespanwMenu
struct UGlobalMenu_ROOT_C_Root_RespanwMenu_Params
{
};

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_OnOpen
struct UGlobalMenu_ROOT_C_Root_OnOpen_Params
{
};

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Root_OnClose
struct UGlobalMenu_ROOT_C_Root_OnClose_Params
{
};

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.ExecuteUbergraph_GlobalMenu_ROOT
struct UGlobalMenu_ROOT_C_ExecuteUbergraph_GlobalMenu_ROOT_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Click_EXIT_Button__DelegateSignature
struct UGlobalMenu_ROOT_C_Click_EXIT_Button__DelegateSignature_Params
{
};

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Click_RESPAWN_Button__DelegateSignature
struct UGlobalMenu_ROOT_C_Click_RESPAWN_Button__DelegateSignature_Params
{
};

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Click_CLOSE_Button__DelegateSignature
struct UGlobalMenu_ROOT_C_Click_CLOSE_Button__DelegateSignature_Params
{
};

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Click_Options_Button__DelegateSignature
struct UGlobalMenu_ROOT_C_Click_Options_Button__DelegateSignature_Params
{
};

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Click_MAP_Button__DelegateSignature
struct UGlobalMenu_ROOT_C_Click_MAP_Button__DelegateSignature_Params
{
};

// Function GlobalMenu_ROOT.GlobalMenu_ROOT_C.Click_CRAFT_Button__DelegateSignature
struct UGlobalMenu_ROOT_C_Click_CRAFT_Button__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
