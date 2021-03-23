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

// UserDefinedStruct Z_LootStr.Z_LootStr
// 0x0060
struct FZ_LootStr
{
	struct FName                                       LootID_38_4044E922470C1957C9AB4E97684DFB58;                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Z_Loot_Type_EZ_Loot_Type>              LootType_5_A826A16A43E4EA8B0E4A5FADA8E61EAF;               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8LTG[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  Icon_22_9A40D8AE4920EBCF95D49387709CF654;                  // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCountable_14_1C290C5D45C266352C7F7598495F3820;           // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QKSJ[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxCount_33_2170502A4C921144B16401B94C35F08D;              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count_11_715BEF7D4FADBD3C2D5839846F790FA8;                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUsable_24_B903062842656D9B47702791115D5A34;              // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Z_LootEquipCategory_EZ_LootEquipCategory> EqipCategory_28_6185B7DD4E2645208876438C0468BC4A;          // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>          EqipSocket_30_1EA0ADEE4D36254D6249E9B83A5BE1A6;            // 0x0026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MQ0X[0x1];                                     // 0x0027(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Name_36_A26DB070456DBD23A12D4194B11AF085;                  // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description_19_3EAD912245DAD5787CFA42B9D3DBDDC2;           // 0x0040(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes>        AttachedScopes_65_CC2D1E8A4EACDD1BA1EA59A951A0A548;        // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer>    AttachedSilencer_66_9D332EF44AD75E7D03BE77B67DF2D3EC;      // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Z_WeaponMagazines_EZ_WeaponMagazines>  AttachedMagazines_72_7CA6DB89426A20E3009C90B632A9B838;     // 0x005A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ODD6[0x1];                                     // 0x005B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Mass_69_A392767D4E9BC7BB28019C8A7BC485EE;                  // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
