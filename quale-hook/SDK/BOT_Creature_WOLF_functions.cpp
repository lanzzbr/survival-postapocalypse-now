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

// Function BOT_Creature_WOLF.BOT_Creature_WOLF_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_Creature_WOLF_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(163714);

	ABOT_Creature_WOLF_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_Creature_WOLF.BOT_Creature_WOLF_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_Creature_WOLF_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(163715);

	ABOT_Creature_WOLF_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_Creature_WOLF.BOT_Creature_WOLF_C.ExecuteUbergraph_BOT_Creature_WOLF
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABOT_Creature_WOLF_C::STATIC_ExecuteUbergraph_BOT_Creature_WOLF(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(163717);

	ABOT_Creature_WOLF_C_ExecuteUbergraph_BOT_Creature_WOLF_Params params;
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
