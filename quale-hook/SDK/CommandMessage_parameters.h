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

// Function CommandMessage.CommandMessage_C.ShowMessage
struct UCommandMessage_C_ShowMessage_Params
{
	struct FText                                       Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       InstigatorName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CommandMessage.CommandMessage_C.ExecuteUbergraph_CommandMessage
struct UCommandMessage_C_ExecuteUbergraph_CommandMessage_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
