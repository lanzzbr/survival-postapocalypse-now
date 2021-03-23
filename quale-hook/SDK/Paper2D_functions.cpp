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

// Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
// (BlueprintAuthorityOnly)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperFlipbook::IsValidKeyFrameIndex(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28954);

	UPaperFlipbook_IsValidKeyFrameIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetTotalDuration
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPaperFlipbook::GetTotalDuration()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28952);

	UPaperFlipbook_GetTotalDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetSpriteAtTime
// (BlueprintCosmetic)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bClampToEnds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPaperSprite*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPaperSprite* UPaperFlipbook::GetSpriteAtTime(float Time, bool bClampToEnds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28948);

	UPaperFlipbook_GetSpriteAtTime_Params params;
	params.Time = Time;
	params.bClampToEnds = bClampToEnds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetSpriteAtFrame
// (BlueprintCosmetic)
// Parameters:
// int                            FrameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPaperSprite*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPaperSprite* UPaperFlipbook::GetSpriteAtFrame(int FrameIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28945);

	UPaperFlipbook_GetSpriteAtFrame_Params params;
	params.FrameIndex = FrameIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetNumKeyFrames
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPaperFlipbook::GetNumKeyFrames()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28943);

	UPaperFlipbook_GetNumKeyFrames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetNumFrames
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPaperFlipbook::GetNumFrames()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28941);

	UPaperFlipbook_GetNumFrames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
// (BlueprintCosmetic)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bClampToEnds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPaperFlipbook::GetKeyFrameIndexAtTime(float Time, bool bClampToEnds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28937);

	UPaperFlipbook_GetKeyFrameIndexAtTime_Params params;
	params.Time = Time;
	params.bClampToEnds = bClampToEnds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.Stop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPaperFlipbookComponent::STATIC_Stop()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29006);

	UPaperFlipbookComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperFlipbookComponent.SetSpriteColor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperFlipbookComponent::STATIC_SetSpriteColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29004);

	UPaperFlipbookComponent_SetSpriteColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperFlipbookComponent.SetPlayRate
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          NewRate                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperFlipbookComponent::STATIC_SetPlayRate(float NewRate)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29002);

	UPaperFlipbookComponent_SetPlayRate_Params params;
	params.NewRate = NewRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            NewFramePosition               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFireEvents                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperFlipbookComponent::STATIC_SetPlaybackPositionInFrames(int NewFramePosition, bool bFireEvents)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28999);

	UPaperFlipbookComponent_SetPlaybackPositionInFrames_Params params;
	params.NewFramePosition = NewFramePosition;
	params.bFireEvents = bFireEvents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          NewPosition                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFireEvents                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperFlipbookComponent::STATIC_SetPlaybackPosition(float NewPosition, bool bFireEvents)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28996);

	UPaperFlipbookComponent_SetPlaybackPosition_Params params;
	params.NewPosition = NewPosition;
	params.bFireEvents = bFireEvents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperFlipbookComponent.SetNewTime
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          NewTime                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperFlipbookComponent::STATIC_SetNewTime(float NewTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28994);

	UPaperFlipbookComponent_SetNewTime_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperFlipbookComponent.SetLooping
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bNewLooping                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperFlipbookComponent::STATIC_SetLooping(bool bNewLooping)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28992);

	UPaperFlipbookComponent_SetLooping_Params params;
	params.bNewLooping = bNewLooping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperFlipbookComponent.SetFlipbook
