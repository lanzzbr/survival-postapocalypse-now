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

// BlueprintGeneratedClass Cv2_VehicleComponent.Cv2_VehicleComponent_C
// 0x00E8 (FullSize[0x01D8] - InheritedSize[0x00F0])
class UCv2_VehicleComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class AWheeledVehicle*                             Vehicle;                                                   // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCv2_DestroyComponent_C*                     DestroyComponent;                                          // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>            DustPSC;                                                   // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USceneComponent*>                     CrewMesh;                                                  // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UPrimitiveComponent*>                 Capsule;                                                   // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkinnedMeshComponent*>               SkinnedMesh;                                               // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                StaticMesh;                                                // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class APawn*                                       PlayerPawn;                                                // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          VehicleSide;                                               // 0x0160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_USM0[0x7];                                     // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OwnerID;                                                   // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              DeleteVehicleTimer;                                        // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                bulletFireCount;                                           // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               lastShoot;                                                 // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               proxyIsKazenniy;                                           // 0x0181(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1IPU[0x2];                                     // 0x0182(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     oldVehicleLocation;                                        // 0x0184(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VehicleSpeed;                                              // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isBoomed;                                                  // 0x0194(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XD37[0x3];                                     // 0x0195(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USkinnedMeshComponent*>               Parts_TORSES;                                              // 0x0198(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkinnedMeshComponent*>               PARTS_LEGS;                                                // 0x01A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkinnedMeshComponent*>               Parts_FOOTS;                                               // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                Parts_FACES;                                               // 0x01C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(96385);
		return ptr;
	}



	void STATIC_GetBattery(int* GetFuel);
	void STATIC_HideCrewMesh(TEnumAsByte<CrewEnum_ECrewEnum> TypeCrew, class ACv2_Character_C* Character);
	void STATIC_ShowCrewMesh(TEnumAsByte<CrewEnum_ECrewEnum> TypeCrew, class ACv2_Character_C* Character);
	void STATIC_CheckCarDamageCrash();
	void STATIC_SetWinterPaint();
	void STATIC_HideComRepPassenger(TEnumAsByte<CrewEnum_ECrewEnum> Index);
	void STATIC_Damage_LeftTrack();
	void STATIC_Damage_RightTrack();
	void STATIC_SetPaint();
	void STATIC_CheckCarBoom();
	void STATIC_ActivateVeh();
	void STATIC_DeactivateVeh();
	void STATIC_FireArt(float Pitch, float Yaw);
	void STATIC_SetLight();
	void STATIC_UpdateCrewsServer();
	void STATIC_AttackCarVelocity(class AActor* Actor, class UPrimitiveComponent* Component);
	void STATIC_Comp_OnRep(TArray<struct FCrewStructure2>* Crews);
	void STATIC_GetAmmo(TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> AmmoType, int* GetAmmo);
	void STATIC_GetFuel(int* GetFuel);
	void STATIC_TankReloadingSoundPlay();
	void STATIC_UpdateWheelEffects();
	void STATIC_AttackVelocity(class AActor* Actor, class UPrimitiveComponent* Component, const struct FVector& Location);
	void STATIC_FireTank(float Pitch, float Yaw, const struct FVehStructure& VehStructure, class USkeletalMeshComponent* Mesh, class APawn* Pawn);
	void STATIC_CheckCrews(TArray<struct FCrewStructure2>* Crews, TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> PlayerSide, class ACv2_playerController_C* PlayerControooller, bool IsOpen, TEnumAsByte<CrewEnum_ECrewEnum>* EmptyCrewz);
	void STATIC_ExitVehicleServer(TEnumAsByte<CrewEnum_ECrewEnum> CrewEnum);
	void STATIC_DestroyVehicle(class UDestructibleMesh* DestructMesh, class UClass* DestroyActorClass);
	void STATIC_CheckActionSide(class USkeletalMeshComponent* SkeletalMesh, const struct FVector& HitLocation, TEnumAsByte<Cv2_VehicleSides_ECv2_VehicleSides>* outside);
	void STATIC_CheckTankDamage(class USkeletalMeshComponent* SkeletalMesh, const struct FVector& HitLocation, float hitDamage, float* OutDamage, TEnumAsByte<Cv2_VehicleSides_ECv2_VehicleSides>* Side_Veh);
	void STATIC_ReceiveBeginPlay();
	void STATIC_Comp_OnRepTimer(TArray<struct FCrewStructure2> Crews);
	void STATIC_ExecuteUbergraph_Cv2_VehicleComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
