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

// UserDefinedStruct CV2_CharacterTypeStructure.CV2_CharacterTypeStructure
// 0x006C
struct FCV2_CharacterTypeStructure
{
	TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> Enum_28_5FC41C134A02F066FEE3B595D00396FC;                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_Nations_ECv2_Nations>              Nation_2_0D36D5F249E61E9FABF71FB3CE76CACE;                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_CharacterSrecialization_ECv2_CharacterSrecialization> Specialization_19_C2BADFB44F2953A4B37CB29F39C09652;        // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      PrymaryWeapon_10_D55CF59B40969128F59DF992F3538DEF;         // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      SecondaryWeapon_12_2FB0746A4CB9122278F457A9BAF1D229;       // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      Male_14_1F43E9D04E6F78B8982E4E9AE2584940;                  // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VMKN[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCv2_LootCargoStructure>             EquipmentLoot_18_926A86A746F38DCCF20FA2BF493CBD2F;         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USkeletalMesh*                               CharacterMesh_22_91A362E74F9B4341AAA34A96D78F44F7;         // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                           CharacterMaterial_38_C929886349398BC46A536BB5E8C1D556;     // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaterialIndex_56_040EA5C04A36E0167F17C395FBE78A8C;         // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3KPO[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       TypeName_25_20E1B8634D3A9834457E32BE487C8789;              // 0x0030(0x0018) (Edit, BlueprintVisible)
	int                                                CharacterLevel_31_0994E4414355B61583B42287ECF18A51;        // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes>        Scope_59_72E734A346B972A37602E9A78A762572;                 // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>            HelmetItem_34_24D5E6B04913E7627D268DBDFE0910DD;            // 0x004D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>            GrenadeItem_41_4F6B8F7743CEB235B99E99B615872835;           // 0x004E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WXS9[0x1];                                     // 0x004F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMesh*                               HandsMesh_47_E3A66FA84C339EC1AC5F42B520102612;             // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                           HandsMaterial_48_2EBB88184393144D6DBE11BEDEA41A35;         // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DLCID_51_96C3C7F6447EF4779204BABFC0343C27;                 // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MinimumLevel_53_0012E3164F6F87D0F71B848F31570F7B;          // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RespawnTime_62_6932B35844431292C7FA489003128A78;           // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
