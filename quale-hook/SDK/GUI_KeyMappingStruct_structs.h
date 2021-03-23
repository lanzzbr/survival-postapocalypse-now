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

// UserDefinedStruct GUI_KeyMappingStruct.GUI_KeyMappingStruct
// 0x0054
struct FGUI_KeyMappingStruct
{
	TEnumAsByte<GUI_ActionNames_EGUI_ActionNames>      ActionName_3_2DB26674469114D632E087AF1BF2C22B;             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAxis_6_FE2484BC40D70427B3497DAD8237C943;                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AY9V[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ActionNameText_9_5F308609487F047BC0B3FEAB5884A5FC;         // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FKey                                        DefaultKey_12_E7B9B4BE4F0E1F05B52921809A012A93;            // 0x0020(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FKey                                        DefaultAzertyKey_14_CAC5D89A4A00D3FD2456538B16C7AD9D;      // 0x0038(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                              ScaleIfAxis_17_E6F36EB04A9F353BC511EE9AF53CEE27;           // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
