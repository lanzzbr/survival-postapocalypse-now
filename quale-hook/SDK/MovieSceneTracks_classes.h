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

// Class MovieSceneTracks.MovieScene3DConstraintSection
// 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	struct FGuid                                       ConstraintId;                                              // 0x0110(0x0010) (IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(184);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DAttachSection
// 0x0020 (FullSize[0x0140] - InheritedSize[0x0120])
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	struct FName                                       AttachSocketName;                                          // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachComponentName;                                       // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAttachmentRule                             AttachmentLocationRule;                                    // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAttachmentRule                             AttachmentRotationRule;                                    // 0x0131(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAttachmentRule                             AttachmentScaleRule;                                       // 0x0132(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EDetachmentRule                             DetachmentLocationRule;                                    // 0x0133(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EDetachmentRule                             DetachmentRotationRule;                                    // 0x0134(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EDetachmentRule                             DetachmentScaleRule;                                       // 0x0135(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R15A[0xA];                                     // 0x0136(0x000A) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(185);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  ConstraintSections;                                        // 0x00B8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HFHI[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(186);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DAttachTrack
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(187);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DPathSection
// 0x0080 (FullSize[0x01A0] - InheritedSize[0x0120])
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	struct FRichCurve                                  TimingCurve;                                               // 0x0120(0x0070) (Edit, NativeAccessSpecifierPrivate)
	MovieSceneTracks_EMovieScene3DPathSection_Axis     FrontAxisEnum;                                             // 0x0190(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	MovieSceneTracks_EMovieScene3DPathSection_Axis     UpAxisEnum;                                                // 0x0191(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3VN8[0x2];                                     // 0x0192(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bFollow : 1;                                               // 0x0194(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bReverse : 1;                                              // 0x0194(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bForceUpright : 1;                                         // 0x0194(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6S1S[0xB];                                     // 0x0195(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(188);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DPathTrack
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(189);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DTransformSection
// 0x0470 (FullSize[0x0580] - InheritedSize[0x0110])
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_LZH0[0x8];                                     // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneTransformMask                    TransformMask;                                             // 0x0118(0x0004) (NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PRH9[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  Translation[0x3];                                          // 0x0120(0x0150) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  Rotation[0x3];                                             // 0x0270(0x0150) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  Scale[0x3];                                                // 0x03C0(0x0150) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  ManualWeight;                                              // 0x0510(0x0070) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(190);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScenePropertyTrack
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
public:
	struct FName                                       PropertyName;                                              // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     PropertyPath;                                              // 0x00C0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x00D0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(191);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(192);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
