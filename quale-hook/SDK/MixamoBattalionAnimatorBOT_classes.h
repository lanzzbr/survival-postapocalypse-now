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
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass MixamoBattalionAnimatorBOT.MixamoBattalionAnimatorBOT_C
// 0x4491 (FullSize[0x4849] - InheritedSize[0x03B8])
class UMixamoBattalionAnimatorBOT_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_H9HC[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_81671F014AEE12F03AC140AF11182018;       // 0x03C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_45329542431A53F354A098BA7EE19CAB; // 0x0410(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1E14DF5B4DD09FD27A72FEB436ED37A7; // 0x0490(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4F4D21CC4569756A5413499567A7E329; // 0x0510(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_254113304A79820A169187AE40F45BF4; // 0x0590(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8759263545F1F7A50D254A917366AF73; // 0x0610(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9C0EAF964166BF29DB66A5AD81EAB77D; // 0x0690(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9FFA1B3F4A6BE1DCB527CC9FEB87EB5A; // 0x0710(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31756EB44FB160DEE3C08FA3B9B32068; // 0x0790(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B17E00AA4129323E67D5E78AF808C089; // 0x0810(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A654CDBA477C4F9B09F130BE6FAC6966; // 0x0890(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C48929054551EC3638C336BF308D67D7; // 0x0910(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_205202DD4962213804FA858248CAEC6D; // 0x0990(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9385AE6B45938ED8F907E5BE09AA7621; // 0x0A10(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9F62CA704565DF66EAE609A10B38B90C; // 0x0A80(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EAA16B3B4B4D6202C0FCC1B2CACD0CF9; // 0x0AC8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C23661714656E936B4C6979F7F1DFC6A; // 0x0B38(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CAE17CA84EF7C414C4858BAEDEF5D637; // 0x0B80(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_69FEE24A4538EE0BC9DB2EBBC1D8618B; // 0x0BF0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C6D8CBB74A20D3B3360D62AB5673FFE5; // 0x0C38(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1DB547924C6F57A939EDCCBF58164A00; // 0x0CA8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_039C12404F8E1862219348A2C67AB46E; // 0x0CF0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C99046074D85BA6626BFAC9B1AB884A8; // 0x0E18(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_31D7B7104F915A2AD08018BC474B3759; // 0x0E60(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7807024149500D0E1F23DE82238B09E0; // 0x0ED0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0747005242308ECA517443AC1A1F6C1F; // 0x0F18(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FAFD821149BC849747232EA8BB0C437C; // 0x1040(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_139349654A050FF0F6BF4AA6F820A167; // 0x1088(0x00D8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_387CB3D3442E68153D65F78472BD4792; // 0x1160(0x00A8)
	unsigned char                                      UnknownData_QSR6[0x8];                                     // 0x1208(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1D829EE84BBB25D5792DE8B4E8AF7B32; // 0x1210(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_234D9B3F464F63E85D87B782339AF3F1; // 0x1290(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_53370C8749A0228AEF7484BC89308812; // 0x1310(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C9058D934CA1EF7A0B29EEAD6E6F5979; // 0x1390(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D1EF95B24FE87FE677B2F4B75B977C4E; // 0x1410(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DF3F795A48A28A2B43F55F91C91E5E6E; // 0x1490(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_115172C841271807F922C09B7A7AB56A; // 0x1510(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DA279F824241A79F5739ACB974A222BB; // 0x1590(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EC83D8A642BF7548000B9CB3BE43CE1D; // 0x1610(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EF3AF857440358BA1A6CBCA9820A01EB; // 0x1690(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1B004C29450298E0D3BAFFA0C1E10691; // 0x1710(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11312FD2431586B46DB701A718A59E97; // 0x1790(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B7102E7E4F9CB699B92CD681835A6CD7; // 0x1810(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AF3FD3A74D2A7E461E6560A55783F7C3; // 0x1890(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1C86288C46282404FA010CB61CC45BD4; // 0x1910(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25F2D2FD40C631B9D52F1BADDC9254CB; // 0x1990(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D281A8604D943F11D3A3F5A48C6C1590; // 0x1A10(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3D3C04D24519FF8FFBCFDFA443584A96; // 0x1A90(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A73CBD734B67C5A5E2E986A9E7640D5E; // 0x1B10(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4673349E4D1AF0BF53A25F85858C5BA4; // 0x1B90(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DAC9B9D646A861608B782A864015A15A; // 0x1C10(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_426B18514D36989C27AAEB9C2AF1B417; // 0x1C90(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E160B69A492720BCE835F29DF1D5FC02; // 0x1D10(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C2C90A854ADAF93A37200F97598544B7; // 0x1D90(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_60DE971042732BE7C94817B45361747B; // 0x1E10(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_069CC0574E80151E1773BA8B5730B032; // 0x1E90(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0DBEB7E541027742DE500A83B1E717AE; // 0x1F10(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3ECC65EF4B0C0CB9901FA391D4DE78EA; // 0x1F90(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF894E4547BABD21265DD5B629DF1A00; // 0x2010(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CA2B10E44914A7879AD9D28E37957F32; // 0x2090(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B72AE80F417199AE32035AB2049CF579; // 0x2110(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_036E6BCD48AA21DDA54A9A841A65EAE6; // 0x2190(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0A44A0D340C9FC0AD97E199E2BB68621; // 0x2210(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4A81D9394048949E4E72D2B15D5B0E52; // 0x2290(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_555F01994F7409FFE7E3B995BA09D290; // 0x2310(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C6B25B994FFF1092E4AA609FAD9C6328; // 0x2390(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_99898AF4435DC12524C676925216311C; // 0x2410(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_32C7EF3C4E208C70A2AB21A80348C48C; // 0x2490(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_35FA95294B2636AF34BF3FBF533C8105; // 0x2500(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4690551C41CCCCD41909BEA328885C6E; // 0x2548(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A40A34FA482EF5252A1CD6BFE73E9EA5; // 0x25B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7FBC55AE4DDD99903AB3DAB1E7365162; // 0x2600(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4FE6165A4C2884FF466885A1B2A0006F; // 0x2670(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A17B9CAC4D679ECDC3E50BBF7AB4592C; // 0x26B8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2ADD6139431BD160BF4B61B6EDCC4B72; // 0x2728(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E78596C84B86B8829CFADD8406820F1A; // 0x2770(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FAADFC574EBD931A568F75A7F044EA18; // 0x27E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C2E7C2C842BE9AE2674519B2DB35A7DC; // 0x2828(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_551E77BD4EACF2B1717296BB1C7E7ABB; // 0x2898(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_804E1BD3470BBA2E9871E58759F9C84B; // 0x2908(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7C2D20AE4C2B6FCDC1CBA18FA053C3E2; // 0x29D8(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_94FE8EAE425C61045CE0C8AA500AFC5C; // 0x2A48(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_280CE6CB4A6AC31B76EF0B9EE3AF2E75; // 0x2B18(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7BE5D615415665B6DDB9DBB42340AE3D; // 0x2B60(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_41669EAB4A5831D44E5FC3A8891412F7; // 0x2BD0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_333271904881FA47D32F42BE07C2596A; // 0x2C18(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_23B3F023479209A62C2C7B89C3BF186C; // 0x2C88(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_60459A6D44CFC952EFAEAD924B6E0C11; // 0x2CD0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E7C7F2DE430CB5CBAEA4E4BF275AEBAE; // 0x2D40(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BB62EE6F47DBBD3777FF12854FA55650; // 0x2D88(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CF02DBC64515D48CBBEBC080409C0C92; // 0x2DF8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_CA51F06F4745FBC7C98802AC2B87CD5E; // 0x2E40(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A80E8E73438FB9AD34A05E92D543CC54; // 0x2F68(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6CD6F08B4799D597EFA951A91EB6F563; // 0x2FB0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CF8B7D0B4285B076603A4F985242A678; // 0x30D8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2698A1CF4D21C0701FF9DD974D77540D; // 0x3120(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E7B72D1C4FC96A65BEE5F89FFC6B3A70; // 0x31F0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_621F602A401BC544D7E506BA871088D7; // 0x3260(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_05B1F4404CAF34E7CF88F883D3AB9922; // 0x32D0(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_12CDBDA94A37483D82E92ABB00327A97; // 0x3318(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3BD1F37641343428BC0044AFD6F945BC; // 0x33E8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_23CDBF53425B146D9B4529B34DAB4CAE; // 0x3458(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3ECC73BA47A0300BFEA7F9B0A97F01AC; // 0x34C8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6661034540123E16436FE2B308F610D6; // 0x3510(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DE7C2237411260CE192AB4A53195E51D; // 0x35E0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_39BA56AE49649D15ACA35CB61631FE89; // 0x3650(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C79694E8478BB6DEA65FD98EDA2768D6; // 0x36C0(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A9C41CEC4DE9BC0FF0FEF38FF3F862AB; // 0x3708(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_75D066594DBE29D784251F94DF35C2A4; // 0x37D8(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0D34B8534980D0072B0CD2A3D75EE061; // 0x3900(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_846273D64CDEDB757717608F6609F258; // 0x3A28(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F49B8CDC4ED99FE80F32DAA80CFC49B8; // 0x3A70(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_70D74B3A4AB34CA7E943EAA5761AA6EA; // 0x3B98(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FC77F3B24071B6969CC9BA87E0E9845F; // 0x3C68(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_918613364D7A0503A7EA68837E0B1DBA; // 0x3D90(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_35135FE640F62373B190498B6E65552F; // 0x3DD8(0x00D8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_319C944C43FDC5AE52CA0CBA69CF6F7E; // 0x3EB0(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BC120CD3436205D22982CF96BCB549EE; // 0x3F58(0x00D0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_0FC2AFA74B23ED80CFC58A9022966850; // 0x4028(0x0158)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DBFFE6C44A8C7E05328F7990DC4E8FA2;       // 0x4180(0x0068)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EBF302114B12F83DAFB288B2C7BB4397; // 0x41E8(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_BDBA8DF6435076C995E519A74AB4DCBB; // 0x4238(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C10A5C904529B31741578AB14C63DBB4;       // 0x4318(0x0068)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_54A8C6AE4AD5EFA820D99EB1B1947D10; // 0x4380(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_49698C4F4B0D905FCF9B7B95E3D73D35; // 0x44D8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D5CFD1754F5A84FF7EDEA28CA58B93D4; // 0x4528(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5E66FAC94E5A306D6882D2B9D44E59E5; // 0x4578(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D599143D4A3DB0F7589FEE8082AC218A; // 0x4648(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_1A0354DB4116D442D6398995EA9FA662; // 0x4698(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C52C2A5448B4BA7A95CEC2A3F82B5C74; // 0x4778(0x0070)
	bool                                               IsInAir_;                                                  // 0x47E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VJJM[0x3];                                     // 0x47E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Speed;                                                     // 0x47EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Horizontal;                                                // 0x47F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Vertical;                                                  // 0x47F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFow_BOT_C*                                  Character;                                                 // 0x47F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LookAtPitch;                                               // 0x4800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LookAtYaw;                                                 // 0x4804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCrouch;                                                  // 0x4808(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsJump;                                                    // 0x4809(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSprint;                                                  // 0x480A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsAim;                                                     // 0x480B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              EffectorAlphaRight;                                        // 0x480C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              footDelay;                                                 // 0x4810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AnimPlayID;                                                // 0x4814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PositionGunerX;                                            // 0x4818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsGunner;                                                  // 0x481C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P0GM[0x3];                                     // 0x481D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PositionGunerY;                                            // 0x4820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBoxPlayer;                                               // 0x4824(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsProne;                                                   // 0x4825(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ZasadaRight;                                               // 0x4826(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ZasadaLeft;                                                // 0x4827(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isLodding;                                                 // 0x4828(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WNCB[0x3];                                     // 0x4829(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              lodUpdateTimer;                                            // 0x482C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TypeSprint;                                                // 0x4830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XKQU[0x3];                                     // 0x4831(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TypeSkeletalMesh;                                          // 0x4834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPistol;                                                  // 0x4838(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      StepsType;                                                 // 0x4839(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SprintSide;                                                // 0x483A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_SeasonsEnum_ECv2_SeasonsEnum>      Season;                                                    // 0x483B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QDZT[0x4];                                     // 0x483C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   StepSound;                                                 // 0x4840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsLocallyControlled;                                       // 0x4848(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(106729);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_1D829EE84BBB25D5792DE8B4E8AF7B32();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_234D9B3F464F63E85D87B782339AF3F1();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_C48929054551EC3638C336BF308D67D7();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_53370C8749A0228AEF7484BC89308812();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_C9058D934CA1EF7A0B29EEAD6E6F5979();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_D1EF95B24FE87FE677B2F4B75B977C4E();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_A654CDBA477C4F9B09F130BE6FAC6966();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_DF3F795A48A28A2B43F55F91C91E5E6E();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_115172C841271807F922C09B7A7AB56A();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_DA279F824241A79F5739ACB974A222BB();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_B17E00AA4129323E67D5E78AF808C089();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_EC83D8A642BF7548000B9CB3BE43CE1D();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_EF3AF857440358BA1A6CBCA9820A01EB();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_1B004C29450298E0D3BAFFA0C1E10691();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_11312FD2431586B46DB701A718A59E97();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_B7102E7E4F9CB699B92CD681835A6CD7();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_AF3FD3A74D2A7E461E6560A55783F7C3();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_1C86288C46282404FA010CB61CC45BD4();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_25F2D2FD40C631B9D52F1BADDC9254CB();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_D281A8604D943F11D3A3F5A48C6C1590();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_31756EB44FB160DEE3C08FA3B9B32068();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_3D3C04D24519FF8FFBCFDFA443584A96();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_A73CBD734B67C5A5E2E986A9E7640D5E();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_4673349E4D1AF0BF53A25F85858C5BA4();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_DAC9B9D646A861608B782A864015A15A();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_9FFA1B3F4A6BE1DCB527CC9FEB87EB5A();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_426B18514D36989C27AAEB9C2AF1B417();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_E160B69A492720BCE835F29DF1D5FC02();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_C2C90A854ADAF93A37200F97598544B7();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_60DE971042732BE7C94817B45361747B();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_069CC0574E80151E1773BA8B5730B032();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_0DBEB7E541027742DE500A83B1E717AE();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_3ECC65EF4B0C0CB9901FA391D4DE78EA();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_FF894E4547BABD21265DD5B629DF1A00();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_CA2B10E44914A7879AD9D28E37957F32();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_9C0EAF964166BF29DB66A5AD81EAB77D();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_B72AE80F417199AE32035AB2049CF579();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_036E6BCD48AA21DDA54A9A841A65EAE6();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_0A44A0D340C9FC0AD97E199E2BB68621();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_4A81D9394048949E4E72D2B15D5B0E52();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_8759263545F1F7A50D254A917366AF73();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_555F01994F7409FFE7E3B995BA09D290();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_C6B25B994FFF1092E4AA609FAD9C6328();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_99898AF4435DC12524C676925216311C();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_254113304A79820A169187AE40F45BF4();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_BlendListByBool_804E1BD3470BBA2E9871E58759F9C84B();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_BlendListByBool_94FE8EAE425C61045CE0C8AA500AFC5C();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_4F4D21CC4569756A5413499567A7E329();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_BlendSpacePlayer_CA51F06F4745FBC7C98802AC2B87CD5E();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_1E14DF5B4DD09FD27A72FEB436ED37A7();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_BlendSpacePlayer_6CD6F08B4799D597EFA951A91EB6F563();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_BlendListByBool_2698A1CF4D21C0701FF9DD974D77540D();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_45329542431A53F354A098BA7EE19CAB();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_BlendListByBool_12CDBDA94A37483D82E92ABB00327A97();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_BlendListByBool_6661034540123E16436FE2B308F610D6();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_BlendSpacePlayer_0747005242308ECA517443AC1A1F6C1F();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_BlendListByBool_A9C41CEC4DE9BC0FF0FEF38FF3F862AB();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_BlendSpacePlayer_75D066594DBE29D784251F94DF35C2A4();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_BlendSpacePlayer_0D34B8534980D0072B0CD2A3D75EE061();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_BlendSpacePlayer_F49B8CDC4ED99FE80F32DAA80CFC49B8();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_BlendListByBool_70D74B3A4AB34CA7E943EAA5761AA6EA();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_BlendSpacePlayer_FC77F3B24071B6969CC9BA87E0E9845F();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_BlendListByBool_BC120CD3436205D22982CF96BCB549EE();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_RotationOffsetBlendSpace_0FC2AFA74B23ED80CFC58A9022966850();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_RotationOffsetBlendSpace_54A8C6AE4AD5EFA820D99EB1B1947D10();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_BlendListByBool_5E66FAC94E5A306D6882D2B9D44E59E5();
	void STATIC_BlueprintUpdateAnimation(float DeltaTimeX);
	void STATIC_AnimNotify_EnableMovement();
	void STATIC_AnimNotify_DisableMovement();
	void STATIC_AnimNotify_RFoot();
	void STATIC_AnimNotify_LFoot();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_BlendSpacePlayer_039C12404F8E1862219348A2C67AB46E();
	void STATIC_CheckLodSystem();
	void STATIC_CheckStepsType();
	void STATIC_PlayStep();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MixamoBattalionAnimatorBOT_AnimGraphNode_TransitionResult_205202DD4962213804FA858248CAEC6D();
	void STATIC_BlueprintInitializeAnimation();
	void STATIC_ExecuteUbergraph_MixamoBattalionAnimatorBOT(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
