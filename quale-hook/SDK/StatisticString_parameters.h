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

// Function StatisticString.StatisticString_C.PreConstruct
struct UStatisticString_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StatisticString.StatisticString_C.Draw
struct UStatisticString_C_Draw_Params
{
	struct FText                                       TotalText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       InGameText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StatisticString.StatisticString_C.ExecuteUbergraph_StatisticString
struct UStatisticString_C_ExecuteUbergraph_StatisticString_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
