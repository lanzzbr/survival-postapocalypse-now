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

// Function MediaCompositing.MediaPlaneComponent.SetMediaPlane
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMediaPlaneParameters   Plane                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UMediaPlaneComponent::STATIC_SetMediaPlane(const struct FMediaPlaneParameters& Plane)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29296);

	UMediaPlaneComponent_SetMediaPlane_Params params;
	params.Plane = Plane;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaCompositing.MediaPlaneComponent.OnRenderTextureChanged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMediaPlaneComponent::STATIC_OnRenderTextureChanged()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29295);

	UMediaPlaneComponent_OnRenderTextureChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaCompositing.MediaPlaneComponent.GetPlane
// ()
// Parameters:
// struct FMediaPlaneParameters   ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FMediaPlaneParameters UMediaPlaneComponent::GetPlane()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29293);

	UMediaPlaneComponent_GetPlane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
