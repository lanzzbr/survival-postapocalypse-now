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

// Class OctagonVoiceChat.VoiceAudioComponent
// 0x0020 (FullSize[0x0710] - InheritedSize[0x06F0])
class UVoiceAudioComponent : public UAudioComponent
{
public:
	unsigned char                                      UnknownData_0TMV[0x8];                                     // 0x06F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVoiceDecoder*                               VoiceDecoder;                                              // 0x06F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HNW9[0x10];                                    // 0x0700(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1592);
		return ptr;
	}



	void STATIC_QueueVoiceData(TArray<unsigned char> CompressedVoiceData);
	void STATIC_InitializeVoiceAudioComponent();
};

// Class OctagonVoiceChat.VoiceChatComponent
// 0x00A0 (FullSize[0x0190] - InheritedSize[0x00F0])
class UVoiceChatComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    VoiceDataAvailableEvent;                                   // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    StartedTalkingEvent;                                       // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    StoppedTalkingEvent;                                       // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              StopTalkingTimeThreshold;                                  // 0x0120(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WV4K[0x6C];                                    // 0x0124(0x006C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1593);
		return ptr;
	}



	bool GetCompressedVoiceData(TArray<unsigned char>* OutBuffer);
	void STATIC_GetAllPlayersInRange(float requiredDistance, TArray<class APawn*>* pawnList);
	void STATIC_BlueprintShutDownVoiceChat();
	void STATIC_BlueprintInitializeVoiceChat();
};

// Class OctagonVoiceChat.VoiceDecoder
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UVoiceDecoder : public UObject
{
public:
	unsigned char                                      UnknownData_Z3AQ[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1594);
		return ptr;
	}



	void STATIC_DecompressVoiceData(TArray<unsigned char> InCompressedVoiceData, int InCompressedVoiceBytes, TArray<unsigned char>* OutDecompressedVoiceData, int* OutDecompressedVoiceBytes);
	class UVoiceDecoder* CreateVoiceDecoder(class UObject* Owner);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
