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

// Function Menu_MainMenu_ServerListTable.Menu_MainMenu_ServerListTable_C.AddString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   ServerName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Ping                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Players                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   MaxPlayers                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBlueprintSessionResult Session                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   MapName                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   GameTime                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UMenu_MainMenu_ServerListTable_C::STATIC_AddString(const struct FText& ServerName, const struct FText& Ping, const struct FText& Players, const struct FText& MaxPlayers, const struct FBlueprintSessionResult& Session, const struct FText& MapName, const struct FText& GameTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(41582);

	UMenu_MainMenu_ServerListTable_C_AddString_Params params;
	params.ServerName = ServerName;
	params.Ping = Ping;
	params.Players = Players;
	params.MaxPlayers = MaxPlayers;
	params.Session = Session;
	params.MapName = MapName;
	params.GameTime = GameTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_ServerListTable.Menu_MainMenu_ServerListTable_C.ClearTable
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_ServerListTable_C::STATIC_ClearTable()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(41581);

	UMenu_MainMenu_ServerListTable_C_ClearTable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
