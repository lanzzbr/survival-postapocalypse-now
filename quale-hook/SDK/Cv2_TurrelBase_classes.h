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

// BlueprintGeneratedClass Cv2_TurrelBase.Cv2_TurrelBase_C
// 0x0495 (FullSize[0x085D] - InheritedSize[0x03C8])
class ACv2_TurrelBase_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C8(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SoldierMesh;                                               // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        ammo_closed;                                               // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVoiceChatComponent*                         VoiceChat;                                                 // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVoiceAudioComponent*                        VoiceAudio;                                                // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UZ_InventoryComponent_C*                     Z_InventoryComponent;                                      // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCv2_OpticComponent_C*                       Cv2_OpticComponent;                                        // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCv2_DestroyComponent_C*                     Cv2_DestroyComponent;                                      // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      TurrelMesh;                                                // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           Capsule;                                                   // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCv2_VehicleComponent_C*                     Cv2_VehicleComponent;                                      // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        HelmetMesh;                                                // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCv2_WeaponsComponent_C*                     Cv2_WeaponsComponent;                                      // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      GunFPSMesh;                                                // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        GunMesh;                                                   // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Kostil;                                                    // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            Camera;                                                    // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm;                                                 // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              TurretBase;                                                // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TurretGun;                                                 // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NetTurretBase;                                             // 0x0468(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NetTurretGun;                                              // 0x046C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAim;                                                     // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_B2R4[0x7];                                     // 0x0471(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCv2_WeaponsStructure                       WeaponStructure;                                           // 0x0478(0x0248) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      WeaponEnum;                                                // 0x06C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W1QS[0x3];                                     // 0x06C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FireRate;                                                  // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_TurrelsEnum_ECv2_TurrelsEnum>      TurrelEnum;                                                // 0x06C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MMXN[0x7];                                     // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCv2_TurrelsStructure                       TurrelStructure;                                           // 0x06D0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               isFire;                                                    // 0x0720(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isFireNet;                                                 // 0x0721(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_548Y[0x6];                                     // 0x0722(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCrewStructure2>                     Crews;                                                     // 0x0728(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify)
	bool                                               isDead;                                                    // 0x0738(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_QTJ5[0x3];                                     // 0x0739(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HitPoints;                                                 // 0x073C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<VehicleAllEnum_EVehicleAllEnum>        VehicleEnum;                                               // 0x0740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XARA[0x7];                                     // 0x0741(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVehStructure                               VehicleStructure;                                          // 0x0748(0x00F0) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               IsOpen;                                                    // 0x0838(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RPPB[0x3];                                     // 0x0839(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                bulletFireCount;                                           // 0x083C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CameraFollowProjectile;                                    // 0x0840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3R9P[0x7];                                     // 0x0841(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACv2_RocketActor_C*                          DynamicProjectile;                                         // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isZoomCamera;                                              // 0x0850(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PushToTalk;                                                // 0x0851(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<Cv3_TurrelRotateWheelEnum_ECv3_TurrelRotateWheelEnum> RotateWheels;                                              // 0x0852(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv3_TurrelRotateWheelEnum_ECv3_TurrelRotateWheelEnum> NetRotateWheels;                                           // 0x0853(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              proxyGunRotation;                                          // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NetGunRotation;                                            // 0x0858(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isKazenniy;                                                // 0x085C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(95924);
		return ptr;
	}



	void STATIC_SetCameraFollowShell();
	void STATIC_FireGunClient();
	void STATIC_SpawnBullet(float Pitch, float Yaw);
	void STATIC_OnRep_isDead();
	void STATIC_OnRep_Crews();
	void STATIC_UserConstructionScript();
	void STATIC_InpActEvt_Use_K2Node_InputActionEvent_7(const struct FKey& Key);
	void STATIC_InpActEvt_Open_Vehicle_K2Node_InputActionEvent_6(const struct FKey& Key);
	void STATIC_InpActEvt_Aim_K2Node_InputActionEvent_5(const struct FKey& Key);
	void STATIC_InpActEvt_Fire_K2Node_InputActionEvent_4(const struct FKey& Key);
	void STATIC_InpActEvt_Fire_K2Node_InputActionEvent_3(const struct FKey& Key);
	void STATIC_InpActEvt_LeftShift_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void STATIC_InpActEvt_LeftShift_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void STATIC_InpActEvt_VoiceChat_K2Node_InputActionEvent_2(const struct FKey& Key);
	void STATIC_InpActEvt_VoiceChat_K2Node_InputActionEvent_1(const struct FKey& Key);
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_ServerSetTurret(float ServTurretBase, float ServTurretGun, float ServGunRot);
	void STATIC_ReceiveBeginPlay();
	void STATIC_FireServer(bool Fire);
	void STATIC_ExitVehicleServer();
	void STATIC_InpAxisEvt_LookUp_K2Node_InputAxisEvent_116(float AxisValue);
	void STATIC_InpAxisEvt_Turn_K2Node_InputAxisEvent_124(float AxisValue);
	void STATIC_UpdateLootArray(TArray<struct FS_InventorySlot>* LootSlotsArray);
	void STATIC_ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void STATIC_MulticastFire(float Pitch, float Yaw);
	void STATIC_ServerFire(float Pitch, float Yaw);
	void STATIC_OpenCarServer(bool IsOpen);
	void STATIC_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue);
	void STATIC_InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_6(float AxisValue);
	void STATIC_ClientFire(float Pitch, float Yaw);
	void STATIC_CheckReplication();
	void STATIC_BndEvt__VoiceChat_K2Node_ComponentBoundEvent_0_VoiceDataAvailableSignature__DelegateSignature();
	void STATIC_ServerProcessVoiceData(TArray<unsigned char> Data);
	void STATIC_ClientReceiveVoiceData(TArray<unsigned char> Data, class APawn* FromPlayer);
	void STATIC_ServerSetRotateWheels(TEnumAsByte<Cv3_TurrelRotateWheelEnum_ECv3_TurrelRotateWheelEnum> RotateWheels);
	void STATIC_ExecuteUbergraph_Cv2_TurrelBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
