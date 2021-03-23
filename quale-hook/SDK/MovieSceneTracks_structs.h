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
// Enums
//---------------------------------------------------------------------------

// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class MovieSceneTracks_EMovieScene3DPathSection_Axis : uint8_t
{
	MovieScene3DPathSection_Axis__X = 0,
	MovieScene3DPathSection_Axis__Y = 1,
	MovieScene3DPathSection_Axis__Z = 2,
	MovieScene3DPathSection_Axis__NEG_X = 3,
	MovieScene3DPathSection_Axis__NEG_Y = 4,
	MovieScene3DPathSection_Axis__NEG_Z = 5,
	MovieScene3DPathSection_Axis__MovieScene3DPathSection_MAX = 6,

};

// Enum MovieSceneTracks.EFireEventsAtPosition
enum class MovieSceneTracks_EFireEventsAtPosition : uint8_t
{
	EFireEventsAtPosition__AtStartOfEvaluation = 0,
	EFireEventsAtPosition__AtEndOfEvaluation = 1,
	EFireEventsAtPosition__AfterSpawn = 2,
	EFireEventsAtPosition__EFireEventsAtPosition_MAX = 3,

};

// Enum MovieSceneTracks.ELevelVisibility
enum class MovieSceneTracks_ELevelVisibility : uint8_t
{
	ELevelVisibility__Visible      = 0,
	ELevelVisibility__Hidden       = 1,
	ELevelVisibility__ELevelVisibility_MAX = 2,

};

