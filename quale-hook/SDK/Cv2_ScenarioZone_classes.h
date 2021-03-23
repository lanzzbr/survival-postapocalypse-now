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

// BlueprintGeneratedClass Cv2_ScenarioZone.Cv2_ScenarioZone_C
// 0x0118 (FullSize[0x0480] - InheritedSize[0x0368])
class ACv2_ScenarioZone_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0368(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                Scenario;                                                  // 0x0380(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          OwnerSide;                                                 // 0x0384(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OO0T[0x3];                                     // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CountPlayersAllieds;                                       // 0x0388(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CountPlayersAxis;                                          // 0x038C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // 0x0390(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          TeamControlled;                                            // 0x0394(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7QZL[0x3];                                     // 0x0395(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PointControlAllieds;                                       // 0x0398(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PointControlAxis;                                          // 0x039C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          DefenderSide;                                              // 0x03A0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8ZN4[0x3];                                     // 0x03A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                maxPointsControll;                                         // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     NameRegion;                                                // 0x03A8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, HasGetValueTypeHash)
	TArray<class ACv2_PlayerState_C*>                  AlliedsStateArray;                                         // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ACv2_PlayerState_C*>                  AxisStateArray;                                            // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               isDisable;                                                 // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8S63[0x7];                                     // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ACv2_SpawnHouseBase_C*>               HousesSpawns;                                              // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AFow_Bot_CheckPoint_C*>               ResourcePost;                                              // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AFow_Bot_CheckPoint_C*>               Fabric;                                                    // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                Res_Wood;                                                  // 0x0410(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Res_Stone;                                                 // 0x0414(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Res_Food;                                                  // 0x0418(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FULO[0x4];                                     // 0x041C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ACv3_ScenarioShkafBase_C*>            Shkafs;                                                    // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ACv3_RespawnVehicle_C*>               KazenniyVehicles;                                          // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      Agitator;                                                  // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerStart*>                        PlayerStarts;                                              // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FCv3_PlayerTakeLootStructure>        PlayerTakeLoot;                                            // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsBattleHere;                                              // 0x0468(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isPRIMARY_point;                                           // 0x0469(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Is_Axes_in;                                                // 0x046A(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               Is_Allies_in;                                              // 0x046B(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               Is_Axes_Shturm_now;                                        // 0x046C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               Is_Allies_Shturm_now;                                      // 0x046D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               Is_Capture;                                                // 0x046E(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_COU7[0x1];                                     // 0x046F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AFow_BotSpawnSystem_C*>               SinglePlayer_Bots;                                         // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(59093);
		return ptr;
	}



	void STATIC_OnRep_Is_Capture();
	void STATIC_Check_IsAlliesShturm();
	void STATIC_Check_IsAxisShturm();
	void STATIC_OnRep_Is_Allies_Shturm_now();
	void STATIC_OnRep_Is_Axes_Shturm_now();
	void STATIC_Check_IsAllies_in();
	void STATIC_OnRep_Is_Axes_in();
	void STATIC_Check_IsAxesIn();
	void STATIC_Check_IsBattleHere();
	void STATIC_OnRep_Is_Allies_in();
	void STATIC_CheckDestroyVillage(bool* isDestroyVillage);
	void STATIC_UpdateProgresToTeam(TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> Team);
	void STATIC_CheckPlayerTakeLootTime(class APlayerController* PlayerController, bool* isDisabledVal, int* Time);
	void STATIC_UserConstructionScript();
	void STATIC_CheckPlayersDistance();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ClientChekWidget();
	void STATIC_ReceiveDestroyed();
	void STATIC_AddXPLocal();
	void STATIC_ExecuteUbergraph_Cv2_ScenarioZone(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
