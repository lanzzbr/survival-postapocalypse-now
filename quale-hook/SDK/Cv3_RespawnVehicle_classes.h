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

// BlueprintGeneratedClass Cv3_RespawnVehicle.Cv3_RespawnVehicle_C
// 0x0039 (FullSize[0x03A1] - InheritedSize[0x0368])
class ACv3_RespawnVehicle_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0368(0x0008) (Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                 // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       SpawnedVehicle;                                            // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isHelicopter_;                                             // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AlwaysSpawn;                                               // 0x0391(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NG6W[0x6];                                     // 0x0392(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CustomVehicle;                                             // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isCustomVehicle;                                           // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(96746);
		return ptr;
	}



	void STATIC_CheckSpawn(bool* isDisabledSpawn);
	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_RespawnVehicle_Timer();
	void STATIC_ExecuteUbergraph_Cv3_RespawnVehicle(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
