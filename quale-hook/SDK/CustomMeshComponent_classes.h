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

// Class CustomMeshComponent.CustomMeshComponent
// 0x0018 (FullSize[0x06D0] - InheritedSize[0x06B8])
class UCustomMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData_NWLR[0x8];                                     // 0x06B8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_YB6H[0x10];                                    // 0x06C0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1664);
		return ptr;
	}



	bool SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);
	void STATIC_ClearCustomMeshTriangles();
	void STATIC_AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
