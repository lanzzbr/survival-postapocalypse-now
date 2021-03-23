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

// Function RegionDefend.RegionDefend_C.SetDynamicColorAndOpacity
struct URegionDefend_C_SetDynamicColorAndOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RegionDefend.RegionDefend_C.GetText_1
struct URegionDefend_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function RegionDefend.RegionDefend_C.Construct
struct URegionDefend_C_Construct_Params
{
};

// Function RegionDefend.RegionDefend_C.Tick
struct URegionDefend_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RegionDefend.RegionDefend_C.Destruct
struct URegionDefend_C_Destruct_Params
{
};

// Function RegionDefend.RegionDefend_C.ExecuteUbergraph_RegionDefend
struct URegionDefend_C_ExecuteUbergraph_RegionDefend_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
