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

// UserDefinedStruct S_InventorySlot.S_InventorySlot
// 0x0024
struct FS_InventorySlot
{
	int                                                ID_4_340772D04D70545DE09183A029DA12F0;                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Contains_anything_10_963692F9422C71082FE89B8E06372C05;     // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KRDA[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<Cv2_LootType_ECv2_LootType>>    ContainsLootType_15_D7C8A8C24F32235BC69C40B03F5A79FF;      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Isempty_1_400333D44E463F605AE76CBA113F23EC;                // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U485[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCv2_LootCargoStructure                     LootCargo_19_CA09E10947657EF5719956A82B11BB8C;             // 0x001C(0x0008) (Edit, BlueprintVisible, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
