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

// WidgetBlueprintGeneratedClass SURV_GlobalMenuExit.SURV_GlobalMenuExit_C
// 0x0098 (FullSize[0x0298] - InheritedSize[0x0200])
class USURV_GlobalMenuExit_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            ExitShow;                                                  // 0x0208(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                             BackgroundBlur_1;                                          // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     Border_1;                                                  // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConfirmWidgetBase_C*                        ConfirmWidgetBase;                                         // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Exit;                                                      // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    ExitDelayPanel;                                            // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     MainMenu;                                                  // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Seconds;                                                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UYesNoDialog_C*                              YesNoDialog_MainMenu;                                      // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UYesNoDialog_C*                              YesNoDialogExit;                                           // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                                UpdateTimer;                                               // 0x0268(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                               Is_MainMenu;                                               // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M9DH[0x7];                                     // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    ON_START_EXIT;                                             // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              SecondsToExit;                                             // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Default_SecondsToExit;                                     // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                ExitBlockTimer;                                            // 0x0290(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(78331);
		return ptr;
	}



	void STATIC_BlockTimer();
	void STATIC_OnFailure_6F4103F54CE279B4934FDAA914C6065B();
	void STATIC_OnSuccess_6F4103F54CE279B4934FDAA914C6065B();
	void STATIC_OnShow();
	void STATIC_BndEvt__Mainmenu_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature();
	void STATIC_BndEvt__YesNoDialog_K2Node_ComponentBoundEvent_7_Click_No__DelegateSignature();
	void STATIC_BndEvt__YesNoDialog_MainMenu_K2Node_ComponentBoundEvent_8_Click_No__DelegateSignature();
	void STATIC_BndEvt__Exit_K2Node_ComponentBoundEvent_113_OnButtonClickedEvent__DelegateSignature();
	void STATIC_BndEvt__YesNoDialog_MainMenu_K2Node_ComponentBoundEvent_9_Click_Yes__DelegateSignature();
	void STATIC_BndEvt__YesNoDialogExit_K2Node_ComponentBoundEvent_10_Click_Yes__DelegateSignature();
	void STATIC_BndEvt__Mainmenu_K2Node_ComponentBoundEvent_91_OnButtonClickedEvent__DelegateSignature();
	void STATIC_BndEvt__ConfirmWidgetBase_K2Node_ComponentBoundEvent_2_ClickYes__DelegateSignature();
	void STATIC_BndEvt__ConfirmWidgetBase_K2Node_ComponentBoundEvent_3_ClickNo__DelegateSignature();
	void STATIC_BndEvt__Exit_K2Node_ComponentBoundEvent_218_OnButtonHoverEvent__DelegateSignature();
	void STATIC_Destruct();
	void STATIC_BndEvt__ExitShow_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void STATIC_HideExitTimer();
	void STATIC_ON_CLOSE();
	void STATIC_ExecuteUbergraph_SURV_GlobalMenuExit(int EntryPoint);
	void STATIC_ON_START_EXIT__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
