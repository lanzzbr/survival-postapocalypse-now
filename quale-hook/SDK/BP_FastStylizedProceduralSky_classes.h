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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C
// 0x063B (FullSize[0x09A3] - InheritedSize[0x0368])
class ABP_FastStylizedProceduralSky_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0368(0x0008) (Transient, DuplicateTransient)
	class UDirectionalLightComponent*                  Moon_Comp;                                                 // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*                  Sun_Comp;                                                  // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Dummy;                                                     // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SkyMesh;                                                   // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             LightningTimeline__Direction_F96B14EF4E637E770014A3B52D13E35A; // 0x0398(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QMDA[0x7];                                     // 0x0399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          LightningTimeline;                                         // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeOfDay;                                                 // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              TimeChangeSpeed;                                           // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeCycleDuration;                                         // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseTimeOfDayCurves;                                        // 0x03B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1HA9[0x3];                                     // 0x03B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimeOfDayCurves                            TimeOfDayCurves;                                           // 0x03B8(0x0050) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class UClass*>                              WeatherPresetList;                                         // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SelectedWeatherPreset;                                     // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReloadSelectedWeather;                                     // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<PresetSelection_EPresetSelection>      WeatherChangeMode;                                         // 0x041D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GMRL[0x2];                                     // 0x041E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WeatherChangeDuration;                                     // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EEasingFunc>                    WeatherChangeTransition;                                   // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BQ7U[0x3];                                     // 0x0425(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WeatherChangeAfterTime;                                    // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimeOfDayData                              TimeOfDaySettings;                                         // 0x042C(0x00A4) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class UClass*>                              TimeOfDayPresetList;                                       // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FPresetChangeInfo                           TimeOfDayPresetChange;                                     // 0x04E0(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FRotator                                    MoonDirection;                                             // 0x04F8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              SunHeight;                                                 // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeatherData                                WeatherSettings;                                           // 0x0508(0x0064) (Edit, BlueprintVisible, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WK0C[0x4];                                     // 0x056C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    SkyMaterialInst;                                           // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      WeatherPresetTarget;                                       // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeatherPresetInterp;                                       // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AV0H[0x4];                                     // 0x0584(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceConstant*                   SkydomeMaterial;                                           // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                           SunLightSource_Weapons;                                    // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                           MoonLightSource_Weapons;                                   // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExponentialHeightFog*                       HeightFog;                                                 // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkyLight*                                   SkyLight;                                                  // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SkyLightRecaptureDelay;                                    // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ICD9[0x4];                                     // 0x05B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTextureCube*>                        SkyLightStaticCubemaps;                                    // 0x05B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               SkyLightCubemapsTimeDriven;                                // 0x05C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AOD3[0x3];                                     // 0x05C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Saturation;                                                // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudsBloom;                                               // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudsFluffy;                                              // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UVHorizon;                                                 // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UVRoundness;                                               // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UVScale;                                                   // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FogDirectionalInScattering;                                // 0x05E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                UVBaseLayerPosition;                                       // 0x05E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                UVBaseLayerSize;                                           // 0x05F8(0x0010) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                UVSecondLayerSize;                                         // 0x0608(0x0010) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                UVSecondLayerPosition;                                     // 0x0618(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                                    CloudsLayer1;                                              // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                                    CloudsLayer2;                                              // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HorizonTilt;                                               // 0x0638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   WindForce;                                                 // 0x063C(0x0008) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SunRadius;                                                 // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SunShine;                                                  // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SunSaturation;                                             // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SunMaxAltitude;                                            // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SunAzimuth;                                                // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SunVisibleDuration;                                        // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SunDirectionTimeOfDay;                                     // 0x065C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TZRO[0x3];                                     // 0x065D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    SunDirection;                                              // 0x0660(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                              StarsBrightness;                                           // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoonBightness;                                             // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoonRadius;                                                // 0x0674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoonClouds;                                                // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoonShine;                                                 // 0x067C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoonRoll;                                                  // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoonVisibleDuration;                                       // 0x0684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MoonSyncedToSun;                                           // 0x0688(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SDHH[0x3];                                     // 0x0689(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    MoonRotation;                                              // 0x068C(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FWeatherData                                WeatherFrom;                                               // 0x0698(0x0064) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FWeatherData                                WeatherTo;                                                 // 0x06FC(0x0064) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FRotator                                    MoonChangeSpeed;                                           // 0x0760(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                              WorldRotation;                                             // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WorldRotationSpeed;                                        // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_V52Y[0x4];                                     // 0x0774(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture*                                    WorldLayerTexture;                                         // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WorldLayerFog;                                             // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WorldLayerDepth;                                           // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                WorldLayerColor;                                           // 0x0788(0x0010) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SkyLightRecaptureTime;                                     // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeOfDayFrom;                                             // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeOfDayTo;                                               // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeOfDayTransitionDuration;                               // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EEasingFunc>                    TimeOfDayTransition;                                       // 0x07A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N3W6[0x3];                                     // 0x07A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeOfDayInterp;                                           // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceConstant*                   GroundShadowMaterial;                                      // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GroundShadowScale;                                         // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GroundShadowSoft;                                          // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    GroundShadowMaterialInst;                                  // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SceneCapture_C*                          CapureCubemapActor;                                        // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CaptureMode;                                               // 0x07D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D3SK[0x3];                                     // 0x07D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CaptureCubemapCount;                                       // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CaptureCubemapIndex;                                       // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CaptureTimeDebug;                                          // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CaptureModeActive;                                         // 0x07E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DLZF[0x3];                                     // 0x07E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CaptureSavedTimeOfDay;                                     // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    CaptureSavesSunDirection;                                  // 0x07E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UseWorldSpaceRotation;                                     // 0x07F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_555O[0x3];                                     // 0x07F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SeletedWeatherPreset;                                      // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                version;                                                   // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimeOfDayData                              TimeOfDayDataFrom;                                         // 0x0800(0x00A4) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTimeOfDayData                              TimeOfDayDataTo;                                           // 0x08A4(0x00A4) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              TimeOfDayPresetInterp;                                     // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5K8Q[0x4];                                     // 0x094C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      TimeOfDayPresetTarget;                                     // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      LightningEpicenter;                                        // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LightningIterations;                                       // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SkyLightIntensity;                                         // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SkyLightLightning;                                         // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DaysPassedBy;                                              // 0x096C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnWeatherPresetChanged;                                    // 0x0970(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnTimeOfDayPresetChanged;                                  // 0x0980(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnLightningPlayed;                                         // 0x0990(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               OptimizeTwoLights;                                         // 0x09A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DevelopMovie;                                              // 0x09A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NightFastSpeed;                                            // 0x09A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(40312);
		return ptr;
	}



	void STATIC_CheckOptimizationLights();
	void STATIC_SelectCustomWeather();
	void STATIC_TimeOfDayPresetChanged();
	void STATIC_WetherPresetChanged();
	void STATIC_UpdateCaptureMode();
	void STATIC_SetTimeOfDayExternal(class UClass* Preset, float TransitionDuration);
	void STATIC_UpdateLightning(class UClass* Preset, class UCurveFloat* Scale, float Intensity);
	void STATIC_SetLightning(class UClass* Preset, class UCurveFloat* Scale, int Iterations);
	void STATIC_SetTimeCycleDuration(float RealTimeMinutes);
	void STATIC_ChangeTimeOfDay();
	void STATIC_SetTimeOfDayChangeMode(TEnumAsByte<PresetSelection_EPresetSelection> Mode, float ChangeAfterTime, TEnumAsByte<Engine_EEasingFunc> Transition);
	void STATIC_SetTimeOfDayByIndex(int Preset_Index, float TransitionDuration);
	void STATIC_LerpTimeOfDayPreset(const struct FTimeOfDayData& From, const struct FTimeOfDayData& To, float Alpha, struct FTimeOfDayData* StructOut);
	void STATIC_UpdateTimeOfDayPreset(float DeltaTime);
	void STATIC_Versioning();
	void STATIC_SetSkylightCaptueMode();
	void STATIC_GetPrecomputedSkyLight(float Time, class UTextureCube** From, class UTextureCube** To, float* Alpha);
	void STATIC_UpdateMoon(float DeltaTime);
	void STATIC_SetShadowFunction(class UMaterialInstanceConstant* Material);
	void STATIC_UpdateShadowParameters();
	void STATIC_SetTime(float TargetTime, float TransitionDuration, TEnumAsByte<Engine_EEasingFunc> TransitionFunction);
	void STATIC_UpdateSunParameters();
	void STATIC_UpdateSkyLight();
	void STATIC_SetPresetChangeMode(TEnumAsByte<PresetSelection_EPresetSelection> Mode, float ChangeAfterTime, TEnumAsByte<Engine_EEasingFunc> Transition);
	void STATIC_SetPresetExternal(class UClass* Preset, float TransitionDuration);
	void STATIC_LerpWeatherPreset(const struct FWeatherData& A, const struct FWeatherData& B, float Alpha, struct FWeatherData* StructOut);
	void STATIC_UpdateExternalActors();
	void STATIC_SampleCurveBySunHeight(class UCurveLinearColor* Curve, const struct FLinearColor& Default, struct FLinearColor* Color);
	void STATIC_UpdateNightParameters();
	void STATIC_UpdateWeatherPreset(float DeltaTime);
	void STATIC_SetPresetByIndex(int Preset_Index, float TransitionDuration);
	void STATIC_UpdateLayersParameters(float DeltaTime);
	void STATIC_UpdateCloudsParameters();
	void STATIC_UpdateHorizonParameters();
	void STATIC_ChangeWeather();
	void STATIC_UpdateDateTime(float DeltaTime);
	void STATIC_UpdateCurves();
	void STATIC_UpdateSkyParameters(float DeltaTime);
	void STATIC_UserConstructionScript();
	void STATIC_LightningTimeline__FinishedFunc();
	void STATIC_LightningTimeline__UpdateFunc();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_RecaptureSky();
	void STATIC_ReceiveBeginPlay();
	void STATIC_SetTimeOfDay(float TimeOfDay);
	void STATIC_PlayLightning(class UClass* Preset, class UCurveFloat* Scale, float Delay, float Intensity);
	void STATIC_PostConstructionScript();
	void STATIC_ExecuteUbergraph_BP_FastStylizedProceduralSky(int EntryPoint);
	void STATIC_OnLightningPlayed__DelegateSignature();
	void STATIC_OnTimeOfDayPresetChanged__DelegateSignature(class UClass* Preset, float TransitionDuraion);
	void STATIC_OnWeatherPresetChanged__DelegateSignature(class UClass* Preset, float TransitionDuration);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
