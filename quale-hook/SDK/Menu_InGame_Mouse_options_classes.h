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

// WidgetBlueprintGeneratedClass Menu_InGame_Mouse_options.Menu_InGame_Mouse_options_C
// 0x00A3 (FullSize[0x02B4] - InheritedSize[0x0211])
class UMenu_InGame_Mouse_options_C : public UMenu_InGame_Panel_ROOT_C
{
public:
	unsigned char                                      UnknownData_34X6[0x7];                                     // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0218(0x0008) (Transient, DuplicateTransient)
	class UCheckBox*                                   CheckBox_1;                                                // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                     Slider_43;                                                 // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenu_InGameMenuBase_C*                      Parent;                                                    // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentScale;                                              // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_59IQ[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FInputAxisKeyMapping>                NewVar_1;                                                  // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Inversion;                                                 // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_74TC[0x7];                                     // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 HeaderColor;                                               // 0x0260(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 ThemeColor;                                                // 0x0288(0x0028) (Edit, BlueprintVisible)
	float                                              MaxScale;                                                  // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(63390);
		return ptr;
	}



	void STATIC_Save();
	void STATIC_PreConstruct(bool IsDesignTime);
	void STATIC_Construct();
	void STATIC_BndEvt__Back_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature();
	void STATIC_BndEvt__Slider_42_K2Node_ComponentBoundEvent_48_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void STATIC_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void STATIC_BndEvt__Menu_Item_C_0_K2Node_ComponentBoundEvent_56_OnClick__DelegateSignature();
	void STATIC_On_Open();
	void STATIC_ExecuteUbergraph_Menu_InGame_Mouse_options(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
