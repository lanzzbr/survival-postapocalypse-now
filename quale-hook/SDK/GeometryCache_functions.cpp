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

// Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometryCacheMeshData  NewMeshData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UGeometryCacheTrack_TransformAnimation::STATIC_SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16677);

	UGeometryCacheTrack_TransformAnimation_SetMesh_Params params;
	params.NewMeshData = NewMeshData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometryCacheMeshData  NewMeshData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UGeometryCacheTrack_TransformGroupAnimation::STATIC_SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16679);

	UGeometryCacheTrack_TransformGroupAnimation_SetMesh_Params params;
	params.NewMeshData = NewMeshData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
// ()
// Parameters:
// class UGeometryCacheComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGeometryCacheComponent* AGeometryCacheActor::GetGeometryCacheComponent()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16638);

	AGeometryCacheActor_GetGeometryCacheComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.Stop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGeometryCacheComponent::STATIC_Stop()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16665);

	UGeometryCacheComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          NewStartTimeOffset             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCacheComponent::STATIC_SetStartTimeOffset(float NewStartTimeOffset)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16663);

	UGeometryCacheComponent_SetStartTimeOffset_Params params;
	params.NewStartTimeOffset = NewStartTimeOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          NewPlaybackSpeed               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCacheComponent::STATIC_SetPlaybackSpeed(float NewPlaybackSpeed)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16661);

	UGeometryCacheComponent_SetPlaybackSpeed_Params params;
	params.NewPlaybackSpeed = NewPlaybackSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheComponent.SetLooping
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bNewLooping                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCacheComponent::STATIC_SetLooping(bool bNewLooping)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16659);

	UGeometryCacheComponent_SetLooping_Params params;
	params.bNewLooping = bNewLooping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheComponent.SetGeometryCache
// (BlueprintCosmetic)
// Parameters:
// class UGeometryCache*          NewGeomCache                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGeometryCacheComponent::SetGeometryCache(class UGeometryCache* NewGeomCache)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16656);

	UGeometryCacheComponent_SetGeometryCache_Params params;
	params.NewGeomCache = NewGeomCache;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGeometryCacheComponent::STATIC_PlayReversedFromEnd()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16655);

	UGeometryCacheComponent_PlayReversedFromEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheComponent.PlayReversed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGeometryCacheComponent::STATIC_PlayReversed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16654);

	UGeometryCacheComponent_PlayReversed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheComponent.PlayFromStart
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGeometryCacheComponent::STATIC_PlayFromStart()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16653);

	UGeometryCacheComponent_PlayFromStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheComponent.Play
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGeometryCacheComponent::STATIC_Play()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16652);

	UGeometryCacheComponent_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheComponent.Pause
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGeometryCacheComponent::STATIC_Pause()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16651);

	UGeometryCacheComponent_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGeometryCacheComponent::IsPlayingReversed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16649);

	UGeometryCacheComponent_IsPlayingReversed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.IsPlaying
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGeometryCacheComponent::IsPlaying()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16647);

	UGeometryCacheComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.IsLooping
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGeometryCacheComponent::IsLooping()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16645);

	UGeometryCacheComponent_IsLooping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGeometryCacheComponent::GetStartTimeOffset()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16643);

	UGeometryCacheComponent_GetStartTimeOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGeometryCacheComponent::GetPlaybackSpeed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16641);

	UGeometryCacheComponent_GetPlaybackSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometryCacheMeshData  MeshData                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          SampleTime                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCacheTrack_FlipbookAnimation::STATIC_AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16673);

	UGeometryCacheTrack_FlipbookAnimation_AddMeshSample_Params params;
	params.MeshData = MeshData;
	params.SampleTime = SampleTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