// (BlueprintCosmetic)
// Parameters:
// class UPaperFlipbook*          NewFlipbook                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperFlipbookComponent::SetFlipbook(class UPaperFlipbook* NewFlipbook)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28989);

	UPaperFlipbookComponent_SetFlipbook_Params params;
	params.NewFlipbook = NewFlipbook;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPaperFlipbookComponent::STATIC_ReverseFromEnd()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28988);

	UPaperFlipbookComponent_ReverseFromEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperFlipbookComponent.Reverse
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPaperFlipbookComponent::STATIC_Reverse()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28987);

	UPaperFlipbookComponent_Reverse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperFlipbookComponent.PlayFromStart
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPaperFlipbookComponent::STATIC_PlayFromStart()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28986);

	UPaperFlipbookComponent_PlayFromStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperFlipbookComponent.Play
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPaperFlipbookComponent::STATIC_Play()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28985);

	UPaperFlipbookComponent_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UPaperFlipbook*          OldFlipbook                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperFlipbookComponent::STATIC_OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28983);

	UPaperFlipbookComponent_OnRep_SourceFlipbook_Params params;
	params.OldFlipbook = OldFlipbook;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperFlipbookComponent.IsReversing
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperFlipbookComponent::IsReversing()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28981);

	UPaperFlipbookComponent_IsReversing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.IsPlaying
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperFlipbookComponent::IsPlaying()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28979);

	UPaperFlipbookComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.IsLooping
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperFlipbookComponent::IsLooping()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28977);

	UPaperFlipbookComponent_IsLooping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetPlayRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPaperFlipbookComponent::GetPlayRate()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28975);

	UPaperFlipbookComponent_GetPlayRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPaperFlipbookComponent::GetPlaybackPositionInFrames()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28973);

	UPaperFlipbookComponent_GetPlaybackPositionInFrames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPaperFlipbookComponent::GetPlaybackPosition()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28971);

	UPaperFlipbookComponent_GetPlaybackPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPaperFlipbookComponent::GetFlipbookLengthInFrames()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28969);

	UPaperFlipbookComponent_GetFlipbookLengthInFrames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPaperFlipbookComponent::GetFlipbookLength()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28967);

	UPaperFlipbookComponent_GetFlipbookLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPaperFlipbookComponent::GetFlipbookFramerate()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28965);

	UPaperFlipbookComponent_GetFlipbookFramerate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbook
// ()
// Parameters:
// class UPaperFlipbook*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPaperFlipbook* UPaperFlipbookComponent::GetFlipbook()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28963);

	UPaperFlipbookComponent_GetFlipbook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
// (Final, RequiredAPI, Net)
// Parameters:
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              NewInstanceTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bMarkRenderStateDirty          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperGroupedSpriteComponent::UpdateInstanceTransform(int InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29043);

	UPaperGroupedSpriteComponent_UpdateInstanceTransform_Params params;
	params.InstanceIndex = InstanceIndex;
	params.NewInstanceTransform = NewInstanceTransform;
	params.bWorldSpace = bWorldSpace;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
// (Final, BlueprintAuthorityOnly)
// Parameters:
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            NewInstanceColor               (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bMarkRenderStateDirty          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperGroupedSpriteComponent::UpdateInstanceColor(int InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29038);

	UPaperGroupedSpriteComponent_UpdateInstanceColor_Params params;
	params.InstanceIndex = InstanceIndex;
	params.NewInstanceColor = NewInstanceColor;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 WorldSpaceSortAxis             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperGroupedSpriteComponent::STATIC_SortInstancesAlongAxis(const struct FVector& WorldSpaceSortAxis)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29036);

	UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Params params;
	params.WorldSpaceSortAxis = WorldSpaceSortAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
// (BlueprintAuthorityOnly)
// Parameters:
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperGroupedSpriteComponent::RemoveInstance(int InstanceIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29033);

	UPaperGroupedSpriteComponent_RemoveInstance_Params params;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
// (Final, Net)
// Parameters:
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              OutInstanceTransform           (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperGroupedSpriteComponent::GetInstanceTransform(int InstanceIndex, struct FTransform* OutInstanceTransform, bool bWorldSpace)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29028);

	UPaperGroupedSpriteComponent_GetInstanceTransform_Params params;
	params.InstanceIndex = InstanceIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInstanceTransform != nullptr)
		*OutInstanceTransform = params.OutInstanceTransform;


	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPaperGroupedSpriteComponent::GetInstanceCount()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29026);

	UPaperGroupedSpriteComponent_GetInstanceCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPaperGroupedSpriteComponent::STATIC_ClearInstances()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29025);

	UPaperGroupedSpriteComponent_ClearInstances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperGroupedSpriteComponent.AddInstance
// (BlueprintAuthorityOnly, BlueprintCosmetic, Net)
// Parameters:
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UPaperSprite*            Sprite                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Color                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPaperGroupedSpriteComponent::AddInstance(const struct FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& Color)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29019);

	UPaperGroupedSpriteComponent_AddInstance_Params params;
	params.Transform = Transform;
	params.Sprite = Sprite;
	params.bWorldSpace = bWorldSpace;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
// ()
// Parameters:
// class UPaperSprite*            Sprite                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UPaperSpriteBlueprintLibrary::MakeBrushFromSprite(class UPaperSprite* Sprite, int Width, int Height)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29076);

	UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Params params;
	params.Sprite = Sprite;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperSpriteComponent.SetSpriteColor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperSpriteComponent::STATIC_SetSpriteColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29086);

	UPaperSpriteComponent_SetSpriteColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperSpriteComponent.SetSprite
