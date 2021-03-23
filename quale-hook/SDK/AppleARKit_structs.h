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

// Enum AppleARKit.EAppleARKitHitTestResultType
enum class AppleARKit_EAppleARKitHitTestResultType : uint8_t
{
	EAppleARKitHitTestResultType__None = 0,
	EAppleARKitHitTestResultType__FeaturePoint = 1,
	EAppleARKitHitTestResultType__EstimatedHorizontalPlane = 2,
	EAppleARKitHitTestResultType__ExistingPlane = 3,
	EAppleARKitHitTestResultType__ExistingPlaneUsingExtent = 4,
	EAppleARKitHitTestResultType__EAppleARKitHitTestResultType_MAX = 5,

};

// Enum AppleARKit.EARKitTextureType
enum class AppleARKit_EARKitTextureType : uint8_t
{
	TextureY                       = 0,
	TextureCbCr                    = 1,
	EARKitTextureType_MAX          = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AppleARKit.AppleARKitFrame
// 0x00B0
struct FAppleARKitFrame
{
	unsigned char                                      UnknownData_JOGR[0xB0];                                    // 0x0000(0x00B0) MISSED OFFSET (PADDING)

};

// ScriptStruct AppleARKit.AppleARKitHitTestResult
// 0x0050
struct FAppleARKitHitTestResult
{
	AppleARKit_EAppleARKitHitTestResultType            Type;                                                      // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9W1U[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Distance;                                                  // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LRAE[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UAppleARKitAnchor*                           Anchor;                                                    // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3TGZ[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct AppleARKit.AppleARKitLightEstimate
// 0x0008
struct FAppleARKitLightEstimate
{
	bool                                               bIsValid;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CZL5[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AmbientIntensity;                                          // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AppleARKit.AppleARKitCamera
// 0x0080
struct FAppleARKitCamera
{
	AugmentedReality_EARTrackingQuality                TrackingQuality;                                           // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7CQJ[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                       Orientation;                                               // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Translation;                                               // 0x0050(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ImageResolution;                                           // 0x005C(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   FocalLength;                                               // 0x0064(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   PrincipalPoint;                                            // 0x006C(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7VXP[0xC];                                     // 0x0074(0x000C) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
