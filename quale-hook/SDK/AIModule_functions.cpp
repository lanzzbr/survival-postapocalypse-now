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

// Function AIModule.AIController.UseBlackboard
// ()
// Parameters:
// class UBlackboardData*         BlackboardAsset                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlackboardComponent*    BlackboardComponent            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AAIController::UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15651);

	AAIController_UseBlackboard_Params params;
	params.BlackboardAsset = BlackboardAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BlackboardComponent != nullptr)
		*BlackboardComponent = params.BlackboardComponent;


	return params.ReturnValue;
}


// Function AIModule.AIController.UnclaimTaskResource
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UClass*                  ResourceClass                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAIController::STATIC_UnclaimTaskResource(class UClass* ResourceClass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15649);

	AAIController_UnclaimTaskResource_Params params;
	params.ResourceClass = ResourceClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIController.SetMoveBlockDetection
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAIController::STATIC_SetMoveBlockDetection(bool bEnable)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15647);

	AAIController_SetMoveBlockDetection_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIController.RunBehaviorTree
// (BlueprintCosmetic)
// Parameters:
// class UBehaviorTree*           BTAsset                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AAIController::RunBehaviorTree(class UBehaviorTree* BTAsset)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15644);

	AAIController_RunBehaviorTree_Params params;
	params.BTAsset = BTAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.OnUsingBlackBoard
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UBlackboardComponent*    BlackboardComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlackboardData*         BlackboardAsset                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAIController::STATIC_OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15641);

	AAIController_OnUsingBlackBoard_Params params;
	params.BlackboardComp = BlackboardComp;
	params.BlackboardAsset = BlackboardAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIController.OnUnpossess
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APawn*                   UnpossessedPawn                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAIController::STATIC_OnUnpossess(class APawn* UnpossessedPawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15639);

	AAIController_OnUnpossess_Params params;
	params.UnpossessedPawn = UnpossessedPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIController.OnPossess
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APawn*                   PossessedPawn                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAIController::STATIC_OnPossess(class APawn* PossessedPawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15637);

	AAIController_OnPossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIController.OnGameplayTaskResourcesClaimed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGameplayResourceSet    NewlyClaimed                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FGameplayResourceSet    FreshlyReleased                (Parm, NoDestructor, NativeAccessSpecifierPublic)
void AAIController::STATIC_OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15634);

	AAIController_OnGameplayTaskResourcesClaimed_Params params;
	params.NewlyClaimed = NewlyClaimed;
	params.FreshlyReleased = FreshlyReleased;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIController.MoveToLocation
// (Final)
// Parameters:
// struct FVector                 Dest                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          AcceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bStopOnOverlap                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUsePathfinding                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bProjectDestinationToNavigation (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCanStrafe                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowPartialPath              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EPathFollowingRequestResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<AIModule_EPathFollowingRequestResult> AAIController::MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15624);

	AAIController_MoveToLocation_Params params;
	params.Dest = Dest;
	params.AcceptanceRadius = AcceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;
	params.bUsePathfinding = bUsePathfinding;
	params.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
	params.bCanStrafe = bCanStrafe;
	params.FilterClass = FilterClass;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.MoveToActor
// (Final, BlueprintCosmetic)
// Parameters:
// class AActor*                  Goal                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          AcceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bStopOnOverlap                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUsePathfinding                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCanStrafe                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowPartialPath              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EPathFollowingRequestResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<AIModule_EPathFollowingRequestResult> AAIController::MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15615);

	AAIController_MoveToActor_Params params;
	params.Goal = Goal;
	params.AcceptanceRadius = AcceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;
	params.bUsePathfinding = bUsePathfinding;
	params.bCanStrafe = bCanStrafe;
	params.FilterClass = FilterClass;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.K2_SetFocus
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  NewFocus                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAIController::STATIC_K2_SetFocus(class AActor* NewFocus)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15613);

	AAIController_K2_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIController.K2_SetFocalPoint
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 FP                             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAIController::STATIC_K2_SetFocalPoint(const struct FVector& FP)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15611);

	AAIController_K2_SetFocalPoint_Params params;
	params.FP = FP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIController.K2_ClearFocus
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AAIController::STATIC_K2_ClearFocus()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15610);

	AAIController_K2_ClearFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIController.HasPartialPath
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AAIController::HasPartialPath()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15608);

	AAIController_HasPartialPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.GetPathFollowingComponent
// ()
// Parameters:
// class UPathFollowingComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPathFollowingComponent* AAIController::GetPathFollowingComponent()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15606);

	AAIController_GetPathFollowingComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.GetMoveStatus
// ()
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingStatus> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<AIModule_EPathFollowingStatus> AAIController::GetMoveStatus()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15604);

	AAIController_GetMoveStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.GetImmediateMoveDestination
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AAIController::GetImmediateMoveDestination()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15602);

	AAIController_GetImmediateMoveDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.GetFocusActor
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* AAIController::GetFocusActor()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15600);

	AAIController_GetFocusActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.GetFocalPointOnActor
// (BlueprintCosmetic)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AAIController::GetFocalPointOnActor(class AActor* Actor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15597);

	AAIController_GetFocalPointOnActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.GetFocalPoint
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AAIController::GetFocalPoint()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15595);

	AAIController_GetFocalPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.GetAIPerceptionComponent
// ()
// Parameters:
// class UAIPerceptionComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAIPerceptionComponent* AAIController::GetAIPerceptionComponent()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15593);

	AAIController_GetAIPerceptionComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.ClaimTaskResource
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UClass*                  ResourceClass                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAIController::STATIC_ClaimTaskResource(class UClass* ResourceClass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15591);

	AAIController_ClaimTaskResource_Params params;
	params.ResourceClass = ResourceClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PathFollowingComponent.OnNavDataRegistered
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ANavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPathFollowingComponent::STATIC_OnNavDataRegistered(class ANavigationData* NavData)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16322);

	UPathFollowingComponent_OnNavDataRegistered_Params params;
	params.NavData = NavData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PathFollowingComponent.OnActorBump
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UPathFollowingComponent::STATIC_OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16317);

	UPathFollowingComponent_OnActorBump_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PathFollowingComponent.GetPathDestination
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UPathFollowingComponent::GetPathDestination()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16315);

	UPathFollowingComponent_GetPathDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PathFollowingComponent.GetPathActionType
// ()
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingAction> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<AIModule_EPathFollowingAction> UPathFollowingComponent::GetPathActionType()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16313);

	UPathFollowingComponent_GetPathActionType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CellSize                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavLocalGridManager::SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16558);

	UNavLocalGridManager_SetLocalNavigationGridDensity_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CellSize = CellSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GridId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavLocalGridManager::STATIC_RemoveLocalNavigationGrid(class UObject* WorldContextObject, int GridId, bool bRebuildGrids)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16554);

	UNavLocalGridManager_RemoveLocalNavigationGrid_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GridId = GridId;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Start                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 End                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         PathPoints                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavLocalGridManager::FindLocalNavigationGridPath(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<struct FVector>* PathPoints)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16547);

	UNavLocalGridManager_FindLocalNavigationGridPath_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PathPoints != nullptr)
		*PathPoints = params.PathPoints;


	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
// (BlueprintAuthorityOnly)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         Locations                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int                            Radius2D                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNavLocalGridManager::AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<struct FVector> Locations, int Radius2D, float Height, bool bRebuildGrids)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16539);

	UNavLocalGridManager_AddLocalNavigationGridForPoints_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Locations = Locations;
	params.Radius2D = Radius2D;
	params.Height = Height;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Radius2D                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNavLocalGridManager::AddLocalNavigationGridForPoint(class UObject* WorldContextObject, const struct FVector& Location, int Radius2D, float Height, bool bRebuildGrids)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16532);

	UNavLocalGridManager_AddLocalNavigationGridForPoint_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Radius2D = Radius2D;
	params.Height = Height;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CapsuleRadius                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CapsuleHalfHeight              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Radius2D                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNavLocalGridManager::AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int Radius2D, float Height, bool bRebuildGrids)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16523);

	UNavLocalGridManager_AddLocalNavigationGridForCapsule_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.CapsuleRadius = CapsuleRadius;
	params.CapsuleHalfHeight = CapsuleHalfHeight;
	params.Radius2D = Radius2D;
	params.Height = Height;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Extent                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int                            Radius2D                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNavLocalGridManager::AddLocalNavigationGridForBox(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int Radius2D, float Height, bool bRebuildGrids)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16514);

	UNavLocalGridManager_AddLocalNavigationGridForBox_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Extent = Extent;
	params.Rotation = Rotation;
	params.Radius2D = Radius2D;
	params.Height = Height;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PawnAction.GetActionPriority
// ()
// Parameters:
// TEnumAsByte<AIModule_EAIRequestPriority> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<AIModule_EAIRequestPriority> UPawnAction::GetActionPriority()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16568);

	UPawnAction_GetActionPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PawnAction.Finish
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<AIModule_EPawnActionResult> WithResult                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnAction::STATIC_Finish(TEnumAsByte<AIModule_EPawnActionResult> WithResult)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16566);

	UPawnAction_Finish_Params params;
	params.WithResult = WithResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnAction.CreateActionInstance
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ActionClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawnAction*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPawnAction* UPawnAction::CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16562);

	UPawnAction_CreateActionInstance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActionClass = ActionClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PawnAction_BlueprintBase.ActionTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnAction_BlueprintBase::STATIC_ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16588);

	UPawnAction_BlueprintBase_ActionTick_Params params;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnAction_BlueprintBase.ActionStart
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnAction_BlueprintBase::STATIC_ActionStart(class APawn* ControlledPawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16586);

	UPawnAction_BlueprintBase_ActionStart_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnAction_BlueprintBase.ActionResume
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnAction_BlueprintBase::STATIC_ActionResume(class APawn* ControlledPawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16584);

	UPawnAction_BlueprintBase_ActionResume_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnAction_BlueprintBase.ActionPause
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnAction_BlueprintBase::STATIC_ActionPause(class APawn* ControlledPawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16582);

	UPawnAction_BlueprintBase_ActionPause_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnAction_BlueprintBase.ActionFinished
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EPawnActionResult> WithResult                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnAction_BlueprintBase::STATIC_ActionFinished(class APawn* ControlledPawn, TEnumAsByte<AIModule_EPawnActionResult> WithResult)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16579);

	UPawnAction_BlueprintBase_ActionFinished_Params params;
	params.ControlledPawn = ControlledPawn;
	params.WithResult = WithResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnActionsComponent.K2_PushAction
// (BlueprintCosmetic)
// Parameters:
// class UPawnAction*             NewAction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EAIRequestPriority> Priority                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 Instigator                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPawnActionsComponent::K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<AIModule_EAIRequestPriority> Priority, class UObject* Instigator)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16621);

	UPawnActionsComponent_K2_PushAction_Params params;
	params.NewAction = NewAction;
	params.Priority = Priority;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PawnActionsComponent.K2_PerformAction
// (Final)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawnAction*             Action                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EAIRequestPriority> Priority                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPawnActionsComponent::K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<AIModule_EAIRequestPriority> Priority)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16616);

	UPawnActionsComponent_K2_PerformAction_Params params;
	params.Pawn = Pawn;
	params.Action = Action;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PawnActionsComponent.K2_ForceAbortAction
// (BlueprintCosmetic)
// Parameters:
// class UPawnAction*             ActionToAbort                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EPawnActionAbortState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<AIModule_EPawnActionAbortState> UPawnActionsComponent::K2_ForceAbortAction(class UPawnAction* ActionToAbort)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16613);

	UPawnActionsComponent_K2_ForceAbortAction_Params params;
	params.ActionToAbort = ActionToAbort;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PawnActionsComponent.K2_AbortAction
// (BlueprintCosmetic)
// Parameters:
// class UPawnAction*             ActionToAbort                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EPawnActionAbortState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<AIModule_EPawnActionAbortState> UPawnActionsComponent::K2_AbortAction(class UPawnAction* ActionToAbort)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16610);

	UPawnActionsComponent_K2_AbortAction_Params params;
	params.ActionToAbort = ActionToAbort;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bEnabled                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnSensingComponent::STATIC_SetSensingUpdatesEnabled(bool bEnabled)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4548);

	UPawnSensingComponent_SetSensingUpdatesEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnSensingComponent.SetSensingInterval
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          NewSensingInterval             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnSensingComponent::STATIC_SetSensingInterval(float NewSensingInterval)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4546);

	UPawnSensingComponent_SetSensingInterval_Params params;
	params.NewSensingInterval = NewSensingInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          NewPeripheralVisionAngle       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnSensingComponent::STATIC_SetPeripheralVisionAngle(float NewPeripheralVisionAngle)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4544);

	UPawnSensingComponent_SetPeripheralVisionAngle_Params params;
	params.NewPeripheralVisionAngle = NewPeripheralVisionAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnSensingComponent::STATIC_SeePawnDelegate__DelegateSignature(class APawn* Pawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4542);

	UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APawn*                   Instigator                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnSensingComponent::STATIC_HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4538);

	UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params params;
	params.Instigator = Instigator;
	params.Location = Location;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPawnSensingComponent::GetPeripheralVisionCosine()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4536);

	UPawnSensingComponent_GetPeripheralVisionCosine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPawnSensingComponent::GetPeripheralVisionAngle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4534);

	UPawnSensingComponent_GetPeripheralVisionAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FAIRequestID            RequestID                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIAsyncTaskBlueprintProxy::STATIC_OnMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15539);

	UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Params params;
	params.RequestID = RequestID;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUnlockMovement                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UnlockAILogic                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIBlueprintHelperLibrary::STATIC_UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15587);

	UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params params;
	params.AnimInstance = AnimInstance;
	params.bUnlockMovement = bUnlockMovement;
	params.UnlockAILogic = UnlockAILogic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  PawnClass                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBehaviorTree*           BehaviorTree                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bNoCollisionFail               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UAIBlueprintHelperLibrary::SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15579);

	UAIBlueprintHelperLibrary_SpawnAIFromClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PawnClass = PawnClass;
	params.BehaviorTree = BehaviorTree;
	params.Location = Location;
	params.Rotation = Rotation;
	params.bNoCollisionFail = bNoCollisionFail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APawn*                   Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Message                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 MessageSource                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIBlueprintHelperLibrary::STATIC_SendAIMessage(class APawn* Target, const struct FName& Message, class UObject* MessageSource, bool bSuccess)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15574);

	UAIBlueprintHelperLibrary_SendAIMessage_Params params;
	params.Target = Target;
	params.Message = Message;
	params.MessageSource = MessageSource;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLockMovement                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           LockAILogic                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIBlueprintHelperLibrary::STATIC_LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15570);

	UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params params;
	params.AnimInstance = AnimInstance;
	params.bLockMovement = bLockMovement;
	params.LockAILogic = LockAILogic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// struct FRotator                Rotation                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIBlueprintHelperLibrary::IsValidAIRotation(const struct FRotator& Rotation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15567);

	UAIBlueprintHelperLibrary_IsValidAIRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIBlueprintHelperLibrary::IsValidAILocation(const struct FVector& Location)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15564);

	UAIBlueprintHelperLibrary_IsValidAILocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// struct FVector                 DirectionVector                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIBlueprintHelperLibrary::IsValidAIDirection(const struct FVector& DirectionVector)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15561);

	UAIBlueprintHelperLibrary_IsValidAIDirection_Params params;
	params.DirectionVector = DirectionVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
// (BlueprintCosmetic)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationPath*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNavigationPath* UAIBlueprintHelperLibrary::GetCurrentPath(class AController* Controller)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15558);

	UAIBlueprintHelperLibrary_GetCurrentPath_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
// (BlueprintCosmetic)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlackboardComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBlackboardComponent* UAIBlueprintHelperLibrary::GetBlackboard(class AActor* Target)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15555);

	UAIBlueprintHelperLibrary_GetBlackboard_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.GetAIController
// (BlueprintCosmetic)
// Parameters:
// class AActor*                  ControlledActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAIController*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AAIController* UAIBlueprintHelperLibrary::GetAIController(class AActor* ControlledActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15552);

	UAIBlueprintHelperLibrary_GetAIController_Params params;
	params.ControlledActor = ControlledActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Destination                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          AcceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bStopOnOverlap                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAIAsyncTaskBlueprintProxy* UAIBlueprintHelperLibrary::CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15544);

	UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Pawn = Pawn;
	params.Destination = Destination;
	params.TargetActor = TargetActor;
	params.AcceptanceRadius = AcceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIPerceptionComponent.SetSenseEnabled
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UClass*                  SenseClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bEnable                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIPerceptionComponent::STATIC_SetSenseEnabled(class UClass* SenseClass, bool bEnable)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15699);

	UAIPerceptionComponent_SetSenseEnabled_Params params;
	params.SenseClass = SenseClass;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UAIPerceptionComponent::STATIC_RequestStimuliListenerUpdate()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15698);

	UAIPerceptionComponent_RequestStimuliListenerUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIPerceptionComponent::STATIC_OnOwnerEndPlay(class AActor* Actor, TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15695);

	UAIPerceptionComponent_OnOwnerEndPlay_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAIPerceptionComponent::STATIC_GetPerceivedHostileActors(TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15692);

	UAIPerceptionComponent_GetPerceivedHostileActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function AIModule.AIPerceptionComponent.GetPerceivedActors
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UClass*                  SenseToUse                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAIPerceptionComponent::STATIC_GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15688);

	UAIPerceptionComponent_GetPerceivedActors_Params params;
	params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UClass*                  SenseToUse                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAIPerceptionComponent::STATIC_GetKnownPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15684);

	UAIPerceptionComponent_GetKnownPerceivedActors_Params params;
	params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UClass*                  SenseToUse                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAIPerceptionComponent::STATIC_GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15680);

	UAIPerceptionComponent_GetCurrentlyPerceivedActors_Params params;
	params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function AIModule.AIPerceptionComponent.GetActorsPerception
// (BlueprintCosmetic)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActorPerceptionBlueprintInfo Info                           (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIPerceptionComponent::GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15676);

	UAIPerceptionComponent_GetActorsPerception_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;


	return params.ReturnValue;
}


// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UClass*                  SenseClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIPerceptionStimuliSourceComponent::STATIC_UnregisterFromSense(class UClass* SenseClass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15712);

	UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Params params;
	params.SenseClass = SenseClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UAIPerceptionStimuliSourceComponent::STATIC_UnregisterFromPerceptionSystem()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15711);

	UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UAIPerceptionStimuliSourceComponent::STATIC_RegisterWithPerceptionSystem()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15710);

	UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UClass*                  SenseClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIPerceptionStimuliSourceComponent::STATIC_RegisterForSense(class UClass* SenseClass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15708);

	UAIPerceptionStimuliSourceComponent_RegisterForSense_Params params;
	params.SenseClass = SenseClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAISenseEvent*           PerceptionEvent                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIPerceptionSystem::STATIC_ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15731);

	UAIPerceptionSystem_ReportPerceptionEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PerceptionEvent = PerceptionEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionSystem.ReportEvent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UAISenseEvent*           PerceptionEvent                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIPerceptionSystem::STATIC_ReportEvent(class UAISenseEvent* PerceptionEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15729);

	UAIPerceptionSystem_ReportEvent_Params params;
	params.PerceptionEvent = PerceptionEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  Sense                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIPerceptionSystem::RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AActor* Target)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15724);

	UAIPerceptionSystem_RegisterPerceptionStimuliSource_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Sense = Sense;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIPerceptionSystem::STATIC_OnPerceptionStimuliSourceEndPlay(class AActor* Actor, TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15721);

	UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
// (Net)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIStimulus             Stimulus                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UAIPerceptionSystem::GetSenseClassForStimulus(class UObject* WorldContextObject, const struct FAIStimulus& Stimulus)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15717);

	UAIPerceptionSystem_GetSenseClassForStimulus_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AISense_Blueprint.OnUpdate
// ()
// Parameters:
// TArray<class UAISenseEvent*>   EventsToProcess                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAISense_Blueprint::OnUpdate(TArray<class UAISenseEvent*> EventsToProcess)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15760);

	UAISense_Blueprint_OnUpdate_Params params;
	params.EventsToProcess = EventsToProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AISense_Blueprint.OnListenerUpdated
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  ActorListener                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIPerceptionComponent*  PerceptionComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Blueprint::STATIC_OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15757);

	UAISense_Blueprint_OnListenerUpdated_Params params;
	params.ActorListener = ActorListener;
	params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISense_Blueprint.OnListenerUnregistered
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  ActorListener                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIPerceptionComponent*  PerceptionComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Blueprint::STATIC_OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15754);

	UAISense_Blueprint_OnListenerUnregistered_Params params;
	params.ActorListener = ActorListener;
	params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISense_Blueprint.OnListenerRegistered
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  ActorListener                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIPerceptionComponent*  PerceptionComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Blueprint::STATIC_OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15751);

	UAISense_Blueprint_OnListenerRegistered_Params params;
	params.ActorListener = ActorListener;
	params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISense_Blueprint.K2_OnNewPawn
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APawn*                   NewPawn                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Blueprint::STATIC_K2_OnNewPawn(class APawn* NewPawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15749);

	UAISense_Blueprint_K2_OnNewPawn_Params params;
	params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISense_Blueprint.GetAllListenerComponents
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<class UAIPerceptionComponent*> ListenerComponents             (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UAISense_Blueprint::STATIC_GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15746);

	UAISense_Blueprint_GetAllListenerComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ListenerComponents != nullptr)
		*ListenerComponents = params.ListenerComponents;

}


// Function AIModule.AISense_Blueprint.GetAllListenerActors
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<class AActor*>          ListenerActors                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAISense_Blueprint::STATIC_GetAllListenerActors(TArray<class AActor*>* ListenerActors)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15743);

	UAISense_Blueprint_GetAllListenerActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ListenerActors != nullptr)
		*ListenerActors = params.ListenerActors;

}


// Function AIModule.AISense_Damage.ReportDamageEvent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 EventLocation                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitLocation                    (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Damage::STATIC_ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15769);

	UAISense_Damage_ReportDamageEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.DamagedActor = DamagedActor;
	params.Instigator = Instigator;
	params.DamageAmount = DamageAmount;
	params.EventLocation = EventLocation;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISense_Hearing.ReportNoiseEvent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 NoiseLocation                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Loudness                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Hearing::STATIC_ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const struct FName& Tag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15778);

	UAISense_Hearing_ReportNoiseEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NoiseLocation = NoiseLocation;
	params.Loudness = Loudness;
	params.Instigator = Instigator;
	params.MaxRange = MaxRange;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APawn*                   Requestor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  PredictedActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PredictionTime                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Prediction::STATIC_RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15792);

	UAISense_Prediction_RequestPawnPredictionEvent_Params params;
	params.Requestor = Requestor;
	params.PredictedActor = PredictedActor;
	params.PredictionTime = PredictionTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AAIController*           Requestor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  PredictedActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PredictionTime                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Prediction::STATIC_RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15788);

	UAISense_Prediction_RequestControllerPredictionEvent_Params params;
	params.Requestor = Requestor;
	params.PredictedActor = PredictedActor;
	params.PredictionTime = PredictionTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISystem.AILoggingVerbose
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UAISystem::STATIC_AILoggingVerbose()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15831);

	UAISystem_AILoggingVerbose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISystem.AIIgnorePlayers
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UAISystem::STATIC_AIIgnorePlayers()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15830);

	UAISystem_AIIgnorePlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AITask_MoveTo.AIMoveTo
// ()
// Parameters:
// class AAIController*           Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 GoalLocation                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  GoalActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          AcceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EAIOptionFlag> StopOnOverlap                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EAIOptionFlag> AcceptPartialPath              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUsePathfinding                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLockAILogic                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseContinuosGoalTracking      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_MoveTo*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAITask_MoveTo* UAITask_MoveTo::AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<AIModule_EAIOptionFlag> StopOnOverlap, TEnumAsByte<AIModule_EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15852);

	UAITask_MoveTo_AIMoveTo_Params params;
	params.Controller = Controller;
	params.GoalLocation = GoalLocation;
	params.GoalActor = GoalActor;
	params.AcceptanceRadius = AcceptanceRadius;
	params.StopOnOverlap = StopOnOverlap;
	params.AcceptPartialPath = AcceptPartialPath;
	params.bUsePathfinding = bUsePathfinding;
	params.bLockAILogic = bLockAILogic;
	params.bUseContinuosGoalTracking = bUseContinuosGoalTracking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AITask_RunEQS.RunEQS
// ()
// Parameters:
// class AAIController*           Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnvQuery*               QueryTemplate                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_RunEQS*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAITask_RunEQS* UAITask_RunEQS::RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15866);

	UAITask_RunEQS_RunEQS_Params params;
	params.Controller = Controller;
	params.QueryTemplate = QueryTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BrainComponent.StopLogic
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 Reason                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBrainComponent::STATIC_StopLogic(const struct FString& Reason)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15881);

	UBrainComponent_StopLogic_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BrainComponent.RestartLogic
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UBrainComponent::STATIC_RestartLogic()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15880);

	UBrainComponent_RestartLogic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BrainComponent.IsRunning
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBrainComponent::IsRunning()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15878);

	UBrainComponent_IsRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BrainComponent.IsPaused
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBrainComponent::IsPaused()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15876);

	UBrainComponent_IsPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGameplayTag            InjectTag                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBehaviorTree*           BehaviorAsset                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBehaviorTreeComponent::STATIC_SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15892);

	UBehaviorTreeComponent_SetDynamicSubtree_Params params;
	params.InjectTag = InjectTag;
	params.BehaviorAsset = BehaviorAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
// (BlueprintCosmetic)
// Parameters:
// struct FGameplayTag            CooldownTag                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBehaviorTreeComponent::GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15889);

	UBehaviorTreeComponent_GetTagCooldownEndTime_Params params;
	params.CooldownTag = CooldownTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGameplayTag            CooldownTag                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CooldownDuration               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAddToExistingDuration         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBehaviorTreeComponent::STATIC_AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15885);

	UBehaviorTreeComponent_AddCooldownTagDuration_Params params;
	params.CooldownTag = CooldownTag;
	params.CooldownDuration = CooldownDuration;
	params.bAddToExistingDuration = bAddToExistingDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsVector
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 VectorValue                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::STATIC_SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15972);

	UBlackboardComponent_SetValueAsVector_Params params;
	params.KeyName = KeyName;
	params.VectorValue = VectorValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 StringValue                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::STATIC_SetValueAsString(const struct FName& KeyName, const struct FString& StringValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15969);

	UBlackboardComponent_SetValueAsString_Params params;
	params.KeyName = KeyName;
	params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsRotator
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                VectorValue                    (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UBlackboardComponent::STATIC_SetValueAsRotator(const struct FName& KeyName, const struct FRotator& VectorValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15966);

	UBlackboardComponent_SetValueAsRotator_Params params;
	params.KeyName = KeyName;
	params.VectorValue = VectorValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsObject
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::STATIC_SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15963);

	UBlackboardComponent_SetValueAsObject_Params params;
	params.KeyName = KeyName;
	params.ObjectValue = ObjectValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsName
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   NameValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::STATIC_SetValueAsName(const struct FName& KeyName, const struct FName& NameValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15960);

	UBlackboardComponent_SetValueAsName_Params params;
	params.KeyName = KeyName;
	params.NameValue = NameValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsInt
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            IntValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::STATIC_SetValueAsInt(const struct FName& KeyName, int IntValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15957);

	UBlackboardComponent_SetValueAsInt_Params params;
	params.KeyName = KeyName;
	params.IntValue = IntValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsFloat
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FloatValue                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::STATIC_SetValueAsFloat(const struct FName& KeyName, float FloatValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15954);

	UBlackboardComponent_SetValueAsFloat_Params params;
	params.KeyName = KeyName;
	params.FloatValue = FloatValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsEnum
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  EnumValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::STATIC_SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15951);

	UBlackboardComponent_SetValueAsEnum_Params params;
	params.KeyName = KeyName;
	params.EnumValue = EnumValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsClass
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ClassValue                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::STATIC_SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15948);

	UBlackboardComponent_SetValueAsClass_Params params;
	params.KeyName = KeyName;
	params.ClassValue = ClassValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsBool
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           BoolValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::STATIC_SetValueAsBool(const struct FName& KeyName, bool BoolValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15945);

	UBlackboardComponent_SetValueAsBool_Params params;
	params.KeyName = KeyName;
	params.BoolValue = BoolValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.IsVectorValueSet
// (BlueprintCosmetic)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlackboardComponent::IsVectorValueSet(const struct FName& KeyName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15942);

	UBlackboardComponent_IsVectorValueSet_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsVector
// (BlueprintCosmetic)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UBlackboardComponent::GetValueAsVector(const struct FName& KeyName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15939);

	UBlackboardComponent_GetValueAsVector_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsString
// (BlueprintCosmetic)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UBlackboardComponent::GetValueAsString(const struct FName& KeyName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15936);

	UBlackboardComponent_GetValueAsString_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsRotator
// (BlueprintCosmetic)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UBlackboardComponent::GetValueAsRotator(const struct FName& KeyName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15933);

	UBlackboardComponent_GetValueAsRotator_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsObject
// (BlueprintCosmetic)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UBlackboardComponent::GetValueAsObject(const struct FName& KeyName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15930);

	UBlackboardComponent_GetValueAsObject_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsName
// (BlueprintCosmetic)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UBlackboardComponent::GetValueAsName(const struct FName& KeyName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15927);

	UBlackboardComponent_GetValueAsName_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsInt
// (BlueprintCosmetic)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UBlackboardComponent::GetValueAsInt(const struct FName& KeyName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15924);

	UBlackboardComponent_GetValueAsInt_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsFloat
// (BlueprintCosmetic)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBlackboardComponent::GetValueAsFloat(const struct FName& KeyName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15921);

	UBlackboardComponent_GetValueAsFloat_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsEnum
// (BlueprintCosmetic)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UBlackboardComponent::GetValueAsEnum(const struct FName& KeyName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15918);

	UBlackboardComponent_GetValueAsEnum_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsClass
// (BlueprintCosmetic)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UBlackboardComponent::GetValueAsClass(const struct FName& KeyName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15915);

	UBlackboardComponent_GetValueAsClass_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsBool
// (BlueprintCosmetic)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlackboardComponent::GetValueAsBool(const struct FName& KeyName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15912);

	UBlackboardComponent_GetValueAsBool_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetRotationFromEntry
// (BlueprintAuthorityOnly)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                ResultRotation                 (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlackboardComponent::GetRotationFromEntry(const struct FName& KeyName, struct FRotator* ResultRotation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15908);

	UBlackboardComponent_GetRotationFromEntry_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultRotation != nullptr)
		*ResultRotation = params.ResultRotation;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetLocationFromEntry
// (BlueprintAuthorityOnly)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ResultLocation                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlackboardComponent::GetLocationFromEntry(const struct FName& KeyName, struct FVector* ResultLocation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15904);

	UBlackboardComponent_GetLocationFromEntry_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultLocation != nullptr)
		*ResultLocation = params.ResultLocation;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.ClearValue
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::STATIC_ClearValue(const struct FName& KeyName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15902);

	UBlackboardComponent_ClearValue_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::STATIC_ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16044);

	UBTDecorator_BlueprintBase_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::STATIC_ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16041);

	UBTDecorator_BlueprintBase_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::STATIC_ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16038);

	UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::STATIC_ReceiveObserverDeactivated(class AActor* OwnerActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16036);

	UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::STATIC_ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16033);

	UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::STATIC_ReceiveObserverActivated(class AActor* OwnerActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16031);

	UBTDecorator_BlueprintBase_ReceiveObserverActivated_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::STATIC_ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16028);

	UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::STATIC_ReceiveExecutionStart(class AActor* OwnerActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16026);

	UBTDecorator_BlueprintBase_ReceiveExecutionStart_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EBTNodeResult> NodeResult                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::STATIC_ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<AIModule_EBTNodeResult> NodeResult)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16022);

	UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.NodeResult = NodeResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EBTNodeResult> NodeResult                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::STATIC_ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<AIModule_EBTNodeResult> NodeResult)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16019);

	UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Params params;
	params.OwnerActor = OwnerActor;
	params.NodeResult = NodeResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
// ()
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTDecorator_BlueprintBase::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16015);

	UBTDecorator_BlueprintBase_PerformConditionCheckAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
// (BlueprintCosmetic)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTDecorator_BlueprintBase::PerformConditionCheck(class AActor* OwnerActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16012);

	UBTDecorator_BlueprintBase_PerformConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTDecorator_BlueprintBase::IsDecoratorObserverActive()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16010);

	UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTDecorator_BlueprintBase::IsDecoratorExecutionActive()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16008);

	UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_StopUsingExternalEvent(class UBTNode* NodeOwner)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16196);

	UBTFunctionLibrary_StopUsingExternalEvent_Params params;
	params.NodeOwner = NodeOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OwningActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16193);

	UBTFunctionLibrary_StartUsingExternalEvent_Params params;
	params.NodeOwner = NodeOwner;
	params.OwningActor = OwningActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                 Value                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16189);

	UBTFunctionLibrary_SetBlackboardValueAsVector_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FString& Value)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16185);

	UBTFunctionLibrary_SetBlackboardValueAsString_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FRotator                Value                          (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16181);

	UBTFunctionLibrary_SetBlackboardValueAsRotator_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                 Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16177);

	UBTFunctionLibrary_SetBlackboardValueAsObject_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FName& Value)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16173);

	UBTFunctionLibrary_SetBlackboardValueAsName_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int Value)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16169);

	UBTFunctionLibrary_SetBlackboardValueAsInt_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16165);

	UBTFunctionLibrary_SetBlackboardValueAsFloat_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// unsigned char                  Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16161);

	UBTFunctionLibrary_SetBlackboardValueAsEnum_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UClass*                  Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16157);

	UBTFunctionLibrary_SetBlackboardValueAsClass_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16153);

	UBTFunctionLibrary_SetBlackboardValueAsBool_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
// (BlueprintCosmetic)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlackboardComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBlackboardComponent* UBTFunctionLibrary::GetOwnersBlackboard(class UBTNode* NodeOwner)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16150);

	UBTFunctionLibrary_GetOwnersBlackboard_Params params;
	params.NodeOwner = NodeOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetOwnerComponent
// (BlueprintCosmetic)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBehaviorTreeComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBehaviorTreeComponent* UBTFunctionLibrary::GetOwnerComponent(class UBTNode* NodeOwner)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16147);

	UBTFunctionLibrary_GetOwnerComponent_Params params;
	params.NodeOwner = NodeOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
// ()
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UBTFunctionLibrary::GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16143);

	UBTFunctionLibrary_GetBlackboardValueAsVector_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
// ()
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UBTFunctionLibrary::GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16139);

	UBTFunctionLibrary_GetBlackboardValueAsString_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
// ()
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UBTFunctionLibrary::GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16135);

	UBTFunctionLibrary_GetBlackboardValueAsRotator_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
// ()
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UBTFunctionLibrary::GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16131);

	UBTFunctionLibrary_GetBlackboardValueAsObject_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
// ()
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UBTFunctionLibrary::GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16127);

	UBTFunctionLibrary_GetBlackboardValueAsName_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
// ()
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UBTFunctionLibrary::GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16123);

	UBTFunctionLibrary_GetBlackboardValueAsInt_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
// ()
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBTFunctionLibrary::GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16119);

	UBTFunctionLibrary_GetBlackboardValueAsFloat_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
// ()
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UBTFunctionLibrary::GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16115);

	UBTFunctionLibrary_GetBlackboardValueAsEnum_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
// ()
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UBTFunctionLibrary::GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16111);

	UBTFunctionLibrary_GetBlackboardValueAsClass_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
// ()
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTFunctionLibrary::GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16107);

	UBTFunctionLibrary_GetBlackboardValueAsBool_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
// ()
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UBTFunctionLibrary::GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16103);

	UBTFunctionLibrary_GetBlackboardValueAsActor_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16100);

	UBTFunctionLibrary_ClearBlackboardValueAsVector_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.ClearBlackboardValue
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16097);

	UBTFunctionLibrary_ClearBlackboardValue_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveTickAI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::STATIC_ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16223);

	UBTService_BlueprintBase_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::STATIC_ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16220);

	UBTService_BlueprintBase_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::STATIC_ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16217);

	UBTService_BlueprintBase_ReceiveSearchStartAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::STATIC_ReceiveSearchStart(class AActor* OwnerActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16215);

	UBTService_BlueprintBase_ReceiveSearchStart_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::STATIC_ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16212);

	UBTService_BlueprintBase_ReceiveDeactivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::STATIC_ReceiveDeactivation(class AActor* OwnerActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16210);

	UBTService_BlueprintBase_ReceiveDeactivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::STATIC_ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16207);

	UBTService_BlueprintBase_ReceiveActivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveActivation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::STATIC_ReceiveActivation(class AActor* OwnerActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16205);

	UBTService_BlueprintBase_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.IsServiceActive
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTService_BlueprintBase::IsServiceActive()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16203);

	UBTService_BlueprintBase_IsServiceActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   MessageName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RequestID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::STATIC_SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16263);

	UBTTask_BlueprintBase_SetFinishOnMessageWithId_Params params;
	params.MessageName = MessageName;
	params.RequestID = RequestID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   MessageName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::STATIC_SetFinishOnMessage(const struct FName& MessageName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16261);

	UBTTask_BlueprintBase_SetFinishOnMessage_Params params;
	params.MessageName = MessageName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::STATIC_ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16257);

	UBTTask_BlueprintBase_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::STATIC_ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16254);

	UBTTask_BlueprintBase_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::STATIC_ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16251);

	UBTTask_BlueprintBase_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveExecute
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::STATIC_ReceiveExecute(class AActor* OwnerActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16249);

	UBTTask_BlueprintBase_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::STATIC_ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16246);

	UBTTask_BlueprintBase_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveAbort
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::STATIC_ReceiveAbort(class AActor* OwnerActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16244);

	UBTTask_BlueprintBase_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTTask_BlueprintBase::IsTaskExecuting()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16242);

	UBTTask_BlueprintBase_IsTaskExecuting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTTask_BlueprintBase.IsTaskAborting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTTask_BlueprintBase::IsTaskAborting()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16240);

	UBTTask_BlueprintBase_IsTaskAborting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTTask_BlueprintBase.FinishExecute
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::STATIC_FinishExecute(bool bSuccess)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16238);

	UBTTask_BlueprintBase_FinishExecute_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.FinishAbort
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UBTTask_BlueprintBase::STATIC_FinishAbort()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16237);

	UBTTask_BlueprintBase_FinishAbort_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bSuspend                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCrowdFollowingComponent::STATIC_SuspendCrowdSteering(bool bSuspend)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16326);

	UCrowdFollowingComponent_SuspendCrowdSteering_Params params;
	params.bSuspend = bSuspend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ResultingLocation              (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnvQueryContext_BlueprintBase::STATIC_ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16364);

	UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultingLocation != nullptr)
		*ResultingLocation = params.ResultingLocation;

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ResultingActor                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnvQueryContext_BlueprintBase::STATIC_ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16360);

	UEnvQueryContext_BlueprintBase_ProvideSingleActor_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultingActor != nullptr)
		*ResultingActor = params.ResultingActor;

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         ResultingLocationSet           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEnvQueryContext_BlueprintBase::STATIC_ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16355);

	UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultingLocationSet != nullptr)
		*ResultingLocationSet = params.ResultingLocationSet;

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          ResultingActorsSet             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEnvQueryContext_BlueprintBase::STATIC_ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16350);

	UEnvQueryContext_BlueprintBase_ProvideActorsSet_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultingActorsSet != nullptr)
		*ResultingActorsSet = params.ResultingActorsSet;

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
// ()
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UEnvQueryGenerator_BlueprintBase::GetQuerier()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16383);

	UEnvQueryGenerator_BlueprintBase_GetQuerier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FVector>         ContextLocations               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UEnvQueryGenerator_BlueprintBase::STATIC_DoItemGeneration(TArray<struct FVector> ContextLocations)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16380);

	UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Params params;
	params.ContextLocations = ContextLocations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 GeneratedVector                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnvQueryGenerator_BlueprintBase::STATIC_AddGeneratedVector(const struct FVector& GeneratedVector)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16378);

	UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params params;
	params.GeneratedVector = GeneratedVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  GeneratedActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnvQueryGenerator_BlueprintBase::STATIC_AddGeneratedActor(class AActor* GeneratedActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16376);

	UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params params;
	params.GeneratedActor = GeneratedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   ParamName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnvQueryInstanceBlueprintWrapper::STATIC_SetNamedParam(const struct FName& ParamName, float Value)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4513);

	UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Params params;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
// ()
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector> UEnvQueryInstanceBlueprintWrapper::GetResultsAsLocations()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4510);

	UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
// ()
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AActor*> UEnvQueryInstanceBlueprintWrapper::GetResultsAsActors()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4507);

	UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
// (BlueprintAuthorityOnly)
// Parameters:
// int                            ItemIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UEnvQueryInstanceBlueprintWrapper::GetItemScore(int ItemIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4504);

	UEnvQueryInstanceBlueprintWrapper_GetItemScore_Params params;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EEnvQueryStatus> QueryStatus                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnvQueryInstanceBlueprintWrapper::STATIC_EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<AIModule_EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4500);

	UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.EnvQueryManager.RunEQSQuery
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnvQuery*               QueryTemplate                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 Querier                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EEnvQueryRunMode> RunMode                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  WrapperClass                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnvQueryInstanceBlueprintWrapper* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEnvQueryInstanceBlueprintWrapper* UEnvQueryManager::RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<AIModule_EEnvQueryRunMode> RunMode, class UClass* WrapperClass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(16429);

	UEnvQueryManager_RunEQSQuery_Params params;
	params.WorldContextObject = WorldContextObject;
	params.QueryTemplate = QueryTemplate;
	params.Querier = Querier;
	params.RunMode = RunMode;
	params.WrapperClass = WrapperClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
