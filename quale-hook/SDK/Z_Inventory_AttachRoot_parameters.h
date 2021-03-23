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

// Function Z_Inventory_AttachRoot.Z_Inventory_AttachRoot_C.Clear
struct UZ_Inventory_AttachRoot_C_Clear_Params
{
};

// Function Z_Inventory_AttachRoot.Z_Inventory_AttachRoot_C.Draw
struct UZ_Inventory_AttachRoot_C_Draw_Params
{
	struct FZ_LootStr                                  Z_Loot;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_Inventory_AttachRoot.Z_Inventory_AttachRoot_C.SetParametrs
struct UZ_Inventory_AttachRoot_C_SetParametrs_Params
{
	bool                                               IsContainer;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_Inventory_AttachRoot.Z_Inventory_AttachRoot_C.Root_MouseDrop
struct UZ_Inventory_AttachRoot_C_Root_MouseDrop_Params
{
};

// Function Z_Inventory_AttachRoot.Z_Inventory_AttachRoot_C.ExecuteUbergraph_Z_Inventory_AttachRoot
struct UZ_Inventory_AttachRoot_C_ExecuteUbergraph_Z_Inventory_AttachRoot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
