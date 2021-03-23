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

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.GenerateTable
struct UZ_InventoryCRAFTPanel_C_GenerateTable_Params
{
};

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.SetAboutText
struct UZ_InventoryCRAFTPanel_C_SetAboutText_Params
{
	TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> CraftItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.DrawSelected
struct UZ_InventoryCRAFTPanel_C_DrawSelected_Params
{
};

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.CheckCraft
struct UZ_InventoryCRAFTPanel_C_CheckCraft_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NoSort;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.GetText_1
struct UZ_InventoryCRAFTPanel_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.Get_Button_Craft_bIsEnabled_1
struct UZ_InventoryCRAFTPanel_C_Get_Button_Craft_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.AddRootToChild
struct UZ_InventoryCRAFTPanel_C_AddRootToChild_Params
{
};

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.Create CraftSlots
struct UZ_InventoryCRAFTPanel_C_Create_CraftSlots_Params
{
};

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.AddSlotsToArray
struct UZ_InventoryCRAFTPanel_C_AddSlotsToArray_Params
{
};

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.Construct
struct UZ_InventoryCRAFTPanel_C_Construct_Params
{
};

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.Tick
struct UZ_InventoryCRAFTPanel_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.DrawSlots
struct UZ_InventoryCRAFTPanel_C_DrawSlots_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.BndEvt__Button_Craft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UZ_InventoryCRAFTPanel_C_BndEvt__Button_Craft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.ShowActorCraft
struct UZ_InventoryCRAFTPanel_C_ShowActorCraft_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.ShowMyCraft
struct UZ_InventoryCRAFTPanel_C_ShowMyCraft_Params
{
};

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.Craft This
struct UZ_InventoryCRAFTPanel_C_Craft_This_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.Reset
struct UZ_InventoryCRAFTPanel_C_Reset_Params
{
};

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.UpdateCraftPanel
struct UZ_InventoryCRAFTPanel_C_UpdateCraftPanel_Params
{
};

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.BndEvt__Button_113_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
struct UZ_InventoryCRAFTPanel_C_BndEvt__Button_113_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.OnCloseCraft
struct UZ_InventoryCRAFTPanel_C_OnCloseCraft_Params
{
};

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.ExecuteUbergraph_Z_InventoryCRAFTPanel
struct UZ_InventoryCRAFTPanel_C_ExecuteUbergraph_Z_InventoryCRAFTPanel_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.ClickClose__DelegateSignature
struct UZ_InventoryCRAFTPanel_C_ClickClose__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
