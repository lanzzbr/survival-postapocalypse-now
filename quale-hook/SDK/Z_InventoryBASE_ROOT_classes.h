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

// WidgetBlueprintGeneratedClass Z_InventoryBASE_ROOT.Z_InventoryBASE_ROOT_C
// 0x0010 (FullSize[0x0210] - InheritedSize[0x0200])
class UZ_InventoryBASE_ROOT_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UZ_InventoryCRAFT_Root_C*                    CraftPanel;                                                // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(43765);
		return ptr;
	}



	void STATIC_Construct();
	void STATIC_ROOT_CreateMenu();
	void STATIC_ROOT_ShowInvtory();
	void STATIC_Root_ShowCraft();
	void STATIC_Root_ShowActorCraft(class AActor* Actor);
	void STATIC_ROOT_ShowPrOpticPart(bool Show);
	void STATIC_ROOT_ShowInformation(const struct FZ_LootStr& Loot, bool IsContainer, bool IsTradeToAll);
	void STATIC_ROOT_HideInformation();
	void STATIC_ROOT_respawnMode();
	void STATIC_Root_OnClose();
	void STATIC_ROOT_ShowPrSilencerPart(bool Show);
	void STATIC_ROOT_ShowSecSilencerPart(bool Show);
	void STATIC_ROOT_ShowSecOpticPart(bool Show);
	void STATIC_ROOT_ShowMagazinePrimary(bool Show);
	void STATIC_ROOT_ShowMagazineSecondary(bool Show);
	void STATIC_ExecuteUbergraph_Z_InventoryBASE_ROOT(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
