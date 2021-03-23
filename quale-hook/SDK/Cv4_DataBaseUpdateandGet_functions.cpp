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

// Function Cv4_DataBaseUpdateandGet.Cv4_DataBaseUpdateAndGet_C.CheckIsValidClassicalState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 OwnerID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UCv4_DataBaseUpdateAndGet_C::STATIC_CheckIsValidClassicalState(const struct FString& OwnerID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35887);

	UCv4_DataBaseUpdateAndGet_C_CheckIsValidClassicalState_Params params;
	params.OwnerID = OwnerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_DataBaseUpdateandGet.Cv4_DataBaseUpdateAndGet_C.ReturnClassicalState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FNewDB_Classical        Classical_Structure            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UCv4_DataBaseUpdateAndGet_C::STATIC_ReturnClassicalState(const struct FNewDB_Classical& Classical_Structure)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35885);

	UCv4_DataBaseUpdateAndGet_C_ReturnClassicalState_Params params;
	params.Classical_Structure = Classical_Structure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_DataBaseUpdateandGet.Cv4_DataBaseUpdateAndGet_C.UpdateClassicalState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 OwnerID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           Clear_Inventory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           AddScores                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCv4_DataBaseUpdateAndGet_C::STATIC_UpdateClassicalState(const struct FString& OwnerID, bool Clear_Inventory, bool AddScores)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35883);

	UCv4_DataBaseUpdateAndGet_C_UpdateClassicalState_Params params;
	params.OwnerID = OwnerID;
	params.Clear_Inventory = Clear_Inventory;
	params.AddScores = AddScores;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_DataBaseUpdateandGet.Cv4_DataBaseUpdateAndGet_C.WriteMoneyToBase
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Money                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv4_DataBaseUpdateAndGet_C::STATIC_WriteMoneyToBase(int Money)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35881);

	UCv4_DataBaseUpdateAndGet_C_WriteMoneyToBase_Params params;
	params.Money = Money;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_DataBaseUpdateandGet.Cv4_DataBaseUpdateAndGet_C.CheckIsValidSaveState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 OwnerID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UCv4_DataBaseUpdateAndGet_C::STATIC_CheckIsValidSaveState(const struct FString& OwnerID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35879);

	UCv4_DataBaseUpdateAndGet_C_CheckIsValidSaveState_Params params;
	params.OwnerID = OwnerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_DataBaseUpdateandGet.Cv4_DataBaseUpdateAndGet_C.UpdateSaveState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 OwnerID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           UpdateAndClear                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Banned                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCv4_DataBaseUpdateAndGet_C::STATIC_UpdateSaveState(const struct FString& OwnerID, bool UpdateAndClear, bool Banned)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35877);

	UCv4_DataBaseUpdateAndGet_C_UpdateSaveState_Params params;
	params.OwnerID = OwnerID;
	params.UpdateAndClear = UpdateAndClear;
	params.Banned = Banned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_DataBaseUpdateandGet.Cv4_DataBaseUpdateAndGet_C.ReturnSaveState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct Fsurv_2019_FieldsStructure LastStructure                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UCv4_DataBaseUpdateAndGet_C::STATIC_ReturnSaveState(const struct Fsurv_2019_FieldsStructure& LastStructure)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35875);

	UCv4_DataBaseUpdateAndGet_C_ReturnSaveState_Params params;
	params.LastStructure = LastStructure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_DataBaseUpdateandGet.Cv4_DataBaseUpdateAndGet_C.OnAddScore__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv4_DataBaseUpdateAndGet_C::STATIC_OnAddScore__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(35874);

	UCv4_DataBaseUpdateAndGet_C_OnAddScore__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
