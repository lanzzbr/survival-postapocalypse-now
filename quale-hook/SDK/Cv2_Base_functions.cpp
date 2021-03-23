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

// Function Cv2_Base.FixPlayerController.RunACProcess
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFixPlayerController::RunACProcess()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11738);

	AFixPlayerController_RunACProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Cv2_Base.FixPlayerController.K2_StopTalking
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AFixPlayerController::STATIC_K2_StopTalking()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11737);

	AFixPlayerController_K2_StopTalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Base.FixPlayerController.K2_StartTalking
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AFixPlayerController::STATIC_K2_StartTalking()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11736);

	AFixPlayerController_K2_StartTalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Base.FixPlayerController.K2_ServerUnmutePlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFixPlayerController::STATIC_K2_ServerUnmutePlayer(const struct FUniqueNetIdRepl& PlayerId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11734);

	AFixPlayerController_K2_ServerUnmutePlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Base.FixPlayerController.K2_ServerMutePlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFixPlayerController::STATIC_K2_ServerMutePlayer(const struct FUniqueNetIdRepl& PlayerId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11732);

	AFixPlayerController_K2_ServerMutePlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Base.FixPlayerController.K2_IsPlayerMuted
// (BlueprintCosmetic)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFixPlayerController::K2_IsPlayerMuted(const struct FUniqueNetIdRepl& PlayerId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11729);

	AFixPlayerController_K2_IsPlayerMuted_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Cv2_Base.FixPlayerController.K2_GameplayUnmutePlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFixPlayerController::STATIC_K2_GameplayUnmutePlayer(const struct FUniqueNetIdRepl& PlayerId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11727);

	AFixPlayerController_K2_GameplayUnmutePlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Base.FixPlayerController.K2_GameplayMutePlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFixPlayerController::STATIC_K2_GameplayMutePlayer(const struct FUniqueNetIdRepl& PlayerId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11725);

	AFixPlayerController_K2_GameplayMutePlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Base.FixPlayerController.K2_ClientUnmutePlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFixPlayerController::STATIC_K2_ClientUnmutePlayer(const struct FUniqueNetIdRepl& PlayerId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11723);

	AFixPlayerController_K2_ClientUnmutePlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Base.FixPlayerController.K2_ClientMutePlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFixPlayerController::STATIC_K2_ClientMutePlayer(const struct FUniqueNetIdRepl& PlayerId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11721);

	AFixPlayerController_K2_ClientMutePlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Base.FixPlayerController.DestroyACProcess
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AFixPlayerController::STATIC_DestroyACProcess()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11720);

	AFixPlayerController_DestroyACProcess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Base.MyBlueprintFixes.WritteToFile
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 AddedString                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PathToFile                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMyBlueprintFixes::STATIC_WritteToFile(const struct FString& AddedString, const struct FString& PathToFile)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(12009);

	UMyBlueprintFixes_WritteToFile_Params params;
	params.AddedString = AddedString;
	params.PathToFile = PathToFile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Base.MyBlueprintFixes.UpdateWheelEffectsHelper
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWheeledVehicleMovementComponent* VehicleMovementComponent       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*  Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            WheelIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UParticleSystemComponent* DustPSC                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVehicleDustType*        DustType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UParticleSystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UParticleSystemComponent* UMyBlueprintFixes::UpdateWheelEffectsHelper(class UObject* WorldContextObject, class UWheeledVehicleMovementComponent* VehicleMovementComponent, class USkeletalMeshComponent* Mesh, float Speed, int WheelIdx, class UParticleSystemComponent* DustPSC, class UVehicleDustType* DustType, class AActor* Actor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11999);

	UMyBlueprintFixes_UpdateWheelEffectsHelper_Params params;
	params.WorldContextObject = WorldContextObject;
	params.VehicleMovementComponent = VehicleMovementComponent;
	params.Mesh = Mesh;
	params.Speed = Speed;
	params.WheelIdx = WheelIdx;
	params.DustPSC = DustPSC;
	params.DustType = DustType;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Cv2_Base.MyBlueprintFixes.SetPhysicsConstraintActor2
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UPhysicsConstraintComponent* PhysicsConstraint              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor2                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMyBlueprintFixes::STATIC_SetPhysicsConstraintActor2(class UPhysicsConstraintComponent* PhysicsConstraint, class AActor* Actor2)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11996);

	UMyBlueprintFixes_SetPhysicsConstraintActor2_Params params;
	params.PhysicsConstraint = PhysicsConstraint;
	params.Actor2 = Actor2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Base.MyBlueprintFixes.SetPhysicsConstraintActor1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UPhysicsConstraintComponent* PhysicsConstraint              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor1                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMyBlueprintFixes::STATIC_SetPhysicsConstraintActor1(class UPhysicsConstraintComponent* PhysicsConstraint, class AActor* Actor1)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11993);

	UMyBlueprintFixes_SetPhysicsConstraintActor1_Params params;
	params.PhysicsConstraint = PhysicsConstraint;
	params.Actor1 = Actor1;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Base.MyBlueprintFixes.SetCurrentCulture
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 Culture                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMyBlueprintFixes::STATIC_SetCurrentCulture(const struct FString& Culture)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11991);

	UMyBlueprintFixes_SetCurrentCulture_Params params;
	params.Culture = Culture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Base.MyBlueprintFixes.SetCharacterMovementHalfHeight
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UCharacterMovementComponent* Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Height                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMyBlueprintFixes::STATIC_SetCharacterMovementHalfHeight(class UCharacterMovementComponent* Component, float Height)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11988);

	UMyBlueprintFixes_SetCharacterMovementHalfHeight_Params params;
	params.Component = Component;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Base.MyBlueprintFixes.SetBodyLock
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           LockXPosition                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           LockYPosition                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           LockZPosition                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           LockXRotation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           LockYRotation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           LockZRotation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMyBlueprintFixes::STATIC_SetBodyLock(class UPrimitiveComponent* Component, bool LockXPosition, bool LockYPosition, bool LockZPosition, bool LockXRotation, bool LockYRotation, bool LockZRotation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11980);

	UMyBlueprintFixes_SetBodyLock_Params params;
	params.Component = Component;
	params.LockXPosition = LockXPosition;
	params.LockYPosition = LockYPosition;
	params.LockZPosition = LockZPosition;
	params.LockXRotation = LockXRotation;
	params.LockYRotation = LockYRotation;
	params.LockZRotation = LockZRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Base.MyBlueprintFixes.MyTryServerRestart
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MapUrl                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMyBlueprintFixes::STATIC_MyTryServerRestart(class UObject* WorldContextObject, const struct FString& MapUrl)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11977);

	UMyBlueprintFixes_MyTryServerRestart_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MapUrl = MapUrl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Base.MyBlueprintFixes.IsWithEditor
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMyBlueprintFixes::IsWithEditor()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11975);

	UMyBlueprintFixes_IsWithEditor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Cv2_Base.MyBlueprintFixes.GetUnixTimeStamp
