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

// UserDefinedStruct GUI_MapSettings.GUI_MapSettings
// 0x0024
struct FGUI_MapSettings
{
	struct FString                                     MapName_2_ADF1577042CD6EC6A015578D8CB3BCDF;                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                                  MapTexture_8_192A6A8E47236F0C5F63439C75777BE4;             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GUI_MapMoveDirection_EGUI_MapMoveDirection> MoveDirection_5_234BCD2040E0102B33C0B2B3BC4524A8;          // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_SeasonsEnum_ECv2_SeasonsEnum>      Season_11_FAA8006940D26A04A2818BADE2984654;                // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WKJN[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   MiniMapBaseScale_16_C46D38574FDECFF8F2DCAFAB0CFDEEB2;      // 0x001C(0x0008) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
