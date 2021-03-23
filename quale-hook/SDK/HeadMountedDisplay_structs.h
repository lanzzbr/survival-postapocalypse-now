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

// Enum HeadMountedDisplay.ESpectatorScreenMode
enum class HeadMountedDisplay_ESpectatorScreenMode : uint8_t
{
	ESpectatorScreenMode__Disabled = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed = 1,
	ESpectatorScreenMode__Undistorted = 2,
	ESpectatorScreenMode__Distorted = 3,
	ESpectatorScreenMode__SingleEye = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill = 5,
	ESpectatorScreenMode__Texture  = 6,
	ESpectatorScreenMode__TexturePlusEye = 7,
	ESpectatorScreenMode__ESpectatorScreenMode_MAX = 8,

};

// Enum HeadMountedDisplay.EHMDWornState
enum class HeadMountedDisplay_EHMDWornState : uint8_t
{
	EHMDWornState__Unknown         = 0,
	EHMDWornState__Worn            = 1,
	EHMDWornState__NotWorn         = 2,
	EHMDWornState__EHMDWornState_MAX = 3,

};

// Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class HeadMountedDisplay_EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor      = 0,
	EHMDTrackingOrigin__Eye        = 1,
	EHMDTrackingOrigin__EHMDTrackingOrigin_MAX = 2,

};

// Enum HeadMountedDisplay.EOrientPositionSelector
enum class HeadMountedDisplay_EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation = 0,
	EOrientPositionSelector__Position = 1,
	EOrientPositionSelector__OrientationAndPosition = 2,
	EOrientPositionSelector__EOrientPositionSelector_MAX = 3,

};

// Enum HeadMountedDisplay.ETrackingStatus
enum class HeadMountedDisplay_ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked    = 0,
	ETrackingStatus__InertialOnly  = 1,
	ETrackingStatus__Tracked       = 2,
	ETrackingStatus__ETrackingStatus_MAX = 3,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
