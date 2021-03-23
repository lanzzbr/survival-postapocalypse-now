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

// UserDefinedStruct Cv2_WeaponsStructure.Cv2_WeaponsStructure
// 0x0248
struct FCv2_WeaponsStructure
{
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      Enum_71_A60C03004395369085A49D8FD70292B9;                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsTypeEnum_ECv2_WeaponsTypeEnum> WeaponType_88_181B957E4A30954AE5216A88A98F0497;            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QB4X[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMesh*                               FPSModel_67_8B2CB21240D0B6FB538CF3A58391EB77;              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 TPSModel_70_F281D89D4E6036A431368698913C16C2;              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 TPSModelNoMag_242_0B1C53C949927441A8DF799BAC2CDD8F;        // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      AnimInstance_75_35C5003447BD1BF887241082338A72D4;          // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                           HandsIdleAnimation_80_44F6725C4CA01A3FAAC02A982909FE23;    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                                   ShootSound_93_6CA6A67B4CEB9D73776AD1862936D21B;            // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HandsPosition_83_440E62104CF700282E082081E7ACD4E1;         // 0x0038(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     AimHandsPositionDefault_196_216933DC40599525407AF197B2D6EB8C; // 0x0044(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                             AimHandsPositionMODs_158_615082004469A3D1645A28AF2FD0CF7D; // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FRotator                                    WeaponRotator_102_D01CB50C4072038319FBECAAA02049CB;        // 0x0060(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                              Damage_6_1AC9E0BB4EC959F9BB570B96F470CAA9;                 // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Recoil_9_175E19814661DDEF156043B0E8844B57;                 // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RecoilBack_193_BC92B27A4BD8AC130DEB878F90EE82A1;           // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Accuracy_64_BD287F954A17F7ECFE6FD2AC212EB381;              // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Mass_16_6762BF044B9C024127647A9EA2755E2A;                  // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Range_99_7629FAFC42F69C64EF3C2B8F2331099F;                 // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SemiAuto_90_8494FD5F429F841ED81D68AC31DF06D0;              // 0x0084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               isShotGun_173_95828BB4474AE6FD8F467482D08A9AE2;            // 0x0085(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2IPN[0x2];                                     // 0x0086(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FireRate_12_0C4AA11042C03C7AC81CBE9EBE9E7B2E;              // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AmmoClip_21_89285A994E64116FD04E8F869E346409;              // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>            AmmoItem_96_B92343FD49B34E5FF796B48C1B940F1F;              // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8VX6[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                Hand_Anim_Fire_41_0C3C0F524873714D296B318642EDC585;        // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Hand_Anim_PullOut_50_0BE2DC0142E8E38D218CAF9568B6977E;     // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Hand_Anim_Reload_58_C38BEFC94DB590DDAA18D685A53AD1E1;      // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Wpn_Anim_Fire_25_BF4ECEFD4080C180265A7785E3F3D9CE;         // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Wpn_Anim_PullOut_28_9A911917422C10931457388E9EFB26F5;      // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Wpn_Anim_Reload_30_8321201A4BE5BB17B6A5358D5354D3E2;       // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Hand_Anim_Rechamber_57_DCFBA4284B1BF0C4CEA7669220A35448;   // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Hand_Anim_Reload_Intro_59_F4C6AD064BCA8EF2F92B4A99FEC15E9A; // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Hand_Anim_Reload_Loop_60_18DB8DD34922899187E32BBB3BCCF3DD; // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Hand_Anim_Reload_Out_61_92F9CF6B41CE22F4406CDC961747F051;  // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Wpn_Anim_Rechamber_38_A248BFB84F4B4B89114161AFD43223DA;    // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Wpn_Anim_Reload_Intro_32_552952BB4A0B23C80CB063B0C2A4D138; // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Wpn_Anim_Reload_Loop_34_4D16374047CD3A4419F978A360132F44;  // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Wpn_Anim_Reload_Out_36_3ECDC6D0479F61A729183B9B17A8B539;   // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             ShellSpawn_108_BDFC35644F12DE2D628107AAC4A70E26;           // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>            ItemEnum_106_B8D657B24699EF0000F957AB983995FB;             // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JM4D[0x3];                                     // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     TPSMuzzleFlashLocation_117_D6C3B7D74796427CBFFDBB8B0F57C8CD; // 0x0114(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes>> OpticMODs_154_946C9C904EB07FE4BF6882B80009892A;            // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              FovDefault_195_FEBD39304C7CE9D76F9FF4A15E59CD90;           // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CE55[0x4];                                     // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      FovMods_194_BBA6FFD74E51A20B171487B7C8054D1C;              // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             ScopesFPSPositions_211_1DCCFB354DC6465A5296EB8B5748CC44;   // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UStaticMesh*>                         ScopesTPSMeshes_209_1FE4AC524E5AEDC5D2EC32BD72806C33;      // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              WeaponLenght_165_3FD1D3ED4A2DD4B1ADE7779C23707BE0;         // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     WeaponUpLocation_168_66D808BD48DCEB0DEA86A89F56EDC52B;     // 0x016C(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     FPSFlashCorrection_171_6DCA4B29480FDB5536F6EDADF329FB9A;   // 0x0178(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isStandartIronSight_175_AA89EF284A502408D1364D8B0DB5ACAA;  // 0x0184(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WMVS[0x3];                                     // 0x0185(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     StandartIronSightPosition_184_6E1B544145F04FBF5A9784BE4196B2B1; // 0x0188(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KB0I[0x4];                                     // 0x0194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 StandartIronSightFPSMesh_182_02A45C13403586FA4708CBB005EE2F20; // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 StandartIronSightTPSMesh_183_902AEDD24214B1557CEF41BB42125715; // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                TPSShootMontage_187_68DA4068480E781B3B0685BE36F79823;      // 0x01A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                               TPSRifleIdleAnimation_190_88F127624004A3EE64735588A32FF0CC; // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isDifficultReload_198_0176AD444E069F3C0C0D499824F82E32;    // 0x01B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SGOS[0x3];                                     // 0x01B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ReloadLoopTime_201_2600CD8348A081E419C6DAB9CC784A96;       // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer>> SilencerMOD_202_57424C384EA45B0EF0112FB1EFFE2F6E;          // 0x01C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             SilencersFPSPositions_213_0AF8ECFB47681E61718A9FBA2D0145D8; // 0x01D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UStaticMesh*>                         SilencerTPSMeshes_214_36E30C324EFB7CDA2AF5769E36502E50;    // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UParticleSystem*>                     SilencerParticles_221_9224874549741E5701E4BEBB6AE1AFF1;    // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class USoundCue*>                           SilencerSounds_222_64CFF65848F0E9822E05259585212D6C;       // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                CountBurstBullets_227_57135C7C43830300F666548B7B2E380A;    // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FX4X[0x4];                                     // 0x0214(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               MagazinesName_237_C17E7C5D46E06A77178E89A6B1527D38;        // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UStaticMesh*>                         MagazinesMesh_238_0C58D3DE401D8C1B26DEE7B18FC97B9E;        // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             MagazinesLocation_239_A69EEA324C48D00E3F58EB82BD685E8F;    // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
