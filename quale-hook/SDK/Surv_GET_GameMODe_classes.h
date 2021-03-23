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

// WidgetBlueprintGeneratedClass Surv_GET_GameMODe.Surv_GET_GameMODe_C
// 0x00A0 (FullSize[0x02A0] - InheritedSize[0x0200])
class USurv_GET_GameMODe_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            ShowTutorial;                                              // 0x0208(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                            OnStart;                                                   // 0x0210(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowActionMOde;                                            // 0x0218(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowClassical;                                             // 0x0220(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ActionFon;                                                 // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Action;                                             // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Classical;                                          // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_No;                                                 // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Tutorial;                                           // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Yes;                                                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ClassicalFon;                                              // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_3;                                                   // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    OverlayYESNO;                                              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      TutorialFon;                                               // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    SetClassical;                                              // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    SetAction;                                                 // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(41576);
		return ptr;
	}



	void STATIC_BndEvt__Button_Action_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void STATIC_BndEvt__Button_Action_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void STATIC_BndEvt__Button_Classical_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void STATIC_BndEvt__Button_Classical_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void STATIC_HideMe();
	void STATIC_ShowMe();
	void STATIC_BndEvt__Button_Action_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void STATIC_BndEvt__Button_Classical_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void STATIC_BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void STATIC_BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void STATIC_BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void STATIC_BndEvt__Button_NO_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void STATIC_BndEvt__Button_Yes_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void STATIC_ExecuteUbergraph_Surv_GET_GameMODe(int EntryPoint);
	void STATIC_SetAction__DelegateSignature();
	void STATIC_SetClassical__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
