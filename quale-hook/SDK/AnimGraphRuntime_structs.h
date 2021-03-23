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

// Enum AnimGraphRuntime.ESphericalLimitType
enum class AnimGraphRuntime_ESphericalLimitType : uint8_t
{
	ESphericalLimitType__Inner     = 0,
	ESphericalLimitType__Outer     = 1,
	ESphericalLimitType__ESphericalLimitType_MAX = 2,

};

// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class AnimGraphRuntime_EAnimPhysSimSpaceType : uint8_t
{
	AnimPhysSimSpaceType__Component = 0,
	AnimPhysSimSpaceType__Actor    = 1,
	AnimPhysSimSpaceType__World    = 2,
	AnimPhysSimSpaceType__RootRelative = 3,
	AnimPhysSimSpaceType__BoneRelative = 4,
	AnimPhysSimSpaceType__AnimPhysSimSpaceType_MAX = 5,

};

// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class AnimGraphRuntime_EAnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free = 0,
	AnimPhysLinearConstraintType__Limited = 1,
	AnimPhysLinearConstraintType__AnimPhysLinearConstraintType_MAX = 2,

};

// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class AnimGraphRuntime_EAnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular = 0,
	AnimPhysAngularConstraintType__Cone = 1,
	AnimPhysAngularConstraintType__AnimPhysAngularConstraintType_MAX = 2,

};

// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class AnimGraphRuntime_EDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode__Bone   = 0,
	EDrivenDestinationMode__MorphTarget = 1,
	EDrivenDestinationMode__MaterialParameter = 2,
	EDrivenDestinationMode__EDrivenDestinationMode_MAX = 3,

};

// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class AnimGraphRuntime_EDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode__AddToInput = 0,
	EDrivenBoneModificationMode__ReplaceComponent = 1,
	EDrivenBoneModificationMode__AddToRefPose = 2,
	EDrivenBoneModificationMode__EDrivenBoneModificationMode_MAX = 3,

};

// Enum AnimGraphRuntime.EComponentType
enum class AnimGraphRuntime_EComponentType : uint8_t
{
	EComponentType__None           = 0,
	EComponentType__TranslationX   = 1,
	EComponentType__TranslationY   = 2,
	EComponentType__TranslationZ   = 3,
	EComponentType__RotationX      = 4,
	EComponentType__RotationY      = 5,
	EComponentType__RotationZ      = 6,
	EComponentType__Scale          = 7,
	EComponentType__ScaleX         = 8,
	EComponentType__ScaleY         = 9,
	EComponentType__ScaleZ         = 10,
	EComponentType__EComponentType_MAX = 11,

};

// Enum AnimGraphRuntime.EConstraintOffsetOption
enum class AnimGraphRuntime_EConstraintOffsetOption : uint8_t
{
	EConstraintOffsetOption__None  = 0,
	EConstraintOffsetOption__Offset_RefPose = 1,
	EConstraintOffsetOption__EConstraintOffsetOption_MAX = 2,

};

// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class AnimGraphRuntime_ECopyBoneDeltaMode : uint8_t
{
	CopyBoneDeltaMode__Accumulate  = 0,
	CopyBoneDeltaMode__Copy        = 1,
	CopyBoneDeltaMode__CopyBoneDeltaMode_MAX = 2,

};

// Enum AnimGraphRuntime.EInterpolationBlend
enum class AnimGraphRuntime_EInterpolationBlend : uint8_t
{
	EInterpolationBlend__Linear    = 0,
	EInterpolationBlend__Cubic     = 1,
	EInterpolationBlend__Sinusoidal = 2,
	EInterpolationBlend__EaseInOutExponent2 = 3,
	EInterpolationBlend__EaseInOutExponent3 = 4,
	EInterpolationBlend__EaseInOutExponent4 = 5,
	EInterpolationBlend__EaseInOutExponent5 = 6,
	EInterpolationBlend__MAX       = 7,

};

// Enum AnimGraphRuntime.EBoneModificationMode
enum class AnimGraphRuntime_EBoneModificationMode : uint8_t
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3,

};

// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class AnimGraphRuntime_EModifyCurveApplyMode : uint8_t
{
	EModifyCurveApplyMode__Add     = 0,
	EModifyCurveApplyMode__Scale   = 1,
	EModifyCurveApplyMode__Blend   = 2,
	EModifyCurveApplyMode__EModifyCurveApplyMode_MAX = 3,

};

