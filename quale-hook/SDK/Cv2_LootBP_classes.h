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

// BlueprintGeneratedClass Cv2_LootBP.Cv2_LootBP_C
// 0x0038 (FullSize[0x0430] - InheritedSize[0x03F8])
class ACv2_LootBP_C : public AZ_LootActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03F8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        LootMesh;                                                  // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv3_FurnitureLootType_ECv3_FurnitureLootType> LootType;                                                  // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_52VP[0x3];                                     // 0x0411(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CountLoot;                                                 // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isDrop;                                                    // 0x0418(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               isLooted;                                                  // 0x0419(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_14TB[0x6];                                     // 0x041A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       LootName;                                                  // 0x0420(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class ACv2_SpawnLootBP_C*                          ParrentSpawnLootBP;                                        // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(34387);
		return ptr;
	}



	void STATIC_OnRep_LootName();
	void STATIC_OnRep_isLooted();
	void STATIC_OnRep_isDrop();
	void STATIC_SetStaticMesh();
	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_SetPhysics();
	void STATIC_GenerateLoot(TEnumAsByte<Cv3_FurnitureLootType_ECv3_FurnitureLootType> Loot_Type);
	void STATIC_SetZLoot();
	void STATIC_Root_UpdateMesh();
	void STATIC_OffPhysics();
	void STATIC_SetCustomLoot(TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> Loot_Type, int Count);
	void STATIC_SetCustomLootName(const struct FName& Loot_Type, int Count);
	void STATIC_ExecuteUbergraph_Cv2_LootBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
