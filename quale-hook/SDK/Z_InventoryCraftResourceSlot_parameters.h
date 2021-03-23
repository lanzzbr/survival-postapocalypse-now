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

// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.Get_Fon_ColorAndOpacity_1
struct UZ_InventoryCraftResourceSlot_C_Get_Fon_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.GetVisibility_1
struct UZ_InventoryCraftResourceSlot_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.Get_Count_Text_1
struct UZ_InventoryCraftResourceSlot_C_Get_Count_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.OnMouseButtonUp
struct UZ_InventoryCraftResourceSlot_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.OnMouseButtonDown
struct UZ_InventoryCraftResourceSlot_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.Construct
struct UZ_InventoryCraftResourceSlot_C_Construct_Params
{
};

// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.OnMouseEnter
struct UZ_InventoryCraftResourceSlot_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.OnMouseLeave
struct UZ_InventoryCraftResourceSlot_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.ClearSlot
struct UZ_InventoryCraftResourceSlot_C_ClearSlot_Params
{
};

// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.DrawSlot
struct UZ_InventoryCraftResourceSlot_C_DrawSlot_Params
{
	struct FCv2_LootCargoStructure                     Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.ExecuteUbergraph_Z_InventoryCraftResourceSlot
struct UZ_InventoryCraftResourceSlot_C_ExecuteUbergraph_Z_InventoryCraftResourceSlot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
