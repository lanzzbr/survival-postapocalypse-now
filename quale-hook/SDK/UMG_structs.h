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

// Enum UMG.EUMGSequencePlayMode
enum class UMG_EUMGSequencePlayMode : uint8_t
{
	EUMGSequencePlayMode__Forward  = 0,
	EUMGSequencePlayMode__Reverse  = 1,
	EUMGSequencePlayMode__PingPong = 2,
	EUMGSequencePlayMode__EUMGSequencePlayMode_MAX = 3,

};

// Enum UMG.EWidgetDesignFlags
enum class UMG_EWidgetDesignFlags : uint8_t
{
	EWidgetDesignFlags__None       = 0,
	EWidgetDesignFlags__Designing  = 1,
	EWidgetDesignFlags__ShowOutline = 2,
	EWidgetDesignFlags__ExecutePreConstruct = 3,
	EWidgetDesignFlags__EWidgetDesignFlags_MAX = 4,

};

// Enum UMG.EBindingKind
enum class UMG_EBindingKind : uint8_t
{
	EBindingKind__Function         = 0,
	EBindingKind__Property         = 1,
	EBindingKind__EBindingKind_MAX = 2,

};

// Enum UMG.EWidgetGeometryMode
enum class UMG_EWidgetGeometryMode : uint8_t
{
	EWidgetGeometryMode__Plane     = 0,
	EWidgetGeometryMode__Cylinder  = 1,
	EWidgetGeometryMode__EWidgetGeometryMode_MAX = 2,

};

// Enum UMG.EWidgetBlendMode
enum class UMG_EWidgetBlendMode : uint8_t
{
	EWidgetBlendMode__Opaque       = 0,
	EWidgetBlendMode__Masked       = 1,
	EWidgetBlendMode__Transparent  = 2,
	EWidgetBlendMode__EWidgetBlendMode_MAX = 3,

};

// Enum UMG.EWidgetTimingPolicy
enum class UMG_EWidgetTimingPolicy : uint8_t
{
	EWidgetTimingPolicy__RealTime  = 0,
	EWidgetTimingPolicy__GameTime  = 1,
	EWidgetTimingPolicy__EWidgetTimingPolicy_MAX = 2,

};

// Enum UMG.EWidgetSpace
enum class UMG_EWidgetSpace : uint8_t
{
	EWidgetSpace__World            = 0,
	EWidgetSpace__Screen           = 1,
	EWidgetSpace__EWidgetSpace_MAX = 2,

};

// Enum UMG.EWidgetInteractionSource
enum class UMG_EWidgetInteractionSource : uint8_t
{
	EWidgetInteractionSource__World = 0,
	EWidgetInteractionSource__Mouse = 1,
	EWidgetInteractionSource__CenterScreen = 2,
	EWidgetInteractionSource__Custom = 3,
	EWidgetInteractionSource__EWidgetInteractionSource_MAX = 4,

};

// Enum UMG.EDragPivot
enum class UMG_EDragPivot : uint8_t
{
	EDragPivot__MouseDown          = 0,
	EDragPivot__TopLeft            = 1,
	EDragPivot__TopCenter          = 2,
	EDragPivot__TopRight           = 3,
	EDragPivot__CenterLeft         = 4,
	EDragPivot__CenterCenter       = 5,
	EDragPivot__CenterRight        = 6,
	EDragPivot__BottomLeft         = 7,
	EDragPivot__BottomCenter       = 8,
	EDragPivot__BottomRight        = 9,
	EDragPivot__EDragPivot_MAX     = 10,

};

// Enum UMG.ESlateSizeRule
enum class UMG_ESlateSizeRule : uint8_t
{
	ESlateSizeRule__Automatic      = 0,
	ESlateSizeRule__Fill           = 1,
	ESlateSizeRule__ESlateSizeRule_MAX = 2,

};

// Enum UMG.EVirtualKeyboardType
enum class UMG_EVirtualKeyboardType : uint8_t
{
	EVirtualKeyboardType__Default  = 0,
	EVirtualKeyboardType__Number   = 1,
	EVirtualKeyboardType__Web      = 2,
	EVirtualKeyboardType__Email    = 3,
	EVirtualKeyboardType__Password = 4,
	EVirtualKeyboardType__AlphaNumeric = 5,
	EVirtualKeyboardType__EVirtualKeyboardType_MAX = 6,

};