// Enum AnimGraphRuntime.EPoseDriverOutput
enum class AnimGraphRuntime_EPoseDriverOutput : uint8_t
{
	EPoseDriverOutput__DrivePoses  = 0,
	EPoseDriverOutput__DriveCurves = 1,
	EPoseDriverOutput__EPoseDriverOutput_MAX = 2,

};

// Enum AnimGraphRuntime.EPoseDriverSource
enum class AnimGraphRuntime_EPoseDriverSource : uint8_t
{
	EPoseDriverSource__Rotation    = 0,
	EPoseDriverSource__Translation = 1,
	EPoseDriverSource__EPoseDriverSource_MAX = 2,

};

// Enum AnimGraphRuntime.EPoseDriverType
enum class AnimGraphRuntime_EPoseDriverType : uint8_t
{
	EPoseDriverType__SwingAndTwist = 0,
	EPoseDriverType__SwingOnly     = 1,
	EPoseDriverType__Translation   = 2,
	EPoseDriverType__EPoseDriverType_MAX = 3,

};

// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class AnimGraphRuntime_ESnapshotSourceMode : uint8_t
{
	ESnapshotSourceMode__NamedSnapshot = 0,
	ESnapshotSourceMode__SnapshotPin = 1,
	ESnapshotSourceMode__ESnapshotSourceMode_MAX = 2,

};

// Enum AnimGraphRuntime.ERefPoseType
enum class AnimGraphRuntime_ERefPoseType : uint8_t
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2,

};

// Enum AnimGraphRuntime.EScaleChainInitialLength
enum class AnimGraphRuntime_EScaleChainInitialLength : uint8_t
{
	EScaleChainInitialLength__FixedDefaultLengthValue = 0,
	EScaleChainInitialLength__Distance = 1,
	EScaleChainInitialLength__ChainLength = 2,
	EScaleChainInitialLength__EScaleChainInitialLength_MAX = 3,

};

// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class AnimGraphRuntime_ESequenceEvalReinit : uint8_t
{
	ESequenceEvalReinit__NoReset   = 0,
	ESequenceEvalReinit__StartPosition = 1,
	ESequenceEvalReinit__ExplicitTime = 2,
	ESequenceEvalReinit__ESequenceEvalReinit_MAX = 3,

};

// Enum AnimGraphRuntime.ESplineBoneAxis
enum class AnimGraphRuntime_ESplineBoneAxis : uint8_t
{
	ESplineBoneAxis__X             = 0,
	ESplineBoneAxis__Y             = 1,
	ESplineBoneAxis__Z             = 2,
	ESplineBoneAxis__ESplineBoneAxis_MAX = 3,

};

// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class AnimGraphRuntime_ERBFDistanceMethod : uint8_t
{
	ERBFDistanceMethod__Euclidean  = 0,
	ERBFDistanceMethod__Quaternion = 1,
	ERBFDistanceMethod__SwingAngle = 2,
	ERBFDistanceMethod__ERBFDistanceMethod_MAX = 3,

};

