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

// Function Info_CharacterPanel.Info_CharacterPanel_C.ZL_CONTROLLER_StorageActor
struct UInfo_CharacterPanel_C_ZL_CONTROLLER_StorageActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Info_CharacterPanel.Info_CharacterPanel_C.ZL_CONTROLLER_GetSlots
struct UInfo_CharacterPanel_C_ZL_CONTROLLER_GetSlots_Params
{
	TArray<struct FZ_SlotStr>                          Slots;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Info_CharacterPanel.Info_CharacterPanel_C.GetVisibility_3
struct UInfo_CharacterPanel_C_GetVisibility_3_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Info_CharacterPanel.Info_CharacterPanel_C.Get_DeltaHp_Percent_1
struct UInfo_CharacterPanel_C_Get_DeltaHp_Percent_1_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Info_CharacterPanel.Info_CharacterPanel_C.Get_HP_ProgressBar_89_Percent_1
struct UInfo_CharacterPanel_C_Get_HP_ProgressBar_89_Percent_1_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Info_CharacterPanel.Info_CharacterPanel_C.GetText_1
struct UInfo_CharacterPanel_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Info_CharacterPanel.Info_CharacterPanel_C.GetVisibility_1
struct UInfo_CharacterPanel_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Info_CharacterPanel.Info_CharacterPanel_C.GetHealthText
struct UInfo_CharacterPanel_C_GetHealthText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Info_CharacterPanel.Info_CharacterPanel_C.SetAmmoText
struct UInfo_CharacterPanel_C_SetAmmoText_Params
{
	struct FWeaponAmmoInfoStr                          AmmoStr;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Info_CharacterPanel.Info_CharacterPanel_C.ExecuteUbergraph_Info_CharacterPanel
struct UInfo_CharacterPanel_C_ExecuteUbergraph_Info_CharacterPanel_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
