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

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.OnMouseButtonUp
struct UZ_Inventory_Slot_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.GetHintText
struct UZ_Inventory_Slot_C_GetHintText_Params
{
	struct FText                                       HintText;                                                  // (Parm, OutParm)
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.Get_CountText_Text_1
struct UZ_Inventory_Slot_C_Get_CountText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.Get_SplitProgress_Visibility_1
struct UZ_Inventory_Slot_C_Get_SplitProgress_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.SetSplitProgress
struct UZ_Inventory_Slot_C_SetSplitProgress_Params
{
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.CheckCanCombine
struct UZ_Inventory_Slot_C_CheckCanCombine_Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               CanCombine;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.Style_SetCanCombine
struct UZ_Inventory_Slot_C_Style_SetCanCombine_Params
{
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.ShowBackpackIcon
struct UZ_Inventory_Slot_C_ShowBackpackIcon_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.DoUNATTACH
struct UZ_Inventory_Slot_C_DoUNATTACH_Params
{
	bool                                               From_IsContainer;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               To_IsContainer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                FromIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Toindex;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UZ_InventoryManager_C*                       Manager;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsScope;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.CheckAttachet
struct UZ_Inventory_Slot_C_CheckAttachet_Params
{
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.UseItem
struct UZ_Inventory_Slot_C_UseItem_Params
{
	bool                                               IsDoubleClick;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.OnMouseButtonDoubleClick
struct UZ_Inventory_Slot_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               InMouseEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.CallDropOut
struct UZ_Inventory_Slot_C_CallDropOut_Params
{
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.CheckCanDrop
struct UZ_Inventory_Slot_C_CheckCanDrop_Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.CallDropEvent
struct UZ_Inventory_Slot_C_CallDropEvent_Params
{
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.Style_SetCanDrop
struct UZ_Inventory_Slot_C_Style_SetCanDrop_Params
{
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.Style_SetBlockDrop
struct UZ_Inventory_Slot_C_Style_SetBlockDrop_Params
{
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.CheckTypeText
struct UZ_Inventory_Slot_C_CheckTypeText_Params
{
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.Style_SetNormal
struct UZ_Inventory_Slot_C_Style_SetNormal_Params
{
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.Style_SetDrag
struct UZ_Inventory_Slot_C_Style_SetDrag_Params
{
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.OnDrop
struct UZ_Inventory_Slot_C_OnDrop_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.OnDragDetected
struct UZ_Inventory_Slot_C_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.OnMouseButtonDown
struct UZ_Inventory_Slot_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.Construct
struct UZ_Inventory_Slot_C_Construct_Params
{
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.Draw
struct UZ_Inventory_Slot_C_Draw_Params
{
	struct FZ_LootStr                                  LootStr;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               GlobalUpdate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.OnMouseEnter
struct UZ_Inventory_Slot_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.OnMouseLeave
struct UZ_Inventory_Slot_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.SetSlotType
struct UZ_Inventory_Slot_C_SetSlotType_Params
{
	TEnumAsByte<InventoryWidgetType_EInventoryWidgetType> SlotType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Loot_name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  Texture;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.Tick
struct UZ_Inventory_Slot_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.BndEvt__MouseWheelZone_K2Node_ComponentBoundEvent_4_MouseWheel__DelegateSignature
struct UZ_Inventory_Slot_C_BndEvt__MouseWheelZone_K2Node_ComponentBoundEvent_4_MouseWheel__DelegateSignature_Params
{
	float                                              Delta;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.MOuseRelease
struct UZ_Inventory_Slot_C_MOuseRelease_Params
{
};

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.ExecuteUbergraph_Z_Inventory_Slot
struct UZ_Inventory_Slot_C_ExecuteUbergraph_Z_Inventory_Slot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
