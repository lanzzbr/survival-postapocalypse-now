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

// Function Z_Inventory_Information.Z_Inventory_Information_C.DrawInteraction
struct UZ_Inventory_Information_C_DrawInteraction_Params
{
};

// Function Z_Inventory_Information.Z_Inventory_Information_C.DrawWeapon
struct UZ_Inventory_Information_C_DrawWeapon_Params
{
};

// Function Z_Inventory_Information.Z_Inventory_Information_C.Construct
struct UZ_Inventory_Information_C_Construct_Params
{
};

// Function Z_Inventory_Information.Z_Inventory_Information_C.Draw
struct UZ_Inventory_Information_C_Draw_Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               Dont_devision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsTradeToAll;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_Inventory_Information.Z_Inventory_Information_C.Clear
struct UZ_Inventory_Information_C_Clear_Params
{
};

// Function Z_Inventory_Information.Z_Inventory_Information_C.ExecuteUbergraph_Z_Inventory_Information
struct UZ_Inventory_Information_C_ExecuteUbergraph_Z_Inventory_Information_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