// Enum AnimGraphRuntime.ERBFFunctionType
enum class AnimGraphRuntime_ERBFFunctionType : uint8_t
{
	ERBFFunctionType__Gaussian     = 0,
	ERBFFunctionType__Exponential  = 1,
	ERBFFunctionType__Linear       = 2,
	ERBFFunctionType__Cubic        = 3,
	ERBFFunctionType__Quintic      = 4,
	ERBFFunctionType__ERBFFunctionType_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// 0x0028
struct FReferenceBoneFrame
{
	struct FBoneReference                              Bone;                                                      // 0x0000(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                       Axis;                                                      // 0x0018(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// 0x0040 (0x0070 - 0x0030)
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                             // 0x0030(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x004C(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                LODThreshold;                                              // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ActualAlpha;                                               // 0x0058(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0GX6[0x14];                                    // 0x005C(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// 0x0088 (0x00F8 - 0x0070)
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
	struct FReferenceBoneFrame                         BaseFrame;                                                 // 0x0070(0x0028) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FReferenceBoneFrame                         TwistFrame;                                                // 0x0098(0x0028) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                       TwistPlaneNormalAxis;                                      // 0x00C0(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              RangeMax;                                                  // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemappedMin;                                               // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemappedMax;                                               // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3BJX[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimCurveParam                             Curve;                                                     // 0x00E0(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1PT8[0x8];                                     // 0x00F0(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.SocketReference
// 0x0040
struct FSocketReference
{
	struct FName                                       SocketName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CRAA[0x38];                                    // 0x0008(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.BoneSocketTarget
// 0x0060
struct FBoneSocketTarget
{
	bool                                               bUseSocket;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_08AJ[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneReference                              BoneReference;                                             // 0x0008(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSocketReference                            SocketReference;                                           // 0x0020(0x0040) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// 0x0150 (0x01C0 - 0x0070)
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              IKBone;                                                    // 0x0070(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowStretching : 1;                                      // 0x0088(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5XHL[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartStretchRatio;                                         // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxStretchScale;                                           // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   StretchLimits;                                             // 0x0094(0x0008) (Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTakeRotationFromEffectorSpace : 1;                        // 0x009C(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bMaintainEffectorRelRot : 1;                               // 0x009C(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T87K[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_EBoneControlSpace>              EffectorLocationSpace;                                     // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7NBS[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       EffectorSpaceBoneName;                                     // 0x00A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     EffectorLocation;                                          // 0x00B0(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R7MZ[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneSocketTarget                           EffectorTarget;                                            // 0x00C0(0x0060) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              JointTargetLocationSpace;                                  // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YFJQ[0x3];                                     // 0x0121(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     JointTargetLocation;                                       // 0x0124(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       JointTargetSpaceBoneName;                                  // 0x0130(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q27F[0x8];                                     // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneSocketTarget                           JointTarget;                                               // 0x0140(0x0060) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAllowTwist;                                               // 0x01A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G2MN[0x3];                                     // 0x01A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAxis                                       TwistAxis;                                                 // 0x01A4(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bNoTwist;                                                  // 0x01B4(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1H12[0xB];                                     // 0x01B5(0x000B) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                         // 0x0030(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                                   B;                                                         // 0x0048(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x0064(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              InternalBlendAlpha;                                        // 0x006C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAIsRelevant;                                              // 0x0070(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bBIsRelevant;                                              // 0x0071(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bResetChildOnActivation;                                   // 0x0072(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CP71[0x5];                                     // 0x0073(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// 0x01A0 (0x0660 - 0x04C0)
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData_100K[0x1A0];                                   // 0x04C0(0x01A0) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.RBFEntry
// 0x0010
struct FRBFEntry
{
	TArray<float>                                      Values;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.RBFTarget
// 0x0078 (0x0088 - 0x0010)
struct FRBFTarget : public FRBFEntry
{
	float                                              ScaleFactor;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyCustomCurve;                                         // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SO2I[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  CustomCurve;                                               // 0x0018(0x0070) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// 0x0048 (0x00A0 - 0x0058)
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
	class UPoseAsset*                                  PoseAsset;                                                 // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OA0A[0x40];                                    // 0x0060(0x0040) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// 0x0010 (0x00B0 - 0x00A0)
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
	struct FName                                       PoseName;                                                  // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PoseWeight;                                                // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M5UY[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.RBFParams
// 0x0010
struct FRBFParams
{
	int                                                TargetDimensions;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_ERBFFunctionType                  Function;                                                  // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_ERBFDistanceMethod                DistanceMethod;                                            // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneAxis>                      TwistAxis;                                                 // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_POPY[0x1];                                     // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WeightThreshold;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// 0x0018
struct FPoseDriverTransform
{
	struct FVector                                     TargetTranslation;                                         // 0x0000(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    TargetRotation;                                            // 0x000C(0x000C) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// 0x00A8
struct FPoseDriverTarget
{
	TArray<struct FPoseDriverTransform>                BoneTransforms;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRotator                                    TargetRotation;                                            // 0x0010(0x000C) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TargetScale;                                               // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyCustomCurve;                                         // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4GMT[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  CustomCurve;                                               // 0x0028(0x0070) (Edit, NativeAccessSpecifierPublic)
	struct FName                                       DrivenName;                                                // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ISE1[0x8];                                     // 0x00A0(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// 0x00D8 (0x0178 - 0x00A0)
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
	struct FPoseLink                                   SourcePose;                                                // 0x00A0(0x0018) (Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                      SourceBones;                                               // 0x00B8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bOnlyDriveSelectedBones;                                   // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CZ9C[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBoneReference>                      OnlyDriveBones;                                            // 0x00D0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              EvalSpaceBone;                                             // 0x00E0(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRBFParams                                  RBFParams;                                                 // 0x00F8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EPoseDriverSource                 DriveSource;                                               // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EPoseDriverOutput                 DriveOutput;                                               // 0x0109(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2G3D[0x6];                                     // 0x010A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPoseDriverTarget>                   PoseTargets;                                               // 0x0110(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              SourceBone;                                                // 0x0120(0x0018) (Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneAxis>                      TwistAxis;                                                 // 0x0138(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EPoseDriverType                   Type;                                                      // 0x0139(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W2O4[0x2];                                     // 0x013A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RadialScaling;                                             // 0x013C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H2XH[0x38];                                    // 0x0140(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// 0x0080 (0x00B0 - 0x0030)
struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
	AnimGraphRuntime_ESnapshotSourceMode               Mode;                                                      // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y87K[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SnapshotName;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPoseSnapshot                               Snapshot;                                                  // 0x0040(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EWB3[0x38];                                    // 0x0078(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// 0x0058
struct FRandomPlayerSequenceEntry
{
	class UAnimSequence*                               Sequence;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChanceToPlay;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinLoopCount;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLoopCount;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinPlayRate;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxPlayRate;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0973[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAlphaBlend                                 BlendIn;                                                   // 0x0020(0x0038) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// 0x0060 (0x0090 - 0x0030)
struct FAnimNode_RandomPlayer : public FAnimNode_Base
{
	bool                                               bShuffleMode;                                              // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I1FL[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FRandomPlayerSequenceEntry>          Entries;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VP2U[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// 0x0000 (0x0030 - 0x0030)
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// 0x0008 (0x0038 - 0x0030)
struct FAnimNode_RefPose : public FAnimNode_Base
{
	TEnumAsByte<AnimGraphRuntime_ERefPoseType>         RefPoseType;                                               // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MMRV[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_Root
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_Root : public FAnimNode_Base
{
	struct FPoseLink                                   Result;                                                    // 0x0030(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// 0x0030 (0x0060 - 0x0030)
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                  // 0x0030(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Pitch;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Yaw;                                                       // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    MeshToComponent;                                           // 0x0050(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H35I[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// 0x0038 (0x00A8 - 0x0070)
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TargetBone;                                                // 0x0070(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              SourceBone;                                                // 0x0088(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Multiplier;                                                // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneAxis>                      RotationAxisToRefer;                                       // 0x00A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAdditive;                                               // 0x00A5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DKPV[0x2];                                     // 0x00A6(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// 0x00D0 (0x0128 - 0x0058)
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
	float                                              X;                                                         // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Z;                                                         // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                  // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoop;                                                     // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I7D1[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartPosition;                                             // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                             BlendSpace;                                                // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResetPlayTimeWhenBlendSpaceChanges;                       // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UGO0[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlendFilter                                BlendFilter;                                               // 0x0080(0x0090) (Protected, NativeAccessSpecifierProtected)
	TArray<struct FBlendSampleData>                    BlendSampleDataCache;                                      // 0x0110(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UBlendSpaceBase*                             PreviousBlendSpace;                                        // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// 0x0030 (0x0158 - 0x0128)
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   BasePose;                                                  // 0x0128(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                LODThreshold;                                              // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLODEnabled;                                             // 0x0144(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N15G[0x3];                                     // 0x0145(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Alpha;                                                     // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x014C(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ActualAlpha;                                               // 0x0154(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// 0x0088 (0x00B8 - 0x0030)
struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{
	struct FPoseLink                                   InputPose;                                                 // 0x0030(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              DefaultChainLength;                                        // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PW4S[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneReference                              ChainStartBone;                                            // 0x0050(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              ChainEndBone;                                              // 0x0068(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EScaleChainInitialLength          ChainInitialLength;                                        // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HY84[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     TargetLocation;                                            // 0x0084(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ActualAlpha;                                               // 0x0094(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x0098(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bBoneIndicesCached;                                        // 0x00A0(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D7X9[0x17];                                    // 0x00A1(0x0017) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// 0x0018 (0x0070 - 0x0058)
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                  // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExplicitTime;                                              // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldLoop;                                               // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTeleportToExplicitTime;                                   // 0x0065(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_20QA[0x2];                                     // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartPosition;                                             // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_ESequenceEvalReinit>  ReinitializationBehavior;                                  // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReinitialized;                                            // 0x006D(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0GL7[0x2];                                     // 0x006E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// 0x0038 (0x0068 - 0x0030)
struct FAnimNode_Slot : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                    // 0x0030(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       SlotName;                                                  // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysUpdateSourcePose;                                   // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EEGT[0x17];                                    // 0x0051(0x0017) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// 0x0020
struct FSplineIKCachedBoneData
{
	struct FBoneReference                              Bone;                                                      // 0x0000(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	int                                                RefSkeletonIndex;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7GZR[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// 0x01A0 (0x0210 - 0x0070)
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              StartBone;                                                 // 0x0070(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              EndBone;                                                   // 0x0088(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	AnimGraphRuntime_ESplineBoneAxis                   BoneAxis;                                                  // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoCalculateSpline;                                      // 0x00A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7HAR[0x2];                                     // 0x00A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PointCount;                                                // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          ControlPoints;                                             // 0x00A8(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              Roll;                                                      // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TwistStart;                                                // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TwistEnd;                                                  // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_67WM[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAlphaBlend                                 TwistBlend;                                                // 0x00C8(0x0038) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Stretch;                                                   // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Offset;                                                    // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AZOC[0x70];                                    // 0x0108(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSplineCurves                               BoneSpline;                                                // 0x0178(0x0060) (NativeAccessSpecifierPrivate)
	float                                              OriginalSplineLength;                                      // 0x01D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_C1TA[0x4];                                     // 0x01DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSplineIKCachedBoneData>             CachedBoneReferences;                                      // 0x01E0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<float>                                      CachedBoneLengths;                                         // 0x01F0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FQuat>                               CachedOffsetRotations;                                     // 0x0200(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// 0x0068 (0x00D8 - 0x0070)
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SpringBone;                                                // 0x0070(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bLimitDisplacement;                                        // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z75D[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxDisplacement;                                           // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpringStiffness;                                           // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpringDamping;                                             // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ErrorResetThresh;                                          // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoZSpring;                                                // 0x009C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTranslateX;                                               // 0x009D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTranslateY;                                               // 0x009E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTranslateZ;                                               // 0x009F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRotateX;                                                  // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRotateY;                                                  // 0x00A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRotateZ;                                                  // 0x00A2(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_89UE[0x35];                                    // 0x00A3(0x0035) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// 0x0140 (0x01B0 - 0x0070)
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TrailBone;                                                 // 0x0070(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ChainLength;                                               // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<CoreUObject_EAxis>                     ChainBoneAxis;                                             // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInvertChainBoneAxis;                                      // 0x008D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VY3N[0x2];                                     // 0x008E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TrailRelaxation;                                           // 0x0090(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NMMN[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          TrailRelaxationSpeed;                                      // 0x0098(0x0078) (Edit, NativeAccessSpecifierPublic)
	bool                                               bLimitStretch;                                             // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3TXB[0x3];                                     // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StretchLimit;                                              // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     FakeVelocity;                                              // 0x0118(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bActorSpaceFakeVel;                                        // 0x0124(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LOVU[0x3];                                     // 0x0125(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneReference                              BaseJoint;                                                 // 0x0128(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_25QG[0x70];                                    // 0x0140(0x0070) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// 0x0038 (0x0068 - 0x0030)
struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   base;                                                      // 0x0030(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                                   Additive;                                                  // 0x0048(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bMeshSpaceAdditive;                                        // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X60Z[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// 0x0048 (0x00B8 - 0x0070)
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                              // 0x0070(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Translation;                                               // 0x0088(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0094(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // 0x00A0(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EBoneModificationMode> TranslationMode;                                           // 0x00AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EBoneModificationMode> RotationMode;                                              // 0x00AD(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EBoneModificationMode> ScaleMode;                                                 // 0x00AE(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              TranslationSpace;                                          // 0x00AF(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              RotationSpace;                                             // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              ScaleSpace;                                                // 0x00B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MUTD[0x6];                                     // 0x00B2(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                                // 0x0030(0x0018) (Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EModifyCurveApplyMode             ApplyMode;                                                 // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9LAI[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      CurveValues;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               CurveNames;                                                // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2WK0[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// 0x0040 (0x0070 - 0x0030)
struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           Poses;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      DesiredAlphas;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bAdditiveNode;                                             // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNormalizeAlpha;                                           // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_16Z4[0x2];                                     // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x0054(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YA3Z[0x14];                                    // 0x005C(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// 0x0040 (0x00B0 - 0x0070)
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToObserve;                                             // 0x0070(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              DisplaySpace;                                              // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRelativeToRefPose;                                        // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3BOQ[0x2];                                     // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Translation;                                               // 0x008C(0x000C) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0098(0x000C) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // 0x00A4(0x000C) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// 0x0028 (0x00C8 - 0x00A0)
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
	struct FPoseLink                                   SourcePose;                                                // 0x00A0(0x0018) (Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	Engine_EAlphaBlendOption                           BlendOption;                                               // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_44GY[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 CustomCurve;                                               // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// 0x0078 (0x00E8 - 0x0070)
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RightHandFK;                                               // 0x0070(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              LeftHandFK;                                                // 0x0088(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RightHandIK;                                               // 0x00A0(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              LeftHandIK;                                                // 0x00B8(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                      IKBonesToMove;                                             // 0x00D0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              HandFKWeight;                                              // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7S57[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// 0x00B0 (0x00E0 - 0x0030)
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                  // 0x0030(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FPoseLink>                           BlendPoses;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInputBlendPose>                     LayerSetup;                                                // 0x0058(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      BlendWeights;                                              // 0x0068(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bMeshSpaceRotationBlend;                                   // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECurveBlendOption>              CurveBlendOption;                                          // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBlendRootMotionBasedOnRootBone;                           // 0x007A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasRelevantPoses;                                         // 0x007B(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PWOB[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPerBoneBlendWeight>                 PerBoneBlendWeights;                                       // 0x0080(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FGuid                                       SkeletonGuid;                                              // 0x0090(0x0010) (IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                       VirtualBoneGuid;                                           // 0x00A0(0x0010) (IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LXKX[0x30];                                    // 0x00B0(0x0030) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// 0x0040
struct FAnimLegIKDefinition
{
	struct FBoneReference                              IKFootBone;                                                // 0x0000(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              FKFootBone;                                                // 0x0018(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	int                                                NumBonesInLimb;                                            // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<CoreUObject_EAxis>                     FootBoneForwardAxis;                                       // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableRotationLimit;                                      // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SXCB[0x2];                                     // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinRotationAngle;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableKneeTwistCorrection;                                // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_176V[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
// 0x0070
struct FAnimLegIKData
{
	unsigned char                                      UnknownData_RN1V[0x70];                                    // 0x0000(0x0070) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// 0x0028 (0x0098 - 0x0070)
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
	float                                              ReachPrecision;                                            // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxIterations;                                             // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimLegIKDefinition>                LegsDefinition;                                            // 0x0078(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAnimLegIKData>                      LegsData;                                                  // 0x0088(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.IKChain
// 0x0030
struct FIKChain
{
	unsigned char                                      UnknownData_DB58[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.IKChainLink
// 0x001C
struct FIKChainLink
{
	unsigned char                                      UnknownData_1OML[0x1C];                                    // 0x0000(0x001C) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// 0x0130 (0x01A0 - 0x0070)
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                              // 0x0070(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              LookAtBone;                                                // 0x0088(0x0018) (Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       LookAtSocket;                                              // 0x00A0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HYQ9[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneSocketTarget                           LookAtTarget;                                              // 0x00B0(0x0060) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     LookAtLocation;                                            // 0x0110(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAxisOption>                    LookAtAxis;                                                // 0x011C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CVCK[0x3];                                     // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CustomLookAtAxis;                                          // 0x0120(0x000C) (Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAxis                                       LookAt_Axis;                                               // 0x012C(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUseLookUpAxis;                                            // 0x013C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAxisOption>                    LookUpAxis;                                                // 0x013D(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6PE1[0x2];                                     // 0x013E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CustomLookUpAxis;                                          // 0x0140(0x000C) (Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAxis                                       LookUp_Axis;                                               // 0x014C(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              LookAtClamp;                                               // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EInterpolationBlend>  InterpolationType;                                         // 0x0160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_307I[0x3];                                     // 0x0161(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InterpolationTime;                                         // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolationTriggerThreashold;                            // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MY2J[0x34];                                    // 0x016C(0x0034) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.Constraint
// 0x0020
struct FConstraint
{
	struct FBoneReference                              TargetBone;                                                // 0x0000(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EConstraintOffsetOption           OffsetOption;                                              // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimationCore_ETransformConstraintType             TransformType;                                             // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                        PerAxis;                                                   // 0x001A(0x0003) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XBXY[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// 0x0048 (0x00B8 - 0x0070)
struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                              // 0x0070(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FConstraint>                         ConstraintSetup;                                           // 0x0088(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      ConstraintWeights;                                         // 0x0098(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4RK8[0x10];                                    // 0x00A8(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// 0x0038 (0x00A8 - 0x0070)
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                                // 0x0070(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              TargetBone;                                                // 0x0088(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCopyTranslation;                                          // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCopyRotation;                                             // 0x00A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCopyScale;                                                // 0x00A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              ControlSpace;                                              // 0x00A3(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EH76[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// 0x0040 (0x00B0 - 0x0070)
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                                // 0x0070(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              TargetBone;                                                // 0x0088(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCopyTranslation;                                          // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCopyRotation;                                             // 0x00A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCopyScale;                                                // 0x00A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_ECopyBoneDeltaMode                CopyMode;                                                  // 0x00A3(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TranslationMultiplier;                                     // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotationMultiplier;                                        // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScaleMultiplier;                                           // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// 0x0068 (0x0098 - 0x0030)
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
	TWeakObjectPtr<class USkeletalMeshComponent>       SourceMeshComponent;                                       // 0x0030(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseAttachedParent;                                        // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HDZ9[0x5F];                                    // 0x0039(0x005F) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// 0x0038 (0x0068 - 0x0030)
struct FAnimNode_CurveSource : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                                // 0x0030(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       SourceBinding;                                             // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8H6J[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TScriptInterface<class UCurveSourceInterface>      CurveSource;                                               // 0x0058(0x0010) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// 0x0100 (0x0170 - 0x0070)
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
	struct FTransform                                  EffectorTransform;                                         // 0x0070(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              EffectorTransformSpace;                                    // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BUMI[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneReference                              EffectorTransformBone;                                     // 0x00A8(0x0018) (Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneSocketTarget                           EffectorTarget;                                            // 0x00C0(0x0060) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneRotationSource>            EffectorRotationSource;                                    // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1QR3[0x7];                                     // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneReference                              TipBone;                                                   // 0x0128(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RootBone;                                                  // 0x0140(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Precision;                                                 // 0x0158(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxIterations;                                             // 0x015C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableDebugDraw;                                          // 0x0160(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LB2L[0xF];                                     // 0x0161(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// 0x005C
struct FAnimPhysConstraintSetup
{
	AnimGraphRuntime_EAnimPhysLinearConstraintType     LinearXLimitType;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EAnimPhysLinearConstraintType     LinearYLimitType;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EAnimPhysLinearConstraintType     LinearZLimitType;                                          // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WUSZ[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LinearAxesMin;                                             // 0x0004(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LinearAxesMax;                                             // 0x0010(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EAnimPhysAngularConstraintType    AngularConstraintType;                                     // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAnimPhysTwistAxis                          TwistAxis;                                                 // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WJKO[0x2];                                     // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ConeAngle;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularXAngle;                                             // 0x0024(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularYAngle;                                             // 0x0028(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularZAngle;                                             // 0x002C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AngularLimitsMin;                                          // 0x0030(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AngularLimitsMax;                                          // 0x003C(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAnimPhysTwistAxis                          AngularTargetAxis;                                         // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HM82[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     AngularTarget;                                             // 0x004C(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLinearFullyLocked;                                        // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QP2P[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// 0x0050
struct FAnimPhysPlanarLimit
{
	struct FBoneReference                              DrivingBone;                                               // 0x0000(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T52V[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  PlaneTransform;                                            // 0x0020(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// 0x0030
struct FAnimPhysSphericalLimit
{
	struct FBoneReference                              DrivingBone;                                               // 0x0000(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     SphereLocalOffset;                                         // 0x0018(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LimitRadius;                                               // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_ESphericalLimitType               LimitType;                                                 // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9D9G[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// 0x0210 (0x0280 - 0x0070)
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
	AnimGraphRuntime_EAnimPhysSimSpaceType             SimulationSpace;                                           // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BPDW[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneReference                              RelativeSpaceBone;                                         // 0x0078(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bChain;                                                    // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H63E[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneReference                              BoundBone;                                                 // 0x0098(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              ChainEnd;                                                  // 0x00B0(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     BoxExtents;                                                // 0x00C8(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LocalJointOffset;                                          // 0x00D4(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GravityScale;                                              // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLinearSpring;                                             // 0x00E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAngularSpring;                                            // 0x00E5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PB5B[0x2];                                     // 0x00E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LinearSpringConstant;                                      // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularSpringConstant;                                     // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableWind;                                               // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWindWasEnabled;                                           // 0x00F1(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RKYN[0x2];                                     // 0x00F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WindScale;                                                 // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideLinearDamping;                                    // 0x00F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8I8B[0x3];                                     // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LinearDampingOverride;                                     // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideAngularDamping;                                   // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GJFD[0x3];                                     // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AngularDampingOverride;                                    // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideAngularBias;                                      // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NHEP[0x3];                                     // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AngularBiasOverride;                                       // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoUpdate;                                                 // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoEval;                                                   // 0x0111(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2EM6[0x2];                                     // 0x0112(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumSolverIterationsPreUpdate;                              // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSolverIterationsPostUpdate;                             // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimPhysConstraintSetup                    ConstraintSetup;                                           // 0x011C(0x005C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUsePlanarLimit;                                           // 0x0178(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DGFC[0x7];                                     // 0x0179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAnimPhysPlanarLimit>                PlanarLimits;                                              // 0x0180(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bUseSphericalLimits;                                       // 0x0190(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LFAG[0x7];                                     // 0x0191(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAnimPhysSphericalLimit>             SphericalLimits;                                           // 0x0198(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	Engine_EAnimPhysCollisionType                      CollisionType;                                             // 0x01A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_55X0[0x3];                                     // 0x01A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SphereCollisionRadius;                                     // 0x01AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ExternalForce;                                             // 0x01B0(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L2WM[0xC4];                                    // 0x01BC(0x00C4) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   base;                                                      // 0x0030(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                                   Additive;                                                  // 0x0048(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x0064(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                LODThreshold;                                              // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ActualAlpha;                                               // 0x0070(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TFFT[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// 0x0038
struct FBlendBoneByChannelEntry
{
	struct FBoneReference                              SourceBone;                                                // 0x0000(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              TargetBone;                                                // 0x0018(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bBlendTranslation;                                         // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBlendRotation;                                            // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBlendScale;                                               // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_589R[0x5];                                     // 0x0033(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// 0x0070 (0x00A0 - 0x0030)
struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                         // 0x0030(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                                   B;                                                         // 0x0048(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x0064(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8E2L[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBlendBoneByChannelEntry>            BoneDefinitions;                                           // 0x0070(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              TransformsSpace;                                           // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SLJ6[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InternalBlendAlpha;                                        // 0x0084(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bBIsRelevant;                                              // 0x0088(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2K0K[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBlendBoneByChannelEntry>            ValidBoneEntries;                                          // 0x0090(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// 0x0098 (0x00C8 - 0x0030)
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           BlendPose;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      BlendTime;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	Engine_EAlphaBlendOption                           BlendType;                                                 // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZJCP[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 CustomBlendCurve;                                          // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendProfile*                               BlendProfile;                                              // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAlphaBlend>                         Blends;                                                    // 0x0068(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      BlendWeights;                                              // 0x0078(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<float>                                      RemainingBlendTimes;                                       // 0x0088(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int                                                LastActiveChildIndex;                                      // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_87DW[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBlendSampleData>                    PerBoneSampleData;                                         // 0x00A0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IJ6V[0x10];                                    // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bResetChildOnActivation;                                   // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IB9F[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// 0x0008 (0x00D0 - 0x00C8)
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
	bool                                               bActiveValue;                                              // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HY4N[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// 0x0018 (0x00E0 - 0x00C8)
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
	TArray<int>                                        EnumToPoseIndex;                                           // 0x00C8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      ActiveEnumValue;                                           // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XWO2[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// 0x0008 (0x00D0 - 0x00C8)
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
	int                                                ActiveChildIndex;                                          // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GAL1[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// 0x0008 (0x0130 - 0x0128)
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
	float                                              NormalizedTime;                                            // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YV2U[0x4];                                     // 0x012C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// 0x0078 (0x00E8 - 0x0070)
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                                // 0x0070(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EComponentType>       SourceComponent;                                           // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IT7L[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 DrivingCurve;                                              // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Multiplier;                                                // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseRange;                                                 // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_87HE[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RangeMin;                                                  // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RangeMax;                                                  // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemappedMin;                                               // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemappedMax;                                               // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EDrivenDestinationMode            DestinationMode;                                           // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RED9[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ParameterName;                                             // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                              TargetBone;                                                // 0x00C0(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EComponentType>       TargetComponent;                                           // 0x00D8(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WZTI[0x3];                                     // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bAffectTargetTranslationX : 1;                             // 0x00DC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetTranslationY : 1;                             // 0x00DC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetTranslationZ : 1;                             // 0x00DC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetRotationX : 1;                                // 0x00DC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetRotationY : 1;                                // 0x00DC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetRotationZ : 1;                                // 0x00DC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetScaleX : 1;                                   // 0x00DC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetScaleY : 1;                                   // 0x00DC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetScaleZ : 1;                                   // 0x00DD(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IVJ8[0x2];                                     // 0x00DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	AnimGraphRuntime_EDrivenBoneModificationMode       ModificationMode;                                          // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8PI5[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// 0x00E8 (0x0210 - 0x0128)
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   BasePose;                                                  // 0x0128(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                LODThreshold;                                              // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLODEnabled;                                             // 0x0144(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KGL1[0x3];                                     // 0x0145(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LookAtLocation;                                            // 0x0148(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HG8U[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SourceSocketName;                                          // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PivotSocketName;                                           // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SocketAxis;                                                // 0x0168(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                              SocketBoneReference;                                       // 0x0178(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  SocketLocalTransform;                                      // 0x0190(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              PivotSocketBoneReference;                                  // 0x01C0(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z1OG[0x8];                                     // 0x01D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  PivotSocketLocalTransform;                                 // 0x01E0(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
