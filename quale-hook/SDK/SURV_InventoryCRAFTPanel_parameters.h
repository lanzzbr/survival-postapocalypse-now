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

// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.GenerateTable
struct USURV_InventoryCRAFTPanel_C_GenerateTable_Params
{
};

// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.SetAboutText
struct USURV_InventoryCRAFTPanel_C_SetAboutText_Params
{
	TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> CraftItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.DrawSelected
struct USURV_InventoryCRAFTPanel_C_DrawSelected_Params
{
};

// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.CheckCraft
struct USURV_InventoryCRAFTPanel_C_CheckCraft_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NoSort;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.GetText_1
struct USURV_InventoryCRAFTPanel_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.Get_Button_Craft_bIsEnabled_1
struct USURV_InventoryCRAFTPanel_C_Get_Button_Craft_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.Create CraftSlots
struct USURV_InventoryCRAFTPanel_C_Create_CraftSlots_Params
{
};

// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.AddSlotsToArray
struct USURV_InventoryCRAFTPanel_C_AddSlotsToArray_Params
{
};

// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.Tick
struct USURV_InventoryCRAFTPanel_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.BndEvt__Button_Craft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct USURV_InventoryCRAFTPanel_C_BndEvt__Button_Craft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.BndEvt__Button_113_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
struct USURV_InventoryCRAFTPanel_C_BndEvt__Button_113_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.RootDrawSlots
struct USURV_InventoryCRAFTPanel_C_RootDrawSlots_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.RootCraft This
struct USURV_InventoryCRAFTPanel_C_RootCraft_This_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.Construct
struct USURV_InventoryCRAFTPanel_C_Construct_Params
{
};

// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.RootShowMyCraft
struct USURV_InventoryCRAFTPanel_C_RootShowMyCraft_Params
{
};

// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.RootShowActorCraft
struct USURV_InventoryCRAFTPanel_C_RootShowActorCraft_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.RootUpdateCraftPanel
struct USURV_InventoryCRAFTPanel_C_RootUpdateCraftPanel_Params
{
};

// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.OnCloseCraft
struct USURV_InventoryCRAFTPanel_C_OnCloseCraft_Params
{
};

// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.ExecuteUbergraph_SURV_InventoryCRAFTPanel
struct USURV_InventoryCRAFTPanel_C_ExecuteUbergraph_SURV_InventoryCRAFTPanel_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.ClickClose_0__DelegateSignature
struct USURV_InventoryCRAFTPanel_C_ClickClose_0__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
