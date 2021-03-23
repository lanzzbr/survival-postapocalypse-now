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

// Function Cv3_GameMode.Cv3_GameMode_C.CheckRebootTimer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv3_GameMode_C::STATIC_CheckRebootTimer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(37714);

	ACv3_GameMode_C_CheckRebootTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv3_GameMode.Cv3_GameMode_C.SpawnAirDrop_Ju88
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv3_GameMode_C::STATIC_SpawnAirDrop_Ju88()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(37712);

	ACv3_GameMode_C_SpawnAirDrop_Ju88_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv3_GameMode.Cv3_GameMode_C.isBanned
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 UniqID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           isBanned                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACv3_GameMode_C::STATIC_isBanned(const struct FString& UniqID, bool* isBanned)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(37710);

	ACv3_GameMode_C_isBanned_Params params;
	params.UniqID = UniqID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (isBanned != nullptr)
		*isBanned = params.isBanned;

}


// Function Cv3_GameMode.Cv3_GameMode_C.isAdmin
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 UniqID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           isAdmin                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACv3_GameMode_C::STATIC_isAdmin(const struct FString& UniqID, bool* isAdmin)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(37708);

	ACv3_GameMode_C_isAdmin_Params params;
	params.UniqID = UniqID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (isAdmin != nullptr)
		*isAdmin = params.isAdmin;

}


// Function Cv3_GameMode.Cv3_GameMode_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv3_GameMode_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(37707);

	ACv3_GameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv3_GameMode.Cv3_GameMode_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv3_GameMode_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(37706);

	ACv3_GameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv3_GameMode.Cv3_GameMode_C.RebootServerAfter
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            TimeInseconds                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv3_GameMode_C::STATIC_RebootServerAfter(int TimeInseconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(37704);

	ACv3_GameMode_C_RebootServerAfter_Params params;
	params.TimeInseconds = TimeInseconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv3_GameMode.Cv3_GameMode_C.ExecuteUbergraph_Cv3_GameMode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv3_GameMode_C::STATIC_ExecuteUbergraph_Cv3_GameMode(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(37702);

	ACv3_GameMode_C_ExecuteUbergraph_Cv3_GameMode_Params params;
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
