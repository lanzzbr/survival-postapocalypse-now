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

// WidgetBlueprintGeneratedClass InventoryPanelsROOT.InventoryPanelsROOT_C
// 0x0058 (FullSize[0x0258] - InheritedSize[0x0200])
class UInventoryPanelsROOT_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	TArray<struct FCv2_LootCargoStructure>             InventoryArray;                                            // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    DrawCards;                                                 // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<int>                                        SelectedItems;                                             // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UInventorySlotsRoot_C*>               SlotsAllWidgets;                                           // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FS_InventorySlot>                    Base_Inventory;                                            // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(38404);
		return ptr;
	}



	void STATIC_RemoveLootByIndexes(TArray<int>* IndexesToRemove);
	void STATIC_GetSelectedItems(TArray<int>* SelectedItems);
	void STATIC_DrawSlots(int Index);
	void STATIC_GetAllLoot(TArray<struct FCv2_LootCargoStructure>* Loot);
	void STATIC_Construct();
	void STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void STATIC_ExecuteUbergraph_InventoryPanelsROOT(int EntryPoint);
	void STATIC_DrawCards__DelegateSignature(TArray<struct FCv2_LootCargoStructure>* InventoryLoot);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
