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
// Parameters
//---------------------------------------------------------------------------

// Function Cv2_Base.FixPlayerController.RunACProcess
struct AFixPlayerController_RunACProcess_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.FixPlayerController.K2_StopTalking
struct AFixPlayerController_K2_StopTalking_Params
{
};

// Function Cv2_Base.FixPlayerController.K2_StartTalking
struct AFixPlayerController_K2_StartTalking_Params
{
};

// Function Cv2_Base.FixPlayerController.K2_ServerUnmutePlayer
struct AFixPlayerController_K2_ServerUnmutePlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                  // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.FixPlayerController.K2_ServerMutePlayer
struct AFixPlayerController_K2_ServerMutePlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                  // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.FixPlayerController.K2_IsPlayerMuted
struct AFixPlayerController_K2_IsPlayerMuted_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.FixPlayerController.K2_GameplayUnmutePlayer
struct AFixPlayerController_K2_GameplayUnmutePlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.FixPlayerController.K2_GameplayMutePlayer
struct AFixPlayerController_K2_GameplayMutePlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.FixPlayerController.K2_ClientUnmutePlayer
struct AFixPlayerController_K2_ClientUnmutePlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                  // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.FixPlayerController.K2_ClientMutePlayer
struct AFixPlayerController_K2_ClientMutePlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                  // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.FixPlayerController.DestroyACProcess
struct AFixPlayerController_DestroyACProcess_Params
{
};

// Function Cv2_Base.MyBlueprintFixes.WritteToFile
struct UMyBlueprintFixes_WritteToFile_Params
{
	struct FString                                     AddedString;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PathToFile;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.MyBlueprintFixes.UpdateWheelEffectsHelper
struct UMyBlueprintFixes_UpdateWheelEffectsHelper_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWheeledVehicleMovementComponent*            VehicleMovementComponent;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      Mesh;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Speed;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WheelIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    DustPSC;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVehicleDustType*                            DustType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.MyBlueprintFixes.SetPhysicsConstraintActor2
struct UMyBlueprintFixes_SetPhysicsConstraintActor2_Params
{
	class UPhysicsConstraintComponent*                 PhysicsConstraint;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor2;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.MyBlueprintFixes.SetPhysicsConstraintActor1
struct UMyBlueprintFixes_SetPhysicsConstraintActor1_Params
{
	class UPhysicsConstraintComponent*                 PhysicsConstraint;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor1;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.MyBlueprintFixes.SetCurrentCulture
struct UMyBlueprintFixes_SetCurrentCulture_Params
{
	struct FString                                     Culture;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.MyBlueprintFixes.SetCharacterMovementHalfHeight
struct UMyBlueprintFixes_SetCharacterMovementHalfHeight_Params
{
	class UCharacterMovementComponent*                 Component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.MyBlueprintFixes.SetBodyLock
struct UMyBlueprintFixes_SetBodyLock_Params
{
	class UPrimitiveComponent*                         Component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               LockXPosition;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               LockYPosition;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               LockZPosition;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               LockXRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               LockYRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               LockZRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.MyBlueprintFixes.MyTryServerRestart
struct UMyBlueprintFixes_MyTryServerRestart_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapUrl;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.MyBlueprintFixes.IsWithEditor
struct UMyBlueprintFixes_IsWithEditor_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.MyBlueprintFixes.GetUnixTimeStamp
struct UMyBlueprintFixes_GetUnixTimeStamp_Params
{
	struct FDateTime                                   UTCTime;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.MyBlueprintFixes.GetMD5Sum
struct UMyBlueprintFixes_GetMD5Sum_Params
{
	struct FString                                     InputText;                                                 // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.MyBlueprintFixes.GetGameSessionMaxPlayers
struct UMyBlueprintFixes_GetGameSessionMaxPlayers_Params
{
	int                                                DefaultMaxPlayers;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.MyBlueprintFixes.GetCurrentCulture
struct UMyBlueprintFixes_GetCurrentCulture_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.MyBlueprintFixes.GetBodyLock
struct UMyBlueprintFixes_GetBodyLock_Params
{
	class UPrimitiveComponent*                         Component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               LockXPosition;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               LockYPosition;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               LockZPosition;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               LockXRotation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               LockYRotation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               LockZRotation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.MyBlueprintFixes.GetArrayFromFile
struct UMyBlueprintFixes_GetArrayFromFile_Params
{
	struct FString                                     PathToFile;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Cv2_Base.MyBlueprintFixes.AddToFile
struct UMyBlueprintFixes_AddToFile_Params
{
	struct FString                                     AddedString;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PathToFile;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
