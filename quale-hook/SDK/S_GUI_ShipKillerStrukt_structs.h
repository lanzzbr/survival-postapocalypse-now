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

// UserDefinedStruct S_GUI_ShipKillerStrukt.S_GUI_ShipKillerStrukt
// 0x0058
struct FS_GUI_ShipKillerStrukt
{
	struct FText                                       KillerName_2_C94E71BD44B84DC0AEA34FB2C7B13C69;             // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ShipName_4_E7A0054E419818208BDD13AD736B8886;               // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Distance_6_EC4017A24B96E939BF34E684CE774F52;               // 0x0030(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      Weapons_11_715A737741AF3784ED0478BCFB1818C4;               // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          TeamKiller_19_B4BD65AC45428084005356AFE992CF0A;            // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          TeamSheep_20_3E8419E847159776A7A3AE9A87367716;             // 0x004A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XYSG[0x5];                                     // 0x004B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DamageType_24_44263D254ED8886D150C5A8264289AA8;            // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
