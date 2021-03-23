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

// WidgetBlueprintGeneratedClass StatisticEndGameBASE.StatisticEndGameBASE_C
// 0x00A4 (FullSize[0x02A4] - InheritedSize[0x0200])
class UStatisticEndGameBASE_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UStatisticCard_C*                            Artefackt;                                                 // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatisticCard_C*                            Bear;                                                      // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_1;                                                  // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_84;                                                 // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatisticCard_C*                            Deadwolf;                                                  // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatisticCard_C*                            Deaths;                                                    // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Fon;                                                       // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatisticCard_C*                            Gulf;                                                      // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_3;                                                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatisticCard_C*                            Kills;                                                     // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatisticCard_C*                            Moneys;                                                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatisticCard_C*                            Nark;                                                      // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatisticCard_C*                            Scientist;                                                 // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatisticCard_C*                            Seif;                                                      // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TimeText;                                                  // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatisticCard_C*                            VAMPIRE;                                                   // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatisticCard_C*                            Wolf;                                                      // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCv2_GameInstance_C*                         GI_Var;                                                    // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BonusMoney;                                                // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(79502);
		return ptr;
	}



	void STATIC_GetTimeText(const struct FTimespan& Timespan, struct FText* TimeString);
	void STATIC_GetBotKillsValue(int Index, int* Value, bool* Ok);
	void STATIC_GetMoney(TEnumAsByte<SurvStatisticsAward_ESurvStatisticsAward> Award, int Count, int* MoneyCount);
	void STATIC_OnFailure_54EC92824F03F3E6D08AF2824A22E2C6();
	void STATIC_OnSuccess_54EC92824F03F3E6D08AF2824A22E2C6();
	void STATIC_OnFailure_FE5EAA59478501F47F2BDFAD7FEB8BB3(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void STATIC_OnSuccess_FE5EAA59478501F47F2BDFAD7FEB8BB3(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void STATIC_OnFailure_DF22C33546290C5FA0ED46985B80EB63();
	void STATIC_OnSuccess_DF22C33546290C5FA0ED46985B80EB63();
	void STATIC_OnFailure_FB64B0184BCF102658006D92BBF9C162(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void STATIC_OnSuccess_FB64B0184BCF102658006D92BBF9C162(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void STATIC_OnFailure_240F10254AE541B526C435B927728851();
	void STATIC_OnSuccess_240F10254AE541B526C435B927728851();
	void STATIC_OnFailure_27AA03044E2324AF7CFF6E89BBCA40D2(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void STATIC_OnSuccess_27AA03044E2324AF7CFF6E89BBCA40D2(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void STATIC_OnFailure_04DB8DF940108FA04D630BAEBFC2AD9B();
	void STATIC_OnSuccess_04DB8DF940108FA04D630BAEBFC2AD9B();
	void STATIC_OnFailure_664CC1B04619486DF641CBA16102AFB6(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void STATIC_OnSuccess_664CC1B04619486DF641CBA16102AFB6(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void STATIC_OnFailure_172F29CD4EFC3A63DAAAAC92AC68C81C();
	void STATIC_OnSuccess_172F29CD4EFC3A63DAAAAC92AC68C81C();
	void STATIC_OnFailure_B8213206405F79046914B7AA91990E99(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void STATIC_OnSuccess_B8213206405F79046914B7AA91990E99(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void STATIC_OnFailure_8D5765734DC49AD3666C209E508BEAC3();
	void STATIC_OnSuccess_8D5765734DC49AD3666C209E508BEAC3();
	void STATIC_OnFailure_AF179E2A40E4F76621FAF6B1FF205ACC(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void STATIC_OnSuccess_AF179E2A40E4F76621FAF6B1FF205ACC(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void STATIC_OnFailure_6B222BD94C0C10156C54C29ECCC32489();
	void STATIC_OnSuccess_6B222BD94C0C10156C54C29ECCC32489();
	void STATIC_OnFailure_C1FE6AB34CBDDC34E4D4AD85A7EDB6A4(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void STATIC_OnSuccess_C1FE6AB34CBDDC34E4D4AD85A7EDB6A4(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void STATIC_OnFailure_EEF986C4447920F2EA6E9DB400B1C95B();
	void STATIC_OnSuccess_EEF986C4447920F2EA6E9DB400B1C95B();
	void STATIC_OnFailure_F9D8C6BF4AD7790C5DF42CB4187CBD5C(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void STATIC_OnSuccess_F9D8C6BF4AD7790C5DF42CB4187CBD5C(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void STATIC_BndEvt__Button_83_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void STATIC_LoadStatistic();
	void STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void STATIC_ExecuteUbergraph_StatisticEndGameBASE(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
