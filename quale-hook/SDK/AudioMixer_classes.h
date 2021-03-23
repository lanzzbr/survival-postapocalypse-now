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

// Class AudioMixer.AudioMixerBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1466);
		return ptr;
	}



	void STATIC_SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed);
	void STATIC_RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex);
	void STATIC_RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	int GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
	void STATIC_ClearMasterSubmixEffects(class UObject* WorldContextObject);
	void STATIC_AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
	void STATIC_AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// 0x0078 (FullSize[0x00B8] - InheritedSize[0x0040])
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData_V2OW[0x50];                                    // 0x0040(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSubmixEffectDynamicsProcessorSettings      Settings;                                                  // 0x0090(0x0028) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1467);
		return ptr;
	}



	void STATIC_SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& InSettings);
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x0048 (FullSize[0x0088] - InheritedSize[0x0040])
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData_L0AG[0x38];                                    // 0x0040(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSubmixEffectSubmixEQSettings               Settings;                                                  // 0x0078(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1468);
		return ptr;
	}



	void STATIC_SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);
};

// Class AudioMixer.SubmixEffectReverbPreset
// 0x0088 (FullSize[0x00C8] - InheritedSize[0x0040])
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData_OO44[0x58];                                    // 0x0040(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSubmixEffectReverbSettings                 Settings;                                                  // 0x0098(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1469);
		return ptr;
	}



	void STATIC_SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel);
	void STATIC_SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
};

// Class AudioMixer.SynthSound
// 0x0020 (FullSize[0x0340] - InheritedSize[0x0320])
class USynthSound : public USoundWaveProcedural
{
public:
	unsigned char                                      UnknownData_B9CM[0x20];                                    // 0x0320(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1470);
		return ptr;
	}



};

// Class AudioMixer.SynthComponent
// 0x0340 (FullSize[0x05D0] - InheritedSize[0x0290])
class USynthComponent : public USceneComponent
{
public:
	unsigned char                                      bAutoDestroy : 1;                                          // 0x0290(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStopWhenOwnerDestroyed : 1;                               // 0x0290(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowSpatialization : 1;                                  // 0x0290(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideAttenuation : 1;                                  // 0x0290(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C671[0x7];                                     // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundAttenuation*                           AttenuationSettings;                                       // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundAttenuationSettings                   AttenuationOverrides;                                      // 0x02A0(0x02C0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundConcurrency*                           ConcurrencySettings;                                       // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundClass*                                 SoundClass;                                                // 0x0568(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                         // 0x0570(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SoundSubmix;                                               // 0x0578(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundSubmixSendInfo>                SoundSubmixSends;                                          // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      bIsUISound : 1;                                            // 0x0590(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_69QJ[0x7];                                     // 0x0591(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USynthSound*                                 Synth;                                                     // 0x0598(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                             AudioComponent;                                            // 0x05A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3ZFF[0x28];                                    // 0x05A8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1471);
		return ptr;
	}



	void STATIC_Stop();
	void STATIC_Start();
	void STATIC_SetSubmixSend(class USoundSubmix* Submix, float SendLevel);
	bool IsPlaying();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
