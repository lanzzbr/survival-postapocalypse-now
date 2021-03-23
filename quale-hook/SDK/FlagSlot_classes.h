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

// WidgetBlueprintGeneratedClass FlagSlot.FlagSlot_C
// 0x003A (FullSize[0x023A] - InheritedSize[0x0200])
class UFlagSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Arrow;                                                     // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_1;                                                  // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              HorizontalBox_3;                                           // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TEnumAsByte<Cv2_Nations_ECv2_Nations>              Team;                                                      // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OFC4[0x7];                                     // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    Click;                                                     // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsDesabled;                                                // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsReverseStyle;                                            // 0x0239(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(99763);
		return ptr;
	}



	void STATIC_SetbuttonStyle(class UObject* Image);
	void STATIC_PreConstruct(bool IsDesignTime);
	void STATIC_DrawFlag(TEnumAsByte<Cv2_Nations_ECv2_Nations> Team);
	void STATIC_SelectFlag();
	void STATIC_UNSelectFlag();
	void STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature();
	void STATIC_Set_disabled();
	void STATIC_SetEnabled();
	void STATIC_OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void STATIC_ExecuteUbergraph_FlagSlot(int EntryPoint);
	void STATIC_Click__DelegateSignature(TEnumAsByte<Cv2_Nations_ECv2_Nations> Team);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
