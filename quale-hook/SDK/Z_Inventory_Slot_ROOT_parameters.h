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

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.GetAttachIndex
struct UZ_Inventory_Slot_ROOT_C_GetAttachIndex_Params
{
	TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>          LootEquipSocet;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UZ_InventoryManager_C*                       Manager;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Array_Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.CalcDecrementMass
struct UZ_Inventory_Slot_ROOT_C_CalcDecrementMass_Params
{
	struct FZ_LootStr                                  StructRef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.SlotDecrementMass
struct UZ_Inventory_Slot_ROOT_C_SlotDecrementMass_Params
{
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.ShowOverload
struct UZ_Inventory_Slot_ROOT_C_ShowOverload_Params
{
	float                                              OverloadMass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Hide_Ammo_Icon
struct UZ_Inventory_Slot_ROOT_C_Root_Hide_Ammo_Icon_Params
{
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Set_Ammo_Info
struct UZ_Inventory_Slot_ROOT_C_Root_Set_Ammo_Info_Params
{
	struct FWeaponAmmoInfoStr                          WeaponInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_MouseWhell
struct UZ_Inventory_Slot_ROOT_C_Root_MouseWhell_Params
{
	float                                              Delta;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Clear
struct UZ_Inventory_Slot_ROOT_C_Clear_Params
{
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Style_Draw
struct UZ_Inventory_Slot_ROOT_C_Root_Style_Draw_Params
{
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Style_Clear
struct UZ_Inventory_Slot_ROOT_C_Root_Style_Clear_Params
{
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_ShowHInt
struct UZ_Inventory_Slot_ROOT_C_Root_ShowHInt_Params
{
	struct FText                                       HintText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_HideHInt
struct UZ_Inventory_Slot_ROOT_C_Root_HideHInt_Params
{
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Initialization
struct UZ_Inventory_Slot_ROOT_C_Initialization_Params
{
	class UImage*                                      Fon;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      SPLIT_PROGRESS;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                                ATTACH_PANEL;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UZ_Inventory_AttachRoot_C*                   Attach1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UZ_Inventory_AttachRoot_C*                   Attach2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  TEXT_SLOT_TYPE;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      CAN_DROP_IMAGE;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      BLOCK_DROP_IMAGE;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      CAN_COMBINE_IMAGE;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      ON_DRAG_IMAGE;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.OnMouseButtonUp
struct UZ_Inventory_Slot_ROOT_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.GetHintText
struct UZ_Inventory_Slot_ROOT_C_GetHintText_Params
{
	struct FText                                       HintText;                                                  // (Parm, OutParm)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Get_CountText
struct UZ_Inventory_Slot_ROOT_C_Root_Get_CountText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Get_SplitProgress_Visibility
struct UZ_Inventory_Slot_ROOT_C_Root_Get_SplitProgress_Visibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.SetSplitProgress
struct UZ_Inventory_Slot_ROOT_C_SetSplitProgress_Params
{
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.CheckCanCombine
struct UZ_Inventory_Slot_ROOT_C_CheckCanCombine_Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               CanCombine;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Style_SetCanCombine
struct UZ_Inventory_Slot_ROOT_C_Root_Style_SetCanCombine_Params
{
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_ShowBackpackIcon
struct UZ_Inventory_Slot_ROOT_C_Root_ShowBackpackIcon_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.DoUNATTACH
struct UZ_Inventory_Slot_ROOT_C_DoUNATTACH_Params
{
	bool                                               From_IsContainer;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               To_IsContainer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                FromIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Toindex;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UZ_InventoryManager_C*                       Manager;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsScope;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsMagazine;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.CheckAttachet
struct UZ_Inventory_Slot_ROOT_C_CheckAttachet_Params
{
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.UseItem
struct UZ_Inventory_Slot_ROOT_C_UseItem_Params
{
	bool                                               IsDoubleClick;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.OnMouseButtonDoubleClick
struct UZ_Inventory_Slot_ROOT_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               InMouseEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.CallDropOut
struct UZ_Inventory_Slot_ROOT_C_CallDropOut_Params
{
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.CheckCanDrop
struct UZ_Inventory_Slot_ROOT_C_CheckCanDrop_Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.CallDropEvent
struct UZ_Inventory_Slot_ROOT_C_CallDropEvent_Params
{
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Style_SetCanDrop
struct UZ_Inventory_Slot_ROOT_C_Root_Style_SetCanDrop_Params
{
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Style_SetBlockDrop
struct UZ_Inventory_Slot_ROOT_C_Root_Style_SetBlockDrop_Params
{
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.CheckTypeText
struct UZ_Inventory_Slot_ROOT_C_CheckTypeText_Params
{
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Style_SetNormal
struct UZ_Inventory_Slot_ROOT_C_Style_SetNormal_Params
{
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Style_SetDrag
struct UZ_Inventory_Slot_ROOT_C_Root_Style_SetDrag_Params
{
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.OnDrop
struct UZ_Inventory_Slot_ROOT_C_OnDrop_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.OnDragDetected
struct UZ_Inventory_Slot_ROOT_C_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.OnMouseButtonDown
struct UZ_Inventory_Slot_ROOT_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Construct
struct UZ_Inventory_Slot_ROOT_C_Construct_Params
{
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Draw
struct UZ_Inventory_Slot_ROOT_C_Draw_Params
{
	struct FZ_LootStr                                  LootStr;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               GlobalUpdate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.OnMouseEnter
struct UZ_Inventory_Slot_ROOT_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.OnMouseLeave
struct UZ_Inventory_Slot_ROOT_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.MOuseRelease
struct UZ_Inventory_Slot_ROOT_C_MOuseRelease_Params
{
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.RootConstruct
struct UZ_Inventory_Slot_ROOT_C_RootConstruct_Params
{
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Child_SetNormalStyle
struct UZ_Inventory_Slot_ROOT_C_Root_Child_SetNormalStyle_Params
{
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.ROOT_OnSplit
struct UZ_Inventory_Slot_ROOT_C_ROOT_OnSplit_Params
{
};

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.ExecuteUbergraph_Z_Inventory_Slot_ROOT
struct UZ_Inventory_Slot_ROOT_C_ExecuteUbergraph_Z_Inventory_Slot_ROOT_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
