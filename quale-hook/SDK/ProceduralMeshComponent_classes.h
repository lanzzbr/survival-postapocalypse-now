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

// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1673);
		return ptr;
	}



	void STATIC_SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent** OutOtherHalfProcMesh, ProceduralMeshComponent_EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial);
	void STATIC_GetSectionFromStaticMesh(class UStaticMesh* InMesh, int LODIndex, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	void STATIC_GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	void STATIC_CreateGridMeshTriangles(int NumX, int NumY, bool bWinding, TArray<int>* Triangles);
	void STATIC_CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision);
	void STATIC_ConvertQuadToTriangles(TArray<int>* Triangles, int Vert0, int Vert1, int Vert2, int Vert3);
	void STATIC_CalculateTangentsForMesh(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FProcMeshTangent>* Tangents);
};

// Class ProceduralMeshComponent.ProceduralMeshComponent
// 0x0068 (FullSize[0x0720] - InheritedSize[0x06B8])
class UProceduralMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData_7VTK[0x8];                                     // 0x06B8(0x0008) Fix Super Size
	bool                                               bUseComplexAsSimpleCollision;                              // 0x06C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseAsyncCooking;                                          // 0x06C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DQZV[0x6];                                     // 0x06C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBodySetup*                                  ProcMeshBodySetup;                                         // 0x06C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FProcMeshSection>                    ProcMeshSections;                                          // 0x06D0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FKConvexElem>                        CollisionConvexElems;                                      // 0x06E0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FBoxSphereBounds                            LocalBounds;                                               // 0x06F0(0x001C) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7X4U[0x4];                                     // 0x070C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                       // 0x0710(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1674);
		return ptr;
	}



	void STATIC_UpdateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents);
	void STATIC_UpdateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents);
	void STATIC_SetMeshSectionVisible(int SectionIndex, bool bNewVisibility);
	bool IsMeshSectionVisible(int SectionIndex);
	int GetNumSections();
	void STATIC_CreateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision);
	void STATIC_CreateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision);
	void STATIC_ClearMeshSection(int SectionIndex);
	void STATIC_ClearCollisionConvexMeshes();
	void STATIC_ClearAllMeshSections();
	void STATIC_AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
