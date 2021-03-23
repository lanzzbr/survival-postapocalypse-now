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

// WidgetBlueprintGeneratedClass Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C
// 0x0188 (FullSize[0x0388] - InheritedSize[0x0200])
class UZ_Inventory_Slot_ROOT_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            Add;                                                       // 0x0208(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FZ_LootStr                                  LootStr;                                                   // 0x0210(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsContainer;                                               // 0x0274(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_W0JS[0x3];                                     // 0x0275(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FZ_SlotStr                                  SlotStr;                                                   // 0x0278(0x0050) (Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                               CanDropToThis;                                             // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IXL2[0x7];                                     // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UZ_Inventory_Slot_ROOT_C*                    ParentSlot;                                                // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UZ_Inventory_Slot_ROOT_C*>            ChildSlots;                                                // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               INVERS_Fon;                                                // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsGlobalUpdate;                                            // 0x02E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsOnFloor;                                                 // 0x02EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CanCombine;                                                // 0x02EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                SplitCount;                                                // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SplitStep;                                                 // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AGUH[0x4];                                     // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       OldLootName;                                               // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      RootFonVar;                                                // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      RootSplitProgres;                                          // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                                RootAttachPanel;                                           // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UZ_Inventory_AttachRoot_C*                   RootAttach1;                                               // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UZ_Inventory_AttachRoot_C*                   RootAttach2;                                               // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsClear;                                                   // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PUWT[0x7];                                     // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextBlock*                                  RootTypeText;                                              // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Root_CanDrop;                                              // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Root_BlockDrop;                                            // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Root_CanCombine;                                           // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Root_OnDrag;                                               // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 RootToolTipWidgetRef;                                      // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      RootTooltipClass;                                          // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DecrementedMass;                                           // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QB08[0x4];                                     // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNamedSlot*                                  Root_NamedSlot;                                            // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTradeNow;                                                // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsLefBtnDown;                                              // 0x0379(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsTradeToAll;                                              // 0x037A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EUZY[0x5];                                     // 0x037B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UZ_Inventory_AttachRoot_C*                   RootMagazine;                                              // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(44432);
		return ptr;
	}



	void STATIC_GetAttachIndex(TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> LootEquipSocet, class UZ_InventoryManager_C* Manager, int* Array_Index);
	void STATIC_CalcDecrementMass(struct FZ_LootStr* StructRef);
	void STATIC_SlotDecrementMass();
	void STATIC_ShowOverload(float OverloadMass);
	void STATIC_Root_Hide_Ammo_Icon();
	void STATIC_Root_Set_Ammo_Info(const struct FWeaponAmmoInfoStr& WeaponInfo);
	void STATIC_Root_MouseWhell(float Delta);
	void STATIC_Clear();
	void STATIC_Root_Style_Draw();
	void STATIC_Root_Style_Clear();
	void STATIC_Root_ShowHInt(const struct FText& HintText);
	void STATIC_Root_HideHInt();
	void STATIC_Initialization(class UImage* Fon, class UImage* SPLIT_PROGRESS, class UPanelWidget* ATTACH_PANEL, class UZ_Inventory_AttachRoot_C* Attach1, class UZ_Inventory_AttachRoot_C* Attach2, class UTextBlock* TEXT_SLOT_TYPE, class UImage* CAN_DROP_IMAGE, class UImage* BLOCK_DROP_IMAGE, class UImage* CAN_COMBINE_IMAGE, class UImage* ON_DRAG_IMAGE);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	void STATIC_GetHintText(struct FText* HintText);
	struct FText Root_Get_CountText();
	UMG_ESlateVisibility Root_Get_SplitProgress_Visibility();
	void STATIC_SetSplitProgress();
	void STATIC_CheckCanCombine(const struct FZ_LootStr& Loot, bool* CanCombine);
	void STATIC_Root_Style_SetCanCombine();
	void STATIC_Root_ShowBackpackIcon(bool Show);
	void STATIC_DoUNATTACH(bool From_IsContainer, bool To_IsContainer, int FromIndex, int Toindex, class UZ_InventoryManager_C* Manager, bool IsScope, bool IsMagazine);
	void STATIC_CheckAttachet();
	void STATIC_UseItem(bool IsDoubleClick);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent* InMouseEvent);
	void STATIC_CallDropOut();
	void STATIC_CheckCanDrop(const struct FZ_LootStr& Loot);
	void STATIC_CallDropEvent();
	void STATIC_Root_Style_SetCanDrop();
	void STATIC_Root_Style_SetBlockDrop();
	void STATIC_CheckTypeText();
	void STATIC_Style_SetNormal();
	void STATIC_Root_Style_SetDrag();
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void STATIC_OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	void STATIC_Construct();
	void STATIC_Draw(const struct FZ_LootStr& LootStr, bool GlobalUpdate);
	void STATIC_OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void STATIC_OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void STATIC_MOuseRelease();
	void STATIC_RootConstruct();
	void STATIC_Root_Child_SetNormalStyle();
	void STATIC_ROOT_OnSplit();
	void STATIC_ExecuteUbergraph_Z_Inventory_Slot_ROOT(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
