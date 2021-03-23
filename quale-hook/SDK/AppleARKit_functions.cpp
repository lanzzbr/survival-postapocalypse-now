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

// Function AppleARKit.AppleARKitAnchor.GetTransform
// ()
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UAppleARKitAnchor::GetTransform()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29339);

	UAppleARKitAnchor_GetTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitBlueprintLibrary.HitTestAtScreenPosition_TrackingSpace
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ScreenPosition                 (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AppleARKit_EAppleARKitHitTestResultType Types                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAppleARKitHitTestResult> OutResults                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAppleARKitBlueprintLibrary::HitTestAtScreenPosition_TrackingSpace(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, AppleARKit_EAppleARKitHitTestResultType Types, TArray<struct FAppleARKitHitTestResult>* OutResults)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29346);

	UAppleARKitBlueprintLibrary_HitTestAtScreenPosition_TrackingSpace_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;
	params.Types = Types;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutResults != nullptr)
		*OutResults = params.OutResults;


	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitBlueprintLibrary.GetCurrentFrame
// (Net, NetReliable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAppleARKitFrame        OutCurrentFrame                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAppleARKitBlueprintLibrary::GetCurrentFrame(class UObject* WorldContextObject, struct FAppleARKitFrame* OutCurrentFrame)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29342);

	UAppleARKitBlueprintLibrary_GetCurrentFrame_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCurrentFrame != nullptr)
		*OutCurrentFrame = params.OutCurrentFrame;


	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitPlaneAnchor.GetTransformToCenter
// ()
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UAppleARKitPlaneAnchor::GetTransformToCenter()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29358);

	UAppleARKitPlaneAnchor_GetTransformToCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitPlaneAnchor.GetExtent
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UAppleARKitPlaneAnchor::GetExtent()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29356);

	UAppleARKitPlaneAnchor_GetExtent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitPlaneAnchor.GetCenter
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UAppleARKitPlaneAnchor::GetCenter()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29354);

	UAppleARKitPlaneAnchor_GetCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
