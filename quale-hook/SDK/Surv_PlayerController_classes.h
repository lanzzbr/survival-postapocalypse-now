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

// BlueprintGeneratedClass Surv_PlayerController.Surv_PlayerController_C
// 0x00C0 (FullSize[0x0780] - InheritedSize[0x06C0])
class ASurv_PlayerController_C : public APlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06C0(0x0008) (Transient, DuplicateTransient)
	class UCv4_DataBaseUpdateAndGet_C*                 Cv4_DataBaseUpdateAndGet;                                  // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVaRestFunctionsComponent_C*                 VaRestFunctionsComponent;                                  // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UZ_InventoryManager_C*                       Z_InventoryManager;                                        // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UZ_InventoryComponent_C*                     Z_PlayerInventory;                                         // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FZ_TransportLoot>                    InventoryState;                                            // 0x06E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FZ_TransportLoot>                    BaseState;                                                 // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     MyUniqNetId;                                               // 0x0708(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FZ_SlotStr>                          MenuSlots;                                                 // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AInventoryCharacterMainMenuRender_C*         InventoryCharacter;                                        // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_Faces_ECv2_Faces>                  faceIdServer;                                              // 0x0730(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NBDG[0x7];                                     // 0x0731(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UZagluha_C*                                  Zagluha;                                                   // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HaveDLC_Supporter;                                         // 0x0740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HaveDLC_SpecialForces;                                     // 0x0741(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2QHD[0x2];                                     // 0x0742(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TimeMark;                                                  // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AwardDay;                                                  // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowAwardOverload;                                         // 0x074C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AppOwner;                                                  // 0x074D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ReturnSaveStateBool;                                       // 0x074E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P9O3[0x1];                                     // 0x074F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APawn*                                       ActionPawnRef;                                             // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ClassicalSpawn_Ref;                                        // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlayerInfoIsLoading;                                       // 0x0760(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_JBJ3[0x7];                                     // 0x0761(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UZ_InventoryComponent_C*                     PROXY_INVENTORY;                                           // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFow_Bot_CheckPoint_C*                       DefaultCheckPoint;                                         // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFow_Bot_CheckPoint_C*                       ClassicCheckPoint;                                         // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(43806);
		return ptr;
	}



	void STATIC_ZL_CONTROLLER_GetSlots(TArray<struct FZ_SlotStr>* Slots);
	void STATIC_OnRep_PlayerInfoIsLoading();
	void STATIC_GiveAward();
	void STATIC_SetTimeMark();
	void STATIC_ResetAwards();
	void STATIC_CheckDalyAwards(bool* NeedSave);
	void STATIC_GetRealMyDay();
	void STATIC_CheckIsValidSaveState();
	void STATIC_UpdateSaveState();
	void STATIC_ReturnSaveState(struct Fsurv_2019_FieldsStructure* surv_2019_FieldsStructure);
	void STATIC_CreateMenuSlots();
	void STATIC_UserConstructionScript();
	void STATIC_OnFailure_B04AF70C4F0D83150985F9BE89646F01();
	void STATIC_OnSuccess_B04AF70C4F0D83150985F9BE89646F01();
	void STATIC_OnFailure_00DBCDFB49EE95F7290527A8A67DFFC6();
	void STATIC_OnSuccess_00DBCDFB49EE95F7290527A8A67DFFC6();
	void STATIC_OnFailure_3596E7F2462CC8F51AADFFBC1BED8DE6();
	void STATIC_OnSuccess_3596E7F2462CC8F51AADFFBC1BED8DE6();
	void STATIC_GetDBActorData();
	void STATIC_SaveConnectSession(const struct FBlueprintSessionResult& selectSession);
	void STATIC_ClientDestroySession();
	void STATIC_CLIENT_Show_day_Award(int Day, int WinIndex, bool ShowAwardOverload);
	void STATIC_SERVER_Chaek_7Days_Stat();
	void STATIC_ZL_GUI_ConstructMenu(TArray<struct FZ_SlotStr>* Slots);
	void STATIC_ZL_GUI_Update(TArray<struct FZ_LootStr>* Inventori, TArray<struct FZ_LootStr>* Container, bool IsOnFloorMode);
	void STATIC_ZL_GUI_ShowInventory();
	void STATIC_SERVER_UpdateBase();
	void STATIC_ZL_GUI_HideInventory();
	void STATIC_ZL_GUI_Construkt_Container(TArray<struct FZ_LootStr>* ContainerInventory, const struct FZ_ContainerInfo& ContInform);
	void STATIC_GET_INFORMATION_COMPLITE();
	void STATIC_ConnectToSession(const struct FBlueprintSessionResult& SearchResult);
	void STATIC_INI_MenuPawns();
	void STATIC_CHANGE_MODE(bool Classical);
	void STATIC_SetInventoryCharacterLocation(bool isClassic);
	void STATIC_SetDefaultPawnTransform(const struct FTransform& Transf, float FieldOfView);
	void STATIC_ReceiveBeginPlay();
	void STATIC_ZL_GUI_InventoryRespawnMode();
	void STATIC_ZL_GUI_Overload(float OverloadMass);
	void STATIC_ZL_CHARACTER_UNAttach_Server_(const struct FName& Weapon);
	void STATIC_ZL_GUI_DrawLootNear(TArray<struct FZ_LootStr>* Loot);
	void STATIC_ZL_CHARACTER_AttachToWeapon_Server_(TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes> Scopes, TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer> Silencer, const struct FName& Weapon);
	void STATIC_ZL_GUI_SLOT_Unhovered();
	void STATIC_ZL_GUI_SLOT_Hovered(const struct FZ_LootStr& Loot);
	void STATIC_ZL_CHARACTER_Unequip_Serever_(const struct FZ_LootStr& Loot);
	void STATIC_ZL_CHARACTER_USEThis_Server_(const struct FZ_LootStr& Loot);
	void STATIC_ZL_CHARACTER_DropThis_Server_(const struct FZ_LootStr& LootStr);
	void STATIC_ZL_CHARACTER_EquipThis_Server_(const struct FZ_LootStr& Loot);
	void STATIC_ZL_GUI_DND_Drop();
	void STATIC_ZL_GUI_DnD_Drag(class UUserWidget* DragSlot);
	void STATIC_ZL_GUI_ClearContainer();
	void STATIC_ExecuteUbergraph_Surv_PlayerController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
