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

// Function SURV_Inventory_Eqpt.SURV_Inventory_Eqpt_C.ShowHideMagazine
struct USURV_Inventory_Eqpt_C_ShowHideMagazine_Params
{
	TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>          EqptSocet;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_Eqpt.SURV_Inventory_Eqpt_C.ShowHideSilencer
struct USURV_Inventory_Eqpt_C_ShowHideSilencer_Params
{
	TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>          EqptSocet;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_Eqpt.SURV_Inventory_Eqpt_C.SetAmmoCount
struct USURV_Inventory_Eqpt_C_SetAmmoCount_Params
{
};

// Function SURV_Inventory_Eqpt.SURV_Inventory_Eqpt_C.ShowHideOpticSlot
struct USURV_Inventory_Eqpt_C_ShowHideOpticSlot_Params
{
	TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>          EqptSocet;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_Eqpt.SURV_Inventory_Eqpt_C.Root_HideHInt
struct USURV_Inventory_Eqpt_C_Root_HideHInt_Params
{
};

// Function SURV_Inventory_Eqpt.SURV_Inventory_Eqpt_C.Root_ShowHInt
struct USURV_Inventory_Eqpt_C_Root_ShowHInt_Params
{
	struct FText                                       HintText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SURV_Inventory_Eqpt.SURV_Inventory_Eqpt_C.Construct
struct USURV_Inventory_Eqpt_C_Construct_Params
{
};

// Function SURV_Inventory_Eqpt.SURV_Inventory_Eqpt_C.Root_Style_Clear
struct USURV_Inventory_Eqpt_C_Root_Style_Clear_Params
{
};

// Function SURV_Inventory_Eqpt.SURV_Inventory_Eqpt_C.BndEvt__MouseWheelZone_K2Node_ComponentBoundEvent_0_MouseWheel__DelegateSignature
struct USURV_Inventory_Eqpt_C_BndEvt__MouseWheelZone_K2Node_ComponentBoundEvent_0_MouseWheel__DelegateSignature_Params
{
	float                                              Delta;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_Inventory_Eqpt.SURV_Inventory_Eqpt_C.Root_Set_Ammo_Info
struct USURV_Inventory_Eqpt_C_Root_Set_Ammo_Info_Params
{
	struct FWeaponAmmoInfoStr                          WeaponInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SURV_Inventory_Eqpt.SURV_Inventory_Eqpt_C.Root_ShowBackpackIcon
struct USURV_Inventory_Eqpt_C_Root_ShowBackpackIcon_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SURV_Inventory_Eqpt.SURV_Inventory_Eqpt_C.Root_Hide_Ammo_Icon
struct USURV_Inventory_Eqpt_C_Root_Hide_Ammo_Icon_Params
{
};

// Function SURV_Inventory_Eqpt.SURV_Inventory_Eqpt_C.Root_Style_Draw
struct USURV_Inventory_Eqpt_C_Root_Style_Draw_Params
{
};

// Function SURV_Inventory_Eqpt.SURV_Inventory_Eqpt_C.ExecuteUbergraph_SURV_Inventory_Eqpt
struct USURV_Inventory_Eqpt_C_ExecuteUbergraph_SURV_Inventory_Eqpt_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
