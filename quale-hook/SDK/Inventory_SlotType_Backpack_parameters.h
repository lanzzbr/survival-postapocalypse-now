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

// Function Inventory_SlotType_Backpack.Inventory_SlotType_Backpack_C.Construct
struct UInventory_SlotType_Backpack_C_Construct_Params
{
};

// Function Inventory_SlotType_Backpack.Inventory_SlotType_Backpack_C.Draw
struct UInventory_SlotType_Backpack_C_Draw_Params
{
	struct FText                                       Loot_name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  Texture;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_SlotType_Backpack.Inventory_SlotType_Backpack_C.ShowHint
struct UInventory_SlotType_Backpack_C_ShowHint_Params
{
	struct FText                                       InText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Inventory_SlotType_Backpack.Inventory_SlotType_Backpack_C.HideHint
struct UInventory_SlotType_Backpack_C_HideHint_Params
{
};

// Function Inventory_SlotType_Backpack.Inventory_SlotType_Backpack_C.ExecuteUbergraph_Inventory_SlotType_Backpack
struct UInventory_SlotType_Backpack_C_ExecuteUbergraph_Inventory_SlotType_Backpack_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
