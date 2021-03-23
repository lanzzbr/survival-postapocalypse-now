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

// Class ActorSequence.ActorSequencePlayer
// 0x0000 (FullSize[0x07F0] - InheritedSize[0x07F0])
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1647);
		return ptr;
	}



};

// Class ActorSequence.ActorSequence
// 0x0030 (FullSize[0x0360] - InheritedSize[0x0330])
class UActorSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                                // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FActorSequenceObjectReferenceMap            ObjectReferences;                                          // 0x0338(0x0020) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8W45[0x8];                                     // 0x0358(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1645);
		return ptr;
	}



};

// Class ActorSequence.ActorSequenceComponent
// 0x0040 (FullSize[0x0130] - InheritedSize[0x00F0])
class UActorSequenceComponent : public UActorComponent
{
public:
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                          // 0x00F0(0x0028) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UActorSequence*                              Sequence;                                                  // 0x0118(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActorSequencePlayer*                        SequencePlayer;                                            // 0x0120(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAutoPlay;                                                 // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YXJW[0x7];                                     // 0x0129(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1646);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