// 0x00A0 (FullSize[0x01B0] - InheritedSize[0x0110])
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_S9D4[0x8];                                     // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntegralCurve                              ActorGuidIndexCurve;                                       // 0x0118(0x0070) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_W7PD[0x10];                                    // 0x0188(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             ActorGuidStrings;                                          // 0x0198(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8G6J[0x8];                                     // 0x01A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(193);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(194);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneAudioSection
// 0x0140 (FullSize[0x0250] - InheritedSize[0x0110])
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	class USoundBase*                                  Sound;                                                     // 0x0110(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              StartOffset;                                               // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AudioStartTime;                                            // 0x011C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AudioDilationFactor;                                       // 0x0120(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AudioVolume;                                               // 0x0124(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRichCurve                                  SoundVolume;                                               // 0x0128(0x0070) (Edit, NativeAccessSpecifierPrivate)
	struct FRichCurve                                  PitchMultiplier;                                           // 0x0198(0x0070) (Edit, NativeAccessSpecifierPrivate)
	bool                                               bSuppressSubtitles;                                        // 0x0208(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bOverrideAttenuation;                                      // 0x0209(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_654N[0x6];                                     // 0x020A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundAttenuation*                           AttenuationSettings;                                       // 0x0210(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             OnQueueSubtitles;                                          // 0x0218(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnAudioFinished;                                           // 0x0228(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnAudioPlaybackPercent;                                    // 0x0238(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YHXR[0x8];                                     // 0x0248(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(195);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneAudioTrack
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  AudioSections;                                             // 0x00B8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZI7I[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(196);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneBoolSection
// 0x0080 (FullSize[0x0190] - InheritedSize[0x0110])
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_9ZBP[0x8];                                     // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               DefaultValue;                                              // 0x0118(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5M4I[0x7];                                     // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntegralCurve                              BoolCurve;                                                 // 0x0120(0x0070) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(197);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneBoolTrack
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(198);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneByteSection
// 0x0080 (FullSize[0x0190] - InheritedSize[0x0110])
class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_DH9M[0x8];                                     // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntegralCurve                              ByteCurve;                                                 // 0x0118(0x0070) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WNDS[0x8];                                     // 0x0188(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(199);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneByteTrack
// 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                       Enum;                                                      // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CEB1[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(200);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneCameraAnimSection
// 0x0040 (FullSize[0x0150] - InheritedSize[0x0110])
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraAnimSectionData            AnimData;                                                  // 0x0110(0x0020) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UCameraAnim*                                 CameraAnim;                                                // 0x0130(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PlayRate;                                                  // 0x0138(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PlayScale;                                                 // 0x013C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              BlendInTime;                                               // 0x0140(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              BlendOutTime;                                              // 0x0144(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bLooping;                                                  // 0x0148(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3D6N[0x7];                                     // 0x0149(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(201);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  CameraAnimSections;                                        // 0x00B8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TMM6[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(202);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
class UMovieSceneCameraCutSection : public UMovieSceneSection
{
public:
	struct FGuid                                       CameraGuid;                                                // 0x0110(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(203);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x00B8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_A74J[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(204);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneCameraShakeSection
// 0x0040 (FullSize[0x0150] - InheritedSize[0x0110])
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData           ShakeData;                                                 // 0x0110(0x0020) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      ShakeClass;                                                // 0x0130(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayScale;                                                 // 0x0138(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECameraAnimPlaySpace>           PlaySpace;                                                 // 0x013C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EFPV[0x3];                                     // 0x013D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    UserDefinedPlaySpace;                                      // 0x0140(0x000C) (Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HFO6[0x4];                                     // 0x014C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(205);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  CameraShakeSections;                                       // 0x00B8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_97IF[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(206);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSubSection
// 0x0068 (FullSize[0x0178] - InheritedSize[0x0110])
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSectionParameters                Parameters;                                                // 0x0110(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              StartOffset;                                               // 0x0124(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              TimeScale;                                                 // 0x0128(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PrerollTime;                                               // 0x012C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieSceneSequence*                         SubSequence;                                               // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TLazyObjectPtr<class AActor>                       ActorToRecord;                                             // 0x0138(0x001C) (Edit, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BP7H[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TargetSequenceName;                                        // 0x0158(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDirectoryPath                              TargetPathToRecordTo;                                      // 0x0168(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(207);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
// 0x0018 (FullSize[0x0190] - InheritedSize[0x0178])
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
public:
	struct FText                                       DisplayName;                                               // 0x0178(0x0018) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(208);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSubTrack
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x00B8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6K4U[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(209);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(210);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneColorSection
// 0x01D0 (FullSize[0x02E0] - InheritedSize[0x0110])
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_J4LE[0x8];                                     // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  RedCurve;                                                  // 0x0118(0x0070) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  GreenCurve;                                                // 0x0188(0x0070) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  BlueCurve;                                                 // 0x01F8(0x0070) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  AlphaCurve;                                                // 0x0268(0x0070) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UJGH[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(211);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneColorTrack
// 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:
	bool                                               bIsSlateColor;                                             // 0x00E0(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7UAK[0xF];                                     // 0x00E1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(212);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEnumSection
// 0x0080 (FullSize[0x0190] - InheritedSize[0x0110])
class UMovieSceneEnumSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_1YJB[0x8];                                     // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntegralCurve                              EnumCurve;                                                 // 0x0118(0x0070) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OHS3[0x8];                                     // 0x0188(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(213);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEnumTrack
// 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                       Enum;                                                      // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0G6D[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(214);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEventSection
// 0x0110 (FullSize[0x0220] - InheritedSize[0x0110])
class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	struct FNameCurve                                  Events;                                                    // 0x0110(0x0068) (Deprecated, NativeAccessSpecifierPrivate)
	struct FMovieSceneEventSectionData                 EventData;                                                 // 0x0178(0x0020) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_A896[0x88];                                    // 0x0198(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(215);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEventTrack
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData_0Z6L[0x8];                                     // 0x00B8(0x0008) Fix Super Size
	TArray<struct FMovieSceneObjectBindingID>          EventReceivers;                                            // 0x00C0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x00D0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(216);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneFloatSection
// 0x0078 (FullSize[0x0188] - InheritedSize[0x0110])
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_6PPF[0x8];                                     // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  FloatCurve;                                                // 0x0118(0x0070) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(217);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneFadeSection
// 0x0018 (FullSize[0x01A0] - InheritedSize[0x0188])
class UMovieSceneFadeSection : public UMovieSceneFloatSection
{
public:
	struct FLinearColor                                FadeColor;                                                 // 0x0188(0x0010) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFadeAudio : 1;                                            // 0x0198(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y9E8[0x7];                                     // 0x0199(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(218);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneFloatTrack
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(219);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneFadeTrack
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(220);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneIntegerSection
// 0x0080 (FullSize[0x0190] - InheritedSize[0x0110])
class UMovieSceneIntegerSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_TUL3[0x8];                                     // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntegralCurve                              IntegerCurve;                                              // 0x0118(0x0070) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2RF0[0x8];                                     // 0x0188(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(221);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneIntegerTrack
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(222);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// 0x0020 (FullSize[0x0130] - InheritedSize[0x0110])
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
public:
	MovieSceneTracks_ELevelVisibility                  Visibility;                                                // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P5VL[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               LevelNames;                                                // 0x0118(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LCD2[0x8];                                     // 0x0128(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(223);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x00B8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YUCX[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(224);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneMaterialTrack
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x00B8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(225);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
public:
	class UMaterialParameterCollection*                MPC;                                                       // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(226);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	unsigned char                                      UnknownData_F4QD[0x8];                                     // 0x00C8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(227);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneParameterSection
// 0x0030 (FullSize[0x0140] - InheritedSize[0x0110])
class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
	TArray<struct FScalarParameterNameAndCurve>        ScalarParameterNamesAndCurves;                             // 0x0110(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FVectorParameterNameAndCurves>       VectorParameterNamesAndCurves;                             // 0x0120(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FColorParameterNameAndCurves>        ColorParameterNamesAndCurves;                              // 0x0130(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(228);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x00B8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_D68D[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(229);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneParticleSection
// 0x0070 (FullSize[0x0180] - InheritedSize[0x0110])
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	struct FIntegralCurve                              ParticleKeys;                                              // 0x0110(0x0070) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(230);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneParticleTrack
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  ParticleSections;                                          // 0x00B8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8ZN3[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(231);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// 0x00C0 (FullSize[0x01D0] - InheritedSize[0x0110])
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSkeletalAnimationParams          Params;                                                    // 0x0110(0x0090) (Edit, NativeAccessSpecifierPublic)
	class UAnimSequence*                               AnimSequence;                                              // 0x01A0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimSequenceBase*                           Animation;                                                 // 0x01A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              StartOffset;                                               // 0x01B0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              EndOffset;                                                 // 0x01B4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PlayRate;                                                  // 0x01B8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bReverse : 1;                                              // 0x01BC(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2Y5S[0x3];                                     // 0x01BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SlotName;                                                  // 0x01C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NZK1[0x8];                                     // 0x01C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(232);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  AnimationSections;                                         // 0x00B8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                               bUseLegacySectionIndexBlend;                               // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TGWC[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(233);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSlomoSection
// 0x0008 (FullSize[0x0190] - InheritedSize[0x0188])
class UMovieSceneSlomoSection : public UMovieSceneFloatSection
{
public:
	unsigned char                                      UnknownData_06VV[0x8];                                     // 0x0188(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(234);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSlomoTrack
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(235);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSpawnSection
// 0x0000 (FullSize[0x0190] - InheritedSize[0x0190])
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(236);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSpawnTrack
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x00B8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FGuid                                       ObjectGuid;                                                // 0x00C8(0x0010) (IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UB24[0x8];                                     // 0x00D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(237);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneStringSection
// 0x0080 (FullSize[0x0190] - InheritedSize[0x0110])
class UMovieSceneStringSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_SIC6[0x8];                                     // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStringCurve                                StringCurve;                                               // 0x0118(0x0078) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(238);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneStringTrack
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(239);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneTransformTrack
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(240);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneVectorSection
// 0x01D0 (FullSize[0x02E0] - InheritedSize[0x0110])
class UMovieSceneVectorSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_Q7EH[0x8];                                     // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  Curves[0x4];                                               // 0x0118(0x01C0) (NativeAccessSpecifierPrivate)
	int                                                ChannelsUsed;                                              // 0x02D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EZWO[0x4];                                     // 0x02DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(241);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneVectorTrack
// 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
public:
	int                                                NumChannelsUsed;                                           // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PBLG[0xC];                                     // 0x00E4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(242);
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneVisibilityTrack
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(243);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
