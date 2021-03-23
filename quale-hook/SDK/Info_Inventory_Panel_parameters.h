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

// Function Info_Inventory_Panel.Info_Inventory_Panel_C.GetCanFire
struct UInfo_Inventory_Panel_C_GetCanFire_Params
{
	bool                                               CanFire;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Info_Inventory_Panel.Info_Inventory_Panel_C.GetVisibility_1
struct UInfo_Inventory_Panel_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Info_Inventory_Panel.Info_Inventory_Panel_C.ChangeWeapon
struct UInfo_Inventory_Panel_C_ChangeWeapon_Params
{
	TEnumAsByte<Cv2_LootType_ECv2_LootType>            NewLootType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Info_Inventory_Panel.Info_Inventory_Panel_C.Construct
struct UInfo_Inventory_Panel_C_Construct_Params
{
};

// Function Info_Inventory_Panel.Info_Inventory_Panel_C.Destruct
struct UInfo_Inventory_Panel_C_Destruct_Params
{
};

// Function Info_Inventory_Panel.Info_Inventory_Panel_C.ShowSliderSlot
struct UInfo_Inventory_Panel_C_ShowSliderSlot_Params
{
};

// Function Info_Inventory_Panel.Info_Inventory_Panel_C.SlideWeapon
struct UInfo_Inventory_Panel_C_SlideWeapon_Params
{
	TEnumAsByte<Cv2_LootType_ECv2_LootType>            LootType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Info_Inventory_Panel.Info_Inventory_Panel_C.UseNow
struct UInfo_Inventory_Panel_C_UseNow_Params
{
};

// Function Info_Inventory_Panel.Info_Inventory_Panel_C.SwitchSelectWeapon
struct UInfo_Inventory_Panel_C_SwitchSelectWeapon_Params
{
};

// Function Info_Inventory_Panel.Info_Inventory_Panel_C.ShowWeapon
struct UInfo_Inventory_Panel_C_ShowWeapon_Params
{
};

// Function Info_Inventory_Panel.Info_Inventory_Panel_C.ExecuteUbergraph_Info_Inventory_Panel
struct UInfo_Inventory_Panel_C_ExecuteUbergraph_Info_Inventory_Panel_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
