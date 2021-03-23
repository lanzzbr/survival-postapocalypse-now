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

// BlueprintGeneratedClass DataBaseActor.DataBaseActor_C
// 0x0024 (FullSize[0x038C] - InheritedSize[0x0368])
class ADataBaseActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0368(0x0008) (Transient, DuplicateTransient)
	class UZ_InventoryComponent_C*                     Z_InventoryComponent;                                      // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ACv2_playerController_C*                     PlayerController;                                          // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SlotCount;                                                 // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(34491);
		return ptr;
	}



	void STATIC_ReturnSaveState(struct Fsurv_2019_FieldsStructure* surv_2019_FieldsStructure);
	void STATIC_CreateInventory();
	void STATIC_UserConstructionScript();
	void STATIC_Ini_Inventory();
	void STATIC_SetDataBaseInfo();
	void STATIC_CreateInventory_ServerFunc_(int SlotsCount);
	void STATIC_ExecuteUbergraph_DataBaseActor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
