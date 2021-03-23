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

// Function InventorySlotsRoot.InventorySlotsRoot_C.Drop
struct UInventorySlotsRoot_C_Drop_Params
{
	int                                                SplitCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventorySlotsRoot.InventorySlotsRoot_C.HideThrober
struct UInventorySlotsRoot_C_HideThrober_Params
{
};

// Function InventorySlotsRoot.InventorySlotsRoot_C.ShowThrober
struct UInventorySlotsRoot_C_ShowThrober_Params
{
};

// Function InventorySlotsRoot.InventorySlotsRoot_C.GetLootSysytem
struct UInventorySlotsRoot_C_GetLootSysytem_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ULootSystemComponent_C*                      LootSystem;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventorySlotsRoot.InventorySlotsRoot_C.CheckMyState
struct UInventorySlotsRoot_C_CheckMyState_Params
{
};

// Function InventorySlotsRoot.InventorySlotsRoot_C.Use
struct UInventorySlotsRoot_C_Use_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SplitCoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventorySlotsRoot.InventorySlotsRoot_C.DrawSlot
struct UInventorySlotsRoot_C_DrawSlot_Params
{
	struct FCv2_LootCargoStructure                     Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function InventorySlotsRoot.InventorySlotsRoot_C.ClearSlot
struct UInventorySlotsRoot_C_ClearSlot_Params
{
};

// Function InventorySlotsRoot.InventorySlotsRoot_C.UnSelectInRoot
struct UInventorySlotsRoot_C_UnSelectInRoot_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventorySlotsRoot.InventorySlotsRoot_C.SelectInRoot
struct UInventorySlotsRoot_C_SelectInRoot_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventorySlotsRoot.InventorySlotsRoot_C.Construct
struct UInventorySlotsRoot_C_Construct_Params
{
};

// Function InventorySlotsRoot.InventorySlotsRoot_C.Tick
struct UInventorySlotsRoot_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventorySlotsRoot.InventorySlotsRoot_C.ExecuteUbergraph_InventorySlotsRoot
struct UInventorySlotsRoot_C_ExecuteUbergraph_InventorySlotsRoot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
