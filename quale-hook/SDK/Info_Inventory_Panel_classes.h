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

// WidgetBlueprintGeneratedClass Info_Inventory_Panel.Info_Inventory_Panel_C
// 0x006A (FullSize[0x0282] - InheritedSize[0x0218])
class UInfo_Inventory_Panel_C : public UInfoPanelRoot_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0218(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            Show;                                                      // 0x0220(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     Border_3;                                                  // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInfoWeaponSlider_C*                         InfoWeaponSlider;                                          // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInfo_WeaponSlot_C*                          MeleeWeapon;                                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInfo_WeaponSlot_C*                          PrymaryWeapon;                                             // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInfo_WeaponSlot_C*                          SecondaryWeapon;                                           // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FS_InventorySlot>                    SlideArray;                                                // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SlideIndex;                                                // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NoSlide;                                                   // 0x0264(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IS_SlidingNow;                                             // 0x0265(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<Cv2_LootType_ECv2_LootType>            CurrentSlidingType;                                        // 0x0266(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LKB5[0x1];                                     // 0x0267(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SlideTime;                                                 // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Q70I[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FZ_LootStr>                          ZSliderLoot;                                               // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<Cv2_LootType_ECv2_LootType>            LootType;                                                  // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsWeaponShow;                                              // 0x0281(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(80518);
		return ptr;
	}



	void STATIC_GetCanFire(bool* CanFire);
	UMG_ESlateVisibility GetVisibility_1();
	void STATIC_ChangeWeapon(TEnumAsByte<Cv2_LootType_ECv2_LootType> NewLootType);
	void STATIC_Construct();
	void STATIC_Destruct();
	void STATIC_ShowSliderSlot();
	void STATIC_SlideWeapon(TEnumAsByte<Cv2_LootType_ECv2_LootType> LootType);
	void STATIC_UseNow();
	void STATIC_SwitchSelectWeapon();
	void STATIC_ShowWeapon();
	void STATIC_ExecuteUbergraph_Info_Inventory_Panel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
