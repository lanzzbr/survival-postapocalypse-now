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

// UserDefinedStruct BOT_CreaturesStructure.BOT_CreaturesStructure
// 0x00A1
struct FBOT_CreaturesStructure
{
	float                                              HitPoints_7_123D3A16440B1B4AFCA5EA87C19A4E63;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedWalk_11_3F6C1BAB450DA72E720960B41FFB4BE3;             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedRun_12_866D8C0F41436241AAAF5391B90E37C9;              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage_40_07160FB84B9ECD68BBE19A86AC271E44;                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AttackDelay_42_B63690D24E298CA9C0329B9CB483B116;           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Range_50_0A0A6D6A42A610B5CC2CA4A7363EAD34;                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               SkeletalMesh_20_AE8937AC4CF939A31A552D9AA372922F;          // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      AnimBP_22_550761374317FA04E75FD79B570002DB;                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      DeathAnimBP_58_2DC4E1CF411DA630691788AE62F3DC9B;           // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimMontage*>                        AttackMontages_54_CA51C2294FC8467B455E78BC6E1CFCB9;        // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimMontage*>                        HitMontages_55_D435F1CD4227144DD6DD5C82E9B84873;           // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimMontage*>                        AlarmMontages_68_5C922DC94C2696434DC89CB408B74CBB;         // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USoundCue*                                   SoundAttack_33_DA6B1EC04FED0AF5947235A0B86650AA;           // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                                   SoundAlarm_31_D8CC59DA4C72E281AFBA99941EC1A37C;            // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                                   SoundHit_32_AA52A2C24A6B178A6C4628A83967BE6E;              // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                                   SoundDeath_75_2B39C06C482364CA3A881FA7DB0D683F;            // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScaleCreature_64_94F8167C4C7CEBCD78814DBA417FDCC4;         // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XFDF[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       HeadBoneName_72_452747AD4EA0EF6DA34A3EBD6CB67B6B;          // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCv2_LootCargoStructure>             LootArray_80_D9F6A6164088F493BD78CFBD767AE03E;             // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               isNPC_82_AA46AFF74D42E4E462E25D8BA53CAB0C;                 // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
