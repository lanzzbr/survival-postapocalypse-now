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

// UserDefinedStruct Z_SlotStr.Z_SlotStr
// 0x0049
struct FZ_SlotStr
{
	int                                                Category_14_F3B8113E4228C4B0110C26AF74047ACA;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SubCategory_15_5A2A803D4424E6E86EF7D59FA524E98D;           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Z_Loot_Type_EZ_Loot_Type>              LootTypeOnly_5_EBC8983F42D37783ADD4969CBC1A2C92;           // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Z_LootEquipCategory_EZ_LootEquipCategory> EquipTypeOnly_20_F8F30D7049E100DC91F0AFB44CB8FC0A;         // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>          EquipSocketOnly_23_6429077546ED40E7039AC2A3AA287CB3;       // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4RKD[0x5];                                     // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Name_10_61061630458D5E3E7438C28C844178D3;                  // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description_11_AD72B5E94FC036FE421569A340B3030C;           // 0x0028(0x0018) (Edit, BlueprintVisible)
	bool                                               IsEqip_17_965AA58F414A353F89C186A144780614;                // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsAttach_25_EFA5C15D4FD3685C6F7D60A8C36E1FDF;              // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WTAV[0x2];                                     // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AttachParentIndex_28_3D2989D64FDEE6FC9BCB649B2A451006;     // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBlock_30_18C7856F4611E623D53237B065736C5B;               // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
