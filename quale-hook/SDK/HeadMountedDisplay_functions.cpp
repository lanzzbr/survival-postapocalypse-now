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

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NewScale                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_SetWorldToMetersScale(class UObject* WorldContext, float NewScale)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12114);

	UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Params params;
	params.WorldContext = WorldContext;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<HeadMountedDisplay_EHMDTrackingOrigin> Origin                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_SetTrackingOrigin(TEnumAsByte<HeadMountedDisplay_EHMDTrackingOrigin> Origin)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12112);

	UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UTexture*                InTexture                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_SetSpectatorScreenTexture(class UTexture* InTexture)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12110);

	UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Params params;
	params.InTexture = InTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector2D               EyeRectMin                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               EyeRectMax                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               TextureRectMin                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               TextureRectMax                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDrawEyeFirst                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bClearBlack                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12103);

	UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Params params;
	params.EyeRectMin = EyeRectMin;
	params.EyeRectMax = EyeRectMax;
	params.TextureRectMin = TextureRectMin;
	params.TextureRectMax = TextureRectMax;
	params.bDrawEyeFirst = bDrawEyeFirst;
	params.bClearBlack = bClearBlack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// HeadMountedDisplay_ESpectatorScreenMode Mode                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_SetSpectatorScreenMode(HeadMountedDisplay_ESpectatorScreenMode Mode)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12100);

	UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Near                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Far                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_SetClippingPlanes(float Near, float Far)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12097);

	UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Params params;
	params.Near = Near;
	params.Far = Far;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<HeadMountedDisplay_EOrientPositionSelector> Options                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_ResetOrientationAndPosition(float Yaw, TEnumAsByte<HeadMountedDisplay_EOrientPositionSelector> Options)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12094);

	UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Params params;
	params.Yaw = Yaw;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHeadMountedDisplayFunctionLibrary::IsSpectatorScreenModeControllable()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12092);

	UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHeadMountedDisplayFunctionLibrary::IsInLowPersistenceMode()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12090);

	UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12088);

	UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayConnected()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12086);

	UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHeadMountedDisplayFunctionLibrary::HasValidTrackingPosition()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12084);

	UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UHeadMountedDisplayFunctionLibrary::GetWorldToMetersScale(class UObject* WorldContext)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12081);

	UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bUseFocus                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasFocus                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_GetVRFocusState(bool* bUseFocus, bool* bHasFocus)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12078);

	UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bUseFocus != nullptr)
		*bUseFocus = params.bUseFocus;
	if (bHasFocus != nullptr)
		*bHasFocus = params.bHasFocus;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 Origin                         (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          LeftFOV                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RightFOV                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TopFOV                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          BottomFOV                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NearPlane                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FarPlane                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive, int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12066);

	UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (LeftFOV != nullptr)
		*LeftFOV = params.LeftFOV;
	if (RightFOV != nullptr)
		*RightFOV = params.RightFOV;
	if (TopFOV != nullptr)
		*TopFOV = params.TopFOV;
	if (BottomFOV != nullptr)
		*BottomFOV = params.BottomFOV;
	if (Distance != nullptr)
		*Distance = params.Distance;
	if (NearPlane != nullptr)
		*NearPlane = params.NearPlane;
	if (FarPlane != nullptr)
		*FarPlane = params.FarPlane;
	if (IsActive != nullptr)
		*IsActive = params.IsActive;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
// ()
// Parameters:
// TEnumAsByte<HeadMountedDisplay_EHMDTrackingOrigin> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<HeadMountedDisplay_EHMDTrackingOrigin> UHeadMountedDisplayFunctionLibrary::GetTrackingOrigin()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12064);

	UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UHeadMountedDisplayFunctionLibrary::GetScreenPercentage()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12062);

	UHeadMountedDisplayFunctionLibrary_GetScreenPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 CameraOrigin                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                CameraRotation                 (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          HFOV                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          VFOV                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CameraDistance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NearPlane                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FarPlane                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12054);

	UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CameraOrigin != nullptr)
		*CameraOrigin = params.CameraOrigin;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
	if (HFOV != nullptr)
		*HFOV = params.HFOV;
	if (VFOV != nullptr)
		*VFOV = params.VFOV;
	if (CameraDistance != nullptr)
		*CameraDistance = params.CameraDistance;
	if (NearPlane != nullptr)
		*NearPlane = params.NearPlane;
	if (FarPlane != nullptr)
		*FarPlane = params.FarPlane;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FRotator                DeviceRotation                 (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 DevicePosition                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12051);

	UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DeviceRotation != nullptr)
		*DeviceRotation = params.DeviceRotation;
	if (DevicePosition != nullptr)
		*DevicePosition = params.DevicePosition;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UHeadMountedDisplayFunctionLibrary::GetNumOfTrackingSensors()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12049);

	UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
// ()
// Parameters:
// TEnumAsByte<HeadMountedDisplay_EHMDWornState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<HeadMountedDisplay_EHMDWornState> UHeadMountedDisplayFunctionLibrary::GetHMDWornState()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12047);

	UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12045);

	UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_EnableLowPersistenceMode(bool bEnable)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12043);

	UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
// (Final)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHeadMountedDisplayFunctionLibrary::EnableHMD(bool bEnable)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12040);

	UHeadMountedDisplayFunctionLibrary_EnableHMD_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionControllerComponent.IsTracked
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMotionControllerComponent::IsTracked()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12719);

	UMotionControllerComponent_IsTracked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMotionTrackedDeviceFunctionLibrary::STATIC_SetIsControllerMotionTrackingEnabledByDefault(bool Enable)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12758);

	UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
// (Final, BlueprintAuthorityOnly)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForDevice(int PlayerIndex, InputCore_EControllerHand Hand)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12753);

	UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Params params;
	params.PlayerIndex = PlayerIndex;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
// (BlueprintCosmetic)
// Parameters:
// class UMotionControllerComponent* MotionControllerComponent      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12750);

	UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Params params;
	params.MotionControllerComponent = MotionControllerComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackedDeviceCountManagementNecessary()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12748);

	UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMotionTrackedDeviceFunctionLibrary::GetMotionTrackingEnabledControllerCount()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12746);

	UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMotionTrackedDeviceFunctionLibrary::GetMaximumMotionTrackedControllerCount()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12744);

	UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
// (Final, BlueprintAuthorityOnly)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfDevice(int PlayerIndex, InputCore_EControllerHand Hand)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12739);

	UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Params params;
	params.PlayerIndex = PlayerIndex;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
// (BlueprintCosmetic)
// Parameters:
// class UMotionControllerComponent* MotionControllerComponent      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12736);

	UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Params params;
	params.MotionControllerComponent = MotionControllerComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingOfDevice(int PlayerIndex, InputCore_EControllerHand Hand)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12732);

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Params params;
	params.PlayerIndex = PlayerIndex;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingOfControllersForPlayer(int PlayerIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12730);

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingOfAllControllers()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12729);

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UMotionControllerComponent* MotionControllerComponent      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12727);

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Params params;
	params.MotionControllerComponent = MotionControllerComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
