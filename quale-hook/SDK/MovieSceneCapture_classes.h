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

// Class MovieSceneCapture.MovieSceneCaptureProtocolSettings
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneCaptureProtocolSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(587);
		return ptr;
	}



};

// Class MovieSceneCapture.BmpImageCaptureSettings
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBmpImageCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(590);
		return ptr;
	}



};

// Class MovieSceneCapture.FrameGrabberProtocolSettings
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UFrameGrabberProtocolSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	unsigned char                                      UnknownData_G0H5[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(589);
		return ptr;
	}



};

// Class MovieSceneCapture.ImageCaptureSettings
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UImageCaptureSettings : public UFrameGrabberProtocolSettings
{
public:
	int                                                CompressionQuality;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UFU1[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(591);
		return ptr;
	}



};

// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneCaptureInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(592);
		return ptr;
	}



};

// Class MovieSceneCapture.MovieSceneCapture
// 0x0218 (FullSize[0x0240] - InheritedSize[0x0028])
class UMovieSceneCapture : public UObject
{
public:
	unsigned char                                      UnknownData_LBB0[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCaptureProtocolID                          CaptureType;                                               // 0x0038(0x0008) (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneCaptureProtocolSettings*          ProtocolSettings;                                          // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneCaptureSettings                  Settings;                                                  // 0x0048(0x0048) (Edit, Config, NativeAccessSpecifierPublic)
	bool                                               bUseSeparateProcess;                                       // 0x0090(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCloseEditorWhenCaptureStarts;                             // 0x0091(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K2N4[0x6];                                     // 0x0092(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AdditionalCommandLineArguments;                            // 0x0098(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InheritedCommandLineArguments;                             // 0x00A8(0x0010) (Edit, ZeroConstructor, Transient, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B2IX[0x188];                                   // 0x00B8(0x0188) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(585);
		return ptr;
	}



};

// Class MovieSceneCapture.LevelCapture
// 0x0020 (FullSize[0x0260] - InheritedSize[0x0240])
class ULevelCapture : public UMovieSceneCapture
{
public:
	unsigned char                                      UnknownData_MQMU[0x4];                                     // 0x0240(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       PrerequisiteActorId;                                       // 0x0244(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5UAL[0xC];                                     // 0x0254(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(593);
		return ptr;
	}



};

// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneCaptureEnvironment : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(594);
		return ptr;
	}



	int GetCaptureFrameNumber();
	float GetCaptureElapsedTime();
};

// Class MovieSceneCapture.VideoCaptureSettings
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UVideoCaptureSettings : public UFrameGrabberProtocolSettings
{
public:
	bool                                               bUseCompression;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZVUT[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CompressionQuality;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VideoCodec;                                                // 0x0038(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(595);
		return ptr;
	}



};

// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
class UAutomatedLevelSequenceCapture : public UMovieSceneCapture
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(586);
		return ptr;
	}



};

// Class MovieSceneCapture.CompositionGraphCaptureSettings
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UCompositionGraphCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	struct FCompositionGraphCapturePasses              IncludeRenderPasses;                                       // 0x0028(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	bool                                               bCaptureFramesInHDR;                                       // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EQTG[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                HDRCompressionQuality;                                     // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<MovieSceneCapture_EHDRCaptureGamut>    CaptureGamut;                                              // 0x0040(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IIDM[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftObjectPath                             PostProcessingMaterial;                                    // 0x0048(0x0018) (Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(588);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
