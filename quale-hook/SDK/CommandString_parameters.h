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

// Function CommandString.CommandString_C.PreConstruct
struct UCommandString_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CommandString.CommandString_C.DrawString
struct UCommandString_C_DrawString_Params
{
	struct FText                                       Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Messge;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CommandString.CommandString_C.ExecuteUbergraph_CommandString
struct UCommandString_C_ExecuteUbergraph_CommandString_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
