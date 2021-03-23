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

// Function Menu_InGameMenuBase.Menu_InGameMenuBase_C.SetParentInPanel
struct UMenu_InGameMenuBase_C_SetParentInPanel_Params
{
};

// Function Menu_InGameMenuBase.Menu_InGameMenuBase_C.Open Menu
struct UMenu_InGameMenuBase_C_Open_Menu_Params
{
	TEnumAsByte<GUI_Menu_InGameState_EGUI_Menu_InGameState> MenuType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_InGameMenuBase.Menu_InGameMenuBase_C.Construct
struct UMenu_InGameMenuBase_C_Construct_Params
{
};

// Function Menu_InGameMenuBase.Menu_InGameMenuBase_C.ExecuteUbergraph_Menu_InGameMenuBase
struct UMenu_InGameMenuBase_C_ExecuteUbergraph_Menu_InGameMenuBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
