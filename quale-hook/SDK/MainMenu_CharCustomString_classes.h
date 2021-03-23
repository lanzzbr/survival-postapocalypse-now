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

// WidgetBlueprintGeneratedClass MainMenu_CharCustomString.MainMenu_CharCustomString_C
// 0x0060 (FullSize[0x0260] - InheritedSize[0x0200])
class UMainMenu_CharCustomString_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UButton*                                     Button_Next;                                               // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Previous;                                           // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Fon;                                                       // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_1;                                               // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0228(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    ClickNext;                                                 // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    ClickPrevious;                                             // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(78116);
		return ptr;
	}



	void STATIC_PreConstruct(bool IsDesignTime);
	void STATIC_BndEvt__Button_Previous_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
	void STATIC_BndEvt__Button_Next_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature();
	void STATIC_ExecuteUbergraph_MainMenu_CharCustomString(int EntryPoint);
	void STATIC_ClickPrevious__DelegateSignature();
	void STATIC_ClickNext__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
