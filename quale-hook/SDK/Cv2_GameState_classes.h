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

// BlueprintGeneratedClass Cv2_GameState.Cv2_GameState_C
// 0x0060 (FullSize[0x0428] - InheritedSize[0x03C8])
class ACv2_GameState_C : public AGameState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C8(0x0008) (Transient, DuplicateTransient)
	class USpawnManager_C*                             SpawnManger;                                               // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              GameTime;                                                  // 0x03E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int                                                SideAlliedsBaseHP;                                         // 0x03E4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SideAxisBaseHP;                                            // 0x03E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isFriendlyFire;                                            // 0x03EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<Cv2_GameModesEnum_ECv2_GameModesEnum>  GameModes;                                                 // 0x03ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_SeasonsEnum_ECv2_SeasonsEnum>      Season;                                                    // 0x03EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XLSW[0x1];                                     // 0x03EF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             TopPlayerStringsUId;                                       // 0x03F0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        TopScores;                                                 // 0x0400(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<Cv4_GamesEnum_ECv4_GamesEnum>          Game;                                                      // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isSinglePlayer;                                            // 0x0411(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isNight_;                                                  // 0x0412(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_Y1P8[0x5];                                     // 0x0413(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_FastStylizedProceduralSky_C*             DayTimeSys;                                                // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACv4_StartMusic_C*                           StartMusic;                                                // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(36499);
		return ptr;
	}



	void STATIC_OnRep_isNight_();
	void STATIC_GetTopArrays(TArray<int>* TOPSCORE1, TArray<struct FString>* TOP_PLAYERS1);
	void STATIC_OnRep_GameTime();
	void STATIC_UserConstructionScript();
	void STATIC_OnFailure_76B8372D4F9E44755CC645B450E4AAD7();
	void STATIC_OnSuccess_76B8372D4F9E44755CC645B450E4AAD7();
	void STATIC_AirDropRandom();
	void STATIC_ClientDestroySession();
	void STATIC_GetSortedTopArray();
	void STATIC_PlayNightMusicTimer();
	void STATIC_CheckTime();
	void STATIC_ReceiveBeginPlay();
	void STATIC_PlayNightScreamsTimer();
	void STATIC_CheckGarbage();
	void STATIC_ExecuteUbergraph_Cv2_GameState(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
