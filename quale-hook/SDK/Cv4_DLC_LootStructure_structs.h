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

// UserDefinedStruct Cv4_DLC_LootStructure.Cv4_DLC_LootStructure
// 0x0018
struct FCv4_DLC_LootStructure
{
	int                                                DLCID_7_6EBEB7A54D9D9B90EFEC44B38CDFBD74;                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TZEM[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FZ_TransportLoot>                    Loots_4_103B63CD4B7C37C397B727AB8CB1C625;                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
