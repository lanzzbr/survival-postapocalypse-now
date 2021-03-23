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

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.CheckOptimizationLights
struct ABP_FastStylizedProceduralSky_C_CheckOptimizationLights_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SelectCustomWeather
struct ABP_FastStylizedProceduralSky_C_SelectCustomWeather_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.TimeOfDayPresetChanged
struct ABP_FastStylizedProceduralSky_C_TimeOfDayPresetChanged_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.WetherPresetChanged
struct ABP_FastStylizedProceduralSky_C_WetherPresetChanged_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateCaptureMode
struct ABP_FastStylizedProceduralSky_C_UpdateCaptureMode_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetTimeOfDayExternal
struct ABP_FastStylizedProceduralSky_C_SetTimeOfDayExternal_Params
{
	class UClass*                                      Preset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TransitionDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateLightning
struct ABP_FastStylizedProceduralSky_C_UpdateLightning_Params
{
	class UClass*                                      Preset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Intensity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetLightning
struct ABP_FastStylizedProceduralSky_C_SetLightning_Params
{
	class UClass*                                      Preset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Iterations;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetTimeCycleDuration
struct ABP_FastStylizedProceduralSky_C_SetTimeCycleDuration_Params
{
	float                                              RealTimeMinutes;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.ChangeTimeOfDay
struct ABP_FastStylizedProceduralSky_C_ChangeTimeOfDay_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetTimeOfDayChangeMode
struct ABP_FastStylizedProceduralSky_C_SetTimeOfDayChangeMode_Params
{
	TEnumAsByte<PresetSelection_EPresetSelection>      Mode;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChangeAfterTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EEasingFunc>                    Transition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetTimeOfDayByIndex
struct ABP_FastStylizedProceduralSky_C_SetTimeOfDayByIndex_Params
{
	int                                                Preset_Index;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TransitionDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.LerpTimeOfDayPreset
struct ABP_FastStylizedProceduralSky_C_LerpTimeOfDayPreset_Params
{
	struct FTimeOfDayData                              From;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FTimeOfDayData                              To;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimeOfDayData                              StructOut;                                                 // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateTimeOfDayPreset
struct ABP_FastStylizedProceduralSky_C_UpdateTimeOfDayPreset_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.Versioning
struct ABP_FastStylizedProceduralSky_C_Versioning_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetSkylightCaptueMode
struct ABP_FastStylizedProceduralSky_C_SetSkylightCaptueMode_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.GetPrecomputedSkyLight
struct ABP_FastStylizedProceduralSky_C_GetPrecomputedSkyLight_Params
{
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureCube*                                From;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureCube*                                To;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Alpha;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateMoon
struct ABP_FastStylizedProceduralSky_C_UpdateMoon_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetShadowFunction
struct ABP_FastStylizedProceduralSky_C_SetShadowFunction_Params
{
	class UMaterialInstanceConstant*                   Material;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateShadowParameters
struct ABP_FastStylizedProceduralSky_C_UpdateShadowParameters_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetTime
struct ABP_FastStylizedProceduralSky_C_SetTime_Params
{
	float                                              TargetTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TransitionDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EEasingFunc>                    TransitionFunction;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateSunParameters
struct ABP_FastStylizedProceduralSky_C_UpdateSunParameters_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateSkyLight
struct ABP_FastStylizedProceduralSky_C_UpdateSkyLight_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetPresetChangeMode
struct ABP_FastStylizedProceduralSky_C_SetPresetChangeMode_Params
{
	TEnumAsByte<PresetSelection_EPresetSelection>      Mode;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChangeAfterTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EEasingFunc>                    Transition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetPresetExternal
struct ABP_FastStylizedProceduralSky_C_SetPresetExternal_Params
{
	class UClass*                                      Preset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TransitionDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.LerpWeatherPreset
struct ABP_FastStylizedProceduralSky_C_LerpWeatherPreset_Params
{
	struct FWeatherData                                A;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FWeatherData                                B;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeatherData                                StructOut;                                                 // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateExternalActors
struct ABP_FastStylizedProceduralSky_C_UpdateExternalActors_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SampleCurveBySunHeight
struct ABP_FastStylizedProceduralSky_C_SampleCurveBySunHeight_Params
{
	class UCurveLinearColor*                           Curve;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Default;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateNightParameters
struct ABP_FastStylizedProceduralSky_C_UpdateNightParameters_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateWeatherPreset
struct ABP_FastStylizedProceduralSky_C_UpdateWeatherPreset_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetPresetByIndex
struct ABP_FastStylizedProceduralSky_C_SetPresetByIndex_Params
{
	int                                                Preset_Index;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TransitionDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateLayersParameters
struct ABP_FastStylizedProceduralSky_C_UpdateLayersParameters_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateCloudsParameters
struct ABP_FastStylizedProceduralSky_C_UpdateCloudsParameters_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateHorizonParameters
struct ABP_FastStylizedProceduralSky_C_UpdateHorizonParameters_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.ChangeWeather
struct ABP_FastStylizedProceduralSky_C_ChangeWeather_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateDateTime
struct ABP_FastStylizedProceduralSky_C_UpdateDateTime_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateCurves
struct ABP_FastStylizedProceduralSky_C_UpdateCurves_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateSkyParameters
struct ABP_FastStylizedProceduralSky_C_UpdateSkyParameters_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UserConstructionScript
struct ABP_FastStylizedProceduralSky_C_UserConstructionScript_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.LightningTimeline__FinishedFunc
struct ABP_FastStylizedProceduralSky_C_LightningTimeline__FinishedFunc_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.LightningTimeline__UpdateFunc
struct ABP_FastStylizedProceduralSky_C_LightningTimeline__UpdateFunc_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.ReceiveTick
struct ABP_FastStylizedProceduralSky_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.RecaptureSky
struct ABP_FastStylizedProceduralSky_C_RecaptureSky_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.ReceiveBeginPlay
struct ABP_FastStylizedProceduralSky_C_ReceiveBeginPlay_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetTimeOfDay
struct ABP_FastStylizedProceduralSky_C_SetTimeOfDay_Params
{
	float                                              TimeOfDay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.PlayLightning
struct ABP_FastStylizedProceduralSky_C_PlayLightning_Params
{
	class UClass*                                      Preset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Intensity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.PostConstructionScript
struct ABP_FastStylizedProceduralSky_C_PostConstructionScript_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.ExecuteUbergraph_BP_FastStylizedProceduralSky
struct ABP_FastStylizedProceduralSky_C_ExecuteUbergraph_BP_FastStylizedProceduralSky_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.OnLightningPlayed__DelegateSignature
struct ABP_FastStylizedProceduralSky_C_OnLightningPlayed__DelegateSignature_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.OnTimeOfDayPresetChanged__DelegateSignature
struct ABP_FastStylizedProceduralSky_C_OnTimeOfDayPresetChanged__DelegateSignature_Params
{
	class UClass*                                      Preset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TransitionDuraion;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.OnWeatherPresetChanged__DelegateSignature
struct ABP_FastStylizedProceduralSky_C_OnWeatherPresetChanged__DelegateSignature_Params
{
	class UClass*                                      Preset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TransitionDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
