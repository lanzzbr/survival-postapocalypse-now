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

// UserDefinedStruct GUI_ChatMessageStructure.GUI_ChatMessageStructure
// 0x0044
struct FGUI_ChatMessageStructure
{
	struct FText                                       Autor_2_C30169C74FF466C7A7DC31B5F870745B;                  // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       MessageText_4_AA11829D4BB72A8EF9921D9ADE1FEDF1;            // 0x0018(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          Side_7_A28D2C3B473B6E528440A5A3653ADF0B;                   // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GUI_ChatMessageType_EGUI_ChatMessageType> MessageType_10_DE32099E47777C911884C1B0C79C9ADF;           // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YYAT[0x2];                                     // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                Color_13_7F0B10044E9E4FC88AA8278A51CCFDC2;                 // 0x0034(0x0010) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
