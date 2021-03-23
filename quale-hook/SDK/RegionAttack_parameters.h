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

// Function RegionAttack.RegionAttack_C.SetDynamicColorAndOpacity
struct URegionAttack_C_SetDynamicColorAndOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RegionAttack.RegionAttack_C.GetText_1
struct URegionAttack_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function RegionAttack.RegionAttack_C.Construct
struct URegionAttack_C_Construct_Params
{
};

// Function RegionAttack.RegionAttack_C.Tick
struct URegionAttack_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RegionAttack.RegionAttack_C.Destruct
struct URegionAttack_C_Destruct_Params
{
};

// Function RegionAttack.RegionAttack_C.ExecuteUbergraph_RegionAttack
struct URegionAttack_C_ExecuteUbergraph_RegionAttack_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
