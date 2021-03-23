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

// Function RegionNeutral.RegionNeutral_C.SetOwenerSideColor
struct URegionNeutral_C_SetOwenerSideColor_Params
{
};

// Function RegionNeutral.RegionNeutral_C.SetHidden
struct URegionNeutral_C_SetHidden_Params
{
};

// Function RegionNeutral.RegionNeutral_C.SetDynamicColorAndOpacity
struct URegionNeutral_C_SetDynamicColorAndOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RegionNeutral.RegionNeutral_C.SetDistanceText
struct URegionNeutral_C_SetDistanceText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function RegionNeutral.RegionNeutral_C.Destruct
struct URegionNeutral_C_Destruct_Params
{
};

// Function RegionNeutral.RegionNeutral_C.CheckOnerSide
struct URegionNeutral_C_CheckOnerSide_Params
{
};

// Function RegionNeutral.RegionNeutral_C.Tick
struct URegionNeutral_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RegionNeutral.RegionNeutral_C.Construct
struct URegionNeutral_C_Construct_Params
{
};

// Function RegionNeutral.RegionNeutral_C.ExecuteUbergraph_RegionNeutral
struct URegionNeutral_C_ExecuteUbergraph_RegionNeutral_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
