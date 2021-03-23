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

// Enum IOSRuntimeSettings.EIOSMetalShaderStandard
enum class IOSRuntimeSettings_EIOSMetalShaderStandard : uint8_t
{
	EIOSMetalShaderStandard__IOSMetalSLStandard_1 = 0,
	EIOSMetalShaderStandard__IOSMetalSLStandard_101 = 1,
	EIOSMetalShaderStandard__IOSMetalSLStandard_102 = 2,
	EIOSMetalShaderStandard__IOSMetalSLStandard_2 = 3,
	EIOSMetalShaderStandard__IOSMetalSLStandard_MAX = 4,

};

// Enum IOSRuntimeSettings.EIOSVersion
enum class IOSRuntimeSettings_EIOSVersion : uint8_t
{
	EIOSVersion__IOS               = 0,
	EIOSVersion__IOS01             = 1,
	EIOSVersion__IOS02             = 2,
	EIOSVersion__IOS03             = 3,
	EIOSVersion__IOS04             = 4,
	EIOSVersion__IOS05             = 5,
	EIOSVersion__IOS_MAX           = 6,

};

// Enum IOSRuntimeSettings.EPowerUsageFrameRateLock
enum class IOSRuntimeSettings_EPowerUsageFrameRateLock : uint8_t
{
	EPowerUsageFrameRateLock__PUFRL_None = 0,
	EPowerUsageFrameRateLock__PUFRL = 1,
	EPowerUsageFrameRateLock__PUFRL01 = 2,
	EPowerUsageFrameRateLock__PUFRL02 = 3,
	EPowerUsageFrameRateLock__PUFRL_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct IOSRuntimeSettings.IOSBuildResourceFilePath
// 0x0010
struct FIOSBuildResourceFilePath
{
	struct FString                                     FilePath;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct IOSRuntimeSettings.IOSBuildResourceDirectory
// 0x0010
struct FIOSBuildResourceDirectory
{
	struct FString                                     Path;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
