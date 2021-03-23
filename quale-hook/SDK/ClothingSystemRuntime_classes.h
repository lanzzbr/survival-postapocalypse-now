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

// Class ClothingSystemRuntime.ClothingAssetCustomData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UClothingAssetCustomData : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1462);
		return ptr;
	}



};

// Class ClothingSystemRuntime.ClothingAsset
// 0x0118 (FullSize[0x0160] - InheritedSize[0x0048])
class UClothingAsset : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                               PhysicsAsset;                                              // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClothConfig                                ClothConfig;                                               // 0x0050(0x00BC) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3S3F[0x4];                                     // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FClothLODData>                       LODData;                                                   // 0x0110(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        LodMap;                                                    // 0x0120(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               UsedBoneNames;                                             // 0x0130(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        UsedBoneIndices;                                           // 0x0140(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                ReferenceBoneIndex;                                        // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J897[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClothingAssetCustomData*                    CustomData;                                                // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1463);
		return ptr;
	}



};

// Class ClothingSystemRuntime.ClothingSimulationFactoryNv
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1464);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