// Enum UMG.ESlateVisibility
enum class UMG_ESlateVisibility : uint8_t
{
	ESlateVisibility__Visible      = 0,
	ESlateVisibility__Collapsed    = 1,
	ESlateVisibility__Hidden       = 2,
	ESlateVisibility__HitTestInvisible = 3,
	ESlateVisibility__SelfHitTestInvisible = 4,
	ESlateVisibility__ESlateVisibility_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UMG.WidgetTransform
// 0x001C
struct FWidgetTransform
{
	struct FVector2D                                   Translation;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Scale;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Shear;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Angle;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct UMG.ShapedTextOptions
// 0x0008
struct FShapedTextOptions
{
	unsigned char                                      bOverride_TextShapingMethod : 1;                           // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_TextFlowDirection : 1;                           // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VJ6I[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	SlateCore_ETextShapingMethod                       TextShapingMethod;                                         // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Slate_ETextFlowDirection                           TextFlowDirection;                                         // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R9WM[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct UMG.EventReply
// 0x00B8
struct FEventReply
{
	unsigned char                                      UnknownData_ATI4[0xB8];                                    // 0x0000(0x00B8) MISSED OFFSET (PADDING)

};

// ScriptStruct UMG.PropertyPathSegment
// 0x0020
struct FPropertyPathSegment
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ArrayIndex;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LEZT[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStruct*                                     Struct;                                                    // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UField*                                      Field;                                                     // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct UMG.DynamicPropertyPath
// 0x0010
struct FDynamicPropertyPath
{
	TArray<struct FPropertyPathSegment>                Segments;                                                  // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct UMG.AnchorData
// 0x0028
struct FAnchorData
{
	struct FMargin                                     Offsets;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAnchors                                    Anchors;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   Alignment;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct UMG.SlateChildSize
// 0x0008
struct FSlateChildSize
{
	float                                              Value;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<UMG_ESlateSizeRule>                    SizeRule;                                                  // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_53XP[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// 0x0318 (0x0360 - 0x0048)
struct FMovieScene2DTransformSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FRichCurve                                  Translation[0x2];                                          // 0x0048(0x00E0) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  Rotation;                                                  // 0x0128(0x0070) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  Scale[0x2];                                                // 0x0198(0x00E0) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  Shear[0x2];                                                // 0x0278(0x00E0) (NativeAccessSpecifierPrivate)
	MovieScene_EMovieSceneBlendType                    BlendType;                                                 // 0x0358(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1WAF[0x7];                                     // 0x0359(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct UMG.MovieSceneMarginSectionTemplate
// 0x01C8 (0x0210 - 0x0048)
struct FMovieSceneMarginSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FRichCurve                                  TopCurve;                                                  // 0x0048(0x0070) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  LeftCurve;                                                 // 0x00B8(0x0070) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  RightCurve;                                                // 0x0128(0x0070) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  BottomCurve;                                               // 0x0198(0x0070) (NativeAccessSpecifierPrivate)
	MovieScene_EMovieSceneBlendType                    BlendType;                                                 // 0x0208(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9CWS[0x7];                                     // 0x0209(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// 0x0010 (0x0060 - 0x0050)
struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
	TArray<struct FName>                               BrushPropertyNamePath;                                     // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct UMG.SlateMeshVertex
// 0x003C
struct FSlateMeshVertex
{
	struct FVector2D                                   Position;                                                  // 0x0000(0x0008) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                     // 0x0008(0x0004) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV0;                                                       // 0x000C(0x0008) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV1;                                                       // 0x0014(0x0008) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV2;                                                       // 0x001C(0x0008) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV3;                                                       // 0x0024(0x0008) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV4;                                                       // 0x002C(0x0008) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV5;                                                       // 0x0034(0x0008) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct UMG.NamedSlotBinding
// 0x0010
struct FNamedSlotBinding
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Content;                                                   // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct UMG.PaintContext
// 0x0030
struct FPaintContext
{
	unsigned char                                      UnknownData_S3IU[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (PADDING)

};

// ScriptStruct UMG.WidgetAnimationBinding
// 0x0028
struct FWidgetAnimationBinding
{
	struct FName                                       WidgetName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SlotWidgetName;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       AnimationGuid;                                             // 0x0010(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsRootWidget;                                             // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E7RG[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct UMG.DelegateRuntimeBinding
// 0x0038
struct FDelegateRuntimeBinding
{
	struct FString                                     ObjectName;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PropertyName;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FunctionName;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicPropertyPath                        SourcePath;                                                // 0x0020(0x0010) (NativeAccessSpecifierPublic)
	UMG_EBindingKind                                   Kind;                                                      // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5X04[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct UMG.WidgetNavigationData
// 0x0018
struct FWidgetNavigationData
{
	SlateCore_EUINavigationRule                        Rule;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7UB1[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       WidgetToFocus;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UWidget>                      Widget;                                                    // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
