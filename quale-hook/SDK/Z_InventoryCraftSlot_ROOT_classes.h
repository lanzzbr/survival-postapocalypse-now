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

// WidgetBlueprintGeneratedClass Z_InventoryCraftSlot_ROOT.Z_InventoryCraftSlot_ROOT_C
// 0x0030 (FullSize[0x0230] - InheritedSize[0x0200])
class UZ_InventoryCraftSlot_ROOT_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UZ_InventoryCRAFT_Root_C*                    ROOT_InventoryPanel;                                       // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Root_Index;                                                // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_F7Q5[0x4];                                     // 0x0214(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UZ_InventoryCRAFT_Root_C*                    RootPanel;                                                 // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                      HoverColorRoot;                                            // 0x0220(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                      UnHoverColorRoot;                                          // 0x0224(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      RootSelectedImage;                                         // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(81536);
		return ptr;
	}



	void STATIC_RootDrawSelected();
	void STATIC_RootShowThrober();
	void STATIC_RootClearSlots();
	void STATIC_RootDrawCard();
	void STATIC_RootHideThrober();
	void STATIC_ExecuteUbergraph_Z_InventoryCraftSlot_ROOT(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
