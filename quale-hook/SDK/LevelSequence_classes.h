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

// Class LevelSequence.LevelSequence
// 0x0100 (FullSize[0x0430] - InheritedSize[0x0330])
class ULevelSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                                // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequenceObjectReferenceMap            ObjectReferences;                                          // 0x0338(0x0050) (Protected, NativeAccessSpecifierProtected)
	struct FLevelSequenceBindingReferences             BindingReferences;                                         // 0x0388(0x0050) (Protected, NativeAccessSpecifierProtected)
	TMap<struct FString, struct FLevelSequenceObject>  PossessedObjects;                                          // 0x03D8(0x0050) (ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4WHQ[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(578);
		return ptr;
	}



};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULevelSequenceBurnInInitSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(579);
		return ptr;
	}



};

// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                               bUseBurnIn;                                                // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PAIV[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftClassPath                              BurnInClass;                                               // 0x0030(0x0018) (Edit, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnInInitSettings*            Settings;                                                  // 0x0048(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(580);
		return ptr;
	}



};

// Class LevelSequence.LevelSequenceActor
// 0x0080 (FullSize[0x03E8] - InheritedSize[0x0368])
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData_55T0[0x8];                                     // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bAutoPlay;                                                 // 0x0370(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LOME[0x7];                                     // 0x0371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                          // 0x0378(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class ULevelSequencePlayer*                        SequencePlayer;                                            // 0x03A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             LevelSequence;                                             // 0x03A8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              AdditionalEventReceivers;                                  // 0x03C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                             // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                          // 0x03D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnIn*                        BurnInInstance;                                            // 0x03E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(581);
		return ptr;
	}



	void STATIC_SetSequence(class ULevelSequence* InSequence);
	void STATIC_SetEventReceivers(TArray<class AActor*> AdditionalReceivers);
	void STATIC_SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
	void STATIC_ResetBindings();
	void STATIC_ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
	void STATIC_RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
	class ULevelSequence* GetSequence(bool bLoad, bool bInitializePlayer);
	void STATIC_AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};

// Class LevelSequence.LevelSequenceBurnIn
// 0x0060 (FullSize[0x0260] - InheritedSize[0x0200])
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot                FrameInformation;                                          // 0x0200(0x0058) (BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                         LevelSequenceActor;                                        // 0x0258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(582);
		return ptr;
	}



	void STATIC_SetSettings(class UObject* InSettings);
	class UClass* GetSettingsClass();
};

// Class LevelSequence.LevelSequencePlayer
// 0x00A0 (FullSize[0x0890] - InheritedSize[0x07F0])
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	struct FScriptMulticastDelegate                    OnCameraCut;                                               // 0x07F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HUWP[0x30];                                    // 0x0800(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UObject*>                             AdditionalEventReceivers;                                  // 0x0830(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BRKP[0x50];                                    // 0x0840(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(583);
		return ptr;
	}



	class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
