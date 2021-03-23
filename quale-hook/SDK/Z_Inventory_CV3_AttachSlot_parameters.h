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

// Function Z_Inventory_CV3_AttachSlot.Z_Inventory_CV3_AttachSlot_C.OnMouseButtonDown
struct UZ_Inventory_CV3_AttachSlot_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Z_Inventory_CV3_AttachSlot.Z_Inventory_CV3_AttachSlot_C.OnDragDetected
struct UZ_Inventory_CV3_AttachSlot_C_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_Inventory_CV3_AttachSlot.Z_Inventory_CV3_AttachSlot_C.Tick
struct UZ_Inventory_CV3_AttachSlot_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_Inventory_CV3_AttachSlot.Z_Inventory_CV3_AttachSlot_C.MouseDrop
struct UZ_Inventory_CV3_AttachSlot_C_MouseDrop_Params
{
};

// Function Z_Inventory_CV3_AttachSlot.Z_Inventory_CV3_AttachSlot_C.Draw
struct UZ_Inventory_CV3_AttachSlot_C_Draw_Params
{
	struct FZ_LootStr                                  Z_Loot;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_Inventory_CV3_AttachSlot.Z_Inventory_CV3_AttachSlot_C.Root_MouseDrop
struct UZ_Inventory_CV3_AttachSlot_C_Root_MouseDrop_Params
{
};

// Function Z_Inventory_CV3_AttachSlot.Z_Inventory_CV3_AttachSlot_C.Clear
struct UZ_Inventory_CV3_AttachSlot_C_Clear_Params
{
};

// Function Z_Inventory_CV3_AttachSlot.Z_Inventory_CV3_AttachSlot_C.ExecuteUbergraph_Z_Inventory_CV3_AttachSlot
struct UZ_Inventory_CV3_AttachSlot_C_ExecuteUbergraph_Z_Inventory_CV3_AttachSlot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
