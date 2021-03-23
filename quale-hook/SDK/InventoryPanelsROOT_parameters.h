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

// Function InventoryPanelsROOT.InventoryPanelsROOT_C.RemoveLootByIndexes
struct UInventoryPanelsROOT_C_RemoveLootByIndexes_Params
{
	TArray<int>                                        IndexesToRemove;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function InventoryPanelsROOT.InventoryPanelsROOT_C.GetSelectedItems
struct UInventoryPanelsROOT_C_GetSelectedItems_Params
{
	TArray<int>                                        SelectedItems;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function InventoryPanelsROOT.InventoryPanelsROOT_C.DrawSlots
struct UInventoryPanelsROOT_C_DrawSlots_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryPanelsROOT.InventoryPanelsROOT_C.GetAllLoot
struct UInventoryPanelsROOT_C_GetAllLoot_Params
{
	TArray<struct FCv2_LootCargoStructure>             Loot;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function InventoryPanelsROOT.InventoryPanelsROOT_C.Construct
struct UInventoryPanelsROOT_C_Construct_Params
{
};

// Function InventoryPanelsROOT.InventoryPanelsROOT_C.Tick
struct UInventoryPanelsROOT_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryPanelsROOT.InventoryPanelsROOT_C.ExecuteUbergraph_InventoryPanelsROOT
struct UInventoryPanelsROOT_C_ExecuteUbergraph_InventoryPanelsROOT_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryPanelsROOT.InventoryPanelsROOT_C.DrawCards__DelegateSignature
struct UInventoryPanelsROOT_C_DrawCards__DelegateSignature_Params
{
	TArray<struct FCv2_LootCargoStructure>             InventoryLoot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
