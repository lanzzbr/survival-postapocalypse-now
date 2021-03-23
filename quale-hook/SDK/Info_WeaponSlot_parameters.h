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

// Function Info_WeaponSlot.Info_WeaponSlot_C.SlotTypeToEqptSocet
struct UInfo_WeaponSlot_C_SlotTypeToEqptSocet_Params
{
	TEnumAsByte<Cv2_SlotsTypeEnum_ECv2_SlotsTypeEnum>  SlotType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>          EqptSocet;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Info_WeaponSlot.Info_WeaponSlot_C.SetAmmo
struct UInfo_WeaponSlot_C_SetAmmo_Params
{
};

// Function Info_WeaponSlot.Info_WeaponSlot_C.CheckSelected
struct UInfo_WeaponSlot_C_CheckSelected_Params
{
};

// Function Info_WeaponSlot.Info_WeaponSlot_C.Get_Key_Text_1
struct UInfo_WeaponSlot_C_Get_Key_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Info_WeaponSlot.Info_WeaponSlot_C.CheckGranate
struct UInfo_WeaponSlot_C_CheckGranate_Params
{
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Info_WeaponSlot.Info_WeaponSlot_C.Get_PreviosIco_Brush_1
struct UInfo_WeaponSlot_C_Get_PreviosIco_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Info_WeaponSlot.Info_WeaponSlot_C.CheckState
struct UInfo_WeaponSlot_C_CheckState_Params
{
};

// Function Info_WeaponSlot.Info_WeaponSlot_C.Get_Ico_Brush_1
struct UInfo_WeaponSlot_C_Get_Ico_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Info_WeaponSlot.Info_WeaponSlot_C.SetElementVisibility
struct UInfo_WeaponSlot_C_SetElementVisibility_Params
{
	bool                                               Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Icon;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Info_WeaponSlot.Info_WeaponSlot_C.Construct
struct UInfo_WeaponSlot_C_Construct_Params
{
};

// Function Info_WeaponSlot.Info_WeaponSlot_C.NextWeapon
struct UInfo_WeaponSlot_C_NextWeapon_Params
{
	TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>            Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Info_WeaponSlot.Info_WeaponSlot_C.ClearSlotRoot
struct UInfo_WeaponSlot_C_ClearSlotRoot_Params
{
};

// Function Info_WeaponSlot.Info_WeaponSlot_C.StartCheckState
struct UInfo_WeaponSlot_C_StartCheckState_Params
{
};

// Function Info_WeaponSlot.Info_WeaponSlot_C.StopCheckState
struct UInfo_WeaponSlot_C_StopCheckState_Params
{
};

// Function Info_WeaponSlot.Info_WeaponSlot_C.ExecuteUbergraph_Info_WeaponSlot
struct UInfo_WeaponSlot_C_ExecuteUbergraph_Info_WeaponSlot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
