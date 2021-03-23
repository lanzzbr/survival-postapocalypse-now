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

// BlueprintGeneratedClass Cv2_Character.Cv2_Character_C
// 0x0540 (FullSize[0x0CD0] - InheritedSize[0x0790])
class ACv2_Character_C : public AFixCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0790(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        MAGAZINE;                                                  // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             AimScene;                                                  // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MOD_SILENCER;                                              // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Silencer;                                                  // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                         SpotLight;                                                 // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCv2_ActionComponent_C*                      Cv2_ActionComponent;                                       // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Face;                                                      // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCv4_BulletComponent_C*                      Cv4_BulletComponent;                                       // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVoiceAudioComponent*                        VoiceAudio;                                                // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVoiceChatComponent*                         VoiceChat;                                                 // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MOD_OPTIC;                                                 // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        optic;                                                     // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Backpack;                                                  // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Socket_PrimaryMesh;                                        // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Socket_SecondaryMesh;                                      // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Socket_MeleeMesh;                                          // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SceneSprint;                                               // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Characters_Light;                                          // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCv2_WeaponsComponent_C*                     Cv2_WeaponsComponent;                                      // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        GrenadeRight;                                              // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        GrenadeLeft;                                               // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            Camera;                                                    // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             TargetCamera;                                              // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            Widget;                                                    // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCv2_DestroyComponent_C*                     Cv2_DestroyComponent;                                      // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCv2_CharacterComponent_C*                   Cv2_CharacterComponent;                                    // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Hands;                                                     // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        HelmetTPS;                                                 // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        WeaponTPS;                                                 // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             MuzzleFlash;                                               // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm;                                                 // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Weapon;                                                    // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      MyRealWeaponActive;                                        // 0x08A0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BQEM[0x7];                                     // 0x08A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       MyRealHelmet;                                              // 0x08A8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_MoveTypeEnum_ECv2_MoveTypeEnum>    ButtonMoveType;                                            // 0x08B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAim;                                                     // 0x08B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NXBH[0x2];                                     // 0x08B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     HandPosition;                                              // 0x08B4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     AimHandPosition;                                           // 0x08C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              proxyDeltaTime;                                            // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isFire;                                                    // 0x08D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E4UN[0x3];                                     // 0x08D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FireRateTimer;                                             // 0x08D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCv2_WeaponsStructure                       WeaponStructure;                                           // 0x08D8(0x0248) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                Ammo;                                                      // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AmmoBackPack;                                              // 0x0B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FirePitch;                                                 // 0x0B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FireYaw;                                                   // 0x0B2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HitPoints;                                                 // 0x0B30(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                               isDead;                                                    // 0x0B34(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_RE4A[0x3];                                     // 0x0B35(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NetPitch;                                                  // 0x0B38(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsTypeEnum_ECv2_WeaponsTypeEnum> MyWeaponType;                                              // 0x0B3C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isLadder;                                                  // 0x0B3D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A206[0x2];                                     // 0x0B3E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACv2_playerController_C*                     MyController;                                              // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       MyControlledPawn;                                          // 0x0B48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DynamicPitch;                                              // 0x0B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DynamicYaw;                                                // 0x0B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SavePitch;                                                 // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SaveYaw;                                                   // 0x0B5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      MyRealWeaponPrimary;                                       // 0x0B60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      MyRealWeaponSecundary;                                     // 0x0B61(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z5Q5[0x2];                                     // 0x0B62(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FoliageHitPoints;                                          // 0x0B64(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      MyRealWeaponMelee;                                         // 0x0B68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_SlotsTypeEnum_ECv2_SlotsTypeEnum>  oldSlotType;                                               // 0x0B69(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_SlotsTypeEnum_ECv2_SlotsTypeEnum>  newSlotType;                                               // 0x0B6A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CFES[0x1];                                     // 0x0B6B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              devWeaponSpeed;                                            // 0x0B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               devMode;                                                   // 0x0B70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LAVR[0x7];                                     // 0x0B71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCrossHair_C*                                CrossHair;                                                 // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FurnitureHitPoints;                                        // 0x0B80(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      oldMyRealWeaponPrimary;                                    // 0x0B84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      oldMyRealWeaponSecundary;                                  // 0x0B85(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      oldMyRealWeaponMelee;                                      // 0x0B86(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bWasTouched;                                               // 0x0B87(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Touch_x;                                                   // 0x0B88(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Touch_y;                                                   // 0x0B8C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SweepSpeed;                                                // 0x0B90(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bPhoneModeOn;                                              // 0x0B94(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7J1H[0x3];                                     // 0x0B95(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              oldHitPoints;                                              // 0x0B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterClass;                                            // 0x0B9C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UPOF[0x3];                                     // 0x0B9D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      prostrelActor;                                             // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       PlayerName;                                                // 0x0BA8(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	int                                                bulletFireCount;                                           // 0x0BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>            MyRealGrenades;                                            // 0x0BC4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_53UL[0x3];                                     // 0x0BC5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              throwGrenadeTimer;                                         // 0x0BC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Light;                                                     // 0x0BCC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_JQGI[0x3];                                     // 0x0BCD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MyVelocity;                                                // 0x0BD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector_NetQuantize                         damageDirection;                                           // 0x0BD4(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      oldWeaponInHands;                                          // 0x0BE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isBinocular;                                               // 0x0BE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isAimNet;                                                  // 0x0BE2(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7Y61[0x5];                                     // 0x0BE3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ImpactBoneName;                                            // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ImpactLocation;                                            // 0x0BF0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ImpactImpulse;                                             // 0x0BFC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CharacterOffHandEffector;                                  // 0x0C08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J8SF[0x7];                                     // 0x0C09(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMixamoBattalionAnimator_C*                  AnimInstance;                                              // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableMovement;                                           // 0x0C18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsProne;                                                   // 0x0C19(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               IsLocalProne;                                              // 0x0C1A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SprintPress;                                               // 0x0C1B(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	struct FVector                                     oldCameraLocation;                                         // 0x0C1C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv3_SprintDirection_ECv3_SprintDirection> SprintDirection;                                           // 0x0C28(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9JJI[0x3];                                     // 0x0C29(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              proxyMeshYaw;                                              // 0x0C2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv3_SprintDirection_ECv3_SprintDirection> localSprintDirection;                                      // 0x0C30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isAimZoom;                                                 // 0x0C31(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SS6D[0x6];                                     // 0x0C32(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCrossHair_C*                                DynCrosshair;                                              // 0x0C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              fireBurstSpread;                                           // 0x0C40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      Socket_Primary;                                            // 0x0C44(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      Socket_Secondary;                                          // 0x0C45(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      Socket_Melee;                                              // 0x0C46(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>            Socket_BackPack;                                           // 0x0C47(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ContainerActor;                                            // 0x0C48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReloadWeaponTimer;                                         // 0x0C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveForward;                                               // 0x0C54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveRight;                                                 // 0x0C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JDQI[0x4];                                     // 0x0C5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AController*                                 DamageInstigatedBy;                                        // 0x0C60(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      oldMyRealWeaponActive;                                     // 0x0C68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MXPV[0x3];                                     // 0x0C69(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              localNetPitch;                                             // 0x0C6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                UseScopeIndex;                                             // 0x0C70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PushToTalk;                                                // 0x0C74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LEVW[0x3];                                     // 0x0C75(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 playerOptic;                                               // 0x0C78(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                              OnLandedTimer;                                             // 0x0C80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                proxyAmmo;                                                 // 0x0C84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       KillerPawn;                                                // 0x0C88(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isBurstFire;                                               // 0x0C90(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E3I8[0x3];                                     // 0x0C91(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              netPitchTimer;                                             // 0x0C94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PARTS_FACE;                                                // 0x0C98(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                               isWeaponUp;                                                // 0x0CA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0WHK[0x3];                                     // 0x0CA1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BunkerID;                                                  // 0x0CA4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_Faces_ECv2_Faces>                  FACE_ID;                                                   // 0x0CA8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FGWM[0x3];                                     // 0x0CA9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DefaultFieldOfView;                                        // 0x0CAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SwitchWeaponTimer;                                         // 0x0CB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isNormalQuit;                                              // 0x0CB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer>    playerSilencer;                                            // 0x0CB5(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7QCG[0x2];                                     // 0x0CB6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HeadArmor;                                                 // 0x0CB8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isFirePressed;                                             // 0x0CBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_975K[0x3];                                     // 0x0CBD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartRespawnTime;                                          // 0x0CC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Z_WeaponMagazines_EZ_WeaponMagazines>  playerMagazine;                                            // 0x0CC4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ILNX[0x3];                                     // 0x0CC5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      lastDamageType;                                            // 0x0CC8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(62054);
		return ptr;
	}



	void STATIC_ZL_CONTROLLER_GetSlots(TArray<struct FZ_SlotStr>* Slots);
	void STATIC_OnRep_playerMagazine();
	void STATIC_OnRep_BunkerID();
	void STATIC_isPlayReloading(bool* isPlay_);
	void STATIC_OnRep_playerSilencer();
	void STATIC_Duplicate_onRepSetMyRealWepon();
	void STATIC_LoadFov();
	void STATIC_OnRep_FACE_ID();
	void STATIC_OnRep_PARTS_FACE();
	void STATIC_OnRep_playerOptic();
	void STATIC_CalculateReloadAmmo_Client(struct FCv2_WeaponsStructure* Cv2_WeaponsStructure);
	void STATIC_OnRep_Socket_Secondary();
	void STATIC_OnRep_Socket_Melee();
	void STATIC_OnRep_Socket_BackPack();
	void STATIC_OnRep_Socket_Primary();
	void STATIC_CalculateReloadAmmo(struct FCv2_WeaponsStructure* Cv2_WeaponsStructure);
	void STATIC_FireWeaponClient();
	void STATIC_OnRep_SprintPress();
	void STATIC_OnRep_IsProne();
	void STATIC_SetProne();
	void STATIC_PoseDead();
	void STATIC_OnRep_Light();
	void STATIC_OnRep_MyRealGrenades();
	void STATIC_OnRep_PlayerName();
	void STATIC_OnRep_CharacterClass();
	void STATIC_isPlayMontage(bool* isPlay_);
	void STATIC_HideWeapon();
	void STATIC_ShowWeapon();
	void STATIC_OnRep_MyRealHelmet();
	void STATIC_CheckPlayerInventory();
	void STATIC_OnRep_MyRealWeapon();
	void STATIC_CharacterOn();
	void STATIC_CharacterOff();
	void STATIC_OnRep_HitPoints();
	void STATIC_HUD_SetHitPoint();
	void STATIC_OnRep_isDead();
	void STATIC_HUD_SetAmmo();
	void STATIC_SetHandsPosition();
	void STATIC_SetWeaponModel(TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum> Weapon);
	void STATIC_UserConstructionScript();
	void STATIC_InpActEvt_Jump_K2Node_InputActionEvent_19(const struct FKey& Key);
	void STATIC_InpActEvt_Crouch_K2Node_InputActionEvent_18(const struct FKey& Key);
	void STATIC_InpActEvt_Walk_K2Node_InputActionEvent_17(const struct FKey& Key);
	void STATIC_InpActEvt_Walk_K2Node_InputActionEvent_16(const struct FKey& Key);
	void STATIC_InpActEvt_One_K2Node_InputKeyEvent_26(const struct FKey& Key);
	void STATIC_InpActEvt_Two_K2Node_InputKeyEvent_25(const struct FKey& Key);
	void STATIC_InpActEvt_Three_K2Node_InputKeyEvent_24(const struct FKey& Key);
	void STATIC_InpActEvt_T_K2Node_InputKeyEvent_23(const struct FKey& Key);
	void STATIC_InpActEvt_Delete_K2Node_InputKeyEvent_22(const struct FKey& Key);
	void STATIC_InpActEvt_Reloading_K2Node_InputActionEvent_15(const struct FKey& Key);
	void STATIC_InpActEvt_Use_K2Node_InputActionEvent_14(const struct FKey& Key);
	void STATIC_InpActEvt_Switch_Weapon_K2Node_InputActionEvent_13(const struct FKey& Key);
	void STATIC_InpActEvt_Throw_Grenade_K2Node_InputActionEvent_12(const struct FKey& Key);
	void STATIC_InpActEvt_Flashlight_K2Node_InputActionEvent_11(const struct FKey& Key);
	void STATIC_InpActEvt_Binocular_K2Node_InputActionEvent_10(const struct FKey& Key);
	void STATIC_InpActEvt_Fire_K2Node_InputActionEvent_9(const struct FKey& Key);
	void STATIC_InpActEvt_Fire_K2Node_InputActionEvent_8(const struct FKey& Key);
	void STATIC_InpActEvt_Aim_K2Node_InputActionEvent_7(const struct FKey& Key);
	void STATIC_InpActEvt_End_K2Node_InputKeyEvent_21(const struct FKey& Key);
	void STATIC_InpActEvt_Prone_K2Node_InputActionEvent_6(const struct FKey& Key);
	void STATIC_InpActEvt_CrouchFast_K2Node_InputActionEvent_5(const struct FKey& Key);
	void STATIC_InpActEvt_CrouchFast_K2Node_InputActionEvent_4(const struct FKey& Key);
	void STATIC_InpActEvt_Add_K2Node_InputKeyEvent_20(const struct FKey& Key);
	void STATIC_InpActEvt_Subtract_K2Node_InputKeyEvent_19(const struct FKey& Key);
	void STATIC_InpActEvt_VoiceChat_K2Node_InputActionEvent_3(const struct FKey& Key);
	void STATIC_InpActEvt_VoiceChat_K2Node_InputActionEvent_2(const struct FKey& Key);
	void STATIC_InpActEvt_Subtract_K2Node_InputKeyEvent_18(const struct FKey& Key);
	void STATIC_InpActEvt_Subtract_K2Node_InputKeyEvent_17(const struct FKey& Key);
	void STATIC_InpActEvt_Add_K2Node_InputKeyEvent_16(const struct FKey& Key);
	void STATIC_InpActEvt_Add_K2Node_InputKeyEvent_15(const struct FKey& Key);
	void STATIC_InpActEvt_D_K2Node_InputKeyEvent_14(const struct FKey& Key);
	void STATIC_InpActEvt_D_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void STATIC_InpActEvt_A_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void STATIC_InpActEvt_A_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void STATIC_InpActEvt_S_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void STATIC_InpActEvt_S_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void STATIC_InpActEvt_W_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void STATIC_InpActEvt_W_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void STATIC_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void STATIC_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void STATIC_InpActEvt_Zero_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void STATIC_InpActEvt_Zero_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void STATIC_InpActEvt_Nine_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void STATIC_InpActEvt_Nine_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void STATIC_InpActEvt_Fire_Mode_K2Node_InputActionEvent_1(const struct FKey& Key);
	void STATIC_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80(float AxisValue);
	void STATIC_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91(float AxisValue);
	void STATIC_InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float AxisValue);
	void STATIC_InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float AxisValue);
	void STATIC_ServerFire(float Pitch, float Yaw, const struct FVector_NetQuantize& Location);
	void STATIC_MulticastFire(float Pitch, float Yaw, const struct FVector_NetQuantize& Location);
	void STATIC_ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void STATIC_SetMaxWalkSpeed(float Speed);
	void STATIC_ReloadMultiCast();
	void STATIC_ReloadServer();
	void STATIC_ServerAction(class ACv2_LootBP_C* LootObject);
	void STATIC_SwitchWeaponServer(TEnumAsByte<Cv2_SlotsTypeEnum_ECv2_SlotsTypeEnum> Key);
	void STATIC_ServerCheckInventory();
	void STATIC_CheckInventory();
	void STATIC_reload();
	void STATIC_FirePressed();
	void STATIC_FireReleased();
	void STATIC_ServerThrowGrenade(float Pitch, float Yaw);
	void STATIC_MultiCastThrowGrenade(float Pitch, float Yaw, TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> GrenadeEnum, const struct FVector& Location);
	void STATIC_ShowChatMessageToAll(const struct FText& TextChat);
	void STATIC_AirPlanesServer();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_SetServerFlashLight(bool Light);
	void STATIC_CreateDynamicCamera();
	void STATIC_OnLanded(const struct FHitResult& Hit);
	void STATIC_InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_2(float AxisValue);
	void STATIC_InpAxisEvt_MoveBack_K2Node_InputAxisEvent_3(float AxisValue);
	void STATIC_SetAimingNet(bool Aiming);
	void STATIC_SetStartWalkSpeed();
	void STATIC_CreateBloodEffect(const struct FName& BoneName, const struct FRotator& Rotation, const struct FVector& Impulse);
	void STATIC_CheckProne(bool Prone);
	void STATIC_SprintRequest(bool Sprint);
	void STATIC_ServerSprintSide(TEnumAsByte<Cv3_SprintDirection_ECv3_SprintDirection> SprintDirection);
	void STATIC_ZL_CHARACTER_AttachToWeapon_Server_(TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes> Scopes, TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer> Silencer, const struct FName& Weapon);
	void STATIC_ZL_CHARACTER_DropThis_Server_(const struct FZ_LootStr& LootStr);
	void STATIC_ZL_CHARACTER_EquipThis_Server_(const struct FZ_LootStr& Loot);
	void STATIC_ZL_CHARACTER_Unequip_Serever_(const struct FZ_LootStr& Loot);
	void STATIC_ZL_CHARACTER_USEThis_Server_(const struct FZ_LootStr& Loot);
	void STATIC_ServerCloseFurniture();
	void STATIC_ThrowGrenade_Client(float Ptich, float Yaw, TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> Grenade_Enum, const struct FVector& Location);
	void STATIC_BndEvt__VoiceChat_K2Node_ComponentBoundEvent_0_VoiceDataAvailableSignature__DelegateSignature();
	void STATIC_ServerProcessVoiceData(TArray<unsigned char> Data);
	void STATIC_ClientReceiveVoiceData(TArray<unsigned char> Data, class APawn* FromPlayer);
	void STATIC_SetIsTalking(bool Value);
	void STATIC_MulticastTalk(bool Talk);
	void STATIC_ServerSetPlayerOpticMesh(class UStaticMesh* Mesh);
	void STATIC_BurstFire();
	void STATIC_ServerBurstFire();
	void STATIC_ServerStopBurstFire();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ZL_GUI_InventoryRespawnMode();
	void STATIC_ZL_GUI_Overload(float OverloadMass);
	void STATIC_ZL_CHARACTER_UNAttach_Server_(const struct FName& Weapon);
	void STATIC_ZL_GUI_DrawLootNear(TArray<struct FZ_LootStr>* Loot);
	void STATIC_ZL_GUI_SLOT_Unhovered();
	void STATIC_ZL_GUI_SLOT_Hovered(const struct FZ_LootStr& Loot);
	void STATIC_ZL_GUI_DND_Drop();
	void STATIC_ZL_GUI_DnD_Drag(class UUserWidget* DragSlot);
	void STATIC_ZL_GUI_ClearContainer();
	void STATIC_ZL_GUI_Construkt_Container(TArray<struct FZ_LootStr>* ContainerInventory, const struct FZ_ContainerInfo& ContInform);
	void STATIC_ZL_GUI_HideInventory();
	void STATIC_ZL_GUI_ShowInventory();
	void STATIC_ZL_GUI_Update(TArray<struct FZ_LootStr>* Inventori, TArray<struct FZ_LootStr>* Container, bool IsOnFloorMode);
	void STATIC_ZL_GUI_ConstructMenu(TArray<struct FZ_SlotStr>* Slots);
	void STATIC_ResetCrouchProne();
	void STATIC_ReceivePossessed(class AController* NewController);
	void STATIC_PossesClient();
	void STATIC_ReceiveUnpossessed(class AController* OldController);
	void STATIC_SwitchWeaponManual(TEnumAsByte<Cv2_SlotsTypeEnum_ECv2_SlotsTypeEnum> Selection);
	void STATIC_ClientSyncAmmo();
	void STATIC_ServerSyncAmmo();
	void STATIC_ServerSetPlayerSilencerMesh(TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer> Mesh);
	void STATIC_NoAmmo();
	void STATIC_NoAmmoToAll();
	void STATIC_UnProne();
	void STATIC_ServerSetPlayerMagazine(TEnumAsByte<Z_WeaponMagazines_EZ_WeaponMagazines> playerMagazine);
	void STATIC_ExecuteUbergraph_Cv2_Character(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
