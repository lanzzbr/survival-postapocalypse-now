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

// Function Menu_MainMenu_ServerListTable.Menu_MainMenu_ServerListTable_C.AddString
struct UMenu_MainMenu_ServerListTable_C_AddString_Params
{
	struct FText                                       ServerName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Ping;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Players;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       MaxPlayers;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBlueprintSessionResult                     Session;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       MapName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       GameTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Menu_MainMenu_ServerListTable.Menu_MainMenu_ServerListTable_C.ClearTable
struct UMenu_MainMenu_ServerListTable_C_ClearTable_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
