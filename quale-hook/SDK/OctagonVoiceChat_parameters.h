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

// Function OctagonVoiceChat.VoiceAudioComponent.QueueVoiceData
struct UVoiceAudioComponent_QueueVoiceData_Params
{
	TArray<unsigned char>                              CompressedVoiceData;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function OctagonVoiceChat.VoiceAudioComponent.InitializeVoiceAudioComponent
struct UVoiceAudioComponent_InitializeVoiceAudioComponent_Params
{
};

// Function OctagonVoiceChat.VoiceChatComponent.GetCompressedVoiceData
struct UVoiceChatComponent_GetCompressedVoiceData_Params
{
	TArray<unsigned char>                              OutBuffer;                                                 // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OctagonVoiceChat.VoiceChatComponent.GetAllPlayersInRange
struct UVoiceChatComponent_GetAllPlayersInRange_Params
{
	float                                              requiredDistance;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class APawn*>                               pawnList;                                                  // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function OctagonVoiceChat.VoiceChatComponent.BlueprintShutDownVoiceChat
struct UVoiceChatComponent_BlueprintShutDownVoiceChat_Params
{
};

// Function OctagonVoiceChat.VoiceChatComponent.BlueprintInitializeVoiceChat
struct UVoiceChatComponent_BlueprintInitializeVoiceChat_Params
{
};

// Function OctagonVoiceChat.VoiceDecoder.DecompressVoiceData
struct UVoiceDecoder_DecompressVoiceData_Params
{
	TArray<unsigned char>                              InCompressedVoiceData;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                InCompressedVoiceBytes;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              OutDecompressedVoiceData;                                  // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                OutDecompressedVoiceBytes;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OctagonVoiceChat.VoiceDecoder.CreateVoiceDecoder
struct UVoiceDecoder_CreateVoiceDecoder_Params
{
	class UObject*                                     Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVoiceDecoder*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