// (BlueprintCosmetic)
// Parameters:
// class UPaperSprite*            NewSprite                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperSpriteComponent::SetSprite(class UPaperSprite* NewSprite)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29083);

	UPaperSpriteComponent_SetSprite_Params params;
	params.NewSprite = NewSprite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperSpriteComponent.GetSprite
// ()
// Parameters:
// class UPaperSprite*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPaperSprite* UPaperSpriteComponent::GetSprite()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29081);

	UPaperSpriteComponent_GetSprite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperTerrainComponent.SetTerrainColor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperTerrainComponent::STATIC_SetTerrainColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29094);

	UPaperTerrainComponent_SetTerrainColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperTileMapComponent.SetTileMapColor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperTileMapComponent::STATIC_SetTileMapColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29217);

	UPaperTileMapComponent_SetTileMapColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperTileMapComponent.SetTileMap
// (BlueprintCosmetic)
// Parameters:
// class UPaperTileMap*           NewTileMap                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperTileMapComponent::SetTileMap(class UPaperTileMap* NewTileMap)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29214);

	UPaperTileMapComponent_SetTileMap_Params params;
	params.NewTileMap = NewTileMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.SetTile
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPaperTileInfo          NewValue                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UPaperTileMapComponent::STATIC_SetTile(int X, int Y, int Layer, const struct FPaperTileInfo& NewValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29209);

	UPaperTileMapComponent_SetTile_Params params;
	params.X = X;
	params.Y = Y;
	params.Layer = Layer;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperTileMapComponent.SetLayerColor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperTileMapComponent::STATIC_SetLayerColor(const struct FLinearColor& NewColor, int Layer)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29206);

	UPaperTileMapComponent_SetLayerColor_Params params;
	params.NewColor = NewColor;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperTileMapComponent.SetLayerCollision
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasCollision                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOverrideThickness             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CustomThickness                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOverrideOffset                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CustomOffset                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRebuildCollision              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperTileMapComponent::STATIC_SetLayerCollision(int Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29198);

	UPaperTileMapComponent_SetLayerCollision_Params params;
	params.Layer = Layer;
	params.bHasCollision = bHasCollision;
	params.bOverrideThickness = bOverrideThickness;
	params.CustomThickness = CustomThickness;
	params.bOverrideOffset = bOverrideOffset;
	params.CustomOffset = CustomOffset;
	params.bRebuildCollision = bRebuildCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRebuildCollision              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperTileMapComponent::STATIC_SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29195);

	UPaperTileMapComponent_SetDefaultCollisionThickness_Params params;
	params.Thickness = Thickness;
	params.bRebuildCollision = bRebuildCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperTileMapComponent.ResizeMap
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            NewWidthInTiles                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NewHeightInTiles               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperTileMapComponent::STATIC_ResizeMap(int NewWidthInTiles, int NewHeightInTiles)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29192);

	UPaperTileMapComponent_ResizeMap_Params params;
	params.NewWidthInTiles = NewWidthInTiles;
	params.NewHeightInTiles = NewHeightInTiles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperTileMapComponent.RebuildCollision
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPaperTileMapComponent::STATIC_RebuildCollision()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29191);

	UPaperTileMapComponent_RebuildCollision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperTileMapComponent.OwnsTileMap
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperTileMapComponent::OwnsTileMap()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29189);

	UPaperTileMapComponent_OwnsTileMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPaperTileMapComponent::STATIC_MakeTileMapEditable()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29188);

	UPaperTileMapComponent_MakeTileMapEditable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperTileMapComponent.GetTilePolygon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            TileX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TileY                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         Points                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperTileMapComponent::STATIC_GetTilePolygon(int TileX, int TileY, TArray<struct FVector>* Points, int LayerIndex, bool bWorldSpace)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29181);

	UPaperTileMapComponent_GetTilePolygon_Params params;
	params.TileX = TileX;
	params.TileY = TileY;
	params.LayerIndex = LayerIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Points != nullptr)
		*Points = params.Points;

}


// Function Paper2D.PaperTileMapComponent.GetTileMapColor
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UPaperTileMapComponent::GetTileMapColor()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29179);

	UPaperTileMapComponent_GetTileMapColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
