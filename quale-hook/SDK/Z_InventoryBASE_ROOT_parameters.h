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

// Function Z_InventoryBASE_ROOT.Z_InventoryBASE_ROOT_C.Construct
struct UZ_InventoryBASE_ROOT_C_Construct_Params
{
};

// Function Z_InventoryBASE_ROOT.Z_InventoryBASE_ROOT_C.ROOT_CreateMenu
struct UZ_InventoryBASE_ROOT_C_ROOT_CreateMenu_Params
{
};

// Function Z_InventoryBASE_ROOT.Z_InventoryBASE_ROOT_C.ROOT_ShowInvtory
struct UZ_InventoryBASE_ROOT_C_ROOT_ShowInvtory_Params
{
};

// Function Z_InventoryBASE_ROOT.Z_InventoryBASE_ROOT_C.Root_ShowCraft
struct UZ_InventoryBASE_ROOT_C_Root_ShowCraft_Params
{
};

// Function Z_InventoryBASE_ROOT.Z_InventoryBASE_ROOT_C.Root_ShowActorCraft
struct UZ_InventoryBASE_ROOT_C_Root_ShowActorCraft_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_InventoryBASE_ROOT.Z_InventoryBASE_ROOT_C.ROOT_ShowPrOpticPart
struct UZ_InventoryBASE_ROOT_C_ROOT_ShowPrOpticPart_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryBASE_ROOT.Z_InventoryBASE_ROOT_C.ROOT_ShowInformation
struct UZ_InventoryBASE_ROOT_C_ROOT_ShowInformation_Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               IsContainer;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsTradeToAll;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryBASE_ROOT.Z_InventoryBASE_ROOT_C.ROOT_HideInformation
struct UZ_InventoryBASE_ROOT_C_ROOT_HideInformation_Params
{
};

// Function Z_InventoryBASE_ROOT.Z_InventoryBASE_ROOT_C.ROOT_respawnMode
struct UZ_InventoryBASE_ROOT_C_ROOT_respawnMode_Params
{
};

// Function Z_InventoryBASE_ROOT.Z_InventoryBASE_ROOT_C.Root_OnClose
struct UZ_InventoryBASE_ROOT_C_Root_OnClose_Params
{
};

// Function Z_InventoryBASE_ROOT.Z_InventoryBASE_ROOT_C.ROOT_ShowPrSilencerPart
struct UZ_InventoryBASE_ROOT_C_ROOT_ShowPrSilencerPart_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryBASE_ROOT.Z_InventoryBASE_ROOT_C.ROOT_ShowSecSilencerPart
struct UZ_InventoryBASE_ROOT_C_ROOT_ShowSecSilencerPart_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryBASE_ROOT.Z_InventoryBASE_ROOT_C.ROOT_ShowSecOpticPart
struct UZ_InventoryBASE_ROOT_C_ROOT_ShowSecOpticPart_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryBASE_ROOT.Z_InventoryBASE_ROOT_C.ROOT_ShowMagazinePrimary
struct UZ_InventoryBASE_ROOT_C_ROOT_ShowMagazinePrimary_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryBASE_ROOT.Z_InventoryBASE_ROOT_C.ROOT_ShowMagazineSecondary
struct UZ_InventoryBASE_ROOT_C_ROOT_ShowMagazineSecondary_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_InventoryBASE_ROOT.Z_InventoryBASE_ROOT_C.ExecuteUbergraph_Z_InventoryBASE_ROOT
struct UZ_InventoryBASE_ROOT_C_ExecuteUbergraph_Z_InventoryBASE_ROOT_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
