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

// Function MediaAssets.MediaSource.Validate
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaSource::Validate()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27275);

	UMediaSource_Validate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaSource.GetUrl
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMediaSource::GetUrl()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27273);

	UMediaSource_GetUrl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.FileMediaSource.SetFilePath
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFileMediaSource::STATIC_SetFilePath(const struct FString& Path)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27278);

	UFileMediaSource_SetFilePath_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FMediaCaptureDevice> OutDevices                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            Filter                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaBlueprintFunctionLibrary::STATIC_EnumerateWebcamCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27290);

	UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDevices != nullptr)
		*OutDevices = params.OutDevices;

}


// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FMediaCaptureDevice> OutDevices                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            Filter                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaBlueprintFunctionLibrary::STATIC_EnumerateVideoCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27286);

	UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDevices != nullptr)
		*OutDevices = params.OutDevices;

}


// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FMediaCaptureDevice> OutDevices                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            Filter                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaBlueprintFunctionLibrary::STATIC_EnumerateAudioCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27282);

	UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDevices != nullptr)
		*OutDevices = params.OutDevices;

}


// Function MediaAssets.MediaPlayer.SupportsSeeking
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SupportsSeeking()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27477);

	UMediaPlayer_SupportsSeeking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SupportsScrubbing
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SupportsScrubbing()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27475);

	UMediaPlayer_SupportsScrubbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SupportsRate
// (Final, BlueprintAuthorityOnly)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Unthinned                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SupportsRate(float Rate, bool Unthinned)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27471);

	UMediaPlayer_SupportsRate_Params params;
	params.Rate = Rate;
	params.Unthinned = Unthinned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetViewRotation
// (Final, BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// struct FRotator                Rotation                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           Absolute                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetViewRotation(const struct FRotator& Rotation, bool Absolute)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27467);

	UMediaPlayer_SetViewRotation_Params params;
	params.Rotation = Rotation;
	params.Absolute = Absolute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetViewField
// (Final, BlueprintCosmetic)
// Parameters:
// float                          Horizontal                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Vertical                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Absolute                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetViewField(float Horizontal, float Vertical, bool Absolute)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27462);

	UMediaPlayer_SetViewField_Params params;
	params.Horizontal = Horizontal;
	params.Vertical = Vertical;
	params.Absolute = Absolute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FrameRate                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetVideoTrackFrameRate(int TrackIndex, int FormatIndex, float FrameRate)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27457);

	UMediaPlayer_SetVideoTrackFrameRate_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;
	params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetTrackFormat
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// MediaAssets_EMediaPlayerTrack  TrackType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetTrackFormat(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27451);

	UMediaPlayer_SetTrackFormat_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetRate
// (BlueprintAuthorityOnly)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetRate(float Rate)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27448);

	UMediaPlayer_SetRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetLooping
// (Final)
// Parameters:
// bool                           Looping                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetLooping(bool Looping)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27445);

	UMediaPlayer_SetLooping_Params params;
	params.Looping = Looping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetDesiredPlayerName
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   PlayerName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlayer::STATIC_SetDesiredPlayerName(const struct FName& PlayerName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27443);

	UMediaPlayer_SetDesiredPlayerName_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaAssets.MediaPlayer.SelectTrack
// (BlueprintCosmetic)
// Parameters:
// MediaAssets_EMediaPlayerTrack  TrackType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SelectTrack(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27438);

	UMediaPlayer_SelectTrack_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Seek
// (BlueprintCosmetic)
// Parameters:
// struct FTimespan               Time                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Seek(const struct FTimespan& Time)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27435);

	UMediaPlayer_Seek_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Rewind
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Rewind()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27433);

	UMediaPlayer_Rewind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Reopen
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Reopen()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27431);

	UMediaPlayer_Reopen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Previous
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Previous()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27429);

	UMediaPlayer_Previous_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Play
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Play()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27427);

	UMediaPlayer_Play_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Pause
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Pause()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27425);

	UMediaPlayer_Pause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenUrl
// ()
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenUrl(const struct FString& URL)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27422);

	UMediaPlayer_OpenUrl_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenSource
// (BlueprintCosmetic)
// Parameters:
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenSource(class UMediaSource* MediaSource)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27419);

	UMediaPlayer_OpenSource_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenPlaylistIndex
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// class UMediaPlaylist*          InPlaylist                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27415);

	UMediaPlayer_OpenPlaylistIndex_Params params;
	params.InPlaylist = InPlaylist;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenPlaylist
