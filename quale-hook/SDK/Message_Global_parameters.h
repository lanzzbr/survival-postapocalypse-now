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

// Function Message_Global.Message_Global_C.ShowMessageEvacuation
struct UMessage_Global_C_ShowMessageEvacuation_Params
{
	class ACv2_ScenarioZone_C*                         ScenarioActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Message_Global.Message_Global_C.ShowMyMessage
struct UMessage_Global_C_ShowMyMessage_Params
{
	struct FText                                       InText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Speed_0_2_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Message_Global.Message_Global_C.Construct
struct UMessage_Global_C_Construct_Params
{
};

// Function Message_Global.Message_Global_C.ExecuteUbergraph_Message_Global
struct UMessage_Global_C_ExecuteUbergraph_Message_Global_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
