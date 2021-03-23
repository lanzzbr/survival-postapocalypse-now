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

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.CheckOptimizationLights
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_CheckOptimizationLights()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40420);

	ABP_FastStylizedProceduralSky_C_CheckOptimizationLights_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SelectCustomWeather
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_SelectCustomWeather()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40419);

	ABP_FastStylizedProceduralSky_C_SelectCustomWeather_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.TimeOfDayPresetChanged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_TimeOfDayPresetChanged()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40418);

	ABP_FastStylizedProceduralSky_C_TimeOfDayPresetChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.WetherPresetChanged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_WetherPresetChanged()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40417);

	ABP_FastStylizedProceduralSky_C_WetherPresetChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateCaptureMode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_UpdateCaptureMode()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40415);

	ABP_FastStylizedProceduralSky_C_UpdateCaptureMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetTimeOfDayExternal
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UClass*                  Preset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TransitionDuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_SetTimeOfDayExternal(class UClass* Preset, float TransitionDuration)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40413);

	ABP_FastStylizedProceduralSky_C_SetTimeOfDayExternal_Params params;
	params.Preset = Preset;
	params.TransitionDuration = TransitionDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateLightning
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UClass*                  Preset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*             Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_UpdateLightning(class UClass* Preset, class UCurveFloat* Scale, float Intensity)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40409);

	ABP_FastStylizedProceduralSky_C_UpdateLightning_Params params;
	params.Preset = Preset;
	params.Scale = Scale;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetLightning
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UClass*                  Preset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*             Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Iterations                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_SetLightning(class UClass* Preset, class UCurveFloat* Scale, int Iterations)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40407);

	ABP_FastStylizedProceduralSky_C_SetLightning_Params params;
	params.Preset = Preset;
	params.Scale = Scale;
	params.Iterations = Iterations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetTimeCycleDuration
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          RealTimeMinutes                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_SetTimeCycleDuration(float RealTimeMinutes)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40405);

	ABP_FastStylizedProceduralSky_C_SetTimeCycleDuration_Params params;
	params.RealTimeMinutes = RealTimeMinutes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.ChangeTimeOfDay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_ChangeTimeOfDay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40401);

	ABP_FastStylizedProceduralSky_C_ChangeTimeOfDay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetTimeOfDayChangeMode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<PresetSelection_EPresetSelection> Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ChangeAfterTime                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_EEasingFunc> Transition                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_SetTimeOfDayChangeMode(TEnumAsByte<PresetSelection_EPresetSelection> Mode, float ChangeAfterTime, TEnumAsByte<Engine_EEasingFunc> Transition)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40399);

	ABP_FastStylizedProceduralSky_C_SetTimeOfDayChangeMode_Params params;
	params.Mode = Mode;
	params.ChangeAfterTime = ChangeAfterTime;
	params.Transition = Transition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetTimeOfDayByIndex
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Preset_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TransitionDuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_SetTimeOfDayByIndex(int Preset_Index, float TransitionDuration)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40397);

	ABP_FastStylizedProceduralSky_C_SetTimeOfDayByIndex_Params params;
	params.Preset_Index = Preset_Index;
	params.TransitionDuration = TransitionDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.LerpTimeOfDayPreset
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FTimeOfDayData          From                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FTimeOfDayData          To                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimeOfDayData          StructOut                      (Parm, OutParm, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_LerpTimeOfDayPreset(const struct FTimeOfDayData& From, const struct FTimeOfDayData& To, float Alpha, struct FTimeOfDayData* StructOut)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40395);

	ABP_FastStylizedProceduralSky_C_LerpTimeOfDayPreset_Params params;
	params.From = From;
	params.To = To;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StructOut != nullptr)
		*StructOut = params.StructOut;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateTimeOfDayPreset
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_UpdateTimeOfDayPreset(float DeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40393);

	ABP_FastStylizedProceduralSky_C_UpdateTimeOfDayPreset_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.Versioning
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_Versioning()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40389);

	ABP_FastStylizedProceduralSky_C_Versioning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetSkylightCaptueMode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_SetSkylightCaptueMode()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40387);

	ABP_FastStylizedProceduralSky_C_SetSkylightCaptueMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.GetPrecomputedSkyLight
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureCube*            From                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureCube*            To                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Alpha                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_GetPrecomputedSkyLight(float Time, class UTextureCube** From, class UTextureCube** To, float* Alpha)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40385);

	ABP_FastStylizedProceduralSky_C_GetPrecomputedSkyLight_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (From != nullptr)
		*From = params.From;
	if (To != nullptr)
		*To = params.To;
	if (Alpha != nullptr)
		*Alpha = params.Alpha;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateMoon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_UpdateMoon(float DeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40383);

	ABP_FastStylizedProceduralSky_C_UpdateMoon_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetShadowFunction
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UMaterialInstanceConstant* Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_SetShadowFunction(class UMaterialInstanceConstant* Material)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40381);

	ABP_FastStylizedProceduralSky_C_SetShadowFunction_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateShadowParameters
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_UpdateShadowParameters()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40379);

	ABP_FastStylizedProceduralSky_C_UpdateShadowParameters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetTime
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          TargetTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TransitionDuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_EEasingFunc> TransitionFunction             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_SetTime(float TargetTime, float TransitionDuration, TEnumAsByte<Engine_EEasingFunc> TransitionFunction)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40377);

	ABP_FastStylizedProceduralSky_C_SetTime_Params params;
	params.TargetTime = TargetTime;
	params.TransitionDuration = TransitionDuration;
	params.TransitionFunction = TransitionFunction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateSunParameters
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_UpdateSunParameters()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40375);

	ABP_FastStylizedProceduralSky_C_UpdateSunParameters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateSkyLight
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_UpdateSkyLight()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40373);

	ABP_FastStylizedProceduralSky_C_UpdateSkyLight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetPresetChangeMode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<PresetSelection_EPresetSelection> Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ChangeAfterTime                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_EEasingFunc> Transition                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_SetPresetChangeMode(TEnumAsByte<PresetSelection_EPresetSelection> Mode, float ChangeAfterTime, TEnumAsByte<Engine_EEasingFunc> Transition)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40371);

	ABP_FastStylizedProceduralSky_C_SetPresetChangeMode_Params params;
	params.Mode = Mode;
	params.ChangeAfterTime = ChangeAfterTime;
	params.Transition = Transition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetPresetExternal
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UClass*                  Preset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TransitionDuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_SetPresetExternal(class UClass* Preset, float TransitionDuration)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40369);

	ABP_FastStylizedProceduralSky_C_SetPresetExternal_Params params;
	params.Preset = Preset;
	params.TransitionDuration = TransitionDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.LerpWeatherPreset
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FWeatherData            A                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FWeatherData            B                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeatherData            StructOut                      (Parm, OutParm, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_LerpWeatherPreset(const struct FWeatherData& A, const struct FWeatherData& B, float Alpha, struct FWeatherData* StructOut)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40367);

	ABP_FastStylizedProceduralSky_C_LerpWeatherPreset_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StructOut != nullptr)
		*StructOut = params.StructOut;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateExternalActors
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_UpdateExternalActors()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40365);

	ABP_FastStylizedProceduralSky_C_UpdateExternalActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SampleCurveBySunHeight
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UCurveLinearColor*       Curve                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Default                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_SampleCurveBySunHeight(class UCurveLinearColor* Curve, const struct FLinearColor& Default, struct FLinearColor* Color)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40363);

	ABP_FastStylizedProceduralSky_C_SampleCurveBySunHeight_Params params;
	params.Curve = Curve;
	params.Default = Default;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateNightParameters
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_UpdateNightParameters()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40361);

	ABP_FastStylizedProceduralSky_C_UpdateNightParameters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateWeatherPreset
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_UpdateWeatherPreset(float DeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40359);

	ABP_FastStylizedProceduralSky_C_UpdateWeatherPreset_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetPresetByIndex
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Preset_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TransitionDuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_SetPresetByIndex(int Preset_Index, float TransitionDuration)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40357);

	ABP_FastStylizedProceduralSky_C_SetPresetByIndex_Params params;
	params.Preset_Index = Preset_Index;
	params.TransitionDuration = TransitionDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateLayersParameters
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_UpdateLayersParameters(float DeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40355);

	ABP_FastStylizedProceduralSky_C_UpdateLayersParameters_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateCloudsParameters
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_UpdateCloudsParameters()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40353);

	ABP_FastStylizedProceduralSky_C_UpdateCloudsParameters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateHorizonParameters
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_UpdateHorizonParameters()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40351);

	ABP_FastStylizedProceduralSky_C_UpdateHorizonParameters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.ChangeWeather
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_ChangeWeather()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40349);

	ABP_FastStylizedProceduralSky_C_ChangeWeather_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateDateTime
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_UpdateDateTime(float DeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40347);

	ABP_FastStylizedProceduralSky_C_UpdateDateTime_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateCurves
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_UpdateCurves()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40345);

	ABP_FastStylizedProceduralSky_C_UpdateCurves_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateSkyParameters
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_UpdateSkyParameters(float DeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40343);

	ABP_FastStylizedProceduralSky_C_UpdateSkyParameters_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40341);

	ABP_FastStylizedProceduralSky_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.LightningTimeline__FinishedFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_LightningTimeline__FinishedFunc()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40340);

	ABP_FastStylizedProceduralSky_C_LightningTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.LightningTimeline__UpdateFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_LightningTimeline__UpdateFunc()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40339);

	ABP_FastStylizedProceduralSky_C_LightningTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40337);

	ABP_FastStylizedProceduralSky_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.RecaptureSky
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_RecaptureSky()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40336);

	ABP_FastStylizedProceduralSky_C_RecaptureSky_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40335);

	ABP_FastStylizedProceduralSky_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetTimeOfDay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          TimeOfDay                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_SetTimeOfDay(float TimeOfDay)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40333);

	ABP_FastStylizedProceduralSky_C_SetTimeOfDay_Params params;
	params.TimeOfDay = TimeOfDay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.PlayLightning
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UClass*                  Preset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*             Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_PlayLightning(class UClass* Preset, class UCurveFloat* Scale, float Delay, float Intensity)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40331);

	ABP_FastStylizedProceduralSky_C_PlayLightning_Params params;
	params.Preset = Preset;
	params.Scale = Scale;
	params.Delay = Delay;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.PostConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_PostConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40330);

	ABP_FastStylizedProceduralSky_C_PostConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.ExecuteUbergraph_BP_FastStylizedProceduralSky
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_ExecuteUbergraph_BP_FastStylizedProceduralSky(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40328);

	ABP_FastStylizedProceduralSky_C_ExecuteUbergraph_BP_FastStylizedProceduralSky_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.OnLightningPlayed__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ABP_FastStylizedProceduralSky_C::STATIC_OnLightningPlayed__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40327);

	ABP_FastStylizedProceduralSky_C_OnLightningPlayed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.OnTimeOfDayPresetChanged__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UClass*                  Preset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TransitionDuraion              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_OnTimeOfDayPresetChanged__DelegateSignature(class UClass* Preset, float TransitionDuraion)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40325);

	ABP_FastStylizedProceduralSky_C_OnTimeOfDayPresetChanged__DelegateSignature_Params params;
	params.Preset = Preset;
	params.TransitionDuraion = TransitionDuraion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.OnWeatherPresetChanged__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UClass*                  Preset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TransitionDuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::STATIC_OnWeatherPresetChanged__DelegateSignature(class UClass* Preset, float TransitionDuration)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(40323);

	ABP_FastStylizedProceduralSky_C_OnWeatherPresetChanged__DelegateSignature_Params params;
	params.Preset = Preset;
	params.TransitionDuration = TransitionDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
