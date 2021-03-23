﻿#pragma once

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

// Class MediaAssets.MediaSource
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UMediaSource : public UObject
{
public:
	unsigned char                                      UnknownData_T7AM[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1473);
		return ptr;
	}



	bool Validate();
	struct FString GetUrl();
};

// Class MediaAssets.BaseMediaSource
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UBaseMediaSource : public UMediaSource
{
public:
	struct FName                                       PlayerName;                                                // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1474);
		return ptr;
	}



};

// Class MediaAssets.FileMediaSource
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UFileMediaSource : public UBaseMediaSource
{
public:
	struct FString                                     FilePath;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PrecacheFile;                                              // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U2E6[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1475);
		return ptr;
	}



	void STATIC_SetFilePath(const struct FString& Path);
};

// Class MediaAssets.MediaBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1476);
		return ptr;
	}



	void STATIC_EnumerateWebcamCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter);
	void STATIC_EnumerateVideoCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter);
	void STATIC_EnumerateAudioCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter);
};

// Class MediaAssets.MediaPlayer
// 0x0168 (FullSize[0x0190] - InheritedSize[0x0028])
class UMediaPlayer : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnEndReached;                                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMediaClosed;                                             // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMediaOpened;                                             // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMediaOpenFailed;                                         // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlaybackResumed;                                         // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlaybackSuspended;                                       // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSeekCompleted;                                           // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTracksChanged;                                           // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FTimespan                                   CacheAhead;                                                // 0x00A8(0x0008) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                                   CacheBehind;                                               // 0x00B0(0x0008) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                                   CacheBehindGame;                                           // 0x00B8(0x0008) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               NativeAudioOut;                                            // 0x00C0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PlayOnOpen;                                                // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6RSM[0x2];                                     // 0x00C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Shuffle : 1;                                               // 0x00C4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Loop : 1;                                                  // 0x00C4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_92K5[0x3];                                     // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMediaPlaylist*                              Playlist;                                                  // 0x00C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                PlaylistIndex;                                             // 0x00D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HorizontalFieldOfView;                                     // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              VerticalFieldOfView;                                       // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                                    ViewRotation;                                              // 0x00DC(0x000C) (Edit, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q2GX[0x88];                                    // 0x00E8(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       PlayerGuid;                                                // 0x0170(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0YM8[0x10];                                    // 0x0180(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1477);
		return ptr;
	}



	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	bool SetViewRotation(const struct FRotator& Rotation, bool Absolute);
	bool SetViewField(float Horizontal, float Vertical, bool Absolute);
	bool SetVideoTrackFrameRate(int TrackIndex, int FormatIndex, float FrameRate);
	bool SetTrackFormat(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex, int FormatIndex);
	bool SetRate(float Rate);
	bool SetLooping(bool Looping);
	void STATIC_SetDesiredPlayerName(const struct FName& PlayerName);
	bool SelectTrack(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex);
	bool Seek(const struct FTimespan& Time);
	bool Rewind();
	bool Reopen();
	bool Previous();
	bool Play();
	bool Pause();
	bool OpenUrl(const struct FString& URL);
	bool OpenSource(class UMediaSource* MediaSource);
	bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int Index);
	bool OpenPlaylist(class UMediaPlaylist* InPlaylist);
	bool OpenFile(const struct FString& FilePath);
	bool Next();
	bool IsReady();
	bool IsPreparing();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	bool IsConnecting();
	bool IsBuffering();
	bool HasError();
	struct FRotator GetViewRotation();
	struct FString GetVideoTrackType(int TrackIndex, int FormatIndex);
	struct FFloatRange GetVideoTrackFrameRates(int TrackIndex, int FormatIndex);
	float GetVideoTrackFrameRate(int TrackIndex, int FormatIndex);
	struct FIntPoint GetVideoTrackDimensions(int TrackIndex, int FormatIndex);
	float GetVideoTrackAspectRatio(int TrackIndex, int FormatIndex);
	float GetVerticalFieldOfView();
	struct FString GetUrl();
	struct FString GetTrackLanguage(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex);
	int GetTrackFormat(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex);
	struct FText GetTrackDisplayName(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex);
	struct FTimespan GetTime();
	void STATIC_GetSupportedRates(TArray<struct FFloatRange>* OutRates, bool Unthinned);
	int GetSelectedTrack(MediaAssets_EMediaPlayerTrack TrackType);
	float GetRate();
	int GetPlaylistIndex();
	class UMediaPlaylist* GetPlaylist();
	struct FName GetPlayerName();
	int GetNumTracks(MediaAssets_EMediaPlayerTrack TrackType);
	int GetNumTrackFormats(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex);
	struct FText GetMediaName();
	float GetHorizontalFieldOfView();
	struct FTimespan GetDuration();
	struct FName GetDesiredPlayerName();
	struct FString GetAudioTrackType(int TrackIndex, int FormatIndex);
	int GetAudioTrackSampleRate(int TrackIndex, int FormatIndex);
	int GetAudioTrackChannels(int TrackIndex, int FormatIndex);
	void STATIC_Close();
	bool CanPlayUrl(const struct FString& URL);
	bool CanPlaySource(class UMediaSource* MediaSource);
	bool CanPause();
};

