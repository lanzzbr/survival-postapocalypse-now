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

// WidgetBlueprintGeneratedClass InventorySlotsRoot.InventorySlotsRoot_C
// 0x003C (FullSize[0x023C] - InheritedSize[0x0200])
class UInventorySlotsRoot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UInventoryPanelsROOT_C*                      RootPanel;                                                 // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LootIndexRoot;                                             // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSelected;                                                // 0x0214(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SP9F[0x3];                                     // 0x0215(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FColor                                      HoverColorRoot;                                            // 0x0218(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                      UnHoverColorRoot;                                          // 0x021C(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      HoverTexture;                                              // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FloatParametr1;                                            // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                SelectedColorRoot;                                         // 0x022C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(57881);
		return ptr;
	}



	void STATIC_Drop(int SplitCount);
	void STATIC_HideThrober();
	void STATIC_ShowThrober();
	void STATIC_GetLootSysytem(class AActor* Actor, bool* Ok, class ULootSystemComponent_C** LootSystem);
	void STATIC_CheckMyState();
	void STATIC_Use(int Index, int SplitCoint);
	void STATIC_DrawSlot(const struct FCv2_LootCargoStructure& Loot);
	void STATIC_ClearSlot();
	void STATIC_UnSelectInRoot(int Index);
	void STATIC_SelectInRoot(int Index);
	void STATIC_Construct();
	void STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void STATIC_ExecuteUbergraph_InventorySlotsRoot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
