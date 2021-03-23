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

// Function Inventory_MassWidget.Inventory_MassWidget_C.GetText_Percents
struct UInventory_MassWidget_C_GetText_Percents_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Inventory_MassWidget.Inventory_MassWidget_C.MovePercent
struct UInventory_MassWidget_C_MovePercent_Params
{
};

// Function Inventory_MassWidget.Inventory_MassWidget_C.Tick
struct UInventory_MassWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_MassWidget.Inventory_MassWidget_C.OverloadEvent
struct UInventory_MassWidget_C_OverloadEvent_Params
{
	float                                              LootMassMass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_MassWidget.Inventory_MassWidget_C.Update
struct UInventory_MassWidget_C_Update_Params
{
};

// Function Inventory_MassWidget.Inventory_MassWidget_C.ExecuteUbergraph_Inventory_MassWidget
struct UInventory_MassWidget_C_ExecuteUbergraph_Inventory_MassWidget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
