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

// BlueprintGeneratedClass SplineSpawner_BP.SplineSpawner_BP_C
// 0x0040 (FullSize[0x03A8] - InheritedSize[0x0368])
class ASplineSpawner_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0368(0x0008) (Transient, DuplicateTransient)
	class USplineComponent*                            Spline;                                                    // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              PrefabsArray;                                              // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	TArray<class AActor*>                              SpawnedPrefabs;                                            // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                ActorsCount;                                               // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpawnDistanceAlongSpline;                                  // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(162410);
		return ptr;
	}



	void STATIC_UserConstructionScript();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_SpawnActors();
	void STATIC_DeleteSpawnedActors();
	void STATIC_ExecuteUbergraph_SplineSpawner_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
