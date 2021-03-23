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

// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
struct UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*               PresetChain;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EntryIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBypassed;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
struct UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*               PresetChain;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EntryIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
struct UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSubmixPreset*                    SubmixEffectPreset;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
struct UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*               PresetChain;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
struct UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
struct UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*               PresetChain;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSourceEffectChainEntry                     Entry;                                                     // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
struct UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSubmixPreset*                    SubmixEffectPreset;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
struct USubmixEffectDynamicsProcessorPreset_SetSettings_Params
{
	struct FSubmixEffectDynamicsProcessorSettings      InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
struct USubmixEffectSubmixEQPreset_SetSettings_Params
{
	struct FSubmixEffectSubmixEQSettings               InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
struct USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params
{
	class UReverbEffect*                               InReverbEffect;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WetLevel;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
struct USubmixEffectReverbPreset_SetSettings_Params
{
	struct FSubmixEffectReverbSettings                 InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SynthComponent.Stop
struct USynthComponent_Stop_Params
{
};

// Function AudioMixer.SynthComponent.Start
struct USynthComponent_Start_Params
{
};

// Function AudioMixer.SynthComponent.SetSubmixSend
struct USynthComponent_SetSubmixSend_Params
{
	class USoundSubmix*                                Submix;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SendLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SynthComponent.IsPlaying
struct USynthComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
