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

// WidgetBlueprintGeneratedClass LobbyConfirm.LobbyConfirm_C
// 0x0050 (FullSize[0x0250] - InheritedSize[0x0200])
class ULobbyConfirm_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Image_1;                                                   // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_66;                                                  // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USURV_GlobalMenuButton_C*                    SURV_GlobalMenuButton;                                     // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USURV_GlobalMenuButton_C*                    SURV_GlobalMenuButton_1;                                   // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_1;                                               // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Yes;                                                       // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    No;                                                        // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(78282);
		return ptr;
	}



	void STATIC_Construct();
	void STATIC_BndEvt__YesNoDialog_K2Node_ComponentBoundEvent_0_Click_Yes__DelegateSignature();
	void STATIC_BndEvt__YesNoDialog_K2Node_ComponentBoundEvent_1_Click_No__DelegateSignature();
	void STATIC_Draw(const struct FString& LeaderName, int LobbyID);
	void STATIC_BndEvt__Button_Yes_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void STATIC_BndEvt__Button_No_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void STATIC_BndEvt__SURV_GlobalMenuButton_K2Node_ComponentBoundEvent_9_OnClick_button__DelegateSignature();
	void STATIC_BndEvt__SURV_GlobalMenuButton_0_K2Node_ComponentBoundEvent_10_OnClick_button__DelegateSignature();
	void STATIC_ExecuteUbergraph_LobbyConfirm(int EntryPoint);
	void STATIC_No__DelegateSignature();
	void STATIC_Yes__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
