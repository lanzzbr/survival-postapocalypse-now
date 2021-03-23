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

// Function Fow_AIController.Fow_AIController_C.UserConstructionScript
struct AFow_AIController_C_UserConstructionScript_Params
{
};

// Function Fow_AIController.Fow_AIController_C.OnFail_EC73DAE14142DCD3D694D1861C0867EC
struct AFow_AIController_C_OnFail_EC73DAE14142DCD3D694D1861C0867EC_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Fow_AIController.Fow_AIController_C.OnSuccess_EC73DAE14142DCD3D694D1861C0867EC
struct AFow_AIController_C_OnSuccess_EC73DAE14142DCD3D694D1861C0867EC_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Fow_AIController.Fow_AIController_C.StopMove
struct AFow_AIController_C_StopMove_Params
{
};

// Function Fow_AIController.Fow_AIController_C.MoveTo
struct AFow_AIController_C_MoveTo_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Fow_AIController.Fow_AIController_C.ReceiveBeginPlay
struct AFow_AIController_C_ReceiveBeginPlay_Params
{
};

// Function Fow_AIController.Fow_AIController_C.ExecuteUbergraph_Fow_AIController
struct AFow_AIController_C_ExecuteUbergraph_Fow_AIController_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
