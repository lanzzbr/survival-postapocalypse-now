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

// Function Inventory_BASE.Inventory_BASE_C.OnMouseWheel
struct UInventory_BASE_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Inventory_BASE.Inventory_BASE_C.OnMouseButtonDoubleClick
struct UInventory_BASE_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               InMouseEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Inventory_BASE.Inventory_BASE_C.OnMouseButtonDown
struct UInventory_BASE_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Inventory_BASE.Inventory_BASE_C.Get_DropMouseIco_Visibility_1
struct UInventory_BASE_C_Get_DropMouseIco_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_BASE.Inventory_BASE_C.Get_TextDrop_Visibility_1
struct UInventory_BASE_C_Get_TextDrop_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_BASE.Inventory_BASE_C.UpdateOtherPanel
struct UInventory_BASE_C_UpdateOtherPanel_Params
{
};

// Function Inventory_BASE.Inventory_BASE_C.GetText_3
struct UInventory_BASE_C_GetText_3_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Inventory_BASE.Inventory_BASE_C.Get_Button_Trash_Visibility_1
struct UInventory_BASE_C_Get_Button_Trash_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_BASE.Inventory_BASE_C.CheckAmmo
struct UInventory_BASE_C_CheckAmmo_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_BASE.Inventory_BASE_C.GetText_2
struct UInventory_BASE_C_GetText_2_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Inventory_BASE.Inventory_BASE_C.GetText_1
struct UInventory_BASE_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Inventory_BASE.Inventory_BASE_C.Get_OutButton_Visibility_1
struct UInventory_BASE_C_Get_OutButton_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_BASE.Inventory_BASE_C.Get_InButton_Visibility_1
struct UInventory_BASE_C_Get_InButton_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_BASE.Inventory_BASE_C.HidePanelAndButtons
struct UInventory_BASE_C_HidePanelAndButtons_Params
{
	bool                                               Hide;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Inventory_BASE.Inventory_BASE_C.GetSelectedSlots
struct UInventory_BASE_C_GetSelectedSlots_Params
{
	TArray<int>                                        SelectedIndexes;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function Inventory_BASE.Inventory_BASE_C.RemoveFromInventoryArray
struct UInventory_BASE_C_RemoveFromInventoryArray_Params
{
	TArray<int>                                        Indexes;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FCv2_LootCargoStructure>             ReturnLoot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Inventory_BASE.Inventory_BASE_C.MoveLootIn
struct UInventory_BASE_C_MoveLootIn_Params
{
};

// Function Inventory_BASE.Inventory_BASE_C.GetWidgetByIndex
struct UInventory_BASE_C_GetWidgetByIndex_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 UserWidget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_BASE.Inventory_BASE_C.RefreshInventory
struct UInventory_BASE_C_RefreshInventory_Params
{
};

// Function Inventory_BASE.Inventory_BASE_C.ClearBackPack
struct UInventory_BASE_C_ClearBackPack_Params
{
};

// Function Inventory_BASE.Inventory_BASE_C.DrawBackPack
struct UInventory_BASE_C_DrawBackPack_Params
{
};

// Function Inventory_BASE.Inventory_BASE_C.AddRootToChild
struct UInventory_BASE_C_AddRootToChild_Params
{
};

// Function Inventory_BASE.Inventory_BASE_C.ClearMainSlots
struct UInventory_BASE_C_ClearMainSlots_Params
{
};

// Function Inventory_BASE.Inventory_BASE_C.USE_Backpak_slot
struct UInventory_BASE_C_USE_Backpak_slot_Params
{
	struct FCv2_LootCargoStructure                     Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int                                                Instigator_Index;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_BASE.Inventory_BASE_C.Construct
struct UInventory_BASE_C_Construct_Params
{
};

// Function Inventory_BASE.Inventory_BASE_C.Tick
struct UInventory_BASE_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_BASE.Inventory_BASE_C.BndEvt__Button_118_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UInventory_BASE_C_BndEvt__Button_118_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Inventory_BASE.Inventory_BASE_C.BndEvt__Button_367_K2Node_ComponentBoundEvent_206_OnButtonClickedEvent__DelegateSignature
struct UInventory_BASE_C_BndEvt__Button_367_K2Node_ComponentBoundEvent_206_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Inventory_BASE.Inventory_BASE_C.BndEvt__InButton_K2Node_ComponentBoundEvent_209_OnButtonClickedEvent__DelegateSignature
struct UInventory_BASE_C_BndEvt__InButton_K2Node_ComponentBoundEvent_209_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Inventory_BASE.Inventory_BASE_C.BndEvt__OutButton_K2Node_ComponentBoundEvent_412_OnButtonClickedEvent__DelegateSignature
struct UInventory_BASE_C_BndEvt__OutButton_K2Node_ComponentBoundEvent_412_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Inventory_BASE.Inventory_BASE_C.RefreshWidgetsEvent
struct UInventory_BASE_C_RefreshWidgetsEvent_Params
{
};

// Function Inventory_BASE.Inventory_BASE_C.Destruct
struct UInventory_BASE_C_Destruct_Params
{
};

// Function Inventory_BASE.Inventory_BASE_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature
struct UInventory_BASE_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Inventory_BASE.Inventory_BASE_C.BndEvt__Button_Trash_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
struct UInventory_BASE_C_BndEvt__Button_Trash_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Inventory_BASE.Inventory_BASE_C.CheckActorValid
struct UInventory_BASE_C_CheckActorValid_Params
{
};

// Function Inventory_BASE.Inventory_BASE_C.BindRefreshInventory
struct UInventory_BASE_C_BindRefreshInventory_Params
{
};

// Function Inventory_BASE.Inventory_BASE_C.ExecuteUbergraph_Inventory_BASE
struct UInventory_BASE_C_ExecuteUbergraph_Inventory_BASE_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
