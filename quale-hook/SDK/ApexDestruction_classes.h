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

// Class ApexDestruction.DestructibleActor
// 0x0020 (FullSize[0x0388] - InheritedSize[0x0368])
class ADestructibleActor : public AActor
{
public:
	class UDestructibleComponent*                      DestructibleComponent;                                     // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bAffectNavigation : 1;                                     // 0x0370(0x0001) BIT_FIELD (Edit, BlueprintVisible, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5BT4[0x7];                                     // 0x0371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnActorFracture;                                           // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1587);
		return ptr;
	}



};

// Class ApexDestruction.DestructibleComponent
// 0x00E0 (FullSize[0x0920] - InheritedSize[0x0840])
class UDestructibleComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData_L19F[0x8];                                     // 0x0840(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bFractureEffectOverride : 1;                               // 0x0848(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_11DY[0x7];                                     // 0x0849(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFractureEffect>                     FractureEffects;                                           // 0x0850(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bEnableHardSleeping;                                       // 0x0860(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AFUN[0x3];                                     // 0x0861(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LargeChunkThreshold;                                       // 0x0864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XWCQ[0x10];                                    // 0x0868(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnComponentFracture;                                       // 0x0878(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8STF[0x98];                                    // 0x0888(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1588);
		return ptr;
	}



	void STATIC_SetDestructibleMesh(class UDestructibleMesh* NewMesh);
	class UDestructibleMesh* GetDestructibleMesh();
	void STATIC_ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	void STATIC_ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength);
};

// Class ApexDestruction.DestructibleFractureSettings
// 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
class UDestructibleFractureSettings : public UObject
{
public:
	int                                                CellSiteCount;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFractureMaterial                           FractureMaterialDesc;                                      // 0x002C(0x0024) (Edit, Transient, NoDestructor, NativeAccessSpecifierPublic)
	int                                                RandomSeed;                                                // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_34FC[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector>                             VoronoiSites;                                              // 0x0058(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                OriginalSubmeshCount;                                      // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4PTS[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInterface*>                  Materials;                                                 // 0x0070(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDestructibleChunkParameters>        ChunkParameters;                                           // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZYHX[0x28];                                    // 0x0090(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1589);
		return ptr;
	}



};

// Class ApexDestruction.DestructibleMesh
// 0x00A0 (FullSize[0x0380] - InheritedSize[0x02E0])
class UDestructibleMesh : public USkeletalMesh
{
public:
	struct FDestructibleParameters                     DefaultDestructibleParameters;                             // 0x02E0(0x0088) (Edit, NativeAccessSpecifierPublic)
	TArray<struct FFractureEffect>                     FractureEffects;                                           // 0x0368(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7KO4[0x8];                                     // 0x0378(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1590);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
