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

// WidgetBlueprintGeneratedClass Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C
// 0x0147 (FullSize[0x0358] - InheritedSize[0x0211])
class UMenu_InGame_VIDEO_options_C : public UMenu_InGame_Panel_ROOT_C
{
public:
	unsigned char                                      UnknownData_LPF8[0x7];                                     // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0218(0x0008) (Transient, DuplicateTransient)
	class USettingsSlider_C*                           alising;                                                   // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsSlider_C*                           Brightness;                                                // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_3;                                                  // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_6;                                                  // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_7;                                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   CheckBox_VSync;                                            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             ComboBoxString_50;                                         // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsSlider_C*                           Distance;                                                  // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsSlider_C*                           effects;                                                   // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsSlider_C*                           FoliageBar;                                                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Fon;                                                       // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsSlider_C*                           FOV;                                                       // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsSlider_C*                           FrameRateSlider;                                           // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsSlider_C*                           PostProcess;                                               // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsSlider_C*                           ResolutionScale;                                           // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsSlider_C*                           ShadowQuality;                                             // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsSlider_C*                           Texture;                                                   // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   WindowedCB;                                                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                CurentModeIndex;                                           // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               VSync;                                                     // 0x02B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Windowed;                                                  // 0x02B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9H6Y[0x2];                                     // 0x02B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PostProcessVar;                                            // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ShadowQualityVar;                                          // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TextureQualityVar;                                         // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AntialiasingVar;                                           // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EffectsVar;                                                // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DistanceVar;                                               // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ResScale;                                                  // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Foliage;                                                   // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 HeaderColor;                                               // 0x02D8(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 ThemeColor;                                                // 0x0300(0x0028) (Edit, BlueprintVisible)
	int                                                Brightnes;                                                 // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LDM2[0x4];                                     // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    HideApplyButton;                                           // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    ShowApplyButton;                                           // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              FOVVar;                                                    // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FrameRateVar;                                              // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(99894);
		return ptr;
	}



	void STATIC_SettingChanges();
	void STATIC_StepToResscale(int Step, float* ResScale);
	void STATIC_ResScaleToStep(float ResScale, int* Step);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	void STATIC_GetSettings();
	void STATIC_Save();
	void STATIC_ApplyVideoPresset(int Index);
	void STATIC_PreConstruct(bool IsDesignTime);
	void STATIC_Construct();
	void STATIC_BndEvt__Accept_K2Node_ComponentBoundEvent_54_OnClick__DelegateSignature();
	void STATIC_BndEvt__Back_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature();
	void STATIC_BndEvt__Button_2_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature();
	void STATIC_BndEvt__Button_5_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature();
	void STATIC_BndEvt__Button_6_K2Node_ComponentBoundEvent_216_OnButtonClickedEvent__DelegateSignature();
	void STATIC_BndEvt__ComboBoxString_49_K2Node_ComponentBoundEvent_262_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
	void STATIC_On_Open();
	void STATIC_BndEvt__WindowedCB_K2Node_ComponentBoundEvent_28_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void STATIC_BndEvt__Postprocess_K2Node_ComponentBoundEvent_4_ChangeStep__DelegateSignature(int Step);
	void STATIC_BndEvt__ShadowQuality_K2Node_ComponentBoundEvent_5_ChangeStep__DelegateSignature(int Step);
	void STATIC_BndEvt__Texture_K2Node_ComponentBoundEvent_6_ChangeStep__DelegateSignature(int Step);
	void STATIC_BndEvt__alising_K2Node_ComponentBoundEvent_7_ChangeStep__DelegateSignature(int Step);
	void STATIC_BndEvt__distance_K2Node_ComponentBoundEvent_8_ChangeStep__DelegateSignature(int Step);
	void STATIC_BndEvt__effects_K2Node_ComponentBoundEvent_9_ChangeStep__DelegateSignature(int Step);
	void STATIC_BndEvt__FoliageBar_K2Node_ComponentBoundEvent_10_ChangeStep__DelegateSignature(int Step);
	void STATIC_BndEvt__resolutionScale_K2Node_ComponentBoundEvent_11_ChangeStep__DelegateSignature(int Step);
	void STATIC_BndEvt__CheckBox_VSync_K2Node_ComponentBoundEvent_2024_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void STATIC_BndEvt__Brightness_K2Node_ComponentBoundEvent_50_ChangeStep__DelegateSignature(int Step);
	void STATIC_ApplySettings();
	void STATIC_BndEvt__FOV_K2Node_ComponentBoundEvent_0_ChangeDynamic__DelegateSignature(float Value);
	void STATIC_BndEvt__FOV_K2Node_ComponentBoundEvent_2_SliderMouseDown__DelegateSignature();
	void STATIC_BndEvt__FOV_K2Node_ComponentBoundEvent_3_SliderMouseUp__DelegateSignature();
	void STATIC_BndEvt__FrameRateSlider_K2Node_ComponentBoundEvent_1_ChangeDynamic__DelegateSignature(float Value);
	void STATIC_ExecuteUbergraph_Menu_InGame_VIDEO_options(int EntryPoint);
	void STATIC_ShowApplyButton__DelegateSignature();
	void STATIC_HideApplyButton__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