// (BlueprintCosmetic)
// Parameters:
// class UMediaPlaylist*          InPlaylist                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenPlaylist(class UMediaPlaylist* InPlaylist)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27412);

	UMediaPlayer_OpenPlaylist_Params params;
	params.InPlaylist = InPlaylist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenFile
// ()
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenFile(const struct FString& FilePath)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27409);

	UMediaPlayer_OpenFile_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Next
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Next()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27407);

	UMediaPlayer_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsReady
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsReady()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27405);

	UMediaPlayer_IsReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPreparing
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsPreparing()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27403);

	UMediaPlayer_IsPreparing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPlaying
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsPlaying()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27401);

	UMediaPlayer_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPaused
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsPaused()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27399);

	UMediaPlayer_IsPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsLooping
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsLooping()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27397);

	UMediaPlayer_IsLooping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsConnecting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsConnecting()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27395);

	UMediaPlayer_IsConnecting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsBuffering
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsBuffering()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27393);

	UMediaPlayer_IsBuffering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.HasError
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::HasError()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27391);

	UMediaPlayer_HasError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetViewRotation
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UMediaPlayer::GetViewRotation()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27389);

	UMediaPlayer_GetViewRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackType
// (BlueprintCosmetic)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMediaPlayer::GetVideoTrackType(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27385);

	UMediaPlayer_GetVideoTrackType_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
// (BlueprintCosmetic)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFloatRange             ReturnValue                    (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFloatRange UMediaPlayer::GetVideoTrackFrameRates(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27381);

	UMediaPlayer_GetVideoTrackFrameRates_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
// (BlueprintCosmetic)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaPlayer::GetVideoTrackFrameRate(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27377);

	UMediaPlayer_GetVideoTrackFrameRate_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
// (BlueprintCosmetic)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FIntPoint               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntPoint UMediaPlayer::GetVideoTrackDimensions(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27373);

	UMediaPlayer_GetVideoTrackDimensions_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
// (BlueprintCosmetic)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaPlayer::GetVideoTrackAspectRatio(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27369);

	UMediaPlayer_GetVideoTrackAspectRatio_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaPlayer::GetVerticalFieldOfView()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27367);

	UMediaPlayer_GetVerticalFieldOfView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetUrl
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMediaPlayer::GetUrl()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27365);

	UMediaPlayer_GetUrl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTrackLanguage
// (BlueprintCosmetic)
// Parameters:
// MediaAssets_EMediaPlayerTrack  TrackType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMediaPlayer::GetTrackLanguage(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27360);

	UMediaPlayer_GetTrackLanguage_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTrackFormat
// (BlueprintCosmetic)
// Parameters:
// MediaAssets_EMediaPlayerTrack  TrackType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetTrackFormat(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27355);

	UMediaPlayer_GetTrackFormat_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTrackDisplayName
// (BlueprintCosmetic)
// Parameters:
// MediaAssets_EMediaPlayerTrack  TrackType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMediaPlayer::GetTrackDisplayName(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27350);

	UMediaPlayer_GetTrackDisplayName_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTime
// ()
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FTimespan UMediaPlayer::GetTime()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27348);

	UMediaPlayer_GetTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetSupportedRates
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FFloatRange>     OutRates                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           Unthinned                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlayer::STATIC_GetSupportedRates(TArray<struct FFloatRange>* OutRates, bool Unthinned)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27344);

	UMediaPlayer_GetSupportedRates_Params params;
	params.Unthinned = Unthinned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutRates != nullptr)
		*OutRates = params.OutRates;

}


// Function MediaAssets.MediaPlayer.GetSelectedTrack
// (BlueprintAuthorityOnly)
// Parameters:
// MediaAssets_EMediaPlayerTrack  TrackType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetSelectedTrack(MediaAssets_EMediaPlayerTrack TrackType)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27340);

	UMediaPlayer_GetSelectedTrack_Params params;
	params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaPlayer::GetRate()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27338);

	UMediaPlayer_GetRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetPlaylistIndex
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetPlaylistIndex()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27336);

	UMediaPlayer_GetPlaylistIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetPlaylist
// ()
// Parameters:
// class UMediaPlaylist*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaPlaylist* UMediaPlayer::GetPlaylist()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27334);

	UMediaPlayer_GetPlaylist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetPlayerName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UMediaPlayer::GetPlayerName()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27332);

	UMediaPlayer_GetPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetNumTracks
