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

// Function MovieScene.MovieSceneEasingFunction.OnEvaluate
struct UMovieSceneEasingFunction_OnEvaluate_Params
{
	float                                              Interp;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.Stop
struct UMovieSceneSequencePlayer_Stop_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.StartPlayingNextTick
struct UMovieSceneSequencePlayer_StartPlayingNextTick_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
struct UMovieSceneSequencePlayer_SetPlayRate_Params
{
	float                                              PlayRate;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
struct UMovieSceneSequencePlayer_SetPlaybackRange_Params
{
	float                                              NewStartTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewEndTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
struct UMovieSceneSequencePlayer_SetPlaybackPosition_Params
{
	float                                              NewPlaybackPosition;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.Scrub
struct UMovieSceneSequencePlayer_Scrub_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
struct UMovieSceneSequencePlayer_PlayReverse_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
struct UMovieSceneSequencePlayer_PlayLooping_Params
{
	int                                                NumLoops;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.Play
struct UMovieSceneSequencePlayer_Play_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.Pause
struct UMovieSceneSequencePlayer_Pause_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.JumpToPosition
struct UMovieSceneSequencePlayer_JumpToPosition_Params
{
	float                                              NewPlaybackPosition;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
struct UMovieSceneSequencePlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.IsPaused
struct UMovieSceneSequencePlayer_IsPaused_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
struct UMovieSceneSequencePlayer_GoToEndAndStop_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
struct UMovieSceneSequencePlayer_GetPlayRate_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
struct UMovieSceneSequencePlayer_GetPlaybackStart_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
struct UMovieSceneSequencePlayer_GetPlaybackPosition_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
struct UMovieSceneSequencePlayer_GetPlaybackEnd_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetLength
struct UMovieSceneSequencePlayer_GetLength_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
struct UMovieSceneSequencePlayer_GetBoundObjects_Params
{
	struct FMovieSceneObjectBindingID                  ObjectBinding;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
struct UMovieSceneSequencePlayer_ChangePlaybackDirection_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
