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

// BlueprintGeneratedClass Cv2_BaseCar_4W.Cv2_BaseCar_4W_C
// 0x0568 (FullSize[0x0940] - InheritedSize[0x03D8])
class ACv2_BaseCar_4W_C : public AWheeledVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D8(0x0008) (Transient, DuplicateTransient)
	class UVoiceChatComponent*                         VoiceChat;                                                 // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Horn;                                                      // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Face_Passager1;                                            // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Face_Driver;                                               // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Face_Passager2;                                            // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Face_Passager3;                                            // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Foots_Driver;                                              // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Torse_Driver;                                              // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Legs_Driver;                                               // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Hands_Driver;                                              // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Foots_Passager3;                                           // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Torse_Passager3;                                           // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Legs_Passager3;                                            // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Hands_Passager3;                                           // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Foots_Passager2;                                           // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Torse_Passager2;                                           // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Legs_Passager2;                                            // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Hands_Passager2;                                           // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Foots_Passager1;                                           // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Torse_Passager1;                                           // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Legs_Passager1;                                            // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Hands_Passager1;                                           // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVoiceAudioComponent*                        VoiceAudio;                                                // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             tire;                                                      // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UZ_InventoryComponent_C*                     Z_InventoryComponent;                                      // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        CargoMesh;                                                 // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Kostil;                                                    // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                         SpotLight;                                                 // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           Capsule3;                                                  // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Passager3Helmet;                                           // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Passager3;                                                 // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Passager2Helmet;                                           // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           Capsule2;                                                  // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Passager2;                                                 // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCv2_DestroyComponent_C*                     Cv2_DestroyComponent;                                      // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCv2_VehicleComponent_C*                     Cv2_VehicleComponent;                                      // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           Capsule1;                                                  // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           Capsule;                                                   // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Passager1Helmet;                                           // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Passager1;                                                 // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        DriverHelmet;                                              // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      DriverMesh;                                                // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Engine;                                                    // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            Camera;                                                    // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm;                                                 // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               EngineActive;                                              // 0x0550(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_UTZQ[0x3];                                     // 0x0551(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxSpeed;                                                  // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCrewStructure2>                     Crews;                                                     // 0x0558(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify)
	class AAIController*                               AIController;                                              // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Steering;                                                  // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HitPoints;                                                 // 0x0574(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                               isDead;                                                    // 0x0578(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	TEnumAsByte<VehicleAllEnum_EVehicleAllEnum>        VehicleEnum;                                               // 0x0579(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MWV3[0x6];                                     // 0x057A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVehStructure                               VehicleStructure;                                          // 0x0580(0x00F0) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class ACv2_PassagerPawn_C*>                 PassagersPawn;                                             // 0x0670(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               Light;                                                     // 0x0680(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               IsOpen;                                                    // 0x0681(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IT5A[0x2];                                     // 0x0682(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     damageDirection;                                           // 0x0684(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCv2_WeaponsStructure                       WeaponStructure;                                           // 0x0690(0x0248) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      WeaponEnum;                                                // 0x08D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isFireNet;                                                 // 0x08D9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isMachinegunner;                                           // 0x08DA(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_42T6[0x1];                                     // 0x08DB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TurretBase;                                                // 0x08DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TurretGun;                                                 // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NetTurretBase;                                             // 0x08E4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NetTurretGun;                                              // 0x08E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isFire;                                                    // 0x08EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsAim;                                                     // 0x08ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N5AQ[0x2];                                     // 0x08EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FireRateMachineguuner;                                     // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isTurret;                                                  // 0x08F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<VehiclesProductsType_EVehiclesProductsType> productType;                                               // 0x08F5(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                               isOnlyMachinegunner;                                       // 0x08F6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6SJC[0x1];                                     // 0x08F7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FireRateTimer;                                             // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector_NetQuantize                         NetVehicleLocation;                                        // 0x08FC(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor)
	struct FVector_NetQuantize                         NetVehicleRotation;                                        // 0x0908(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor)
	float                                              dropVelocityTimer;                                         // 0x0914(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShiftSpeed;                                                // 0x0918(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isKazenniy;                                                // 0x0919(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          RealSide;                                                  // 0x091A(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                               isHelicopter;                                              // 0x091B(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ThrottleInput;                                             // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              helicopterThrootle;                                        // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              steeringHeliInput;                                         // 0x0924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PushToTalk;                                                // 0x0928(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          oldRealSide;                                               // 0x0929(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isDamaged_Engine;                                          // 0x092A(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_EJMQ[0x5];                                     // 0x092B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    damageEmitterTimer;                                        // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartSpawnTime;                                            // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              hornTimer;                                                 // 0x093C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(96664);
		return ptr;
	}



	void STATIC_OnRep_isDamaged_Engine();
	void STATIC_OnRep_RealSide();
	void STATIC_OnRep_productType();
	void STATIC_OnRep_HitPoints();
	void STATIC_OnRep_Light();
	void STATIC_OnRep_isDead();
	void STATIC_OnRep_EngineActive();
	void STATIC_OnRep_Crews();
	void STATIC_UserConstructionScript();
	void STATIC_InpActEvt_Flashlight_K2Node_InputActionEvent_14(const struct FKey& Key);
	void STATIC_InpActEvt_Use_K2Node_InputActionEvent_13(const struct FKey& Key);
	void STATIC_InpActEvt_Use_K2Node_InputActionEvent_12(const struct FKey& Key);
	void STATIC_InpActEvt_Fire_K2Node_InputActionEvent_11(const struct FKey& Key);
	void STATIC_InpActEvt_Fire_K2Node_InputActionEvent_10(const struct FKey& Key);
	void STATIC_InpActEvt_Open_Vehicle_K2Node_InputActionEvent_9(const struct FKey& Key);
	void STATIC_InpActEvt_Aim_K2Node_InputActionEvent_8(const struct FKey& Key);
	void STATIC_InpActEvt_Switch_Weapon_K2Node_InputActionEvent_7(const struct FKey& Key);
	void STATIC_InpActEvt_Walk_K2Node_InputActionEvent_6(const struct FKey& Key);
	void STATIC_InpActEvt_Walk_K2Node_InputActionEvent_5(const struct FKey& Key);
	void STATIC_InpActEvt_Jump_K2Node_InputActionEvent_4(const struct FKey& Key);
	void STATIC_InpActEvt_Jump_K2Node_InputActionEvent_3(const struct FKey& Key);
	void STATIC_InpActEvt_VoiceChat_K2Node_InputActionEvent_2(const struct FKey& Key);
	void STATIC_InpActEvt_VoiceChat_K2Node_InputActionEvent_1(const struct FKey& Key);
	void STATIC_FuelTimer();
	void STATIC_Repair();
	void STATIC_SetLight(bool isLight);
	void STATIC_OpenCarServer(bool IsOpen);
	void STATIC_FireServer(bool Fire);
	void STATIC_SwitchWeaponServer(bool isGun);
	void STATIC_ServerSetTurret(float ServTurretBase, float ServTurretGun);
	void STATIC_MulticastFire(float Pitch, float Yaw);
	void STATIC_ServerFire();
	void STATIC_InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_2(float AxisValue);
	void STATIC_InpAxisEvt_MoveBack_K2Node_InputAxisEvent_3(float AxisValue);
	void STATIC_ServerSetLocationAndRotation(const struct FVector_NetQuantize& Location, const struct FVector_NetQuantize& Rotation);
	void STATIC_CheckReplicateMovement();
	void STATIC_ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void STATIC_ServerHornMultiCast(bool isPlay);
	void STATIC_ServerHorn(bool isPlay);
	void STATIC_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void STATIC_ExitVehicleServer();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_InpAxisEvt_LookUp_K2Node_InputAxisEvent_116(float AxisValue);
	void STATIC_InpAxisEvt_Turn_K2Node_InputAxisEvent_124(float AxisValue);
	void STATIC_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue);
	void STATIC_CheckVehiclePhysicsAndEffects();
	void STATIC_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_16(float AxisValue);
	void STATIC_ClientSetPhysics();
	void STATIC_ReceivePossessed(class AController* NewController);
	void STATIC_ClientReceiveVoiceData(TArray<unsigned char> Data, class APawn* FromPlayer);
	void STATIC_UpdateLootArray(TArray<struct FS_InventorySlot>* LootSlotsArray);
	void STATIC_InpAxisEvt_MoveForwardAlt_K2Node_InputAxisEvent_4(float AxisValue);
	void STATIC_InpAxisEvt_MoveBackAlt_K2Node_InputAxisEvent_5(float AxisValue);
	void STATIC_InpAxisEvt_MoveRightAlt_K2Node_InputAxisEvent_35(float AxisValue);
	void STATIC_InpAxisEvt_MoveLeftAlt_K2Node_InputAxisEvent_68(float AxisValue);
	void STATIC_InpAxisEvt_HelicopterLeft_K2Node_InputAxisEvent_65(float AxisValue);
	void STATIC_InpAxisEvt_HelicopterRight_K2Node_InputAxisEvent_66(float AxisValue);
	void STATIC_BndEvt__VoiceChat_K2Node_ComponentBoundEvent_0_VoiceDataAvailableSignature__DelegateSignature();
	void STATIC_ServerProcessVoiceData(TArray<unsigned char> Data);
	void STATIC_ExecuteUbergraph_Cv2_BaseCar_4W(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
