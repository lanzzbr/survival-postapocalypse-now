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

// UserDefinedStruct Cv3_HonorsStructure.Cv3_HonorsStructure
// 0x0090
struct FCv3_HonorsStructure
{
	TEnumAsByte<Cv3_HonorsEnum_ECv3_HonorsEnum>        HonorEnum_5_E7DE3C3146051C113FAE66A77AC19FAA;              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P04A[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Name_8_CCCDC93F4F9ED7649EB82C899D2FF982;                   // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description_2_84475D724ADFC8271DC3CCA1916379DB;            // 0x0020(0x0018) (Edit, BlueprintVisible)
	class UStaticMesh*                                 StaticMesh_11_666CB2934431C3A01825EDB51B41780A;            // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  IconHide_15_37165F5C4DA776CD579108AFEBA21195;              // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  IconNormal_17_B63309D841AB23820677C4827D1A240D;            // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  IconSelected_20_44065FC74FD18171125B85B38BD72A53;          // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_Nations_ECv2_Nations>              Nation_24_EA5D7B5E4E56A4A14EC396BED50B7E57;                // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LLU3[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Kills_27_C633AB9642365EBE659ED8930F613009;                 // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Headshots_29_51B6FEB04D7F7F14414F6EA4FB7D519F;             // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DestroyTanks_31_8BA4DB5845DCC28B09E240A2BCA0D8C5;          // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DestroyCars_33_D90B7B8341B1F69DAF68D38BCAED9304;           // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CaptureTanks_35_9DEE6F7B4040F79661551E9E61310E5A;          // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CaptureCars_37_8949A3994B3573EA547F9FA12150F563;           // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CaptureTower_39_D184182E46E6CBF26A9CBD94526E45D3;          // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Rank_49_751813C741683234A5B849B29F194647;                  // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Woodman_44_6C3D54504368C4108C8C0C852FFD8D14;               // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CraftTent_46_DCCD1133426F36AD9F77228B601FEA50;             // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CraftTanks_48_49FD54F046BF030E242BF2B4F7B021A3;            // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                KillinMelee_58_E3F1FFE147E8843F08A192871C06371B;           // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ParticipationinBattles_60_EACC1D6B48C6BBBAB036EC9A38E195DE; // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