// ()
// Parameters:
// int                            TileX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TileY                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UPaperTileMapComponent::GetTileCornerPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29173);

	UPaperTileMapComponent_GetTileCornerPosition_Params params;
	params.TileX = TileX;
	params.TileY = TileY;
	params.LayerIndex = LayerIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
// ()
// Parameters:
// int                            TileX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TileY                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UPaperTileMapComponent::GetTileCenterPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29167);

	UPaperTileMapComponent_GetTileCenterPosition_Params params;
	params.TileX = TileX;
	params.TileY = TileY;
	params.LayerIndex = LayerIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetTile
// ()
// Parameters:
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPaperTileInfo          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FPaperTileInfo UPaperTileMapComponent::GetTile(int X, int Y, int Layer)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29162);

	UPaperTileMapComponent_GetTile_Params params;
	params.X = X;
	params.Y = Y;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetMapSize
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            MapWidth                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MapHeight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumLayers                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperTileMapComponent::STATIC_GetMapSize(int* MapWidth, int* MapHeight, int* NumLayers)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29158);

	UPaperTileMapComponent_GetMapSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MapWidth != nullptr)
		*MapWidth = params.MapWidth;
	if (MapHeight != nullptr)
		*MapHeight = params.MapHeight;
	if (NumLayers != nullptr)
		*NumLayers = params.NumLayers;

}


// Function Paper2D.PaperTileMapComponent.GetLayerColor
// (BlueprintAuthorityOnly)
// Parameters:
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UPaperTileMapComponent::GetLayerColor(int Layer)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29155);

	UPaperTileMapComponent_GetLayerColor_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.CreateNewTileMap
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            MapWidth                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MapHeight                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TileWidth                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TileHeight                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PixelsPerUnrealUnit            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCreateLayer                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperTileMapComponent::STATIC_CreateNewTileMap(int MapWidth, int MapHeight, int TileWidth, int TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29148);

	UPaperTileMapComponent_CreateNewTileMap_Params params;
	params.MapWidth = MapWidth;
	params.MapHeight = MapHeight;
	params.TileWidth = TileWidth;
	params.TileHeight = TileHeight;
	params.PixelsPerUnrealUnit = PixelsPerUnrealUnit;
	params.bCreateLayer = bCreateLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Paper2D.PaperTileMapComponent.AddNewLayer
// ()
// Parameters:
// class UPaperTileLayer*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPaperTileLayer* UPaperTileMapComponent::AddNewLayer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29146);

	UPaperTileMapComponent_AddNewLayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.TileMapBlueprintLibrary.MakeTile
// (BlueprintCosmetic)
// Parameters:
// int                            TileIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPaperTileSet*           TileSet                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFlipH                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFlipV                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFlipD                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPaperTileInfo          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FPaperTileInfo UTileMapBlueprintLibrary::MakeTile(int TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29263);

	UTileMapBlueprintLibrary_MakeTile_Params params;
	params.TileIndex = TileIndex;
	params.TileSet = TileSet;
	params.bFlipH = bFlipH;
	params.bFlipV = bFlipV;
	params.bFlipD = bFlipD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
// ()
// Parameters:
// struct FPaperTileInfo          Tile                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UTileMapBlueprintLibrary::GetTileUserData(const struct FPaperTileInfo& Tile)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29260);

	UTileMapBlueprintLibrary_GetTileUserData_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
// ()
// Parameters:
// struct FPaperTileInfo          Tile                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UTileMapBlueprintLibrary::GetTileTransform(const struct FPaperTileInfo& Tile)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29257);

	UTileMapBlueprintLibrary_GetTileTransform_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Paper2D.TileMapBlueprintLibrary.BreakTile
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPaperTileInfo          Tile                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            TileIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPaperTileSet*           TileSet                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFlipH                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFlipV                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFlipD                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTileMapBlueprintLibrary::STATIC_BreakTile(const struct FPaperTileInfo& Tile, int* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29250);

	UTileMapBlueprintLibrary_BreakTile_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TileIndex != nullptr)
		*TileIndex = params.TileIndex;
	if (TileSet != nullptr)
		*TileSet = params.TileSet;
	if (bFlipH != nullptr)
		*bFlipH = params.bFlipH;
	if (bFlipV != nullptr)
		*bFlipV = params.bFlipV;
	if (bFlipD != nullptr)
		*bFlipD = params.bFlipD;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
