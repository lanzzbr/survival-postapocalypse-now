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

// Function MAP_RoundProgress.MAP_RoundProgress_C.CheckActivity
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_RoundProgress_C::STATIC_CheckActivity()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(39089);

	UMAP_RoundProgress_C_CheckActivity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_RoundProgress.MAP_RoundProgress_C.SetEnemyStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           EnemyStyle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMAP_RoundProgress_C::STATIC_SetEnemyStyle(bool EnemyStyle)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(39087);

	UMAP_RoundProgress_C_SetEnemyStyle_Params params;
	params.EnemyStyle = EnemyStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_RoundProgress.MAP_RoundProgress_C.SetProgress
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ACv2_ScenarioZone_C*     Zone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMAP_RoundProgress_C::STATIC_SetProgress(class ACv2_ScenarioZone_C* Zone)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(39085);

	UMAP_RoundProgress_C_SetProgress_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_RoundProgress.MAP_RoundProgress_C.ShowActivity
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           SetActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsEnemy                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Up                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMAP_RoundProgress_C::STATIC_ShowActivity(bool SetActive, bool IsEnemy, bool Up)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(39083);

	UMAP_RoundProgress_C_ShowActivity_Params params;
	params.SetActive = SetActive;
	params.IsEnemy = IsEnemy;
	params.Up = Up;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_RoundProgress.MAP_RoundProgress_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_RoundProgress_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(39082);

	UMAP_RoundProgress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_RoundProgress.MAP_RoundProgress_C.ExecuteUbergraph_MAP_RoundProgress
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMAP_RoundProgress_C::STATIC_ExecuteUbergraph_MAP_RoundProgress(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(39080);

	UMAP_RoundProgress_C_ExecuteUbergraph_MAP_RoundProgress_Params params;
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
