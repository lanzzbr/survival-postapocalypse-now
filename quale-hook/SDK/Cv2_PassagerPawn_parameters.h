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

// Function Cv2_PassagerPawn.Cv2_PassagerPawn_C.UserConstructionScript
struct ACv2_PassagerPawn_C_UserConstructionScript_Params
{
};

// Function Cv2_PassagerPawn.Cv2_PassagerPawn_C.InpActEvt_Use_K2Node_InputActionEvent_3
struct ACv2_PassagerPawn_C_InpActEvt_Use_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_PassagerPawn.Cv2_PassagerPawn_C.InpActEvt_VoiceChat_K2Node_InputActionEvent_2
struct ACv2_PassagerPawn_C_InpActEvt_VoiceChat_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_PassagerPawn.Cv2_PassagerPawn_C.InpActEvt_VoiceChat_K2Node_InputActionEvent_1
struct ACv2_PassagerPawn_C_InpActEvt_VoiceChat_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_PassagerPawn.Cv2_PassagerPawn_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_124
struct ACv2_PassagerPawn_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_124_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_PassagerPawn.Cv2_PassagerPawn_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_116
struct ACv2_PassagerPawn_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_116_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_PassagerPawn.Cv2_PassagerPawn_C.ExitVehicle
struct ACv2_PassagerPawn_C_ExitVehicle_Params
{
};

// Function Cv2_PassagerPawn.Cv2_PassagerPawn_C.ExitVehicleServerOnly
struct ACv2_PassagerPawn_C_ExitVehicleServerOnly_Params
{
};

// Function Cv2_PassagerPawn.Cv2_PassagerPawn_C.BndEvt__VoiceChat_K2Node_ComponentBoundEvent_0_VoiceDataAvailableSignature__DelegateSignature
struct ACv2_PassagerPawn_C_BndEvt__VoiceChat_K2Node_ComponentBoundEvent_0_VoiceDataAvailableSignature__DelegateSignature_Params
{
};

// Function Cv2_PassagerPawn.Cv2_PassagerPawn_C.ServerProcessVoiceData
struct ACv2_PassagerPawn_C_ServerProcessVoiceData_Params
{
	TArray<unsigned char>                              Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Cv2_PassagerPawn.Cv2_PassagerPawn_C.ClientReceiveVoiceData
struct ACv2_PassagerPawn_C_ClientReceiveVoiceData_Params
{
	TArray<unsigned char>                              Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class APawn*                                       FromPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_PassagerPawn.Cv2_PassagerPawn_C.ReceivePossessed
struct ACv2_PassagerPawn_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_PassagerPawn.Cv2_PassagerPawn_C.ClientSetPhysics
struct ACv2_PassagerPawn_C_ClientSetPhysics_Params
{
};

// Function Cv2_PassagerPawn.Cv2_PassagerPawn_C.ExecuteUbergraph_Cv2_PassagerPawn
struct ACv2_PassagerPawn_C_ExecuteUbergraph_Cv2_PassagerPawn_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
