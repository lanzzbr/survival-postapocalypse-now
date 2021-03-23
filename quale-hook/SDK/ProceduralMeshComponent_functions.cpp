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

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UProceduralMeshComponent* InProcMesh                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 PlanePosition                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 PlaneNormal                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCreateOtherHalf               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UProceduralMeshComponent* OutOtherHalfProcMesh           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ProceduralMeshComponent_EProcMeshSliceCapOption CapOption                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*      CapMaterial                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UKismetProceduralMeshLibrary::STATIC_SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent** OutOtherHalfProcMesh, ProceduralMeshComponent_EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29541);

	UKismetProceduralMeshLibrary_SliceProceduralMesh_Params params;
	params.InProcMesh = InProcMesh;
	params.PlanePosition = PlanePosition;
	params.PlaneNormal = PlaneNormal;
	params.bCreateOtherHalf = bCreateOtherHalf;
	params.CapOption = CapOption;
	params.CapMaterial = CapMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutOtherHalfProcMesh != nullptr)
		*OutOtherHalfProcMesh = params.OutOtherHalfProcMesh;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStaticMesh*             InMesh                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LODIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         Vertices                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>       UVs                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent> Tangents                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UKismetProceduralMeshLibrary::STATIC_GetSectionFromStaticMesh(class UStaticMesh* InMesh, int LODIndex, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29527);

	UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Params params;
	params.InMesh = InMesh;
	params.LODIndex = LODIndex;
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Normals != nullptr)
		*Normals = params.Normals;
	if (UVs != nullptr)
		*UVs = params.UVs;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 BoxRadius                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         Vertices                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>       UVs                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent> Tangents                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UKismetProceduralMeshLibrary::STATIC_GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29515);

	UKismetProceduralMeshLibrary_GenerateBoxMesh_Params params;
	params.BoxRadius = BoxRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Normals != nullptr)
		*Normals = params.Normals;
	if (UVs != nullptr)
		*UVs = params.UVs;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            NumX                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumY                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWinding                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UKismetProceduralMeshLibrary::STATIC_CreateGridMeshTriangles(int NumX, int NumY, bool bWinding, TArray<int>* Triangles)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29509);

	UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Params params;
	params.NumX = NumX;
	params.NumY = NumY;
	params.bWinding = bWinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Triangles != nullptr)
		*Triangles = params.Triangles;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStaticMeshComponent*    StaticMeshComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LODIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UProceduralMeshComponent* ProcMeshComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCreateCollision               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UKismetProceduralMeshLibrary::STATIC_CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29504);

	UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Params params;
	params.StaticMeshComponent = StaticMeshComponent;
	params.LODIndex = LODIndex;
	params.ProcMeshComponent = ProcMeshComponent;
	params.bCreateCollision = bCreateCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int                            Vert0                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Vert1                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Vert2                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Vert3                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UKismetProceduralMeshLibrary::STATIC_ConvertQuadToTriangles(TArray<int>* Triangles, int Vert0, int Vert1, int Vert2, int Vert3)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29497);

	UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Params params;
	params.Vert0 = Vert0;
	params.Vert1 = Vert1;
	params.Vert2 = Vert2;
	params.Vert3 = Vert3;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Triangles != nullptr)
		*Triangles = params.Triangles;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int>                    Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>       UVs                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent> Tangents                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UKismetProceduralMeshLibrary::STATIC_CalculateTangentsForMesh(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FProcMeshTangent>* Tangents)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29486);

	UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Params params;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.UVs = UVs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Normals != nullptr)
		*Normals = params.Normals;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>         Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>       UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>    VertexColors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent> Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UProceduralMeshComponent::STATIC_UpdateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29607);

	UProceduralMeshComponent_UpdateMeshSection_LinearColor_Params params;
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>         Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>       UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FColor>          VertexColors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent> Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UProceduralMeshComponent::STATIC_UpdateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29595);

	UProceduralMeshComponent_UpdateMeshSection_Params params;
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNewVisibility                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProceduralMeshComponent::STATIC_SetMeshSectionVisible(int SectionIndex, bool bNewVisibility)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29592);

	UProceduralMeshComponent_SetMeshSectionVisible_Params params;
	params.SectionIndex = SectionIndex;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
// (BlueprintAuthorityOnly)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UProceduralMeshComponent::IsMeshSectionVisible(int SectionIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29589);

	UProceduralMeshComponent_IsMeshSectionVisible_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UProceduralMeshComponent::GetNumSections()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29587);

	UProceduralMeshComponent_GetNumSections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int>                    Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>         Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>       UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>    VertexColors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent> Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bCreateCollision               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProceduralMeshComponent::STATIC_CreateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29572);

	UProceduralMeshComponent_CreateMeshSection_LinearColor_Params params;
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;
	params.bCreateCollision = bCreateCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int>                    Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>         Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>       UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FColor>          VertexColors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent> Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bCreateCollision               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProceduralMeshComponent::STATIC_CreateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29557);

	UProceduralMeshComponent_CreateMeshSection_Params params;
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;
	params.bCreateCollision = bCreateCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProceduralMeshComponent::STATIC_ClearMeshSection(int SectionIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29555);

	UProceduralMeshComponent_ClearMeshSection_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UProceduralMeshComponent::STATIC_ClearCollisionConvexMeshes()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29554);

	UProceduralMeshComponent_ClearCollisionConvexMeshes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UProceduralMeshComponent::STATIC_ClearAllMeshSections()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29553);

	UProceduralMeshComponent_ClearAllMeshSections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FVector>         ConvexVerts                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UProceduralMeshComponent::STATIC_AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29550);

	UProceduralMeshComponent_AddCollisionConvexMesh_Params params;
	params.ConvexVerts = ConvexVerts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
