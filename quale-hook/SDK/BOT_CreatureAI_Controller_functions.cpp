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

// Function BOT_CreatureAI_Controller.BOT_CreatureAI_Controller_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureAI_Controller_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56505);

	ABOT_CreatureAI_Controller_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureAI_Controller.BOT_CreatureAI_Controller_C.OnFail_3A0E037844FC0342739A088A9204102B
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABOT_CreatureAI_Controller_C::STATIC_OnFail_3A0E037844FC0342739A088A9204102B(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56501);

	ABOT_CreatureAI_Controller_C_OnFail_3A0E037844FC0342739A088A9204102B_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureAI_Controller.BOT_CreatureAI_Controller_C.OnSuccess_3A0E037844FC0342739A088A9204102B
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABOT_CreatureAI_Controller_C::STATIC_OnSuccess_3A0E037844FC0342739A088A9204102B(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56499);

	ABOT_CreatureAI_Controller_C_OnSuccess_3A0E037844FC0342739A088A9204102B_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureAI_Controller.BOT_CreatureAI_Controller_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABOT_CreatureAI_Controller_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56498);

	ABOT_CreatureAI_Controller_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureAI_Controller.BOT_CreatureAI_Controller_C.MoveTo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 MoveLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABOT_CreatureAI_Controller_C::STATIC_MoveTo(const struct FVector& MoveLocation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56496);

	ABOT_CreatureAI_Controller_C_MoveTo_Params params;
	params.MoveLocation = MoveLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_CreatureAI_Controller.BOT_CreatureAI_Controller_C.ExecuteUbergraph_BOT_CreatureAI_Controller
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABOT_CreatureAI_Controller_C::STATIC_ExecuteUbergraph_BOT_CreatureAI_Controller(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56485);

	ABOT_CreatureAI_Controller_C_ExecuteUbergraph_BOT_CreatureAI_Controller_Params params;
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
