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

// Function AppleARKit.AppleARKitAnchor.GetTransform
struct UAppleARKitAnchor_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AppleARKit.AppleARKitBlueprintLibrary.HitTestAtScreenPosition_TrackingSpace
struct UAppleARKitBlueprintLibrary_HitTestAtScreenPosition_TrackingSpace_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ScreenPosition;                                            // (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AppleARKit_EAppleARKitHitTestResultType            Types;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAppleARKitHitTestResult>            OutResults;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AppleARKit.AppleARKitBlueprintLibrary.GetCurrentFrame
struct UAppleARKitBlueprintLibrary_GetCurrentFrame_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAppleARKitFrame                            OutCurrentFrame;                                           // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AppleARKit.AppleARKitPlaneAnchor.GetTransformToCenter
struct UAppleARKitPlaneAnchor_GetTransformToCenter_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AppleARKit.AppleARKitPlaneAnchor.GetExtent
struct UAppleARKitPlaneAnchor_GetExtent_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AppleARKit.AppleARKitPlaneAnchor.GetCenter
struct UAppleARKitPlaneAnchor_GetCenter_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