// (BlueprintCosmetic)
// Parameters:
// struct FDateTime               UTCTime                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMyBlueprintFixes::GetUnixTimeStamp(const struct FDateTime& UTCTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11972);

	UMyBlueprintFixes_GetUnixTimeStamp_Params params;
	params.UTCTime = UTCTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Cv2_Base.MyBlueprintFixes.GetMD5Sum
// ()
// Parameters:
// struct FString                 InputText                      (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMyBlueprintFixes::GetMD5Sum(const struct FString& InputText)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11969);

	UMyBlueprintFixes_GetMD5Sum_Params params;
	params.InputText = InputText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Cv2_Base.MyBlueprintFixes.GetGameSessionMaxPlayers
// (BlueprintAuthorityOnly)
// Parameters:
// int                            DefaultMaxPlayers              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMyBlueprintFixes::GetGameSessionMaxPlayers(int DefaultMaxPlayers)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11966);

	UMyBlueprintFixes_GetGameSessionMaxPlayers_Params params;
	params.DefaultMaxPlayers = DefaultMaxPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Cv2_Base.MyBlueprintFixes.GetCurrentCulture
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMyBlueprintFixes::GetCurrentCulture()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11964);

	UMyBlueprintFixes_GetCurrentCulture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Cv2_Base.MyBlueprintFixes.GetBodyLock
// (RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           LockXPosition                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           LockYPosition                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           LockZPosition                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           LockXRotation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           LockYRotation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           LockZRotation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMyBlueprintFixes::GetBodyLock(class UPrimitiveComponent* Component, bool* LockXPosition, bool* LockYPosition, bool* LockZPosition, bool* LockXRotation, bool* LockYRotation, bool* LockZRotation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11955);

	UMyBlueprintFixes_GetBodyLock_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LockXPosition != nullptr)
		*LockXPosition = params.LockXPosition;
	if (LockYPosition != nullptr)
		*LockYPosition = params.LockYPosition;
	if (LockZPosition != nullptr)
		*LockZPosition = params.LockZPosition;
	if (LockXRotation != nullptr)
		*LockXRotation = params.LockXRotation;
	if (LockYRotation != nullptr)
		*LockYRotation = params.LockYRotation;
	if (LockZRotation != nullptr)
		*LockZRotation = params.LockZRotation;


	return params.ReturnValue;
}


// Function Cv2_Base.MyBlueprintFixes.GetArrayFromFile
// ()
// Parameters:
// struct FString                 PathToFile                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UMyBlueprintFixes::GetArrayFromFile(const struct FString& PathToFile)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11951);

	UMyBlueprintFixes_GetArrayFromFile_Params params;
	params.PathToFile = PathToFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Cv2_Base.MyBlueprintFixes.AddToFile
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 AddedString                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PathToFile                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMyBlueprintFixes::STATIC_AddToFile(const struct FString& AddedString, const struct FString& PathToFile)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(11948);

	UMyBlueprintFixes_AddToFile_Params params;
	params.AddedString = AddedString;
	params.PathToFile = PathToFile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
