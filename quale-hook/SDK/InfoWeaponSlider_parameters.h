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

// Function InfoWeaponSlider.InfoWeaponSlider_C.Construct
struct UInfoWeaponSlider_C_Construct_Params
{
};

// Function InfoWeaponSlider.InfoWeaponSlider_C.ShowSlider
struct UInfoWeaponSlider_C_ShowSlider_Params
{
	TArray<struct FZ_LootStr>                          ZLootArray;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function InfoWeaponSlider.InfoWeaponSlider_C.SelectItem
struct UInfoWeaponSlider_C_SelectItem_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InfoWeaponSlider.InfoWeaponSlider_C.HideSlider
struct UInfoWeaponSlider_C_HideSlider_Params
{
};

// Function InfoWeaponSlider.InfoWeaponSlider_C.ExecuteUbergraph_InfoWeaponSlider
struct UInfoWeaponSlider_C_ExecuteUbergraph_InfoWeaponSlider_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
