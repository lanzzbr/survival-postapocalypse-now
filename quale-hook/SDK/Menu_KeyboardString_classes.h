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

// WidgetBlueprintGeneratedClass Menu_KeyboardString.Menu_KeyboardString_C
// 0x0079 (FullSize[0x0279] - InheritedSize[0x0200])
class UMenu_KeyboardString_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Fon;                                                       // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputKeySelector*                           InputKeySelector_1;                                        // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Name;                                                      // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInputActionKeyMapping                      KeyVar;                                                    // 0x0220(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsAxis;                                                    // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VU7G[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInputAxisKeyMapping                        AxisVar;                                                   // 0x0250(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<GUI_ActionNames_EGUI_ActionNames>      Action;                                                    // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(37854);
		return ptr;
	}



	void STATIC_PreConstruct(bool IsDesignTime);
	void STATIC_Draw(const struct FInputActionKeyMapping& KeyVar, bool IsAxies, const struct FInputAxisKeyMapping& AxisStr, const struct FText& ActionName);
	void STATIC_BndEvt__InputKeySelector_0_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void STATIC_Reset();
	void STATIC_RestoreDefaults();
	void STATIC_RestoreDefAzerty();
	void STATIC_OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void STATIC_OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void STATIC_Construct();
	void STATIC_ExecuteUbergraph_Menu_KeyboardString(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
