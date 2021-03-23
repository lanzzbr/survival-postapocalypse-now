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
// Parameters
//---------------------------------------------------------------------------

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.GetTimeText
struct UStatisticEndGameBASE_C_GetTimeText_Params
{
	struct FTimespan                                   Timespan;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FText                                       TimeString;                                                // (Parm, OutParm)
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.GetBotKillsValue
struct UStatisticEndGameBASE_C_GetBotKillsValue_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Value;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.GetMoney
struct UStatisticEndGameBASE_C_GetMoney_Params
{
	TEnumAsByte<SurvStatisticsAward_ESurvStatisticsAward> Award;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MoneyCount;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_54EC92824F03F3E6D08AF2824A22E2C6
struct UStatisticEndGameBASE_C_OnFailure_54EC92824F03F3E6D08AF2824A22E2C6_Params
{
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_54EC92824F03F3E6D08AF2824A22E2C6
struct UStatisticEndGameBASE_C_OnSuccess_54EC92824F03F3E6D08AF2824A22E2C6_Params
{
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_FE5EAA59478501F47F2BDFAD7FEB8BB3
struct UStatisticEndGameBASE_C_OnFailure_FE5EAA59478501F47F2BDFAD7FEB8BB3_Params
{
	struct FName                                       WrittenAchievementName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_FE5EAA59478501F47F2BDFAD7FEB8BB3
struct UStatisticEndGameBASE_C_OnSuccess_FE5EAA59478501F47F2BDFAD7FEB8BB3_Params
{
	struct FName                                       WrittenAchievementName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_DF22C33546290C5FA0ED46985B80EB63
struct UStatisticEndGameBASE_C_OnFailure_DF22C33546290C5FA0ED46985B80EB63_Params
{
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_DF22C33546290C5FA0ED46985B80EB63
struct UStatisticEndGameBASE_C_OnSuccess_DF22C33546290C5FA0ED46985B80EB63_Params
{
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_FB64B0184BCF102658006D92BBF9C162
struct UStatisticEndGameBASE_C_OnFailure_FB64B0184BCF102658006D92BBF9C162_Params
{
	struct FName                                       WrittenAchievementName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_FB64B0184BCF102658006D92BBF9C162
struct UStatisticEndGameBASE_C_OnSuccess_FB64B0184BCF102658006D92BBF9C162_Params
{
	struct FName                                       WrittenAchievementName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_240F10254AE541B526C435B927728851
struct UStatisticEndGameBASE_C_OnFailure_240F10254AE541B526C435B927728851_Params
{
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_240F10254AE541B526C435B927728851
struct UStatisticEndGameBASE_C_OnSuccess_240F10254AE541B526C435B927728851_Params
{
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_27AA03044E2324AF7CFF6E89BBCA40D2
struct UStatisticEndGameBASE_C_OnFailure_27AA03044E2324AF7CFF6E89BBCA40D2_Params
{
	struct FName                                       WrittenAchievementName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_27AA03044E2324AF7CFF6E89BBCA40D2
struct UStatisticEndGameBASE_C_OnSuccess_27AA03044E2324AF7CFF6E89BBCA40D2_Params
{
	struct FName                                       WrittenAchievementName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_04DB8DF940108FA04D630BAEBFC2AD9B
struct UStatisticEndGameBASE_C_OnFailure_04DB8DF940108FA04D630BAEBFC2AD9B_Params
{
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_04DB8DF940108FA04D630BAEBFC2AD9B
struct UStatisticEndGameBASE_C_OnSuccess_04DB8DF940108FA04D630BAEBFC2AD9B_Params
{
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_664CC1B04619486DF641CBA16102AFB6
struct UStatisticEndGameBASE_C_OnFailure_664CC1B04619486DF641CBA16102AFB6_Params
{
	struct FName                                       WrittenAchievementName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_664CC1B04619486DF641CBA16102AFB6
struct UStatisticEndGameBASE_C_OnSuccess_664CC1B04619486DF641CBA16102AFB6_Params
{
	struct FName                                       WrittenAchievementName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_172F29CD4EFC3A63DAAAAC92AC68C81C
struct UStatisticEndGameBASE_C_OnFailure_172F29CD4EFC3A63DAAAAC92AC68C81C_Params
{
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_172F29CD4EFC3A63DAAAAC92AC68C81C
struct UStatisticEndGameBASE_C_OnSuccess_172F29CD4EFC3A63DAAAAC92AC68C81C_Params
{
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_B8213206405F79046914B7AA91990E99
struct UStatisticEndGameBASE_C_OnFailure_B8213206405F79046914B7AA91990E99_Params
{
	struct FName                                       WrittenAchievementName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_B8213206405F79046914B7AA91990E99
struct UStatisticEndGameBASE_C_OnSuccess_B8213206405F79046914B7AA91990E99_Params
{
	struct FName                                       WrittenAchievementName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_8D5765734DC49AD3666C209E508BEAC3
struct UStatisticEndGameBASE_C_OnFailure_8D5765734DC49AD3666C209E508BEAC3_Params
{
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_8D5765734DC49AD3666C209E508BEAC3
struct UStatisticEndGameBASE_C_OnSuccess_8D5765734DC49AD3666C209E508BEAC3_Params
{
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_AF179E2A40E4F76621FAF6B1FF205ACC
struct UStatisticEndGameBASE_C_OnFailure_AF179E2A40E4F76621FAF6B1FF205ACC_Params
{
	struct FName                                       WrittenAchievementName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_AF179E2A40E4F76621FAF6B1FF205ACC
struct UStatisticEndGameBASE_C_OnSuccess_AF179E2A40E4F76621FAF6B1FF205ACC_Params
{
	struct FName                                       WrittenAchievementName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_6B222BD94C0C10156C54C29ECCC32489
struct UStatisticEndGameBASE_C_OnFailure_6B222BD94C0C10156C54C29ECCC32489_Params
{
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_6B222BD94C0C10156C54C29ECCC32489
struct UStatisticEndGameBASE_C_OnSuccess_6B222BD94C0C10156C54C29ECCC32489_Params
{
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_C1FE6AB34CBDDC34E4D4AD85A7EDB6A4
struct UStatisticEndGameBASE_C_OnFailure_C1FE6AB34CBDDC34E4D4AD85A7EDB6A4_Params
{
	struct FName                                       WrittenAchievementName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_C1FE6AB34CBDDC34E4D4AD85A7EDB6A4
struct UStatisticEndGameBASE_C_OnSuccess_C1FE6AB34CBDDC34E4D4AD85A7EDB6A4_Params
{
	struct FName                                       WrittenAchievementName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_EEF986C4447920F2EA6E9DB400B1C95B
struct UStatisticEndGameBASE_C_OnFailure_EEF986C4447920F2EA6E9DB400B1C95B_Params
{
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_EEF986C4447920F2EA6E9DB400B1C95B
struct UStatisticEndGameBASE_C_OnSuccess_EEF986C4447920F2EA6E9DB400B1C95B_Params
{
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_F9D8C6BF4AD7790C5DF42CB4187CBD5C
struct UStatisticEndGameBASE_C_OnFailure_F9D8C6BF4AD7790C5DF42CB4187CBD5C_Params
{
	struct FName                                       WrittenAchievementName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_F9D8C6BF4AD7790C5DF42CB4187CBD5C
struct UStatisticEndGameBASE_C_OnSuccess_F9D8C6BF4AD7790C5DF42CB4187CBD5C_Params
{
	struct FName                                       WrittenAchievementName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.BndEvt__Button_83_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UStatisticEndGameBASE_C_BndEvt__Button_83_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.LoadStatistic
struct UStatisticEndGameBASE_C_LoadStatistic_Params
{
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UStatisticEndGameBASE_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.ExecuteUbergraph_StatisticEndGameBASE
struct UStatisticEndGameBASE_C_ExecuteUbergraph_StatisticEndGameBASE_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
