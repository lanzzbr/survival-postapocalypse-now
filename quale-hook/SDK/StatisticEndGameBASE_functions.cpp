// Name: ANUSGAME, Version: 4.18

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function StatisticEndGameBASE.StatisticEndGameBASE_C.GetTimeText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FTimespan               Timespan                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FText                   TimeString                     (Parm, OutParm)
void UStatisticEndGameBASE_C::STATIC_GetTimeText(const struct FTimespan& Timespan, struct FText* TimeString)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79564);

	UStatisticEndGameBASE_C_GetTimeText_Params params;
	params.Timespan = Timespan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimeString != nullptr)
		*TimeString = params.TimeString;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.GetBotKillsValue
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStatisticEndGameBASE_C::STATIC_GetBotKillsValue(int Index, int* Value, bool* Ok)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79562);

	UStatisticEndGameBASE_C_GetBotKillsValue_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (Ok != nullptr)
		*Ok = params.Ok;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.GetMoney
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SurvStatisticsAward_ESurvStatisticsAward> Award                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MoneyCount                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatisticEndGameBASE_C::STATIC_GetMoney(TEnumAsByte<SurvStatisticsAward_ESurvStatisticsAward> Award, int Count, int* MoneyCount)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79560);

	UStatisticEndGameBASE_C_GetMoney_Params params;
	params.Award = Award;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MoneyCount != nullptr)
		*MoneyCount = params.MoneyCount;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_54EC92824F03F3E6D08AF2824A22E2C6
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UStatisticEndGameBASE_C::STATIC_OnFailure_54EC92824F03F3E6D08AF2824A22E2C6()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79559);

	UStatisticEndGameBASE_C_OnFailure_54EC92824F03F3E6D08AF2824A22E2C6_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_54EC92824F03F3E6D08AF2824A22E2C6
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UStatisticEndGameBASE_C::STATIC_OnSuccess_54EC92824F03F3E6D08AF2824A22E2C6()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79558);

	UStatisticEndGameBASE_C_OnSuccess_54EC92824F03F3E6D08AF2824A22E2C6_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_FE5EAA59478501F47F2BDFAD7FEB8BB3
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatisticEndGameBASE_C::STATIC_OnFailure_FE5EAA59478501F47F2BDFAD7FEB8BB3(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79556);

	UStatisticEndGameBASE_C_OnFailure_FE5EAA59478501F47F2BDFAD7FEB8BB3_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_FE5EAA59478501F47F2BDFAD7FEB8BB3
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatisticEndGameBASE_C::STATIC_OnSuccess_FE5EAA59478501F47F2BDFAD7FEB8BB3(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79554);

	UStatisticEndGameBASE_C_OnSuccess_FE5EAA59478501F47F2BDFAD7FEB8BB3_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_DF22C33546290C5FA0ED46985B80EB63
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UStatisticEndGameBASE_C::STATIC_OnFailure_DF22C33546290C5FA0ED46985B80EB63()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79553);

	UStatisticEndGameBASE_C_OnFailure_DF22C33546290C5FA0ED46985B80EB63_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_DF22C33546290C5FA0ED46985B80EB63
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UStatisticEndGameBASE_C::STATIC_OnSuccess_DF22C33546290C5FA0ED46985B80EB63()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79552);

	UStatisticEndGameBASE_C_OnSuccess_DF22C33546290C5FA0ED46985B80EB63_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_FB64B0184BCF102658006D92BBF9C162
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatisticEndGameBASE_C::STATIC_OnFailure_FB64B0184BCF102658006D92BBF9C162(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79550);

	UStatisticEndGameBASE_C_OnFailure_FB64B0184BCF102658006D92BBF9C162_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_FB64B0184BCF102658006D92BBF9C162
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatisticEndGameBASE_C::STATIC_OnSuccess_FB64B0184BCF102658006D92BBF9C162(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79548);

	UStatisticEndGameBASE_C_OnSuccess_FB64B0184BCF102658006D92BBF9C162_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_240F10254AE541B526C435B927728851
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UStatisticEndGameBASE_C::STATIC_OnFailure_240F10254AE541B526C435B927728851()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79547);

	UStatisticEndGameBASE_C_OnFailure_240F10254AE541B526C435B927728851_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_240F10254AE541B526C435B927728851
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UStatisticEndGameBASE_C::STATIC_OnSuccess_240F10254AE541B526C435B927728851()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79546);

	UStatisticEndGameBASE_C_OnSuccess_240F10254AE541B526C435B927728851_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_27AA03044E2324AF7CFF6E89BBCA40D2
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatisticEndGameBASE_C::STATIC_OnFailure_27AA03044E2324AF7CFF6E89BBCA40D2(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79544);

	UStatisticEndGameBASE_C_OnFailure_27AA03044E2324AF7CFF6E89BBCA40D2_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_27AA03044E2324AF7CFF6E89BBCA40D2
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatisticEndGameBASE_C::STATIC_OnSuccess_27AA03044E2324AF7CFF6E89BBCA40D2(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79542);

	UStatisticEndGameBASE_C_OnSuccess_27AA03044E2324AF7CFF6E89BBCA40D2_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_04DB8DF940108FA04D630BAEBFC2AD9B
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UStatisticEndGameBASE_C::STATIC_OnFailure_04DB8DF940108FA04D630BAEBFC2AD9B()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79541);

	UStatisticEndGameBASE_C_OnFailure_04DB8DF940108FA04D630BAEBFC2AD9B_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_04DB8DF940108FA04D630BAEBFC2AD9B
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UStatisticEndGameBASE_C::STATIC_OnSuccess_04DB8DF940108FA04D630BAEBFC2AD9B()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79540);

	UStatisticEndGameBASE_C_OnSuccess_04DB8DF940108FA04D630BAEBFC2AD9B_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_664CC1B04619486DF641CBA16102AFB6
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatisticEndGameBASE_C::STATIC_OnFailure_664CC1B04619486DF641CBA16102AFB6(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79538);

	UStatisticEndGameBASE_C_OnFailure_664CC1B04619486DF641CBA16102AFB6_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_664CC1B04619486DF641CBA16102AFB6
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatisticEndGameBASE_C::STATIC_OnSuccess_664CC1B04619486DF641CBA16102AFB6(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79536);

	UStatisticEndGameBASE_C_OnSuccess_664CC1B04619486DF641CBA16102AFB6_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_172F29CD4EFC3A63DAAAAC92AC68C81C
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UStatisticEndGameBASE_C::STATIC_OnFailure_172F29CD4EFC3A63DAAAAC92AC68C81C()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79535);

	UStatisticEndGameBASE_C_OnFailure_172F29CD4EFC3A63DAAAAC92AC68C81C_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_172F29CD4EFC3A63DAAAAC92AC68C81C
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UStatisticEndGameBASE_C::STATIC_OnSuccess_172F29CD4EFC3A63DAAAAC92AC68C81C()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79534);

	UStatisticEndGameBASE_C_OnSuccess_172F29CD4EFC3A63DAAAAC92AC68C81C_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_B8213206405F79046914B7AA91990E99
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatisticEndGameBASE_C::STATIC_OnFailure_B8213206405F79046914B7AA91990E99(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79532);

	UStatisticEndGameBASE_C_OnFailure_B8213206405F79046914B7AA91990E99_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_B8213206405F79046914B7AA91990E99
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatisticEndGameBASE_C::STATIC_OnSuccess_B8213206405F79046914B7AA91990E99(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79530);

	UStatisticEndGameBASE_C_OnSuccess_B8213206405F79046914B7AA91990E99_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_8D5765734DC49AD3666C209E508BEAC3
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UStatisticEndGameBASE_C::STATIC_OnFailure_8D5765734DC49AD3666C209E508BEAC3()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79529);

	UStatisticEndGameBASE_C_OnFailure_8D5765734DC49AD3666C209E508BEAC3_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_8D5765734DC49AD3666C209E508BEAC3
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UStatisticEndGameBASE_C::STATIC_OnSuccess_8D5765734DC49AD3666C209E508BEAC3()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79528);

	UStatisticEndGameBASE_C_OnSuccess_8D5765734DC49AD3666C209E508BEAC3_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_AF179E2A40E4F76621FAF6B1FF205ACC
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatisticEndGameBASE_C::STATIC_OnFailure_AF179E2A40E4F76621FAF6B1FF205ACC(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79526);

	UStatisticEndGameBASE_C_OnFailure_AF179E2A40E4F76621FAF6B1FF205ACC_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_AF179E2A40E4F76621FAF6B1FF205ACC
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatisticEndGameBASE_C::STATIC_OnSuccess_AF179E2A40E4F76621FAF6B1FF205ACC(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79524);

	UStatisticEndGameBASE_C_OnSuccess_AF179E2A40E4F76621FAF6B1FF205ACC_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_6B222BD94C0C10156C54C29ECCC32489
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UStatisticEndGameBASE_C::STATIC_OnFailure_6B222BD94C0C10156C54C29ECCC32489()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79523);

	UStatisticEndGameBASE_C_OnFailure_6B222BD94C0C10156C54C29ECCC32489_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_6B222BD94C0C10156C54C29ECCC32489
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UStatisticEndGameBASE_C::STATIC_OnSuccess_6B222BD94C0C10156C54C29ECCC32489()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79522);

	UStatisticEndGameBASE_C_OnSuccess_6B222BD94C0C10156C54C29ECCC32489_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_C1FE6AB34CBDDC34E4D4AD85A7EDB6A4
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatisticEndGameBASE_C::STATIC_OnFailure_C1FE6AB34CBDDC34E4D4AD85A7EDB6A4(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79520);

	UStatisticEndGameBASE_C_OnFailure_C1FE6AB34CBDDC34E4D4AD85A7EDB6A4_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_C1FE6AB34CBDDC34E4D4AD85A7EDB6A4
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatisticEndGameBASE_C::STATIC_OnSuccess_C1FE6AB34CBDDC34E4D4AD85A7EDB6A4(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79518);

	UStatisticEndGameBASE_C_OnSuccess_C1FE6AB34CBDDC34E4D4AD85A7EDB6A4_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_EEF986C4447920F2EA6E9DB400B1C95B
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UStatisticEndGameBASE_C::STATIC_OnFailure_EEF986C4447920F2EA6E9DB400B1C95B()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79517);

	UStatisticEndGameBASE_C_OnFailure_EEF986C4447920F2EA6E9DB400B1C95B_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_EEF986C4447920F2EA6E9DB400B1C95B
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UStatisticEndGameBASE_C::STATIC_OnSuccess_EEF986C4447920F2EA6E9DB400B1C95B()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79516);

	UStatisticEndGameBASE_C_OnSuccess_EEF986C4447920F2EA6E9DB400B1C95B_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnFailure_F9D8C6BF4AD7790C5DF42CB4187CBD5C
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatisticEndGameBASE_C::STATIC_OnFailure_F9D8C6BF4AD7790C5DF42CB4187CBD5C(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79514);

	UStatisticEndGameBASE_C_OnFailure_F9D8C6BF4AD7790C5DF42CB4187CBD5C_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.OnSuccess_F9D8C6BF4AD7790C5DF42CB4187CBD5C
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatisticEndGameBASE_C::STATIC_OnSuccess_F9D8C6BF4AD7790C5DF42CB4187CBD5C(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79512);

	UStatisticEndGameBASE_C_OnSuccess_F9D8C6BF4AD7790C5DF42CB4187CBD5C_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.BndEvt__Button_83_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UStatisticEndGameBASE_C::STATIC_BndEvt__Button_83_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79511);

	UStatisticEndGameBASE_C_BndEvt__Button_83_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.LoadStatistic
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UStatisticEndGameBASE_C::STATIC_LoadStatistic()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79510);

	UStatisticEndGameBASE_C_LoadStatistic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UStatisticEndGameBASE_C::STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79509);

	UStatisticEndGameBASE_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticEndGameBASE.StatisticEndGameBASE_C.ExecuteUbergraph_StatisticEndGameBASE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatisticEndGameBASE_C::STATIC_ExecuteUbergraph_StatisticEndGameBASE(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79505);

	UStatisticEndGameBASE_C_ExecuteUbergraph_StatisticEndGameBASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
