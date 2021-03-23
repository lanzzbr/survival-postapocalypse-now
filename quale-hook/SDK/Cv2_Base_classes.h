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
// Classes
//---------------------------------------------------------------------------

// Class Cv2_Base.FixCharacter
// 0x0010 (FullSize[0x0790] - InheritedSize[0x0780])
class AFixCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData_0GJC[0x10];                                    // 0x0780(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(7);
		return ptr;
	}



};

// Class Cv2_Base.FixPlayerController
// 0x0010 (FullSize[0x06D0] - InheritedSize[0x06C0])
class AFixPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData_1GZO[0x8];                                     // 0x06C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACharacter*                                  LastCharacter;                                             // 0x06C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(10);
		return ptr;
	}



	bool RunACProcess();
	void STATIC_K2_StopTalking();
	void STATIC_K2_StartTalking();
	void STATIC_K2_ServerUnmutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	void STATIC_K2_ServerMutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	bool K2_IsPlayerMuted(const struct FUniqueNetIdRepl& PlayerId);
	void STATIC_K2_GameplayUnmutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	void STATIC_K2_GameplayMutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	void STATIC_K2_ClientUnmutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	void STATIC_K2_ClientMutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	void STATIC_DestroyACProcess();
};

// Class Cv2_Base.FurnitureAnimInstance
// 0x0008 (FullSize[0x03C0] - InheritedSize[0x03B8])
class UFurnitureAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_EKUS[0x8];                                     // 0x03B8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(18);
		return ptr;
	}



};

// Class Cv2_Base.MyBlueprintFixes
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMyBlueprintFixes : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(20);
		return ptr;
	}



	void STATIC_WritteToFile(const struct FString& AddedString, const struct FString& PathToFile);
	class UParticleSystemComponent* UpdateWheelEffectsHelper(class UObject* WorldContextObject, class UWheeledVehicleMovementComponent* VehicleMovementComponent, class USkeletalMeshComponent* Mesh, float Speed, int WheelIdx, class UParticleSystemComponent* DustPSC, class UVehicleDustType* DustType, class AActor* Actor);
	void STATIC_SetPhysicsConstraintActor2(class UPhysicsConstraintComponent* PhysicsConstraint, class AActor* Actor2);
	void STATIC_SetPhysicsConstraintActor1(class UPhysicsConstraintComponent* PhysicsConstraint, class AActor* Actor1);
	void STATIC_SetCurrentCulture(const struct FString& Culture);
	void STATIC_SetCharacterMovementHalfHeight(class UCharacterMovementComponent* Component, float Height);
	void STATIC_SetBodyLock(class UPrimitiveComponent* Component, bool LockXPosition, bool LockYPosition, bool LockZPosition, bool LockXRotation, bool LockYRotation, bool LockZRotation);
	void STATIC_MyTryServerRestart(class UObject* WorldContextObject, const struct FString& MapUrl);
	bool IsWithEditor();
	int GetUnixTimeStamp(const struct FDateTime& UTCTime);
	struct FString GetMD5Sum(const struct FString& InputText);
	int GetGameSessionMaxPlayers(int DefaultMaxPlayers);
	struct FString GetCurrentCulture();
	bool GetBodyLock(class UPrimitiveComponent* Component, bool* LockXPosition, bool* LockYPosition, bool* LockZPosition, bool* LockXRotation, bool* LockYRotation, bool* LockZRotation);
	TArray<struct FString> GetArrayFromFile(const struct FString& PathToFile);
	void STATIC_AddToFile(const struct FString& AddedString, const struct FString& PathToFile);
};

// Class Cv2_Base.VehicleDustType
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UVehicleDustType : public UDataAsset
{
public:
	class UParticleSystem*                             AsphaltFX;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             DirtFX;                                                    // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             WaterFX;                                                   // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             GrassFX;                                                   // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             GravelFX;                                                  // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AsphaltMinSpeed;                                           // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DirtMinSpeed;                                              // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WaterMinSpeed;                                             // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GrassMinSpeed;                                             // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GravelMinSpeed;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MYRZ[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(22);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
