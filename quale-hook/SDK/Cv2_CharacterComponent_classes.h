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

// BlueprintGeneratedClass Cv2_CharacterComponent.Cv2_CharacterComponent_C
// 0x0058 (FullSize[0x0148] - InheritedSize[0x00F0])
class UCv2_CharacterComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class ACv2_Character_C*                            CharacterPawn;                                             // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      oldSkeletalMesh;                                           // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        OldStaticMesh;                                             // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidgetComponent*>                    WidgetsNicks;                                              // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UUserWidget*                                 OpticWidget;                                               // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isFollowKiller;                                            // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6J1K[0x3];                                     // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Stamina;                                                   // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     oldCharacterLocation;                                      // 0x0130(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CharacterSpeed;                                            // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               firstAhEnter;                                              // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               OffPlayerNick;                                             // 0x0141(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DK74[0x2];                                     // 0x0142(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              distanceToNick;                                            // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(58194);
		return ptr;
	}



	void STATIC_CheckProneBoxTraceTimer();
	void STATIC_CheckProneBoxTrace(bool* isDisableProne);
	void STATIC_CheckPlayerMeshVisible();
	void STATIC_CheckAntiCheat();
	void STATIC_CheckStamina();
	void STATIC_AddResourceShkafLoot(class ACv2_playerController_C* PlayerController, const struct FZ_LootStr& LootStructure);
	void STATIC_CheckStand(bool* isStandEnabled);
	void STATIC_SetKillerCamera();
	void STATIC_ClientTakeLoot(class ACv2_LootBP_C** LootObject);
	void STATIC_SetAiming(bool IsAim, bool isBinocular);
	void STATIC_HideOptic();
	void STATIC_ShowOptic(class UClass* OpticGUI);
	void STATIC_SetPlayerNick(int Meters);
	void STATIC_CheckToPlayersDistance();
	void STATIC_ShowChatClient(const struct FText& Text, const struct FVector& GovorunLocation);
	void STATIC_DeadCameraMove();
	void STATIC_GetGrenadesCount(bool* isThrowed, TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>* GrenadeEnum);
	void STATIC_ClearAllLoot();
	void STATIC_DropAllLoot();
	void STATIC_SetInHandsWeaponAmmo(int SetAmmo);
	void STATIC_GetInHandsWeaponAmmo(int* GetAmmo);
	void STATIC_ThrowGrenade(TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> Grenade);
	void STATIC_InitializeOnlyServer();
	void STATIC_ReceiveBeginPlay();
	void STATIC_InitializeClient();
	void STATIC_ExecuteUbergraph_Cv2_CharacterComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