// Enum MovieSceneTracks.EParticleKey
enum class MovieSceneTracks_EParticleKey : uint8_t
{
	EParticleKey__Activate         = 0,
	EParticleKey__Deactivate       = 1,
	EParticleKey__Trigger          = 2,
	EParticleKey__EParticleKey_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
// 0x0004
struct FMovieSceneTransformMask
{
	uint32_t                                           Mask;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// 0x0070 (0x0078 - 0x0008)
struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector                                     Location;                                                  // 0x0008(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0014(0x000C) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // 0x0020(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8D0P[0x48];                                    // 0x0030(0x0048) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector                                     Scale;                                                     // 0x0008(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7NSK[0x18];                                    // 0x0018(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
	struct FRotator                                    Rotation;                                                  // 0x0008(0x000C) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JO0B[0x18];                                    // 0x0018(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector                                     Location;                                                  // 0x0008(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B547[0x18];                                    // 0x0018(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformTemplateData
// 0x0468
struct FMovieScene3DTransformTemplateData
{
	struct FRichCurve                                  TranslationCurve[0x3];                                     // 0x0000(0x0150) (NativeAccessSpecifierPublic)
	struct FRichCurve                                  RotationCurve[0x3];                                        // 0x0150(0x0150) (NativeAccessSpecifierPublic)
	struct FRichCurve                                  ScaleCurve[0x3];                                           // 0x02A0(0x0150) (NativeAccessSpecifierPublic)
	struct FRichCurve                                  ManualWeight;                                              // 0x03F0(0x0070) (NativeAccessSpecifierPublic)
	MovieScene_EMovieSceneBlendType                    BlendType;                                                 // 0x0460(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SNY2[0x3];                                     // 0x0461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneTransformMask                    Mask;                                                      // 0x0464(0x0004) (NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
// 0x0468 (0x0488 - 0x0020)
struct FMovieSceneComponentTransformSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScene3DTransformTemplateData          TemplateData;                                              // 0x0020(0x0468) (NativeAccessSpecifierPublic)

};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// 0x00A8 (0x00C8 - 0x0020)
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                              // 0x0020(0x0028) (NativeAccessSpecifierPrivate)
	struct FIntegralCurve                              ActorGuidIndexCurve;                                       // 0x0048(0x0070) (NativeAccessSpecifierPrivate)
	TArray<struct FGuid>                               ActorGuids;                                                // 0x00B8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplateData
// 0x0140
struct FMovieSceneAudioSectionTemplateData
{
	class USoundBase*                                  Sound;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AudioStartOffset;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                                 AudioRange;                                                // 0x000C(0x0010) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SOY2[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  AudioPitchMultiplierCurve;                                 // 0x0020(0x0070) (NativeAccessSpecifierPublic)
	struct FRichCurve                                  AudioVolumeCurve;                                          // 0x0090(0x0070) (NativeAccessSpecifierPublic)
	int                                                RowIndex;                                                  // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideAttenuation;                                      // 0x0104(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B675[0x3];                                     // 0x0105(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundAttenuation*                           AttenuationSettings;                                       // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnQueueSubtitles;                                          // 0x0110(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAudioFinished;                                           // 0x0120(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAudioPlaybackPercent;                                    // 0x0130(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// 0x0140 (0x0160 - 0x0020)
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneAudioSectionTemplateData         AudioData;                                                 // 0x0020(0x0140) (ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// 0x0020
struct FMovieSceneCameraAnimSectionData
{
	class UCameraAnim*                                 CameraAnim;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayScale;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendInTime;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendOutTime;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLooping;                                                  // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BX8J[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTrackTemplate
// 0x0000 (0x0020 - 0x0020)
struct FMovieSceneAdditiveCameraAnimationTrackTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
// 0x0000 (0x0020 - 0x0020)
struct FMovieSceneAdditiveCameraAnimationTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// 0x0020
struct FMovieSceneCameraShakeSectionData
{
	class UClass*                                      ShakeClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayScale;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECameraAnimPlaySpace>           PlaySpace;                                                 // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_59IW[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    UserDefinedPlaySpace;                                      // 0x0010(0x000C) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MXGY[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// 0x0028 (0x0048 - 0x0020)
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
	struct FMovieSceneCameraShakeSectionData           SourceData;                                                // 0x0020(0x0020) (NoDestructor, NativeAccessSpecifierPrivate)
	float                                              SectionStartTime;                                          // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_H388[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// 0x0028 (0x0048 - 0x0020)
struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
	struct FMovieSceneCameraAnimSectionData            SourceData;                                                // 0x0020(0x0020) (NoDestructor, NativeAccessSpecifierPrivate)
	float                                              SectionStartTime;                                          // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XOKV[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
// 0x0050 (0x0070 - 0x0020)
struct FMovieSceneCameraCutSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FGuid                                       CameraGuid;                                                // 0x0020(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  CutTransform;                                              // 0x0030(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bHasCutTransform;                                          // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9NYK[0xF];                                     // 0x0061(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// 0x0058 (0x0060 - 0x0008)
struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
	struct FLinearColor                                Color;                                                     // 0x0008(0x0010) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BSUO[0x44];                                    // 0x001C(0x0044) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// 0x01C8 (0x0210 - 0x0048)
struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FRichCurve                                  Curves[0x4];                                               // 0x0048(0x01C0) (NativeAccessSpecifierPublic)
	MovieScene_EMovieSceneBlendType                    BlendType;                                                 // 0x0208(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6DLN[0x7];                                     // 0x0209(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// 0x0028
struct FMovieSceneEventParameters
{
	unsigned char                                      UnknownData_WEVW[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.EventPayload
// 0x0030
struct FEventPayload
{
	struct FName                                       EventName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneEventParameters                  Parameters;                                                // 0x0008(0x0028) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// 0x0020
struct FMovieSceneEventSectionData
{
	TArray<float>                                      KeyTimes;                                                  // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEventPayload>                       KeyValues;                                                 // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// 0x0038 (0x0058 - 0x0020)
struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneEventSectionData                 EventData;                                                 // 0x0020(0x0020) (NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneObjectBindingID>          EventReceivers;                                            // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      bFireEventsWhenForwards : 1;                               // 0x0050(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFireEventsWhenBackwards : 1;                              // 0x0050(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9M3P[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// 0x0080
struct FScalarParameterNameAndCurve
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JG0P[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  ParameterCurve;                                            // 0x0010(0x0070) (NativeAccessSpecifierPublic)

};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// 0x0160
struct FVectorParameterNameAndCurves
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RXU3[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  XCurve;                                                    // 0x0010(0x0070) (NativeAccessSpecifierPublic)
	struct FRichCurve                                  YCurve;                                                    // 0x0080(0x0070) (NativeAccessSpecifierPublic)
	struct FRichCurve                                  ZCurve;                                                    // 0x00F0(0x0070) (NativeAccessSpecifierPublic)

};

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// 0x01D0
struct FColorParameterNameAndCurves
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2YOG[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  RedCurve;                                                  // 0x0010(0x0070) (NativeAccessSpecifierPublic)
	struct FRichCurve                                  GreenCurve;                                                // 0x0080(0x0070) (NativeAccessSpecifierPublic)
	struct FRichCurve                                  BlueCurve;                                                 // 0x00F0(0x0070) (NativeAccessSpecifierPublic)
	struct FRichCurve                                  AlphaCurve;                                                // 0x0160(0x0070) (NativeAccessSpecifierPublic)

};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// 0x0090
struct FMovieSceneSkeletalAnimationParams
{
	class UAnimSequenceBase*                           Animation;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartOffset;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndOffset;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReverse : 1;                                              // 0x0014(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6S1L[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SlotName;                                                  // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRichCurve                                  Weight;                                                    // 0x0020(0x0070) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
// 0x0028 (0x0048 - 0x0020)
struct FMovieScene3DAttachSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FGuid                                       AttachGuid;                                                // 0x0020(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachSocketName;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachComponentName;                                       // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAttachmentRule                             AttachmentLocationRule;                                    // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAttachmentRule                             AttachmentRotationRule;                                    // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAttachmentRule                             AttachmentScaleRule;                                       // 0x0042(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EDetachmentRule                             DetachmentLocationRule;                                    // 0x0043(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EDetachmentRule                             DetachmentRotationRule;                                    // 0x0044(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EDetachmentRule                             DetachmentScaleRule;                                       // 0x0045(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PRAY[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// 0x0088 (0x00A8 - 0x0020)
struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FGuid                                       PathGuid;                                                  // 0x0020(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRichCurve                                  TimingCurve;                                               // 0x0030(0x0070) (NativeAccessSpecifierPublic)
	MovieSceneTracks_EMovieScene3DPathSection_Axis     FrontAxisEnum;                                             // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MovieSceneTracks_EMovieScene3DPathSection_Axis     UpAxisEnum;                                                // 0x00A1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8IZC[0x2];                                     // 0x00A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bFollow : 1;                                               // 0x00A4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReverse : 1;                                              // 0x00A4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bForceUpright : 1;                                         // 0x00A4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JRX2[0x3];                                     // 0x00A5(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// 0x0048 (0x0050 - 0x0008)
struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData_6X06[0x40];                                    // 0x0008(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Time;                                                      // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LERG[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// 0x0008 (0x0058 - 0x0050)
struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase
{
	struct FVector2D                                   Vector;                                                    // 0x0050(0x0008) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// 0x0070 (0x00B8 - 0x0048)
struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FIntegralCurve                              BoolCurve;                                                 // 0x0048(0x0070) (Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// 0x0008 (0x00C0 - 0x00B8)
struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{
	bool                                               bTemporarilyHiddenInGame;                                  // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HA17[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// 0x0088 (0x00A8 - 0x0020)
struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FRichCurve                                  FadeCurve;                                                 // 0x0020(0x0070) (NativeAccessSpecifierPrivate)
	struct FLinearColor                                FadeColor;                                                 // 0x0090(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bFadeAudio : 1;                                            // 0x00A0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YMF2[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
// 0x0018 (0x0038 - 0x0020)
struct FMovieSceneLevelVisibilitySectionTemplate : public FMovieSceneEvalTemplate
{
	MovieSceneTracks_ELevelVisibility                  Visibility;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EXPU[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               LevelNames;                                                // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// 0x0030 (0x0050 - 0x0020)
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
	TArray<struct FScalarParameterNameAndCurve>        Scalars;                                                   // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FVectorParameterNameAndCurves>       Vectors;                                                   // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FColorParameterNameAndCurves>        Colors;                                                    // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// 0x0008 (0x0058 - 0x0050)
struct FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate
{
	class UMaterialParameterCollection*                MPC;                                                       // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// 0x0008 (0x0058 - 0x0050)
struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
	int                                                MaterialIndex;                                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FNXE[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// 0x0000 (0x0050 - 0x0050)
struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// 0x0070 (0x0090 - 0x0020)
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FIntegralCurve                              ParticleKeys;                                              // 0x0020(0x0070) (NativeAccessSpecifierPublic)

};

// ScriptStruct MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
// 0x0468 (0x04B0 - 0x0048)
struct FMovieSceneTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieScene3DTransformTemplateData          TemplateData;                                              // 0x0048(0x0468) (Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
// 0x01C8 (0x0210 - 0x0048)
struct FMovieSceneVectorPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FRichCurve                                  ComponentCurves[0x4];                                      // 0x0048(0x01C0) (Protected, NativeAccessSpecifierProtected)
	int                                                NumChannelsUsed;                                           // 0x0208(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	MovieScene_EMovieSceneBlendType                    BlendType;                                                 // 0x020C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_97I5[0x3];                                     // 0x020D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// 0x0078 (0x00C0 - 0x0048)
struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FStringCurve                                StringCurve;                                               // 0x0048(0x0078) (Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
// 0x0078 (0x00C0 - 0x0048)
struct FMovieSceneIntegerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FIntegralCurve                              IntegerCurve;                                              // 0x0048(0x0070) (Protected, NativeAccessSpecifierProtected)
	MovieScene_EMovieSceneBlendType                    BlendType;                                                 // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZJ9U[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
// 0x0070 (0x00B8 - 0x0048)
struct FMovieSceneEnumPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FIntegralCurve                              EnumCurve;                                                 // 0x0048(0x0070) (Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
// 0x0070 (0x00B8 - 0x0048)
struct FMovieSceneBytePropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FIntegralCurve                              ByteCurve;                                                 // 0x0048(0x0070) (Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
// 0x0078 (0x00C0 - 0x0048)
struct FMovieSceneFloatPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FRichCurve                                  FloatCurve;                                                // 0x0048(0x0070) (Protected, NativeAccessSpecifierProtected)
	MovieScene_EMovieSceneBlendType                    BlendType;                                                 // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TEY6[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// 0x0008 (0x0098 - 0x0090)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{
	float                                              SectionStartTime;                                          // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SectionEndTime;                                            // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// 0x0098 (0x00B8 - 0x0020)
struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params;                                                    // 0x0020(0x0098) (NativeAccessSpecifierPublic)

};

// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// 0x0070 (0x0090 - 0x0020)
struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FRichCurve                                  SlomoCurve;                                                // 0x0020(0x0070) (NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
// 0x0070 (0x0090 - 0x0020)
struct FMovieSceneSpawnSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FIntegralCurve                              Curve;                                                     // 0x0020(0x0070) (Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// 0x0010 (0x0060 - 0x0050)
struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase
{
	struct FVector4                                    Vector;                                                    // 0x0050(0x0010) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// 0x0010 (0x0060 - 0x0050)
struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase
{
	struct FVector                                     Vector;                                                    // 0x0050(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_94GX[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
