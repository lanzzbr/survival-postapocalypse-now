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

// WidgetBlueprintGeneratedClass SURV_GlobalMenuBase.SURV_GlobalMenuBase_C
// 0x00A4 (FullSize[0x0374] - InheritedSize[0x02D0])
class USURV_GlobalMenuBase_C : public UGlobalMenu_ROOT_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            GoOut;                                                     // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                            FOV;                                                       // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                            Slidemenu1;                                                // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                             BackgroundBlur_62;                                         // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    ButtonsOverlay;                                            // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USURV_GlobalMenuButton_C*                    CloseButton;                                               // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USurv_OptionsBASE_C*                         CV3_OptionsBASE;                                           // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Exit;                                                      // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USURV_GlobalMenuButton_C*                    ExitButton;                                                // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USURV_GlobalMenuButton_C*                    InventoryButton;                                           // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMap_MapBoxWidget_C*                         Map_MapBoxWidget;                                          // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USURV_GlobalMenuButton_C*                    OptionsButton;                                             // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  PlayerCount;                                               // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USURV_GlobalMenuButton_C*                    RespawnButton;                                             // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ServerName;                                                // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USURV_GlobalMenuExit_C*                      SURV_GlobalMenuExit;                                       // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    WidgetsOverlay;                                            // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                proxySlotsCount;                                           // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(78461);
		return ptr;
	}



	void STATIC_UpdatePlayersCount();
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent* InMouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	void STATIC_Construct();
	void STATIC_Root_ShowExitMenu();
	void STATIC_Root_ShowInventory();
	void STATIC_Root_ShowOptions();
	void STATIC_BndEvt__Inventory_K2Node_ComponentBoundEvent_805_OnClick_button__DelegateSignature();
	void STATIC_BndEvt__Options_K2Node_ComponentBoundEvent_815_OnClick_button__DelegateSignature();
	void STATIC_BndEvt__Respawn_K2Node_ComponentBoundEvent_0_OnClick_button__DelegateSignature();
	void STATIC_BndEvt__Exit_K2Node_ComponentBoundEvent_32_OnClick_button__DelegateSignature();
	void STATIC_BndEvt__Close_K2Node_ComponentBoundEvent_1_OnClick_button__DelegateSignature();
	void STATIC_Root_ShowActorCraft(class AActor* Actor);
	void STATIC_RootShowInventory_NoAnim();
	void STATIC_Root_MinimalMode(bool SetMinimalistic);
	void STATIC_Root_HideBlur(bool Hide);
	void STATIC_Root_RespanwMenu();
	void STATIC_Root_OnOpen();
	void STATIC_Root_OnClose();
	void STATIC_BndEvt__SURV_GlobalMenuExit_K2Node_ComponentBoundEvent_1_ON_START_EXIT__DelegateSignature();
	void STATIC_ExecuteUbergraph_SURV_GlobalMenuBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
