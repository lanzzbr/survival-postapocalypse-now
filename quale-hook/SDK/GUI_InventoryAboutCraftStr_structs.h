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

// UserDefinedStruct GUI_InventoryAboutCraftStr.GUI_InventoryAboutCraftStr
// 0x004C
struct FGUI_InventoryAboutCraftStr
{
	TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> CraftType_2_97CC3B534F8FF86D15BD1F9ABDA99F84;              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JE0R[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       AboutText1_6_877D3BFE41E9AA75C2E50C9F1319166F;             // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       AboutText2_8_BC54E6B0488C1E0FE287038F07563318;             // 0x0020(0x0018) (Edit, BlueprintVisible)
	TArray<class UTexture2D*>                          Pictures_12_9969FF18476B34A8515D54810C4A7CBC;              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              IconScale_19_DE55FC564EDEF61374E182BAB553AE5D;             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
