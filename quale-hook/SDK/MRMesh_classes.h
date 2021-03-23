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

// Class MRMesh.MeshReconstructorBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMeshReconstructorBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(597);
		return ptr;
	}



	void STATIC_StopReconstruction();
	void STATIC_StartReconstruction();
	void STATIC_PauseReconstruction();
	bool IsReconstructionStarted();
	bool IsReconstructionPaused();
	void STATIC_DisconnectMRMesh();
	struct FMRMeshConfiguration ConnectMRMesh(class UMRMeshComponent* Mesh);
};

// Class MRMesh.MRMeshComponent
// 0x0050 (FullSize[0x06E0] - InheritedSize[0x0690])
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_9LYC[0x8];                                     // 0x0690(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          Material;                                                  // 0x0698(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMeshReconstructorBase*                      MeshReconstructor;                                         // 0x06A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bEnableCollision;                                          // 0x06A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2SUH[0x7];                                     // 0x06A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UBodySetup*>                          BodySetups;                                                // 0x06B0(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TEGU[0x20];                                    // 0x06C0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(598);
		return ptr;
	}



	class UMeshReconstructorBase* GetReconstructor();
	void STATIC_ConnectReconstructor(class UMeshReconstructorBase* Reconstructor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
