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

// UserDefinedStruct Cv2_CraftBuildingsStructure.Cv2_CraftBuildingsStructure
// 0x005D
struct FCv2_CraftBuildingsStructure
{
	TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> Enum_2_7B8574584E7C082717F81494079A739A;                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LPHG[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCv2_LootCargoStructure>             Items_56_FFD802B84ACFC5FCEC7EC3818A4E39B2;                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture2D*                                  Icon256x256_60_5FD7E49245FA1E521678508710947B92;           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 StaticMesh_63_8B18F9654D2153B468D34CA223CDE95F;            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScaleMesh_66_7DF8C1FC4144F4C1E898D2B09B116760;             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PositionZ_78_08A3705643FBCC7B3A7A769D5BC19965;             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RotationZ_81_2CC14DBA4CE00D22279E5FA8247F038F;             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KMHM[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      SpawnedPawn_75_9015AC14492DC82E92724182AF4FDA5E;           // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCv2_LootCargoStructure>             OutItems_85_CCE225254A0763F4E05F28942125A87E;              // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                DLCID_88_7589F5654C0D9370F95BBA89F808F0D2;                 // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BonusXP_94_B898460847E3CD5D8D5243B8C94F893B;               // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MinimumLevel_97_50CE237B484C7DE7700EA9A3DDFD6166;          // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsRebuilding__100_303625EE43DFCF1456E9C693B3CAC90E;        // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
