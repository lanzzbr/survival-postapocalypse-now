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

// Class MovieScene.MovieSceneSignedObject
// 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
class UMovieSceneSignedObject : public UObject
{
public:
	struct FGuid                                       Signature;                                                 // 0x0028(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1BOY[0x78];                                    // 0x0038(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(158);
		return ptr;
	}



};

// Class MovieScene.MovieScene
// 0x0080 (FullSize[0x0130] - InheritedSize[0x00B0])
class UMovieScene : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>                Spawnables;                                                // 0x00B0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieScenePossessable>              Possessables;                                              // 0x00C0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneBinding>                  ObjectBindings;                                            // 0x00D0(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>                    MasterTracks;                                              // 0x00E0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UMovieSceneTrack*                            CameraCutTrack;                                            // 0x00F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFloatRange                                 SelectionRange;                                            // 0x00F8(0x0010) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFloatRange                                 PlaybackRange;                                             // 0x0108(0x0010) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bForceFixedFrameIntervalPlayback;                          // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RV4U[0x3];                                     // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FixedFrameInterval;                                        // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              InTime;                                                    // 0x0120(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              OutTime;                                                   // 0x0124(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              StartTime;                                                 // 0x0128(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              EndTime;                                                   // 0x012C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(159);
		return ptr;
	}



};

// Class MovieScene.MovieSceneBindingOverrides
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class UMovieSceneBindingOverrides : public UObject
{
public:
	unsigned char                                      UnknownData_5ODE[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMovieSceneBindingOverrideData>      BindingData;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NV5D[0x58];                                    // 0x0040(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(160);
		return ptr;
	}



};

// Class MovieScene.MovieSceneBindingOverridesInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneBindingOverridesInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(161);
		return ptr;
	}



};

// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(162);
		return ptr;
	}



};

// Class MovieScene.MovieSceneBuiltInEasingFunction
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	unsigned char                                      UnknownData_96DA[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MovieScene_EMovieSceneBuiltInEasing                Type;                                                      // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O28Y[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(163);
		return ptr;
	}



};

// Class MovieScene.MovieSceneEasingExternalCurve
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	unsigned char                                      UnknownData_MOO0[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 Curve;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(164);
		return ptr;
	}



};

// Class MovieScene.MovieSceneEasingFunction
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneEasingFunction : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(165);
		return ptr;
	}



	float OnEvaluate(float Interp);
};

// Class MovieScene.MovieSceneFolder
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UMovieSceneFolder : public UObject
{
public:
	struct FName                                       FolderName;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneFolder*>                   ChildFolders;                                              // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>                    ChildMasterTracks;                                         // 0x0040(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FString>                             ChildObjectBindingStrings;                                 // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TDSS[0x10];                                    // 0x0060(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(166);
		return ptr;
	}



};

// Class MovieScene.MovieSceneTrack
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions                 EvalOptions;                                               // 0x00B0(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WYZS[0x4];                                     // 0x00B4(0x0004) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(167);
		return ptr;
	}



};

// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(168);
		return ptr;
	}



};

// Class MovieScene.MovieSceneSection
// 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions               EvalOptions;                                               // 0x00B0(0x0002) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N7DR[0x6];                                     // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneEasingSettings                   Easing;                                                    // 0x00B8(0x0038) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              EndTime;                                                   // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                RowIndex;                                                  // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                OverlapPriority;                                           // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bIsActive : 1;                                             // 0x0100(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bIsLocked : 1;                                             // 0x0100(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bIsInfinite : 1;                                           // 0x0100(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_N2PU[0x3];                                     // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PrerollTime;                                               // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PostrollTime;                                              // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FOptionalMovieSceneBlendType                BlendType;                                                 // 0x010C(0x0002) (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YCXE[0x2];                                     // 0x010E(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(169);
		return ptr;
	}



};

// Class MovieScene.MovieSceneSegmentCompilerTestTrack
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UMovieSceneSegmentCompilerTestTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData_GBUB[0x8];                                     // 0x00B8(0x0008) Fix Super Size
	TArray<class UMovieSceneSection*>                  SectionArray;                                              // 0x00C0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(170);
		return ptr;
	}



};

// Class MovieScene.MovieSceneSegmentCompilerTestSection
// 0x0000 (FullSize[0x0110] - InheritedSize[0x0110])
class UMovieSceneSegmentCompilerTestSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(171);
		return ptr;
	}



};

// Class MovieScene.MovieSceneSequence
// 0x0280 (FullSize[0x0330] - InheritedSize[0x00B0])
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	struct FCachedMovieSceneEvaluationTemplate         EvaluationTemplate;                                        // 0x00B0(0x0220) (NativeAccessSpecifierPublic)
	struct FMovieSceneTrackCompilationParams           TemplateParameters;                                        // 0x02D0(0x0002) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G90G[0x6];                                     // 0x02D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UObject*, struct FCachedMovieSceneEvaluationTemplate> InstancedSubSequenceEvaluationTemplates;                   // 0x02D8(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bParentContextsAreSignificant;                             // 0x0328(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5XOO[0x7];                                     // 0x0329(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(172);
		return ptr;
	}



};

// Class MovieScene.MovieSceneSequencePlayer
// 0x07C8 (FullSize[0x07F0] - InheritedSize[0x0028])
class UMovieSceneSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData_RRLB[0x348];                                   // 0x0028(0x0348) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPlay;                                                    // 0x0370(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayReverse;                                             // 0x0380(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnStop;                                                    // 0x0390(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPause;                                                   // 0x03A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFinished;                                                // 0x03B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TEnumAsByte<MovieScene_EMovieScenePlayerStatus>    Status;                                                    // 0x03C0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Y7I1[0x3];                                     // 0x03C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bReversePlayback : 1;                                      // 0x03C4(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bPendingFirstUpdate : 1;                                   // 0x03C4(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UD4R[0xB];                                     // 0x03C5(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMovieSceneSequence*                         Sequence;                                                  // 0x03D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TimeCursorPosition;                                        // 0x03D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              StartTime;                                                 // 0x03DC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EndTime;                                                   // 0x03E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CurrentNumLoops;                                           // 0x03E4(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M1L2[0x10];                                    // 0x03E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                          // 0x03F8(0x0028) (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8THW[0x3D0];                                   // 0x0420(0x03D0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(173);
		return ptr;
	}



	void STATIC_Stop();
	void STATIC_StartPlayingNextTick();
	void STATIC_SetPlayRate(float PlayRate);
	void STATIC_SetPlaybackRange(float NewStartTime, float NewEndTime);
	void STATIC_SetPlaybackPosition(float NewPlaybackPosition);
	void STATIC_Scrub();
	void STATIC_PlayReverse();
	void STATIC_PlayLooping(int NumLoops);
	void STATIC_Play();
	void STATIC_Pause();
	void STATIC_JumpToPosition(float NewPlaybackPosition);
	bool IsPlaying();
	bool IsPaused();
	void STATIC_GoToEndAndStop();
	float GetPlayRate();
	float GetPlaybackStart();
	float GetPlaybackPosition();
	float GetPlaybackEnd();
	float GetLength();
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	void STATIC_ChangePlaybackDirection();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