// Class MediaAssets.MediaPlaylist
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UMediaPlaylist : public UObject
{
public:
	unsigned char                                      Loop : 1;                                                  // 0x0028(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JYFS[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMediaSource*>                        Items;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1478);
		return ptr;
	}



	bool Replace(int Index, class UMediaSource* Replacement);
	bool RemoveAt(int Index);
	bool Remove(class UMediaSource* MediaSource);
	int Num();
	void STATIC_Insert(class UMediaSource* MediaSource, int Index);
	class UMediaSource* GetRandom(int* OutIndex);
	class UMediaSource* GetPrevious(int* InOutIndex);
	class UMediaSource* GetNext(int* InOutIndex);
	class UMediaSource* Get(int Index);
	bool AddUrl(const struct FString& URL);
	bool AddFile(const struct FString& FilePath);
	bool Add(class UMediaSource* MediaSource);
};

// Class MediaAssets.MediaSoundComponent
// 0x0060 (FullSize[0x0630] - InheritedSize[0x05D0])
class UMediaSoundComponent : public USynthComponent
{
public:
	MediaAssets_EMediaSoundChannels                    Channels;                                                  // 0x05D0(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QBTP[0x3];                                     // 0x05D0(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_UA9R[0x4];                                     // 0x05D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMediaPlayer*                                MediaPlayer;                                               // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4RQ5[0x50];                                    // 0x05E0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1479);
		return ptr;
	}



};

// Class MediaAssets.MediaTexture
// 0x0070 (FullSize[0x0138] - InheritedSize[0x00C8])
class UMediaTexture : public UTexture
{
public:
	TEnumAsByte<Engine_ETextureAddress>                AddressX;                                                  // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETextureAddress>                AddressY;                                                  // 0x00C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoClear;                                                 // 0x00CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_48LA[0x1];                                     // 0x00CB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                ClearColor;                                                // 0x00CC(0x0010) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CFPP[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMediaPlayer*                                MediaPlayer;                                               // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I0DZ[0x50];                                    // 0x00E8(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1480);
		return ptr;
	}



	int GetWidth();
	int GetHeight();
	float GetAspectRatio();
};

// Class MediaAssets.PlatformMediaSource
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UPlatformMediaSource : public UMediaSource
{
public:
	class UMediaSource*                                MediaSource;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1481);
		return ptr;
	}



};

// Class MediaAssets.StreamMediaSource
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UStreamMediaSource : public UBaseMediaSource
{
public:
	struct FString                                     StreamUrl;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1482);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif