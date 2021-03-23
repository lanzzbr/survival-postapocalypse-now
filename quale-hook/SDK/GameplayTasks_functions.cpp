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

// Function GameplayTasks.GameplayTask.ReadyForActivation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGameplayTask::STATIC_ReadyForActivation()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4467);

	UGameplayTask_ReadyForActivation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGameplayTask::STATIC_GenericGameplayTaskDelegate__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4466);

	UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayTasks.GameplayTask.EndTask
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGameplayTask::STATIC_EndTask()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4465);

	UGameplayTask_EndTask_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
// ()
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface> InTaskOwner                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// TArray<class UClass*>          ResourceClasses                (Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
// unsigned char                  Priority                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   TaskInstanceName               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_ClaimResource* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameplayTask_ClaimResource* UGameplayTask_ClaimResource::ClaimResources(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, TArray<class UClass*> ResourceClasses, unsigned char Priority, const struct FName& TaskInstanceName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15492);

	UGameplayTask_ClaimResource_ClaimResources_Params params;
	params.InTaskOwner = InTaskOwner;
	params.ResourceClasses = ResourceClasses;
	params.Priority = Priority;
	params.TaskInstanceName = TaskInstanceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
// (BlueprintCosmetic)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface> InTaskOwner                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class UClass*                  ResourceClass                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  Priority                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   TaskInstanceName               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_ClaimResource* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameplayTask_ClaimResource* UGameplayTask_ClaimResource::ClaimResource(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, class UClass* ResourceClass, unsigned char Priority, const struct FName& TaskInstanceName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15486);

	UGameplayTask_ClaimResource_ClaimResource_Params params;
	params.InTaskOwner = InTaskOwner;
	params.ResourceClass = ResourceClass;
	params.Priority = Priority;
	params.TaskInstanceName = TaskInstanceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
// (BlueprintCosmetic)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
// struct FVector                 SpawnLocation                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                SpawnRotation                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSpawnOnlyOnAuthority          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_SpawnActor* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameplayTask_SpawnActor* UGameplayTask_SpawnActor::SpawnActor(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15506);

	UGameplayTask_SpawnActor_SpawnActor_Params params;
	params.TaskOwner = TaskOwner;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;
	params.Class = Class;
	params.bSpawnOnlyOnAuthority = bSpawnOnlyOnAuthority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  SpawnedActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameplayTask_SpawnActor::STATIC_FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15503);

	UGameplayTask_SpawnActor_FinishSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  SpawnedActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameplayTask_SpawnActor::BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15499);

	UGameplayTask_SpawnActor_BeginSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;


	return params.ReturnValue;
}


// Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
// (BlueprintCosmetic)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  Priority                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_WaitDelay* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameplayTask_WaitDelay* UGameplayTask_WaitDelay::TaskWaitDelay(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, float Time, unsigned char Priority)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4483);

	UGameplayTask_WaitDelay_TaskWaitDelay_Params params;
	params.TaskOwner = TaskOwner;
	params.Time = Time;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGameplayTask_WaitDelay::STATIC_TaskDelayDelegate__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4482);

	UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGameplayTasksComponent::STATIC_OnRep_SimulatedTasks()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15529);

	UGameplayTasksComponent_OnRep_SimulatedTasks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
// (Net)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class UGameplayTask*           Task                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  Priority                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UClass*>          AdditionalRequiredResources    (Parm, ZeroConstructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
// TArray<class UClass*>          AdditionalClaimedResources     (Parm, ZeroConstructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
// GameplayTasks_EGameplayTaskRunResult ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GameplayTasks_EGameplayTaskRunResult UGameplayTasksComponent::K2_RunGameplayTask(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, class UGameplayTask* Task, unsigned char Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15519);

	UGameplayTasksComponent_K2_RunGameplayTask_Params params;
	params.TaskOwner = TaskOwner;
	params.Task = Task;
	params.Priority = Priority;
	params.AdditionalRequiredResources = AdditionalRequiredResources;
	params.AdditionalClaimedResources = AdditionalClaimedResources;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
