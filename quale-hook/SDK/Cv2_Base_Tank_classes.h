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

// BlueprintGeneratedClass Cv2_Base_Tank.Cv2_Base_Tank_C
// 0x04F4 (FullSize[0x08CC] - InheritedSize[0x03D8])
class ACv2_Base_Tank_C : public ATankVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D8(0x0008) (Transient, DuplicateTransient)
	class UCv4_BulletComponent_C*                      Cv4_BulletComponent;                                       // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVoiceChatComponent*                         VoiceChat;                                                 // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVoiceAudioComponent*                        VoiceAudio;                                                // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Fire;                                                      // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UZ_InventoryComponent_C*                     Z_InventoryComponent;                                      // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            Camera;                                                    // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                         SpotLight;                                                 // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Passager2_Helmet;                                          // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           Capsule2;                                                  // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Passager2;                                                 // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           Capsule1;                                                  // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Passager1_Helmet;                                          // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Passager1;                                                 // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCv2_DestroyComponent_C*                     Cv2_DestroyComponent;                                      // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCv2_VehicleComponent_C*                     Cv2_VehicleComponent;                                      // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Turret;                                                    // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        DriverHelmet;                                              // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           Capsule;                                                   // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      DriverMesh;                                                // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             tire;                                                      // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Engine;                                                    // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Kostil;                                                    // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm;                                                 // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              AxisForward;                                               // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AxisRight;                                                 // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxSpeed;                                                  // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EngineActive;                                              // 0x04B4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_X4UL[0x3];                                     // 0x04B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TurretBase;                                                // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TurretGun;                                                 // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NetTurretBase;                                             // 0x04C0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NetTurretGun;                                              // 0x04C4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<VehicleAllEnum_EVehicleAllEnum>        VehicleEnum;                                               // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isFire;                                                    // 0x04C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SRCD[0x6];                                     // 0x04CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVehStructure                               VehicleStructure;                                          // 0x04D0(0x00F0) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              FireRateTimer;                                             // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CG38[0x4];                                     // 0x05C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCrewStructure2>                     Crews;                                                     // 0x05C8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify)
	class AAIController*                               AIController;                                              // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HitPoints;                                                 // 0x05E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                               isDead;                                                    // 0x05E4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_DK2N[0x3];                                     // 0x05E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    DynamicTrack2;                                             // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    DynamicTrack3;                                             // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAim;                                                     // 0x05F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MF8Z[0x7];                                     // 0x05F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ACv2_PassagerPawn_C*>                 PassagersPawn;                                             // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Light;                                                     // 0x0610(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               IsOpen;                                                    // 0x0611(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NDC3[0x2];                                     // 0x0612(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AttackHouseTimer;                                          // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isFireNet;                                                 // 0x0618(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isMachinegunner;                                           // 0x0619(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GQNM[0x2];                                     // 0x061A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FireRateMachineguuner;                                     // 0x061C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCv2_WeaponsStructure                       WeaponStructure;                                           // 0x0620(0x0248) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FVector                                     damageDirection;                                           // 0x0868(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CameraFollowProjectile;                                    // 0x0874(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LI50[0x3];                                     // 0x0875(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACv2_RocketActor_C*                          DynamicProjectile;                                         // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FreeView;                                                  // 0x0880(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F4HO[0x3];                                     // 0x0881(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector_NetQuantize                         NetVehicleLocation;                                        // 0x0884(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor)
	struct FVector_NetQuantize                         NetVehicleRotation;                                        // 0x0890(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor)
	float                                              dropVelocityTimer;                                         // 0x089C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShiftSpeed;                                                // 0x08A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isKazenniy;                                                // 0x08A1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsDamaged;                                                 // 0x08A2(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_G9V5[0x5];                                     // 0x08A3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    damageEmitterTimer;                                        // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          RealSide;                                                  // 0x08B0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                               isZoomCamera;                                              // 0x08B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isDamaged_Left_Track;                                      // 0x08B2(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               isDamaged_Right_Track;                                     // 0x08B3(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	int                                                repairTracksCount;                                         // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                cameraMoves;                                               // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isDamaged_Engine;                                          // 0x08BC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_UAO0[0x3];                                     // 0x08BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartSpawnTime;                                            // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PushToTalk;                                                // 0x08C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AACB[0x3];                                     // 0x08C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AmmoShells;                                                // 0x08C8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(96554);
		return ptr;
	}



	void STATIC_SetAmmoShells();
	void STATIC_SetDynamicTracks();
	void STATIC_OnRep_isDamaged_Engine();
	void STATIC_OnRep_IsDamaged();
	void STATIC_SetCameraFollowShell();
	void STATIC_OnRep_isDamaged_Left_Track();
	void STATIC_OnRep_isDamaged_Right_Track();
	void STATIC_OnRep_RealSide();
	void STATIC_FireClient();
	void STATIC_OnRep_HitPoints();
	void STATIC_OnRep_Light();
	void STATIC_OnRep_EngineActive();
	void STATIC_OnRep_isDead();
	void STATIC_OnRep_Crews();
	void STATIC_UserConstructionScript();
	void STATIC_InpActEvt_Use_K2Node_InputActionEvent_11(const struct FKey& Key);
	void STATIC_InpActEvt_Flashlight_K2Node_InputActionEvent_10(const struct FKey& Key);
	void STATIC_InpActEvt_Open_Vehicle_K2Node_InputActionEvent_9(const struct FKey& Key);
	void STATIC_InpActEvt_Fire_K2Node_InputActionEvent_8(const struct FKey& Key);
	void STATIC_InpActEvt_Fire_K2Node_InputActionEvent_7(const struct FKey& Key);
	void STATIC_InpActEvt_Aim_K2Node_InputActionEvent_6(const struct FKey& Key);
	void STATIC_InpActEvt_Switch_Weapon_K2Node_InputActionEvent_5(const struct FKey& Key);
	void STATIC_InpActEvt_LeftAlt_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void STATIC_InpActEvt_LeftAlt_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void STATIC_InpActEvt_Walk_K2Node_InputActionEvent_4(const struct FKey& Key);
	void STATIC_InpActEvt_Walk_K2Node_InputActionEvent_3(const struct FKey& Key);
	void STATIC_InpActEvt_LeftShift_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void STATIC_InpActEvt_LeftShift_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void STATIC_InpActEvt_One_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void STATIC_InpActEvt_Two_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void STATIC_InpActEvt_Three_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void STATIC_InpActEvt_Four_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void STATIC_InpActEvt_Five_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void STATIC_InpActEvt_VoiceChat_K2Node_InputActionEvent_2(const struct FKey& Key);
	void STATIC_InpActEvt_VoiceChat_K2Node_InputActionEvent_1(const struct FKey& Key);
	void STATIC_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_16(float AxisValue);
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_ServerSetTurret(float ServTurretBase, float ServTurretGun);
	void STATIC_InpAxisEvt_Turn_K2Node_InputAxisEvent_124(float AxisValue);
	void STATIC_InpAxisEvt_LookUp_K2Node_InputAxisEvent_116(float AxisValue);
	void STATIC_ReceiveBeginPlay();
	void STATIC_ServerFire(float Pitch, float Yaw);
	void STATIC_MulticastFire(float Pitch, float Yaw);
	void STATIC_ExitVehicleServer();
	void STATIC_ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void STATIC_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void STATIC_Repair();
	void STATIC_SetLight(bool isLight);
	void STATIC_OpenCarServer(bool IsOpen);
	void STATIC_FireServer(bool Fire);
	void STATIC_SwitchWeaponServer(bool isGun);
	void STATIC_InpAxisEvt_MoveBack_K2Node_InputAxisEvent_3(float AxisValue);
	void STATIC_InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_2(float AxisValue);
	void STATIC_ServerSetLocationAndRotation(const struct FVector_NetQuantize& Location, const struct FVector_NetQuantize& Rotation);
	void STATIC_CheckReplicateMovement();
	void STATIC_FuelTimer();
	void STATIC_ReceivePossessed(class AController* NewController);
	void STATIC_ClientSetPhysics();
	void STATIC_BndEvt__VoiceChat_K2Node_ComponentBoundEvent_0_VoiceDataAvailableSignature__DelegateSignature();
	void STATIC_ServerProcessVoiceData(TArray<unsigned char> Data);
	void STATIC_ClientReceiveVoiceData(TArray<unsigned char> Data, class APawn* FromPlayer);
	void STATIC_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_7(float AxisValue);
	void STATIC_SetSimulatePhysicsMultiCast();
	void STATIC_BndEvt__Z_InventoryComponent_K2Node_ComponentBoundEvent_0_OnLootAdded_ServerOnly___DelegateSignature(const struct FZ_LootStr& Z_Loot);
	void STATIC_ExecuteUbergraph_Cv2_Base_Tank(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
