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

// Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
// ()
// Parameters:
// TArray<struct FCustomMeshTriangle> Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCustomMeshComponent::SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29413);

	UCustomMeshComponent_SetCustomMeshTriangles_Params params;
	params.Triangles = Triangles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCustomMeshComponent::STATIC_ClearCustomMeshTriangles()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29412);

	UCustomMeshComponent_ClearCustomMeshTriangles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FCustomMeshTriangle> Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UCustomMeshComponent::STATIC_AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29409);

	UCustomMeshComponent_AddCustomMeshTriangles_Params params;
	params.Triangles = Triangles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
