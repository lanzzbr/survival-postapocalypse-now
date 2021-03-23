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

// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.SetAboutText
struct UInventoryCRAFTPanel_C_SetAboutText_Params
{
	TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> CraftItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.DrawSelected
struct UInventoryCRAFTPanel_C_DrawSelected_Params
{
};

// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.SortCraft
struct UInventoryCRAFTPanel_C_SortCraft_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.GetText_1
struct UInventoryCRAFTPanel_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.Get_Button_Craft_bIsEnabled_1
struct UInventoryCRAFTPanel_C_Get_Button_Craft_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.AddRootToChild
struct UInventoryCRAFTPanel_C_AddRootToChild_Params
{
};

// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.Create CraftSlots
struct UInventoryCRAFTPanel_C_Create_CraftSlots_Params
{
};

// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.AddSlotsToArray
struct UInventoryCRAFTPanel_C_AddSlotsToArray_Params
{
};

// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.Construct
struct UInventoryCRAFTPanel_C_Construct_Params
{
};

// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.Tick
struct UInventoryCRAFTPanel_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.DrawSlots
struct UInventoryCRAFTPanel_C_DrawSlots_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.BndEvt__Button_Craft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UInventoryCRAFTPanel_C_BndEvt__Button_Craft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.ShowActorCraft
struct UInventoryCRAFTPanel_C_ShowActorCraft_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.ShowMyCraft
struct UInventoryCRAFTPanel_C_ShowMyCraft_Params
{
};

// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.Craft This
struct UInventoryCRAFTPanel_C_Craft_This_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.Reset
struct UInventoryCRAFTPanel_C_Reset_Params
{
};

// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.UpdateCraftPanel
struct UInventoryCRAFTPanel_C_UpdateCraftPanel_Params
{
};

// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.ExecuteUbergraph_InventoryCRAFTPanel
struct UInventoryCRAFTPanel_C_ExecuteUbergraph_InventoryCRAFTPanel_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
