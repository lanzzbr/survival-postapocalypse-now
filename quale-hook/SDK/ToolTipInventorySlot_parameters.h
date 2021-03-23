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

// Function ToolTipInventorySlot.ToolTipInventorySlot_C.Construct
struct UToolTipInventorySlot_C_Construct_Params
{
};

// Function ToolTipInventorySlot.ToolTipInventorySlot_C.Tick
struct UToolTipInventorySlot_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ToolTipInventorySlot.ToolTipInventorySlot_C.Draw
struct UToolTipInventorySlot_C_Draw_Params
{
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ToolTipInventorySlot.ToolTipInventorySlot_C.ExecuteUbergraph_ToolTipInventorySlot
struct UToolTipInventorySlot_C_ExecuteUbergraph_ToolTipInventorySlot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
