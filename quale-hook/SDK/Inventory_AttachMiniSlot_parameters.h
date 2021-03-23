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

// Function Inventory_AttachMiniSlot.Inventory_AttachMiniSlot_C.OnMouseButtonDown
struct UInventory_AttachMiniSlot_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Inventory_AttachMiniSlot.Inventory_AttachMiniSlot_C.OnDragDetected
struct UInventory_AttachMiniSlot_C_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_AttachMiniSlot.Inventory_AttachMiniSlot_C.Tick
struct UInventory_AttachMiniSlot_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_AttachMiniSlot.Inventory_AttachMiniSlot_C.Draw
struct UInventory_AttachMiniSlot_C_Draw_Params
{
	struct FZ_LootStr                                  Z_Loot;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Inventory_AttachMiniSlot.Inventory_AttachMiniSlot_C.MouseDrop
struct UInventory_AttachMiniSlot_C_MouseDrop_Params
{
};

// Function Inventory_AttachMiniSlot.Inventory_AttachMiniSlot_C.SetParametrs
struct UInventory_AttachMiniSlot_C_SetParametrs_Params
{
	bool                                               is_container;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_AttachMiniSlot.Inventory_AttachMiniSlot_C.ExecuteUbergraph_Inventory_AttachMiniSlot
struct UInventory_AttachMiniSlot_C_ExecuteUbergraph_Inventory_AttachMiniSlot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
