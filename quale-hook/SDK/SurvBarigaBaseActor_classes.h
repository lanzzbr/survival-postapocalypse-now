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

// BlueprintGeneratedClass SurvBarigaBaseActor.SurvBarigaBaseActor_C
// 0x0079 (FullSize[0x03E1] - InheritedSize[0x0368])
class ASurvBarigaBaseActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0368(0x0008) (Transient, DuplicateTransient)
	class UZ_InventoryComponent_C*                     Z_InventoryComponent;                                      // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FZ_SlotStr>                          Slots;                                                     // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ASurvBarigaBaseActor_C*>              Barigi;                                                    // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FCv4_StructureTrade                         TradeStr;                                                  // 0x03A0(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               Is_Main;                                                   // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(49792);
		return ptr;
	}



	void STATIC_GetBariga(int Index, class ASurvBarigaBaseActor_C** BarigaActor);
	void STATIC_UserConstructionScript();
	void STATIC_CreateBarigs();
	void STATIC_ini();
	void STATIC_CreateAllTrade();
	void STATIC_IniToAll();
	void STATIC_ExecuteUbergraph_SurvBarigaBaseActor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
