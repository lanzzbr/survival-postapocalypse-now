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

// Function MessageKillShip_Base.MessageKillShip_Base_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMessageKillShip_Base_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73420);

	UMessageKillShip_Base_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MessageKillShip_Base.MessageKillShip_Base_C.Add message
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FS_GUI_ShipKillerStrukt KillSheepStruct                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UMessageKillShip_Base_C::STATIC_Add_message(const struct FS_GUI_ShipKillerStrukt& KillSheepStruct)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73418);

	UMessageKillShip_Base_C_Add_message_Params params;
	params.KillSheepStruct = KillSheepStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MessageKillShip_Base.MessageKillShip_Base_C.ExecuteUbergraph_MessageKillShip_Base
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMessageKillShip_Base_C::STATIC_ExecuteUbergraph_MessageKillShip_Base(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73422);

	UMessageKillShip_Base_C_ExecuteUbergraph_MessageKillShip_Base_Params params;
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
