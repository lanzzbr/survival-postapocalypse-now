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

// Function GameOverWidgetBASE.GameOverWidgetBASE_C.GetHonors
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ACv2_PlayerState_C*      PlState                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameOverWidgetBASE_C::STATIC_GetHonors(class ACv2_PlayerState_C* PlState)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86653);

	UGameOverWidgetBASE_C_GetHonors_Params params;
	params.PlState = PlState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverWidgetBASE.GameOverWidgetBASE_C.Timer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGameOverWidgetBASE_C::STATIC_Timer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86651);

	UGameOverWidgetBASE_C_Timer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverWidgetBASE.GameOverWidgetBASE_C.AddRanksOfBattle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ACv2_PlayerState_C*      PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameOverWidgetBASE_C::STATIC_AddRanksOfBattle(class ACv2_PlayerState_C* PlayerState)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86625);

	UGameOverWidgetBASE_C_AddRanksOfBattle_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverWidgetBASE.GameOverWidgetBASE_C.DrawTops
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGameOverWidgetBASE_C::STATIC_DrawTops()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86622);

	UGameOverWidgetBASE_C_DrawTops_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverWidgetBASE.GameOverWidgetBASE_C.DrawPlayerStatistic
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGameOverWidgetBASE_C::STATIC_DrawPlayerStatistic()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86620);

	UGameOverWidgetBASE_C_DrawPlayerStatistic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverWidgetBASE.GameOverWidgetBASE_C.SetStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGameOverWidgetBASE_C::STATIC_SetStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86618);

	UGameOverWidgetBASE_C_SetStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverWidgetBASE.GameOverWidgetBASE_C.ShowRankOneByOne
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGameOverWidgetBASE_C::STATIC_ShowRankOneByOne()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86616);

	UGameOverWidgetBASE_C_ShowRankOneByOne_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverWidgetBASE.GameOverWidgetBASE_C.ShowHonorOneByOne
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGameOverWidgetBASE_C::STATIC_ShowHonorOneByOne()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86614);

	UGameOverWidgetBASE_C_ShowHonorOneByOne_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverWidgetBASE.GameOverWidgetBASE_C.RotateMedal
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGameOverWidgetBASE_C::STATIC_RotateMedal()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86613);

	UGameOverWidgetBASE_C_RotateMedal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverWidgetBASE.GameOverWidgetBASE_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGameOverWidgetBASE_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86612);

	UGameOverWidgetBASE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverWidgetBASE.GameOverWidgetBASE_C.ShowHonor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv3_HonorsEnum_ECv3_HonorsEnum> NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameOverWidgetBASE_C::STATIC_ShowHonor(TEnumAsByte<Cv3_HonorsEnum_ECv3_HonorsEnum> NewParam)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86610);

	UGameOverWidgetBASE_C_ShowHonor_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverWidgetBASE.GameOverWidgetBASE_C.AddAllHonors
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGameOverWidgetBASE_C::STATIC_AddAllHonors()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86609);

	UGameOverWidgetBASE_C_AddAllHonors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverWidgetBASE.GameOverWidgetBASE_C.ShowRank
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameOverWidgetBASE_C::STATIC_ShowRank(int Rank)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86607);

	UGameOverWidgetBASE_C_ShowRank_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverWidgetBASE.GameOverWidgetBASE_C.AddRanks
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGameOverWidgetBASE_C::STATIC_AddRanks()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86606);

	UGameOverWidgetBASE_C_AddRanks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverWidgetBASE.GameOverWidgetBASE_C.RankEndShow
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGameOverWidgetBASE_C::STATIC_RankEndShow()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86605);

	UGameOverWidgetBASE_C_RankEndShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverWidgetBASE.GameOverWidgetBASE_C.HonorsEndShow
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGameOverWidgetBASE_C::STATIC_HonorsEndShow()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86604);

	UGameOverWidgetBASE_C_HonorsEndShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverWidgetBASE.GameOverWidgetBASE_C.ShowTiner
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGameOverWidgetBASE_C::STATIC_ShowTiner()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86603);

	UGameOverWidgetBASE_C_ShowTiner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverWidgetBASE.GameOverWidgetBASE_C.RunAnumateGUI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGameOverWidgetBASE_C::STATIC_RunAnumateGUI()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86602);

	UGameOverWidgetBASE_C_RunAnumateGUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverWidgetBASE.GameOverWidgetBASE_C.Destruct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGameOverWidgetBASE_C::STATIC_Destruct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86601);

	UGameOverWidgetBASE_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverWidgetBASE.GameOverWidgetBASE_C.ExecuteUbergraph_GameOverWidgetBASE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameOverWidgetBASE_C::STATIC_ExecuteUbergraph_GameOverWidgetBASE(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86599);

	UGameOverWidgetBASE_C_ExecuteUbergraph_GameOverWidgetBASE_Params params;
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
