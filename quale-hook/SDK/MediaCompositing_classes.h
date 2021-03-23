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

// Class MediaCompositing.MediaPlane
// 0x0008 (FullSize[0x0370] - InheritedSize[0x0368])
class AMediaPlane : public AActor
{
public:
	class UMediaPlaneComponent*                        MediaPlane;                                                // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1633);
		return ptr;
	}



};

// Class MediaCompositing.MediaPlaneComponent
// 0x00D0 (FullSize[0x0760] - InheritedSize[0x0690])
class UMediaPlaneComponent : public UPrimitiveComponent
{
public:
	struct FMediaPlaneParameters                       Plane;                                                     // 0x0690(0x0038) (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_66TX[0x98];                                    // 0x06C8(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1634);
		return ptr;
	}



	void STATIC_SetMediaPlane(const struct FMediaPlaneParameters& Plane);
	void STATIC_OnRenderTextureChanged();
	struct FMediaPlaneParameters GetPlane();
};

// Class MediaCompositing.MediaPlaneFrustumComponent
// 0x0000 (FullSize[0x0690] - InheritedSize[0x0690])
class UMediaPlaneFrustumComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1635);
		return ptr;
	}



};

// Class MediaCompositing.MovieSceneMediaSection
// 0x0020 (FullSize[0x0130] - InheritedSize[0x0110])
class UMovieSceneMediaSection : public UMovieSceneSection
{
public:
	struct FString                                     Proxy;                                                     // 0x0110(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                                MediaSource;                                               // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ATRV[0x8];                                     // 0x0128(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1636);
		return ptr;
	}



};

// Class MediaCompositing.MovieSceneMediaTrack
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UMovieSceneMediaTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1637);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
