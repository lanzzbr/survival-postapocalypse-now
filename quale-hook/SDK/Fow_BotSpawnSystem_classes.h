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

// BlueprintGeneratedClass Fow_BotSpawnSystem.Fow_BotSpawnSystem_C
// 0x0050 (FullSize[0x03B8] - InheritedSize[0x0368])
class AFow_BotSpawnSystem_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0368(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ACv2_ScenarioZone_C*                         VillageController;                                         // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFow_BOT_C*                                  SpawnBot;                                                  // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       BotName;                                                   // 0x0388(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AFow_Bot_CheckPoint_C*>               BotCheckpoints;                                            // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AFow_Bot_CheckPoint_C*                       proxyCheckPoint;                                           // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(54843);
		return ptr;
	}



	void STATIC_CheckBotSpawn();
	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_SpawnBotActor();
	void STATIC_ExecuteUbergraph_Fow_BotSpawnSystem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
