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

// Function Inventory_SlotType_Equip.Inventory_SlotType_Equip_C.Draw
struct UInventory_SlotType_Equip_C_Draw_Params
{
	struct FText                                       Loot_name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  Texture;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inventory_SlotType_Equip.Inventory_SlotType_Equip_C.SetAmmoInfo
struct UInventory_SlotType_Equip_C_SetAmmoInfo_Params
{
	class UTexture2D*                                  Texture;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Inventory_SlotType_Equip.Inventory_SlotType_Equip_C.ExecuteUbergraph_Inventory_SlotType_Equip
struct UInventory_SlotType_Equip_C_ExecuteUbergraph_Inventory_SlotType_Equip_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
