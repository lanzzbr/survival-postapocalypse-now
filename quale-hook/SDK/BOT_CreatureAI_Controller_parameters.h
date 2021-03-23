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

// Function BOT_CreatureAI_Controller.BOT_CreatureAI_Controller_C.UserConstructionScript
struct ABOT_CreatureAI_Controller_C_UserConstructionScript_Params
{
};

// Function BOT_CreatureAI_Controller.BOT_CreatureAI_Controller_C.OnFail_3A0E037844FC0342739A088A9204102B
struct ABOT_CreatureAI_Controller_C_OnFail_3A0E037844FC0342739A088A9204102B_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BOT_CreatureAI_Controller.BOT_CreatureAI_Controller_C.OnSuccess_3A0E037844FC0342739A088A9204102B
struct ABOT_CreatureAI_Controller_C_OnSuccess_3A0E037844FC0342739A088A9204102B_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BOT_CreatureAI_Controller.BOT_CreatureAI_Controller_C.ReceiveBeginPlay
struct ABOT_CreatureAI_Controller_C_ReceiveBeginPlay_Params
{
};

// Function BOT_CreatureAI_Controller.BOT_CreatureAI_Controller_C.MoveTo
struct ABOT_CreatureAI_Controller_C_MoveTo_Params
{
	struct FVector                                     MoveLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BOT_CreatureAI_Controller.BOT_CreatureAI_Controller_C.ExecuteUbergraph_BOT_CreatureAI_Controller
struct ABOT_CreatureAI_Controller_C_ExecuteUbergraph_BOT_CreatureAI_Controller_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
