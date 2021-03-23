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

// Function InventoryBigCard.InventoryBigCard_C.OnMouseButtonDown
struct UInventoryBigCard_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function InventoryBigCard.InventoryBigCard_C.Get_Footer_Text_1
struct UInventoryBigCard_C_Get_Footer_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function InventoryBigCard.InventoryBigCard_C.DrawCard
struct UInventoryBigCard_C_DrawCard_Params
{
	struct FCv2_LootCargoStructure                     LootType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function InventoryBigCard.InventoryBigCard_C.ClearCard
struct UInventoryBigCard_C_ClearCard_Params
{
};

// Function InventoryBigCard.InventoryBigCard_C.OnMouseLeave
struct UInventoryBigCard_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function InventoryBigCard.InventoryBigCard_C.OnMouseEnter
struct UInventoryBigCard_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function InventoryBigCard.InventoryBigCard_C.Construct
struct UInventoryBigCard_C_Construct_Params
{
};

// Function InventoryBigCard.InventoryBigCard_C.ExecuteUbergraph_InventoryBigCard
struct UInventoryBigCard_C_ExecuteUbergraph_InventoryBigCard_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
