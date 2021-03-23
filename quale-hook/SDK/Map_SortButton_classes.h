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

// WidgetBlueprintGeneratedClass Map_SortButton.Map_SortButton_C
// 0x0049 (FullSize[0x0249] - InheritedSize[0x0200])
class UMap_SortButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UButton*                                     Button_1;                                                  // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Sort;                                                      // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Text;                                                      // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       ButtonName;                                                // 0x0220(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    ButtonClick;                                               // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               FromMin;                                                   // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(73270);
		return ptr;
	}



	void STATIC_PreConstruct(bool IsDesignTime);
	void STATIC_Construct();
	void STATIC_ShowSort(bool FromMin);
	void STATIC_HideSort();
	void STATIC_Revers(bool FromMin);
	void STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature();
	void STATIC_ExecuteUbergraph_Map_SortButton(int EntryPoint);
	void STATIC_ButtonClick__DelegateSignature(bool SortFromMin);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
