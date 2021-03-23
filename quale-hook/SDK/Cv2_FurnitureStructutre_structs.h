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

// UserDefinedStruct Cv2_FurnitureStructutre.Cv2_FurnitureStructutre
// 0x0018
struct FCv2_FurnitureStructutre
{
	class UStaticMesh*                                 StaticMesh_4_E35979FA426A1DD752166D84C6DA3559;             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDestructibleMesh*                           DestructionMesh_5_EA51DEE2496F448B9D5A9A85A72E60FC;        // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_FurnitureTypes_ECv2_FurnitureTypes> Type_8_B31EB7D74CAAF0526F86DCBBE3E9EE8B;                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FOXH[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              hitPoints_11_0FB6D0A841D58CAEA8F1D981BC27E0D2;             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
