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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct WeaponAmmoInfoStr.WeaponAmmoInfoStr
// 0x0028
struct FWeaponAmmoInfoStr
{
	int                                                InWeaponAmmoCount_2_F17307AC4DE886EADC7B4BA969DF720C;      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InBackPakAmmoCount_4_E4FCCAB44AAE789DD05CED991D535C95;     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  AmmoIcon_7_1947B3E442F375B8850B38BB6E84A812;               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       AmmoName_10_C0641F294006E4B709168E8A72407E00;              // 0x0010(0x0018) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
