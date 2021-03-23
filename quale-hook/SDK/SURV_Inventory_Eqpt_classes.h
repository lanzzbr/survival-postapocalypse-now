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

// WidgetBlueprintGeneratedClass SURV_Inventory_Eqpt.SURV_Inventory_Eqpt_C
// 0x0098 (FullSize[0x0420] - InheritedSize[0x0388])
class USURV_Inventory_Eqpt_C : public UZ_Inventory_Slot_ROOT_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            UpdateAmmoAnim;                                            // 0x0390(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      AmmoIcon;                                                  // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  AmmoName;                                                  // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      BlockDrop;                                                 // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      CanDrop;                                                   // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  CountText;                                                 // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Fon;                                                       // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              HorizontalBox_3;                                           // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Icon;                                                      // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  LootName;                                                  // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      On_Drag;                                                   // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TypeName;                                                  // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_1;                                             // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FWeaponAmmoInfoStr                          WeapInfo;                                                  // 0x03F8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(44482);
		return ptr;
	}



	void STATIC_ShowHideMagazine(TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> EqptSocet);
	void STATIC_ShowHideSilencer(TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> EqptSocet);
	void STATIC_SetAmmoCount();
	void STATIC_ShowHideOpticSlot(TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> EqptSocet);
	void STATIC_Root_HideHInt();
	void STATIC_Root_ShowHInt(const struct FText& HintText);
	void STATIC_Construct();
	void STATIC_Root_Style_Clear();
	void STATIC_BndEvt__MouseWheelZone_K2Node_ComponentBoundEvent_0_MouseWheel__DelegateSignature(float Delta);
	void STATIC_Root_Set_Ammo_Info(const struct FWeaponAmmoInfoStr& WeaponInfo);
	void STATIC_Root_ShowBackpackIcon(bool Show);
	void STATIC_Root_Hide_Ammo_Icon();
	void STATIC_Root_Style_Draw();
	void STATIC_ExecuteUbergraph_SURV_Inventory_Eqpt(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
