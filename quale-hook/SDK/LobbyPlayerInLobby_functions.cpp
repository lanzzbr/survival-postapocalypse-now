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

// Function LobbyPlayerInLobby.LobbyPlayerInLobby_C.Set clear
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ULobbyPlayerInLobby_C::STATIC_Set_clear()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78270);

	ULobbyPlayerInLobby_C_Set_clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPlayerInLobby.LobbyPlayerInLobby_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ULobbyPlayerInLobby_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78267);

	ULobbyPlayerInLobby_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPlayerInLobby.LobbyPlayerInLobby_C.Draw
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUniqueNetId          UniqID                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Is_ready                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULobbyPlayerInLobby_C::STATIC_Draw(const struct FBPUniqueNetId& UniqID, bool Is_ready)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78256);

	ULobbyPlayerInLobby_C_Draw_Params params;
	params.UniqID = UniqID;
	params.Is_ready = Is_ready;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPlayerInLobby.LobbyPlayerInLobby_C.ExecuteUbergraph_LobbyPlayerInLobby
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULobbyPlayerInLobby_C::STATIC_ExecuteUbergraph_LobbyPlayerInLobby(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78254);

	ULobbyPlayerInLobby_C_ExecuteUbergraph_LobbyPlayerInLobby_Params params;
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