// (BlueprintAuthorityOnly)
// Parameters:
// MediaAssets_EMediaPlayerTrack  TrackType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetNumTracks(MediaAssets_EMediaPlayerTrack TrackType)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27328);

	UMediaPlayer_GetNumTracks_Params params;
	params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetNumTrackFormats
// (BlueprintCosmetic)
// Parameters:
// MediaAssets_EMediaPlayerTrack  TrackType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetNumTrackFormats(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27323);

	UMediaPlayer_GetNumTrackFormats_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetMediaName
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMediaPlayer::GetMediaName()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27321);

	UMediaPlayer_GetMediaName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaPlayer::GetHorizontalFieldOfView()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27319);

	UMediaPlayer_GetHorizontalFieldOfView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetDuration
// ()
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FTimespan UMediaPlayer::GetDuration()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27317);

	UMediaPlayer_GetDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetDesiredPlayerName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UMediaPlayer::GetDesiredPlayerName()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27315);

	UMediaPlayer_GetDesiredPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetAudioTrackType
// (BlueprintCosmetic)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMediaPlayer::GetAudioTrackType(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27311);

	UMediaPlayer_GetAudioTrackType_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
// (BlueprintCosmetic)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetAudioTrackSampleRate(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27307);

	UMediaPlayer_GetAudioTrackSampleRate_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetAudioTrackChannels
// (BlueprintCosmetic)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetAudioTrackChannels(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27303);

	UMediaPlayer_GetAudioTrackChannels_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Close
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMediaPlayer::STATIC_Close()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27302);

	UMediaPlayer_Close_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaAssets.MediaPlayer.CanPlayUrl
// ()
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::CanPlayUrl(const struct FString& URL)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27299);

	UMediaPlayer_CanPlayUrl_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.CanPlaySource
// (BlueprintCosmetic)
// Parameters:
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::CanPlaySource(class UMediaSource* MediaSource)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27296);

	UMediaPlayer_CanPlaySource_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.CanPause
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::CanPause()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27294);

	UMediaPlayer_CanPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Replace
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaSource*            Replacement                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::Replace(int Index, class UMediaSource* Replacement)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27532);

	UMediaPlaylist_Replace_Params params;
	params.Index = Index;
	params.Replacement = Replacement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.RemoveAt
// (BlueprintAuthorityOnly)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::RemoveAt(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27529);

	UMediaPlaylist_RemoveAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Remove
// (BlueprintCosmetic)
// Parameters:
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::Remove(class UMediaSource* MediaSource)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27526);

	UMediaPlaylist_Remove_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Num
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlaylist::Num()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27524);

	UMediaPlaylist_Num_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Insert
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlaylist::STATIC_Insert(class UMediaSource* MediaSource, int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27521);

	UMediaPlaylist_Insert_Params params;
	params.MediaSource = MediaSource;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaAssets.MediaPlaylist.GetRandom
// (BlueprintCosmetic)
// Parameters:
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaSource*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaSource* UMediaPlaylist::GetRandom(int* OutIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27518);

	UMediaPlaylist_GetRandom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.GetPrevious
// (BlueprintCosmetic)
// Parameters:
// int                            InOutIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaSource*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaSource* UMediaPlaylist::GetPrevious(int* InOutIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27515);

	UMediaPlaylist_GetPrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InOutIndex != nullptr)
		*InOutIndex = params.InOutIndex;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.GetNext
// (BlueprintCosmetic)
// Parameters:
// int                            InOutIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaSource*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaSource* UMediaPlaylist::GetNext(int* InOutIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27512);

	UMediaPlaylist_GetNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InOutIndex != nullptr)
		*InOutIndex = params.InOutIndex;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Get
// (BlueprintCosmetic)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaSource*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaSource* UMediaPlaylist::Get(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27509);

	UMediaPlaylist_Get_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.AddUrl
// ()
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::AddUrl(const struct FString& URL)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27506);

	UMediaPlaylist_AddUrl_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.AddFile
// ()
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::AddFile(const struct FString& FilePath)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27503);

	UMediaPlaylist_AddFile_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Add
// (BlueprintCosmetic)
// Parameters:
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::Add(class UMediaSource* MediaSource)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27500);

	UMediaPlaylist_Add_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaTexture.GetWidth
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaTexture::GetWidth()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27546);

	UMediaTexture_GetWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaTexture.GetHeight
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaTexture::GetHeight()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27544);

	UMediaTexture_GetHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaTexture.GetAspectRatio
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaTexture::GetAspectRatio()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27542);

	UMediaTexture_GetAspectRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
