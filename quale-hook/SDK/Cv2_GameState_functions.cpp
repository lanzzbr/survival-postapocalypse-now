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

// Function Cv2_GameState.Cv2_GameState_C.OnRep_isNight?
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_GameState_C::STATIC_OnRep_isNight_()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(37340);

	ACv2_GameState_C_OnRep_isNight__Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameState.Cv2_GameState_C.GetTopArrays
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<int>                    TOPSCORE1                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FString>         TOP_PLAYERS1                   (Parm, OutParm, ZeroConstructor)
void ACv2_GameState_C::STATIC_GetTopArrays(TArray<int>* TOPSCORE1, TArray<struct FString>* TOP_PLAYERS1)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36525);

	ACv2_GameState_C_GetTopArrays_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TOPSCORE1 != nullptr)
		*TOPSCORE1 = params.TOPSCORE1;
	if (TOP_PLAYERS1 != nullptr)
		*TOP_PLAYERS1 = params.TOP_PLAYERS1;

}


// Function Cv2_GameState.Cv2_GameState_C.OnRep_GameTime
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_GameState_C::STATIC_OnRep_GameTime()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36523);

	ACv2_GameState_C_OnRep_GameTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameState.Cv2_GameState_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_GameState_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36522);

	ACv2_GameState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameState.Cv2_GameState_C.OnFailure_76B8372D4F9E44755CC645B450E4AAD7
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_GameState_C::STATIC_OnFailure_76B8372D4F9E44755CC645B450E4AAD7()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36521);

	ACv2_GameState_C_OnFailure_76B8372D4F9E44755CC645B450E4AAD7_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameState.Cv2_GameState_C.OnSuccess_76B8372D4F9E44755CC645B450E4AAD7
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_GameState_C::STATIC_OnSuccess_76B8372D4F9E44755CC645B450E4AAD7()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36520);

	ACv2_GameState_C_OnSuccess_76B8372D4F9E44755CC645B450E4AAD7_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameState.Cv2_GameState_C.AirDropRandom
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_GameState_C::STATIC_AirDropRandom()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36519);

	ACv2_GameState_C_AirDropRandom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameState.Cv2_GameState_C.ClientDestroySession
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_GameState_C::STATIC_ClientDestroySession()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36518);

	ACv2_GameState_C_ClientDestroySession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameState.Cv2_GameState_C.GetSortedTopArray
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_GameState_C::STATIC_GetSortedTopArray()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36517);

	ACv2_GameState_C_GetSortedTopArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameState.Cv2_GameState_C.PlayNightMusicTimer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_GameState_C::STATIC_PlayNightMusicTimer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36516);

	ACv2_GameState_C_PlayNightMusicTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameState.Cv2_GameState_C.CheckTime
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_GameState_C::STATIC_CheckTime()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36515);

	ACv2_GameState_C_CheckTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameState.Cv2_GameState_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_GameState_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36514);

	ACv2_GameState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameState.Cv2_GameState_C.PlayNightScreamsTimer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_GameState_C::STATIC_PlayNightScreamsTimer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36513);

	ACv2_GameState_C_PlayNightScreamsTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameState.Cv2_GameState_C.CheckGarbage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_GameState_C::STATIC_CheckGarbage()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36512);

	ACv2_GameState_C_CheckGarbage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameState.Cv2_GameState_C.ExecuteUbergraph_Cv2_GameState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_GameState_C::STATIC_ExecuteUbergraph_Cv2_GameState(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36502);

	ACv2_GameState_C_ExecuteUbergraph_Cv2_GameState_Params params;
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
