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

// Function LevelSequence.LevelSequenceActor.SetSequence
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ULevelSequence*          InSequence                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceActor::STATIC_SetSequence(class ULevelSequence* InSequence)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16712);

	ALevelSequenceActor_SetSequence_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.SetEventReceivers
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<class AActor*>          AdditionalReceivers            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void ALevelSequenceActor::STATIC_SetEventReceivers(TArray<class AActor*> AdditionalReceivers)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16709);

	ALevelSequenceActor_SetEventReceivers_Params params;
	params.AdditionalReceivers = AdditionalReceivers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.SetBinding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceActor::STATIC_SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16704);

	ALevelSequenceActor_SetBinding_Params params;
	params.Binding = Binding;
	params.Actors = Actors;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.ResetBindings
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ALevelSequenceActor::STATIC_ResetBindings()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16703);

	ALevelSequenceActor_ResetBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.ResetBinding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceActor::STATIC_ResetBinding(const struct FMovieSceneObjectBindingID& Binding)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16701);

	ALevelSequenceActor_ResetBinding_Params params;
	params.Binding = Binding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.RemoveBinding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceActor::STATIC_RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16698);

	ALevelSequenceActor_RemoveBinding_Params params;
	params.Binding = Binding;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.GetSequence
// (BlueprintCosmetic)
// Parameters:
// bool                           bLoad                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInitializePlayer              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequence*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULevelSequence* ALevelSequenceActor::GetSequence(bool bLoad, bool bInitializePlayer)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16694);

	ALevelSequenceActor_GetSequence_Params params;
	params.bLoad = bLoad;
	params.bInitializePlayer = bInitializePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.AddBinding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceActor::STATIC_AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16690);

	ALevelSequenceActor_AddBinding_Params params;
	params.Binding = Binding;
	params.Actor = Actor;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceBurnIn.SetSettings
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 InSettings                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequenceBurnIn::STATIC_SetSettings(class UObject* InSettings)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16725);

	ULevelSequenceBurnIn_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
// ()
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* ULevelSequenceBurnIn::GetSettingsClass()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16723);

	ULevelSequenceBurnIn_GetSettingsClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// (Net)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovieSceneSequencePlaybackSettings Settings                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class ALevelSequenceActor*     OutActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequencePlayer*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULevelSequencePlayer* ULevelSequencePlayer::CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16729);

	ULevelSequencePlayer_CreateLevelSequencePlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelSequence = LevelSequence;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActor != nullptr)
		*OutActor = params.OutActor;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
