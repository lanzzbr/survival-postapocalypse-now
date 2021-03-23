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

// BlueprintGeneratedClass Fow_BOT.Fow_BOT_C
// 0x0390 (FullSize[0x0B20] - InheritedSize[0x0790])
class AFow_BOT_C : public AFixCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0790(0x0008) (Transient, DuplicateTransient)
	class UCv4_BulletComponent_C*                      Cv4_BulletComponent;                                       // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        BackWeapon;                                                // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        ResourceMesh;                                              // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             MuzzleFlash;                                               // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        WeaponTPS;                                                 // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        HelmetTPS;                                                 // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPawnSensingComponent*                       PawnSensing;                                               // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               isDeath;                                                   // 0x07D0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          Team;                                                      // 0x07D1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_45CZ[0x6];                                     // 0x07D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      AttackTarget;                                              // 0x07D8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Fow_AI_TypeBehaviour_EFow_AI_TypeBehaviour> Behavior;                                                  // 0x07E0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_F5N6[0x7];                                     // 0x07E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AFow_AIController_C*                         AIController;                                              // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsProne;                                                   // 0x07F0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_UOXJ[0x3];                                     // 0x07F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Health;                                                    // 0x07F4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     oldMoveLocation;                                           // 0x07F8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SquadSlotIndex;                                            // 0x0804(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSprint;                                                  // 0x0808(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_IB52[0x7];                                     // 0x0809(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCv2_WeaponsStructure                       WeaponStructure;                                           // 0x0810(0x0248) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      WeaponEnum;                                                // 0x0A58(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_C39H[0x3];                                     // 0x0A59(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              fireDelay;                                                 // 0x0A5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Ammo;                                                      // 0x0A60(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KL7K[0x4];                                     // 0x0A64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ImpactBoneName;                                            // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ImpactLocation;                                            // 0x0A70(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ImpactImpulse;                                             // 0x0A7C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              perk_Accuracy;                                             // 0x0A88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              perk_Reaction;                                             // 0x0A8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NetPitch;                                                  // 0x0A90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAim;                                                     // 0x0A94(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OTRY[0x3];                                     // 0x0A95(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AFow_Bot_CheckPoint_C*>               CheckPoints;                                               // 0x0A98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	int                                                RealCheckPoint;                                            // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               goBackCheckpoints;                                         // 0x0AAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4HFM[0x3];                                     // 0x0AAD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              panicTime;                                                 // 0x0AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Bot_Resources_EBot_Resources>          BotResource;                                               // 0x0AB4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Y6IR[0x3];                                     // 0x0AB5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACv2_ScenarioZone_C*                         VillageController;                                         // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              craftTime;                                                 // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9F8L[0x4];                                     // 0x0AC4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACharacter*                                  CommanderPawn;                                             // 0x0AC8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      WeaponBack;                                                // 0x0AD0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                               isFire;                                                    // 0x0AD1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_I8OD[0x6];                                     // 0x0AD2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APawn*                                       SeePawn;                                                   // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               followTarget;                                              // 0x0AE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isSniper;                                                  // 0x0AE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               isManualWeapon;                                            // 0x0AE2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OXIB[0x1];                                     // 0x0AE3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              freezeTimer;                                               // 0x0AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isSinglePlayerLogic;                                       // 0x0AE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      ManualWeapon;                                              // 0x0AE9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_79OB[0x2];                                     // 0x0AEA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector_NetQuantize                         damageDirection;                                           // 0x0AEC(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor)
	struct FVector                                     MoveToLocation;                                            // 0x0AF8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_Nations_ECv2_Nations>              Nation;                                                    // 0x0B04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6TDF[0x3];                                     // 0x0B05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       BotName;                                                   // 0x0B08(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(88163);
		return ptr;
	}



	void STATIC_OnRep_Health();
	void STATIC_OnRep_AttackTarget();
	void STATIC_OnRep_CommanderPawn();
	void STATIC_EquipWeapon();
	void STATIC_CheckAttack();
	void STATIC_OffWarMode();
	void STATIC_OnRep_WeaponEnum();
	void STATIC_OnRep_WeaponBack();
	void STATIC_CheckMonagePlays();
	void STATIC_OnRep_BotResource();
	void STATIC_Fire(float Pitch, float Yaw);
	void STATIC_OnRep_IsProne();
	void STATIC_OnRep_isSprint();
	void STATIC_OnRep_isDeath();
	void STATIC_PoseDead();
	void STATIC_OnRep_Team();
	void STATIC_OnRep_Behavior();
	void STATIC_CheckPatrol();
	void STATIC_UserConstructionScript();
	void STATIC_OnLoaded_F3993EC540DF4C1554D6EFB729A15C1C(class UObject* Loaded);
	void STATIC_OnLoaded_DB3828E541E8DF0A7787EE9628D714E0(class UObject* Loaded);
	void STATIC_CreateBloodEffect(const struct FName& BoneName, const struct FRotator& Rotation, const struct FVector& Impulse);
	void STATIC_ServerDestroyActor();
	void STATIC_StopFire();
	void STATIC_StartFire();
	void STATIC_ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void STATIC_ServerBotFire(float Pitch, float Yaw);
	void STATIC_BndEvt__PawnSensing_K2Node_ComponentBoundEvent_6_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_ReceiveBeginPlay();
	void STATIC_MultiCastThrowGrenade(float Pitch, float Yaw, TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> GrenadeEnum, const struct FVector& Location);
	void STATIC_SendKillSheepMessageToAll_Server_(const struct FS_GUI_ShipKillerStrukt& KillSheepStruct);
	void STATIC_ExecuteUbergraph_Fow_BOT(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
