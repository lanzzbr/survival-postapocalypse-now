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

// UserDefinedStruct Cv2_LootStructure.Cv2_LootStructure
// 0x009C
struct FCv2_LootStructure
{
	int                                                ID_59_C083C5294C55250D154441B10ED0E35C;                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>            LootID_2_B02A0B684BB7A11FD0BF94A81E13D578;                 // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OX7E[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxCount_5_907552B944723DE76BA6059A492D663E;               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BJCX[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       NameItem_8_93C70CDB4E722C7B5F2B7C9F407DB276;               // 0x0010(0x0018) (Edit, BlueprintVisible)
	class UStaticMesh*                                 EquipStaticMesh_38_49DABFD041289631B618E986D91F92E4;       // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               EqipSkeletalMesh_49_0861373047034A1997203A9E18A52D71;      // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_LootType_ECv2_LootType>            LootType_26_5983DAD6482D6AC403E766AD085ECD30;              // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      WeaponEnum_27_D8DC2FB147051BEF91AF3D8E181E93DC;            // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z3PE[0x2];                                     // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Effectivity_30_144BF90F495D90D4C7281EABA9C7F831;           // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 LootStaticMesh_37_2319DE9D445F5B5802EAF0890E5D270E;        // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>>    CombineEnterLoot_45_816B85E64BE46F86A7DCA6A54309A263;      // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>>    CombineExitLoot_46_C716F0324F2B43966535529FDB1D52BD;       // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        CombineMainCost_72_3B83ABC04564E6440C8B11AF8957A4BB;       // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        CombineEnterCost_73_02ABADC5468A76BA85C92AA088CC1A31;      // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings>> CombineOutCraft_69_9D561AF64A8F14983C3D3782DCDC3C14;       // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Price_52_CCF3FC1E45D1F2DC50531BA6568D493C;                 // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
