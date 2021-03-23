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

// Function OctagonVoiceChat.VoiceAudioComponent.QueueVoiceData
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<unsigned char>          CompressedVoiceData            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UVoiceAudioComponent::STATIC_QueueVoiceData(TArray<unsigned char> CompressedVoiceData)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28905);

	UVoiceAudioComponent_QueueVoiceData_Params params;
	params.CompressedVoiceData = CompressedVoiceData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OctagonVoiceChat.VoiceAudioComponent.InitializeVoiceAudioComponent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UVoiceAudioComponent::STATIC_InitializeVoiceAudioComponent()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28904);

	UVoiceAudioComponent_InitializeVoiceAudioComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OctagonVoiceChat.VoiceChatComponent.GetCompressedVoiceData
// ()
// Parameters:
// TArray<unsigned char>          OutBuffer                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoiceChatComponent::GetCompressedVoiceData(TArray<unsigned char>* OutBuffer)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28915);

	UVoiceChatComponent_GetCompressedVoiceData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutBuffer != nullptr)
		*OutBuffer = params.OutBuffer;


	return params.ReturnValue;
}


// Function OctagonVoiceChat.VoiceChatComponent.GetAllPlayersInRange
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          requiredDistance               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class APawn*>           pawnList                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UVoiceChatComponent::STATIC_GetAllPlayersInRange(float requiredDistance, TArray<class APawn*>* pawnList)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28911);

	UVoiceChatComponent_GetAllPlayersInRange_Params params;
	params.requiredDistance = requiredDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (pawnList != nullptr)
		*pawnList = params.pawnList;

}


// Function OctagonVoiceChat.VoiceChatComponent.BlueprintShutDownVoiceChat
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UVoiceChatComponent::STATIC_BlueprintShutDownVoiceChat()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28910);

	UVoiceChatComponent_BlueprintShutDownVoiceChat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OctagonVoiceChat.VoiceChatComponent.BlueprintInitializeVoiceChat
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UVoiceChatComponent::STATIC_BlueprintInitializeVoiceChat()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28909);

	UVoiceChatComponent_BlueprintInitializeVoiceChat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OctagonVoiceChat.VoiceDecoder.DecompressVoiceData
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<unsigned char>          InCompressedVoiceData          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int                            InCompressedVoiceBytes         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          OutDecompressedVoiceData       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            OutDecompressedVoiceBytes      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoiceDecoder::STATIC_DecompressVoiceData(TArray<unsigned char> InCompressedVoiceData, int InCompressedVoiceBytes, TArray<unsigned char>* OutDecompressedVoiceData, int* OutDecompressedVoiceBytes)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28926);

	UVoiceDecoder_DecompressVoiceData_Params params;
	params.InCompressedVoiceData = InCompressedVoiceData;
	params.InCompressedVoiceBytes = InCompressedVoiceBytes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDecompressedVoiceData != nullptr)
		*OutDecompressedVoiceData = params.OutDecompressedVoiceData;
	if (OutDecompressedVoiceBytes != nullptr)
		*OutDecompressedVoiceBytes = params.OutDecompressedVoiceBytes;

}


// Function OctagonVoiceChat.VoiceDecoder.CreateVoiceDecoder
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 Owner                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVoiceDecoder*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVoiceDecoder* UVoiceDecoder::CreateVoiceDecoder(class UObject* Owner)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28923);

	UVoiceDecoder_CreateVoiceDecoder_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
