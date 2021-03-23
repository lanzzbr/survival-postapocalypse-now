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

// Function Cv2_GameInstance.Cv2_GameInstance_C.CheatControll
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_GameInstance_C::STATIC_CheatControll()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(37444);

	UCv2_GameInstance_C_CheatControll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameInstance.Cv2_GameInstance_C.QuitGameExit
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_GameInstance_C::STATIC_QuitGameExit()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(37443);

	UCv2_GameInstance_C_QuitGameExit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameInstance.Cv2_GameInstance_C.CreateStorageActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_GameInstance_C::STATIC_CreateStorageActor()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36607);

	UCv2_GameInstance_C_CreateStorageActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameInstance.Cv2_GameInstance_C.CreateBatFiles
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_GameInstance_C::STATIC_CreateBatFiles()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36606);

	UCv2_GameInstance_C_CreateBatFiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameInstance.Cv2_GameInstance_C.ShowZagluha
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCv2_GameInstance_C::STATIC_ShowZagluha(bool Show)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36604);

	UCv2_GameInstance_C_ShowZagluha_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameInstance.Cv2_GameInstance_C.ApplyVideoSettings
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_GameInstance_C::STATIC_ApplyVideoSettings()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36596);

	UCv2_GameInstance_C_ApplyVideoSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameInstance.Cv2_GameInstance_C.ApplyMouseSettings
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_GameInstance_C::STATIC_ApplyMouseSettings()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36589);

	UCv2_GameInstance_C_ApplyMouseSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameInstance.Cv2_GameInstance_C.CheckResolution
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCv2_GameInstance_C::STATIC_CheckResolution(const struct FString& String, bool* Ok)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36587);

	UCv2_GameInstance_C_CheckResolution_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ok != nullptr)
		*Ok = params.Ok;

}


// Function Cv2_GameInstance.Cv2_GameInstance_C.ApplySettings
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_GameInstance_C::STATIC_ApplySettings()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36585);

	UCv2_GameInstance_C_ApplySettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameInstance.Cv2_GameInstance_C.SaveSettings
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FSettingsStructure      SettingsStruct                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UCv2_GameInstance_C::STATIC_SaveSettings(const struct FSettingsStructure& SettingsStruct)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36583);

	UCv2_GameInstance_C_SaveSettings_Params params;
	params.SettingsStruct = SettingsStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameInstance.Cv2_GameInstance_C.LoadSettings
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCv2_GameInstance_C::STATIC_LoadSettings(bool* Ok)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36581);

	UCv2_GameInstance_C_LoadSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ok != nullptr)
		*Ok = params.Ok;

}


// Function Cv2_GameInstance.Cv2_GameInstance_C.OnFailure_71D85BA246BA90EDBA5995AD2163273F
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_GameInstance_C::STATIC_OnFailure_71D85BA246BA90EDBA5995AD2163273F()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36580);

	UCv2_GameInstance_C_OnFailure_71D85BA246BA90EDBA5995AD2163273F_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameInstance.Cv2_GameInstance_C.OnSuccess_71D85BA246BA90EDBA5995AD2163273F
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_GameInstance_C::STATIC_OnSuccess_71D85BA246BA90EDBA5995AD2163273F()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36579);

	UCv2_GameInstance_C_OnSuccess_71D85BA246BA90EDBA5995AD2163273F_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameInstance.Cv2_GameInstance_C.OnFailure_FF52DE6242D10D4E178AF0B0830C1FFB
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_GameInstance_C::STATIC_OnFailure_FF52DE6242D10D4E178AF0B0830C1FFB()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36578);

	UCv2_GameInstance_C_OnFailure_FF52DE6242D10D4E178AF0B0830C1FFB_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameInstance.Cv2_GameInstance_C.OnSuccess_FF52DE6242D10D4E178AF0B0830C1FFB
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_GameInstance_C::STATIC_OnSuccess_FF52DE6242D10D4E178AF0B0830C1FFB()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36577);

	UCv2_GameInstance_C_OnSuccess_FF52DE6242D10D4E178AF0B0830C1FFB_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameInstance.Cv2_GameInstance_C.ChangeVolume
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          MasterVolume                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MusicVolume                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_GameInstance_C::STATIC_ChangeVolume(float MasterVolume, float MusicVolume)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36575);

	UCv2_GameInstance_C_ChangeVolume_Params params;
	params.MasterVolume = MasterVolume;
	params.MusicVolume = MusicVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameInstance.Cv2_GameInstance_C.ReceiveInit
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_GameInstance_C::STATIC_ReceiveInit()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36574);

	UCv2_GameInstance_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameInstance.Cv2_GameInstance_C.ReconnectMainMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_GameInstance_C::STATIC_ReconnectMainMenu()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36573);

	UCv2_GameInstance_C_ReconnectMainMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameInstance.Cv2_GameInstance_C.UpdateSession
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_GameInstance_C::STATIC_UpdateSession()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36572);

	UCv2_GameInstance_C_UpdateSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_GameInstance.Cv2_GameInstance_C.ExecuteUbergraph_Cv2_GameInstance
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_GameInstance_C::STATIC_ExecuteUbergraph_Cv2_GameInstance(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36570);

	UCv2_GameInstance_C_ExecuteUbergraph_Cv2_GameInstance_Params params;
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
