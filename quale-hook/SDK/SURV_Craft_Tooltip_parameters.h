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

// Function SURV_Craft_Tooltip.SURV_Craft_Tooltip_C.Construct
struct USURV_Craft_Tooltip_C_Construct_Params
{
};

// Function SURV_Craft_Tooltip.SURV_Craft_Tooltip_C.Tick
struct USURV_Craft_Tooltip_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Craft_Tooltip.SURV_Craft_Tooltip_C.DrawFromCraft
struct USURV_Craft_Tooltip_C_DrawFromCraft_Params
{
	struct FName                                       CraftName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Craft_Tooltip.SURV_Craft_Tooltip_C.Destruct
struct USURV_Craft_Tooltip_C_Destruct_Params
{
};

// Function SURV_Craft_Tooltip.SURV_Craft_Tooltip_C.ExecuteUbergraph_SURV_Craft_Tooltip
struct USURV_Craft_Tooltip_C_ExecuteUbergraph_SURV_Craft_Tooltip_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
