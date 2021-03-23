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

// Function CV2_SaveOptions.CV2_SaveOptions_C.CheckSettingsCorrect
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsCorrect                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCV2_SaveOptions_C::STATIC_CheckSettingsCorrect(bool* IsCorrect)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(31711);

	UCV2_SaveOptions_C_CheckSettingsCorrect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsCorrect != nullptr)
		*IsCorrect = params.IsCorrect;

}


// Function CV2_SaveOptions.CV2_SaveOptions_C.GetSettings
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FSettingsStructure      SettingsStr                    (Parm, OutParm, HasGetValueTypeHash)
void UCV2_SaveOptions_C::STATIC_GetSettings(struct FSettingsStructure* SettingsStr)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(31709);

	UCV2_SaveOptions_C_GetSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SettingsStr != nullptr)
		*SettingsStr = params.SettingsStr;

}


// Function CV2_SaveOptions.CV2_SaveOptions_C.SaveSettings
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FSettingsStructure      Settings                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UCV2_SaveOptions_C::STATIC_SaveSettings(const struct FSettingsStructure& Settings)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(31707);

	UCV2_SaveOptions_C_SaveSettings_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
