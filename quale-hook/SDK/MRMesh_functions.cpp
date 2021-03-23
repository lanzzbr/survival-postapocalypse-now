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

// Function MRMesh.MeshReconstructorBase.StopReconstruction
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMeshReconstructorBase::STATIC_StopReconstruction()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16770);

	UMeshReconstructorBase_StopReconstruction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MRMesh.MeshReconstructorBase.StartReconstruction
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMeshReconstructorBase::STATIC_StartReconstruction()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16769);

	UMeshReconstructorBase_StartReconstruction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MRMesh.MeshReconstructorBase.PauseReconstruction
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMeshReconstructorBase::STATIC_PauseReconstruction()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16768);

	UMeshReconstructorBase_PauseReconstruction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMeshReconstructorBase::IsReconstructionStarted()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16766);

	UMeshReconstructorBase_IsReconstructionStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMeshReconstructorBase::IsReconstructionPaused()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16764);

	UMeshReconstructorBase_IsReconstructionPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMeshReconstructorBase::STATIC_DisconnectMRMesh()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16763);

	UMeshReconstructorBase_DisconnectMRMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MRMesh.MeshReconstructorBase.ConnectMRMesh
// (BlueprintCosmetic)
// Parameters:
// class UMRMeshComponent*        Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMRMeshConfiguration    ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FMRMeshConfiguration UMeshReconstructorBase::ConnectMRMesh(class UMRMeshComponent* Mesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16760);

	UMeshReconstructorBase_ConnectMRMesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MRMesh.MRMeshComponent.GetReconstructor
// ()
// Parameters:
// class UMeshReconstructorBase*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMeshReconstructorBase* UMRMeshComponent::GetReconstructor()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16773);

	UMRMeshComponent_GetReconstructor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MRMesh.MRMeshComponent.ConnectReconstructor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UMeshReconstructorBase*  Reconstructor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMRMeshComponent::STATIC_ConnectReconstructor(class UMeshReconstructorBase* Reconstructor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16771);

	UMRMeshComponent_ConnectReconstructor_Params params;
	params.Reconstructor = Reconstructor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
