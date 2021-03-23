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

// Class GeometryCache.GeometryCacheTrack
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UGeometryCacheTrack : public UObject
{
public:
	unsigned char                                      UnknownData_1J89[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(571);
		return ptr;
	}



};

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// 0x0050 (FullSize[0x00A0] - InheritedSize[0x0050])
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
public:
	unsigned char                                      UnknownData_95HR[0x50];                                    // 0x0050(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(573);
		return ptr;
	}



	void STATIC_SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// 0x0050 (FullSize[0x00A0] - InheritedSize[0x0050])
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
public:
	unsigned char                                      UnknownData_GL7H[0x50];                                    // 0x0050(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(574);
		return ptr;
	}



	void STATIC_SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};

// Class GeometryCache.GeometryCache
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UGeometryCache : public UObject
{
public:
	unsigned char                                      UnknownData_X58A[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInterface*>                  Materials;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<class UGeometryCacheTrack*>                 Tracks;                                                    // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DBH8[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(568);
		return ptr;
	}



};

// Class GeometryCache.GeometryCacheActor
// 0x0008 (FullSize[0x0370] - InheritedSize[0x0368])
class AGeometryCacheActor : public AActor
{
public:
	class UGeometryCacheComponent*                     GeometryCacheComponent;                                    // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(569);
		return ptr;
	}



	class UGeometryCacheComponent* GetGeometryCacheComponent();
};

// Class GeometryCache.GeometryCacheComponent
// 0x0078 (FullSize[0x0730] - InheritedSize[0x06B8])
class UGeometryCacheComponent : public UMeshComponent
{
public:
	class UGeometryCache*                              GeometryCache;                                             // 0x06B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRunning;                                                  // 0x06C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bLooping;                                                  // 0x06C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JSYU[0x2];                                     // 0x06C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartTimeOffset;                                           // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PlaybackSpeed;                                             // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumTracks;                                                 // 0x06CC(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ElapsedTime;                                               // 0x06D0(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IUTY[0x5C];                                    // 0x06D4(0x005C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(570);
		return ptr;
	}



	void STATIC_Stop();
	void STATIC_SetStartTimeOffset(float NewStartTimeOffset);
	void STATIC_SetPlaybackSpeed(float NewPlaybackSpeed);
	void STATIC_SetLooping(bool bNewLooping);
	bool SetGeometryCache(class UGeometryCache* NewGeomCache);
	void STATIC_PlayReversedFromEnd();
	void STATIC_PlayReversed();
	void STATIC_PlayFromStart();
	void STATIC_Play();
	void STATIC_Pause();
	bool IsPlayingReversed();
	bool IsPlaying();
	bool IsLooping();
	float GetStartTimeOffset();
	float GetPlaybackSpeed();
};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// 0x0028 (FullSize[0x0078] - InheritedSize[0x0050])
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
public:
	uint32_t                                           NumMeshSamples;                                            // 0x0050(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KKJV[0x24];                                    // 0x0054(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(572);
		return ptr;
	}



	void STATIC_AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
