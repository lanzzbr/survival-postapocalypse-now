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

// Class UMG.AsyncTaskDownloadImage
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFail;                                                    // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(246);
		return ptr;
	}



	class UAsyncTaskDownloadImage* DownloadImage(const struct FString& URL);
};

// Class UMG.Visual
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVisual : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(247);
		return ptr;
	}



};

// Class UMG.Widget
// 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
class UWidget : public UVisual
{
public:
	class UPanelSlot*                                  Slot;                                                      // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             bIsEnabledDelegate;                                        // 0x0030(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FText                                       ToolTipText;                                               // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ToolTipTextDelegate;                                       // 0x0058(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	class UWidget*                                     ToolTipWidget;                                             // 0x0068(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ToolTipWidgetDelegate;                                     // 0x0070(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             VisibilityDelegate;                                        // 0x0080(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FWidgetTransform                            RenderTransform;                                           // 0x0090(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   RenderTransformPivot;                                      // 0x00AC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsVariable : 1;                                           // 0x00B4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCreatedByConstructionScript : 1;                          // 0x00B4(0x0001) BIT_FIELD (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsEnabled : 1;                                            // 0x00B4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Cursor : 1;                                      // 0x00B4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsVolatile : 1;                                           // 0x00B4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<CoreUObject_EMouseCursor>              Cursor;                                                    // 0x00B5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SlateCore_EWidgetClipping                          Clipping;                                                  // 0x00B6(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               Visibility;                                                // 0x00B7(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetNavigation*                           Navigation;                                                // 0x00B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7TKV[0x28];                                    // 0x00C0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPropertyBinding*>                    NativeBindings;                                            // 0x00E8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(248);
		return ptr;
	}



	void STATIC_SetVisibility(UMG_ESlateVisibility InVisibility);
	void STATIC_SetUserFocus(class APlayerController* PlayerController);
	void STATIC_SetToolTipText(const struct FText& InToolTipText);
	void STATIC_SetToolTip(class UWidget* Widget);
	void STATIC_SetRenderTranslation(const struct FVector2D& Translation);
	void STATIC_SetRenderTransformPivot(const struct FVector2D& Pivot);
	void STATIC_SetRenderTransform(const struct FWidgetTransform& InTransform);
	void STATIC_SetRenderShear(const struct FVector2D& Shear);
	void STATIC_SetRenderScale(const struct FVector2D& Scale);
	void STATIC_SetRenderAngle(float Angle);
	void STATIC_SetNavigationRule(SlateCore_EUINavigation Direction, SlateCore_EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void STATIC_SetKeyboardFocus();
	void STATIC_SetIsEnabled(bool bInIsEnabled);
	void STATIC_SetCursor(TEnumAsByte<CoreUObject_EMouseCursor> InCursor);
	void STATIC_SetClipping(SlateCore_EWidgetClipping InClipping);
	void STATIC_SetAllNavigationRules(SlateCore_EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void STATIC_ResetCursor();
	void STATIC_RemoveFromParent();
	struct FEventReply OnReply__DelegateSignature();
	struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool IsVisible();
	bool IsHovered();
	void STATIC_InvalidateLayoutAndVolatility();
	bool HasUserFocusedDescendants(class APlayerController* PlayerController);
	bool HasUserFocus(class APlayerController* PlayerController);
	bool HasMouseCapture();
	bool HasKeyboardFocus();
	bool HasFocusedDescendants();
	bool HasAnyUserFocus();
	class UWidget* GetWidget__DelegateSignature();
	UMG_ESlateVisibility GetVisibility();
	struct FText GetText__DelegateSignature();
	UMG_ESlateVisibility GetSlateVisibility__DelegateSignature();
	struct FSlateColor GetSlateColor__DelegateSignature();
	struct FSlateBrush GetSlateBrush__DelegateSignature();
	class UPanelWidget* GetParent();
	class APlayerController* GetOwningPlayer();
	TEnumAsByte<CoreUObject_EMouseCursor> GetMouseCursor__DelegateSignature();
	struct FLinearColor GetLinearColor__DelegateSignature();
	bool GetIsEnabled();
	int GetInt32__DelegateSignature();
	float GetFloat__DelegateSignature();
	struct FVector2D GetDesiredSize();
	SlateCore_EWidgetClipping GetClipping();
	SlateCore_ECheckBoxState GetCheckBoxState__DelegateSignature();
	struct FGeometry GetCachedGeometry();
	bool GetBool__DelegateSignature();
	class UWidget* GenerateWidgetForString__DelegateSignature(const struct FString& Item);
	class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
	void STATIC_ForceVolatile(bool bForce);
	void STATIC_ForceLayoutPrepass();
};

// Class UMG.PanelWidget
// 0x0018 (FullSize[0x0110] - InheritedSize[0x00F8])
class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                          Slots;                                                     // 0x00F8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q5SN[0x8];                                     // 0x0108(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(249);
		return ptr;
	}



	bool RemoveChildAt(int Index);
	bool RemoveChild(class UWidget* Content);
	bool HasChild(class UWidget* Content);
	bool HasAnyChildren();
	int GetChildrenCount();
	int GetChildIndex(class UWidget* Content);
	class UWidget* GetChildAt(int Index);
	void STATIC_ClearChildren();
	class UPanelSlot* AddChild(class UWidget* Content);
};

// Class UMG.ContentWidget
// 0x0000 (FullSize[0x0110] - InheritedSize[0x0110])
class UContentWidget : public UPanelWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(250);
		return ptr;
	}



	class UPanelSlot* SetContent(class UWidget* Content);
	class UPanelSlot* GetContentSlot();
	class UWidget* GetContent();
};

// Class UMG.BackgroundBlur
// 0x00A8 (FullSize[0x01B8] - InheritedSize[0x0110])
class UBackgroundBlur : public UContentWidget
{
public:
	struct FMargin                                     Padding;                                                   // 0x0110(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyAlphaToBlur;                                         // 0x0122(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2E70[0x1];                                     // 0x0123(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlurStrength;                                              // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideAutoRadiusCalculation;                            // 0x0128(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SMCX[0x3];                                     // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BlurRadius;                                                // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 LowQualityFallbackBrush;                                   // 0x0130(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DEVF[0x10];                                    // 0x01A8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(251);
		return ptr;
	}



	void STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void STATIC_SetBlurStrength(float InStrength);
	void STATIC_SetBlurRadius(int InBlurRadius);
	void STATIC_SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
};

// Class UMG.PanelSlot
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UPanelSlot : public UVisual
{
public:
	class UPanelWidget*                                Parent;                                                    // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Content;                                                   // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(252);
		return ptr;
	}



};

// Class UMG.BackgroundBlurSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UBackgroundBlurSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AXWK[0x16];                                    // 0x004A(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(253);
		return ptr;
	}



	void STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.PropertyBinding
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UPropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                      SourceObject;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicPropertyPath                        SourcePath;                                                // 0x0030(0x0010) (NativeAccessSpecifierPublic)
	struct FName                                       DestinationProperty;                                       // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(254);
		return ptr;
	}



};

// Class UMG.BoolBinding
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UBoolBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(255);
		return ptr;
	}



	bool GetValue();
};

// Class UMG.Border
// 0x0138 (FullSize[0x0248] - InheritedSize[0x0110])
class UBorder : public UContentWidget
{
public:
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0110(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0111(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowEffectWhenDisabled : 1;                               // 0x0112(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2T7J[0x1];                                     // 0x0113(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                ContentColorAndOpacity;                                    // 0x0114(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VUEW[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             ContentColorAndOpacityDelegate;                            // 0x0128(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                   // 0x0138(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Background;                                                // 0x0148(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             BackgroundDelegate;                                        // 0x01C0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                BrushColor;                                                // 0x01D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             BrushColorDelegate;                                        // 0x01E0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   DesiredSizeScale;                                          // 0x01F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                    // 0x01F8(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnMouseButtonUpEvent;                                      // 0x0208(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnMouseMoveEvent;                                          // 0x0218(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnMouseDoubleClickEvent;                                   // 0x0228(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X1RW[0x10];                                    // 0x0238(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(256);
		return ptr;
	}



	void STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void STATIC_SetDesiredSizeScale(const struct FVector2D& InScale);
	void STATIC_SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);
	void STATIC_SetBrushFromTexture(class UTexture2D* Texture);
	void STATIC_SetBrushFromMaterial(class UMaterialInterface* Material);
	void STATIC_SetBrushFromAsset(class USlateBrushAsset* Asset);
	void STATIC_SetBrushColor(const struct FLinearColor& InBrushColor);
	void STATIC_SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Class UMG.BorderSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UBorderSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KWM0[0x16];                                    // 0x004A(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(257);
		return ptr;
	}



	void STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.BrushBinding
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UBrushBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData_41SA[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(258);
		return ptr;
	}



	struct FSlateBrush GetValue();
};

// Class UMG.Button
// 0x02C8 (FullSize[0x03D8] - InheritedSize[0x0110])
class UButton : public UContentWidget
{
public:
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0110(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FButtonStyle                                WidgetStyle;                                               // 0x0118(0x0238) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                                ColorAndOpacity;                                           // 0x0350(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundColor;                                           // 0x0360(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EButtonClickMethod>          ClickMethod;                                               // 0x0370(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EButtonTouchMethod>          TouchMethod;                                               // 0x0371(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                               // 0x0372(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LFUI[0x5];                                     // 0x0373(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPressed;                                                 // 0x0388(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnReleased;                                                // 0x0398(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHovered;                                                 // 0x03A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUnhovered;                                               // 0x03B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OL8S[0x10];                                    // 0x03C8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(259);
		return ptr;
	}



	void STATIC_SetTouchMethod(TEnumAsByte<SlateCore_EButtonTouchMethod> InTouchMethod);
	void STATIC_SetStyle(const struct FButtonStyle& InStyle);
	void STATIC_SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void STATIC_SetClickMethod(TEnumAsByte<SlateCore_EButtonClickMethod> InClickMethod);
	void STATIC_SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	bool IsPressed();
};

// Class UMG.ButtonSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UButtonSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AGAH[0x16];                                    // 0x004A(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(260);
		return ptr;
	}



	void STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.CanvasPanel
// 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
class UCanvasPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData_LYY0[0x10];                                    // 0x0110(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(261);
		return ptr;
	}



	class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);
};

// Class UMG.CanvasPanelSlot
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UCanvasPanelSlot : public UPanelSlot
{
public:
	struct FAnchorData                                 LayoutData;                                                // 0x0038(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAutoSize;                                                 // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VVWR[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ZOrder;                                                    // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1KKV[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(262);
		return ptr;
	}



	void STATIC_SetZOrder(int InZOrder);
	void STATIC_SetSize(const struct FVector2D& InSize);
	void STATIC_SetPosition(const struct FVector2D& InPosition);
	void STATIC_SetOffsets(const struct FMargin& InOffset);
	void STATIC_SetMinimum(const struct FVector2D& InMinimumAnchors);
	void STATIC_SetMaximum(const struct FVector2D& InMaximumAnchors);
	void STATIC_SetLayout(const struct FAnchorData& InLayoutData);
	void STATIC_SetAutoSize(bool InbAutoSize);
	void STATIC_SetAnchors(const struct FAnchors& InAnchors);
	void STATIC_SetAlignment(const struct FVector2D& InAlignment);
	int GetZOrder();
	struct FVector2D GetSize();
	struct FVector2D GetPosition();
	struct FMargin GetOffsets();
	struct FAnchorData GetLayout();
	bool GetAutoSize();
	struct FAnchors GetAnchors();
	struct FVector2D GetAlignment();
};

// Class UMG.CheckBox
// 0x05C0 (FullSize[0x06D0] - InheritedSize[0x0110])
class UCheckBox : public UContentWidget
{
public:
	SlateCore_ECheckBoxState                           CheckedState;                                              // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7ALB[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             CheckedStateDelegate;                                      // 0x0118(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FCheckBoxStyle                              WidgetStyle;                                               // 0x0128(0x04F0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0618(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UncheckedImage;                                            // 0x0620(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UncheckedHoveredImage;                                     // 0x0628(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UncheckedPressedImage;                                     // 0x0630(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            CheckedImage;                                              // 0x0638(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            CheckedHoveredImage;                                       // 0x0640(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            CheckedPressedImage;                                       // 0x0648(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UndeterminedImage;                                         // 0x0650(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UndeterminedHoveredImage;                                  // 0x0658(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UndeterminedPressedImage;                                  // 0x0660(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0668(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6ADL[0x3];                                     // 0x0669(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Padding;                                                   // 0x066C(0x0010) (Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3YAH[0x4];                                     // 0x067C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 BorderBackgroundColor;                                     // 0x0680(0x0028) (Deprecated, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                               // 0x06A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LXU5[0x7];                                     // 0x06A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCheckStateChanged;                                       // 0x06B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0E12[0x10];                                    // 0x06C0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(263);
		return ptr;
	}



	void STATIC_SetIsChecked(bool InIsChecked);
	void STATIC_SetCheckedState(SlateCore_ECheckBoxState InCheckedState);
	bool IsPressed();
	bool IsChecked();
	SlateCore_ECheckBoxState GetCheckedState();
};

// Class UMG.CheckedStateBinding
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UCheckedStateBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData_PJS6[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(264);
		return ptr;
	}



	SlateCore_ECheckBoxState GetValue();
};

// Class UMG.CircularThrobber
// 0x00A8 (FullSize[0x01A0] - InheritedSize[0x00F8])
class UCircularThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                            // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Period;                                                    // 0x00FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3F7Q[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USlateBrushAsset*                            PieceImage;                                                // 0x0108(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Image;                                                     // 0x0110(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bEnableRadius;                                             // 0x0188(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FREU[0x17];                                    // 0x0189(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(265);
		return ptr;
	}



	void STATIC_SetRadius(float InRadius);
	void STATIC_SetPeriod(float InPeriod);
	void STATIC_SetNumberOfPieces(int InNumberOfPieces);
};

// Class UMG.ColorBinding
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UColorBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData_Z3IZ[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(266);
		return ptr;
	}



	struct FSlateColor GetSlateValue();
	struct FLinearColor GetLinearValue();
};

// Class UMG.ComboBox
// 0x0038 (FullSize[0x0130] - InheritedSize[0x00F8])
class UComboBox : public UWidget
{
public:
	TArray<class UObject*>                             Items;                                                     // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                     // 0x0108(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsFocusable;                                              // 0x0118(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O3VZ[0x17];                                    // 0x0119(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(267);
		return ptr;
	}



};

// Class UMG.ComboBoxString
// 0x0AA0 (FullSize[0x0B98] - InheritedSize[0x00F8])
class UComboBoxString : public UWidget
{
public:
	TArray<struct FString>                             DefaultOptions;                                            // 0x00F8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FString                                     SelectedOption;                                            // 0x0108(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FComboBoxStyle                              WidgetStyle;                                               // 0x0118(0x0378) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTableRowStyle                              ItemStyle;                                                 // 0x0490(0x05F8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                     ContentPadding;                                            // 0x0A88(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MaxListHeight;                                             // 0x0A98(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasDownArrow;                                              // 0x0A9C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnableGamepadNavigationMode;                               // 0x0A9D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_89IY[0x2];                                     // 0x0A9E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateFontInfo                              Font;                                                      // 0x0AA0(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ForegroundColor;                                           // 0x0AF8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bIsFocusable;                                              // 0x0B20(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JJEX[0x7];                                     // 0x0B21(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                     // 0x0B28(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                        // 0x0B38(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnOpening;                                                 // 0x0B48(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ROI1[0x40];                                    // 0x0B58(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(268);
		return ptr;
	}



	void STATIC_SetSelectedOption(const struct FString& Option);
	bool RemoveOption(const struct FString& Option);
	void STATIC_RefreshOptions();
	void STATIC_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
	void STATIC_OnOpeningEvent__DelegateSignature();
	struct FString GetSelectedOption();
	int GetOptionCount();
	struct FString GetOptionAtIndex(int Index);
	int FindOptionIndex(const struct FString& Option);
	void STATIC_ClearSelection();
	void STATIC_ClearOptions();
	void STATIC_AddOption(const struct FString& Option);
};

// Class UMG.DragDropOperation
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UDragDropOperation : public UObject
{
public:
	struct FString                                     Tag;                                                       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Payload;                                                   // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     DefaultDragVisual;                                         // 0x0040(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_EDragPivot                                     Pivot;                                                     // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UQSS[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Offset;                                                    // 0x004C(0x0008) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O4R7[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnDrop;                                                    // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDragCancelled;                                           // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDragged;                                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(269);
		return ptr;
	}



	void STATIC_Drop(const struct FPointerEvent& PointerEvent);
	void STATIC_Dragged(const struct FPointerEvent& PointerEvent);
	void STATIC_DragCancelled(const struct FPointerEvent& PointerEvent);
};

// Class UMG.EditableText
// 0x0328 (FullSize[0x0420] - InheritedSize[0x00F8])
class UEditableText : public UWidget
{
public:
	struct FText                                       Text;                                                      // 0x00F8(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             TextDelegate;                                              // 0x0110(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FText                                       HintText;                                                  // 0x0120(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             HintTextDelegate;                                          // 0x0138(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FEditableTextStyle                          WidgetStyle;                                               // 0x0148(0x01F0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0338(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            BackgroundImageSelected;                                   // 0x0340(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            BackgroundImageComposing;                                  // 0x0348(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            CaretImage;                                                // 0x0350(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x0358(0x0058) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ColorAndOpacity;                                           // 0x03B0(0x0028) (Deprecated, NativeAccessSpecifierPublic)
	bool                                               IsReadOnly;                                                // 0x03D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPassword;                                                // 0x03D9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FC34[0x2];                                     // 0x03DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumDesiredWidth;                                       // 0x03DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsCaretMovedWhenGainFocus;                                 // 0x03E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextWhenFocused;                                  // 0x03E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RevertTextOnEscape;                                        // 0x03E2(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClearKeyboardFocusOnCommit;                                // 0x03E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextOnCommit;                                     // 0x03E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowContextMenu;                                          // 0x03E5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<UMG_EVirtualKeyboardType>              KeyboardType;                                              // 0x03E6(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XRMZ[0x1];                                     // 0x03E7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FShapedTextOptions                          ShapedTextOptions;                                         // 0x03E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextChanged;                                             // 0x03F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                           // 0x0400(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q1RG[0x10];                                    // 0x0410(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(270);
		return ptr;
	}



	void STATIC_SetText(const struct FText& InText);
	void STATIC_SetIsReadOnly(bool InbIsReadyOnly);
	void STATIC_SetIsPassword(bool InbIsPassword);
	void STATIC_SetHintText(const struct FText& InHintText);
	void STATIC_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void STATIC_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
};

// Class UMG.EditableTextBox
// 0x0860 (FullSize[0x0958] - InheritedSize[0x00F8])
class UEditableTextBox : public UWidget
{
public:
	struct FText                                       Text;                                                      // 0x00F8(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             TextDelegate;                                              // 0x0110(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                       WidgetStyle;                                               // 0x0120(0x0728) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0848(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       HintText;                                                  // 0x0850(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             HintTextDelegate;                                          // 0x0868(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x0878(0x0058) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ForegroundColor;                                           // 0x08D0(0x0010) (Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundColor;                                           // 0x08E0(0x0010) (Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReadOnlyForegroundColor;                                   // 0x08F0(0x0010) (Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsReadOnly;                                                // 0x0900(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPassword;                                                // 0x0901(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ETBN[0x2];                                     // 0x0902(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumDesiredWidth;                                       // 0x0904(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                   // 0x0908(0x0010) (Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               IsCaretMovedWhenGainFocus;                                 // 0x0918(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextWhenFocused;                                  // 0x0919(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RevertTextOnEscape;                                        // 0x091A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClearKeyboardFocusOnCommit;                                // 0x091B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextOnCommit;                                     // 0x091C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowContextMenu;                                          // 0x091D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<UMG_EVirtualKeyboardType>              KeyboardType;                                              // 0x091E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1ZPA[0x1];                                     // 0x091F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FShapedTextOptions                          ShapedTextOptions;                                         // 0x0920(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextChanged;                                             // 0x0928(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                           // 0x0938(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2WQB[0x10];                                    // 0x0948(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(271);
		return ptr;
	}



	void STATIC_SetText(const struct FText& InText);
	void STATIC_SetIsReadOnly(bool bReadOnly);
	void STATIC_SetHintText(const struct FText& InText);
	void STATIC_SetError(const struct FText& InError);
	void STATIC_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void STATIC_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	bool HasError();
	struct FText GetText();
	void STATIC_ClearError();
};

// Class UMG.ExpandableArea
// 0x0200 (FullSize[0x02F8] - InheritedSize[0x00F8])
class UExpandableArea : public UWidget
{
public:
	unsigned char                                      UnknownData_5KR1[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExpandableAreaStyle                        Style;                                                     // 0x0100(0x0100) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BorderBrush;                                               // 0x0200(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateColor                                 BorderColor;                                               // 0x0278(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bIsExpanded;                                               // 0x02A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NE3B[0x3];                                     // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxHeight;                                                 // 0x02A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     HeaderPadding;                                             // 0x02A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     AreaPadding;                                               // 0x02B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnExpansionChanged;                                        // 0x02C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UWidget*                                     HeaderContent;                                             // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                                     BodyContent;                                               // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_A2U6[0x10];                                    // 0x02E8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(272);
		return ptr;
	}



	void STATIC_SetIsExpanded_Animated(bool IsExpanded);
	void STATIC_SetIsExpanded(bool IsExpanded);
	bool GetIsExpanded();
};

// Class UMG.FloatBinding
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UFloatBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(273);
		return ptr;
	}



	float GetValue();
};

// Class UMG.GridPanel
// 0x0030 (FullSize[0x0140] - InheritedSize[0x0110])
class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                      ColumnFill;                                                // 0x0110(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      RowFill;                                                   // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0EPU[0x10];                                    // 0x0130(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(274);
		return ptr;
	}



	class UGridSlot* AddChildToGrid(class UWidget* Content);
};

// Class UMG.GridSlot
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UGridSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OU0T[0x2];                                     // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Row;                                                       // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RowSpan;                                                   // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Column;                                                    // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ColumnSpan;                                                // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Layer;                                                     // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Nudge;                                                     // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZIY4[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(275);
		return ptr;
	}



	void STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetRowSpan(int InRowSpan);
	void STATIC_SetRow(int InRow);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetLayer(int InLayer);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void STATIC_SetColumnSpan(int InColumnSpan);
	void STATIC_SetColumn(int InColumn);
};

// Class UMG.HorizontalBox
// 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
class UHorizontalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData_CJAW[0x10];                                    // 0x0110(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(276);
		return ptr;
	}



	class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);
};

// Class UMG.HorizontalBoxSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateChildSize                             Size;                                                      // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NRGJ[0xE];                                     // 0x0052(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(277);
		return ptr;
	}



	void STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetSize(const struct FSlateChildSize& InSize);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.Image
// 0x00C8 (FullSize[0x01C0] - InheritedSize[0x00F8])
class UImage : public UWidget
{
public:
	struct FSlateBrush                                 Brush;                                                     // 0x00F8(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             BrushDelegate;                                             // 0x0170(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                ColorAndOpacity;                                           // 0x0180(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                   // 0x0190(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                    // 0x01A0(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TL85[0x10];                                    // 0x01B0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(278);
		return ptr;
	}



	void STATIC_SetOpacity(float InOpacity);
	void STATIC_SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void STATIC_SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);
	void STATIC_SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
	void STATIC_SetBrushFromMaterial(class UMaterialInterface* Material);
	void STATIC_SetBrushFromAsset(class USlateBrushAsset* Asset);
	void STATIC_SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Class UMG.InputKeySelector
// 0x0510 (FullSize[0x0608] - InheritedSize[0x00F8])
class UInputKeySelector : public UWidget
{
public:
	struct FButtonStyle                                WidgetStyle;                                               // 0x00F8(0x0238) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             TextStyle;                                                 // 0x0330(0x01C8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FInputChord                                 SelectedKey;                                               // 0x04F8(0x0020) (BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x0518(0x0058) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     Margin;                                                    // 0x0570(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                ColorAndOpacity;                                           // 0x0580(0x0010) (Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       KeySelectionText;                                          // 0x0590(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       NoKeySpecifiedText;                                        // 0x05A8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bAllowModifierKeys;                                        // 0x05C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowGamepadKeys;                                         // 0x05C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J11O[0x6];                                     // 0x05C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKey>                                EscapeKeys;                                                // 0x05C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnKeySelected;                                             // 0x05D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnIsSelectingKeyChanged;                                   // 0x05E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N01M[0x10];                                    // 0x05F8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(279);
		return ptr;
	}



	void STATIC_SetTextBlockVisibility(UMG_ESlateVisibility InVisibility);
	void STATIC_SetSelectedKey(const struct FInputChord& InSelectedKey);
	void STATIC_SetNoKeySpecifiedText(const struct FText& InNoKeySpecifiedText);
	void STATIC_SetKeySelectionText(const struct FText& InKeySelectionText);
	void STATIC_SetAllowModifierKeys(bool bInAllowModifierKeys);
	void STATIC_SetAllowGamepadKeys(bool bInAllowGamepadKeys);
	void STATIC_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void STATIC_OnIsSelectingKeyChanged__DelegateSignature();
	bool GetIsSelectingKey();
};

// Class UMG.Int32Binding
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UInt32Binding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(280);
		return ptr;
	}



	int GetValue();
};

// Class UMG.InvalidationBox
// 0x0018 (FullSize[0x0128] - InheritedSize[0x0110])
class UInvalidationBox : public UContentWidget
{
public:
	bool                                               bCanCache;                                                 // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               CacheRelativeTransforms;                                   // 0x0111(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_34WM[0x16];                                    // 0x0112(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(281);
		return ptr;
	}



	void STATIC_SetCanCache(bool CanCache);
	void STATIC_InvalidateCache();
	bool GetCanCache();
};

// Class UMG.TableViewBase
// 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
class UTableViewBase : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(282);
		return ptr;
	}



};

// Class UMG.ListView
// 0x0040 (FullSize[0x0138] - InheritedSize[0x00F8])
class UListView : public UTableViewBase
{
public:
	float                                              ItemHeight;                                                // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ULKE[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UObject*>                             Items;                                                     // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_ESelectionMode>                  SelectionMode;                                             // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K1F9[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnGenerateRowEvent;                                        // 0x0118(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BJ6Y[0x10];                                    // 0x0128(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(283);
		return ptr;
	}



};

// Class UMG.MenuAnchor
// 0x0040 (FullSize[0x0150] - InheritedSize[0x0110])
class UMenuAnchor : public UContentWidget
{
public:
	class UClass*                                      MenuClass;                                                 // 0x0110(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnGetMenuContentEvent;                                     // 0x0118(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EMenuPlacement>              Placement;                                                 // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldDeferPaintingAfterWindowContent;                     // 0x0129(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseApplicationMenuStack;                                   // 0x012A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BKYW[0x5];                                     // 0x012B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMenuOpenChanged;                                         // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N5UW[0x10];                                    // 0x0140(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(284);
		return ptr;
	}



	void STATIC_ToggleOpen(bool bFocusOnOpen);
	bool ShouldOpenDueToClick();
	void STATIC_Open(bool bFocusMenu);
	bool IsOpen();
	bool HasOpenSubMenus();
	struct FVector2D GetMenuPosition();
	void STATIC_Close();
};

// Class UMG.MouseCursorBinding
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UMouseCursorBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(285);
		return ptr;
	}



	TEnumAsByte<CoreUObject_EMouseCursor> GetValue();
};

// Class UMG.MovieScene2DTransformSection
// 0x0320 (FullSize[0x0430] - InheritedSize[0x0110])
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_MI8W[0x8];                                     // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  Translation[0x2];                                          // 0x0118(0x00E0) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  Rotation;                                                  // 0x01F8(0x0070) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  Scale[0x2];                                                // 0x0268(0x00E0) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  Shear[0x2];                                                // 0x0348(0x00E0) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_A2QP[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(286);
		return ptr;
	}



};

// Class UMG.MovieScene2DTransformTrack
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(287);
		return ptr;
	}



};

// Class UMG.MovieSceneMarginSection
// 0x01D0 (FullSize[0x02E0] - InheritedSize[0x0110])
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_3V03[0x8];                                     // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  TopCurve;                                                  // 0x0118(0x0070) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  LeftCurve;                                                 // 0x0188(0x0070) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  RightCurve;                                                // 0x01F8(0x0070) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  BottomCurve;                                               // 0x0268(0x0070) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GM7R[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(288);
		return ptr;
	}



};

// Class UMG.MovieSceneMarginTrack
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(289);
		return ptr;
	}



};

// Class UMG.MovieSceneWidgetMaterialTrack
// 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	TArray<struct FName>                               BrushPropertyNamePath;                                     // 0x00C8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FName                                       TrackName;                                                 // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(290);
		return ptr;
	}



};

// Class UMG.TextLayoutWidget
// 0x0028 (FullSize[0x0120] - InheritedSize[0x00F8])
class UTextLayoutWidget : public UWidget
{
public:
	struct FShapedTextOptions                          ShapedTextOptions;                                         // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<Slate_ETextJustify>                    Justification;                                             // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               AutoWrapText;                                              // 0x0101(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6EDZ[0x2];                                     // 0x0102(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WrapTextAt;                                                // 0x0104(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Slate_ETextWrappingPolicy                          WrappingPolicy;                                            // 0x0108(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6ZNM[0x3];                                     // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Margin;                                                    // 0x010C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	float                                              LineHeightPercentage;                                      // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(291);
		return ptr;
	}



};

// Class UMG.MultiLineEditableText
// 0x02A0 (FullSize[0x03C0] - InheritedSize[0x0120])
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                      // 0x0120(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       HintText;                                                  // 0x0138(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             HintTextDelegate;                                          // 0x0150(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             WidgetStyle;                                               // 0x0160(0x01C8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bIsReadOnly;                                               // 0x0328(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GR9G[0x7];                                     // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateFontInfo                              Font;                                                      // 0x0330(0x0058) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowContextMenu;                                          // 0x0388(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z20H[0x7];                                     // 0x0389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTextChanged;                                             // 0x0390(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                           // 0x03A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZGEM[0x10];                                    // 0x03B0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(292);
		return ptr;
	}



	void STATIC_SetText(const struct FText& InText);
	void STATIC_SetIsReadOnly(bool bReadOnly);
	void STATIC_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void STATIC_OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
};

// Class UMG.MultiLineEditableTextBox
// 0x09F8 (FullSize[0x0B18] - InheritedSize[0x0120])
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                      // 0x0120(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       HintText;                                                  // 0x0138(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             HintTextDelegate;                                          // 0x0150(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                       WidgetStyle;                                               // 0x0160(0x0728) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             TextStyle;                                                 // 0x0888(0x01C8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bIsReadOnly;                                               // 0x0A50(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowContextMenu;                                          // 0x0A51(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J1NR[0x6];                                     // 0x0A52(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0A58(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x0A60(0x0058) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ForegroundColor;                                           // 0x0AB8(0x0010) (Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundColor;                                           // 0x0AC8(0x0010) (Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReadOnlyForegroundColor;                                   // 0x0AD8(0x0010) (Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextChanged;                                             // 0x0AE8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                           // 0x0AF8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6VUT[0x10];                                    // 0x0B08(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(293);
		return ptr;
	}



	void STATIC_SetText(const struct FText& InText);
	void STATIC_SetIsReadOnly(bool bReadOnly);
	void STATIC_SetError(const struct FText& InError);
	void STATIC_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void STATIC_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
};

// Class UMG.NamedSlot
// 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
class UNamedSlot : public UContentWidget
{
public:
	unsigned char                                      UnknownData_0O19[0x10];                                    // 0x0110(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(294);
		return ptr;
	}



};

// Class UMG.NamedSlotInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNamedSlotInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(295);
		return ptr;
	}



};

// Class UMG.NativeWidgetHost
// 0x0010 (FullSize[0x0108] - InheritedSize[0x00F8])
class UNativeWidgetHost : public UWidget
{
public:
	unsigned char                                      UnknownData_I5FA[0x10];                                    // 0x00F8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(296);
		return ptr;
	}



};

// Class UMG.Overlay
// 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
class UOverlay : public UPanelWidget
{
public:
	unsigned char                                      UnknownData_FNXZ[0x10];                                    // 0x0110(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(297);
		return ptr;
	}



	class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
};

// Class UMG.OverlaySlot
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UOverlaySlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2600[0xE];                                     // 0x004A(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(298);
		return ptr;
	}



	void STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.ProgressBar
// 0x01E0 (FullSize[0x02D8] - InheritedSize[0x00F8])
class UProgressBar : public UWidget
{
public:
	struct FProgressBarStyle                           WidgetStyle;                                               // 0x00F8(0x0170) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0268(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            BackgroundImage;                                           // 0x0270(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            FillImage;                                                 // 0x0278(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            MarqueeImage;                                              // 0x0280(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Percent;                                                   // 0x0288(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_EProgressBarFillType>            BarFillType;                                               // 0x028C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMarquee;                                                // 0x028D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_91PF[0x2];                                     // 0x028E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   BorderPadding;                                             // 0x0290(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             PercentDelegate;                                           // 0x0298(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                FillColorAndOpacity;                                       // 0x02A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             FillColorAndOpacityDelegate;                               // 0x02B8(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M52T[0x10];                                    // 0x02C8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(299);
		return ptr;
	}



	void STATIC_SetPercent(float InPercent);
	void STATIC_SetIsMarquee(bool InbIsMarquee);
	void STATIC_SetFillColorAndOpacity(const struct FLinearColor& InColor);
};

// Class UMG.RetainerBox
// 0x0030 (FullSize[0x0140] - InheritedSize[0x0110])
class URetainerBox : public UContentWidget
{
public:
	bool                                               RenderOnInvalidation;                                      // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RenderOnPhase;                                             // 0x0111(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6VQU[0x2];                                     // 0x0112(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Phase;                                                     // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PhaseCount;                                                // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6PPL[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          EffectMaterial;                                            // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       TextureParameter;                                          // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_B094[0x10];                                    // 0x0130(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(300);
		return ptr;
	}



	void STATIC_SetTextureParameter(const struct FName& TextureParameter);
	void STATIC_SetEffectMaterial(class UMaterialInterface* EffectMaterial);
	void STATIC_RequestRender();
	class UMaterialInstanceDynamic* GetEffectMaterial();
};

// Class UMG.RichTextBlock
// 0x0278 (FullSize[0x0398] - InheritedSize[0x0120])
class URichTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                      // 0x0120(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FScriptDelegate                             TextDelegate;                                              // 0x0138(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateFontInfo                              Font;                                                      // 0x0148(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                Color;                                                     // 0x01A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class URichTextBlockDecorator*>             Decorators;                                                // 0x01B0(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BEG6[0x1D8];                                   // 0x01C0(0x01D8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(301);
		return ptr;
	}



};

// Class UMG.RichTextBlockDecorator
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class URichTextBlockDecorator : public UObject
{
public:
	bool                                               bReveal;                                                   // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DXE2[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RevealedIndex;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(302);
		return ptr;
	}



};

// Class UMG.SafeZone
// 0x0018 (FullSize[0x0128] - InheritedSize[0x0110])
class USafeZone : public UContentWidget
{
public:
	bool                                               PadLeft;                                                   // 0x0110(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PadRight;                                                  // 0x0111(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PadTop;                                                    // 0x0112(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PadBottom;                                                 // 0x0113(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VGBA[0x14];                                    // 0x0114(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(303);
		return ptr;
	}



	void STATIC_SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
};

// Class UMG.SafeZoneSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class USafeZoneSlot : public UPanelSlot
{
public:
	bool                                               bIsTitleSafe;                                              // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_44T9[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     SafeAreaScale;                                             // 0x003C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HAlign;                                                    // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VAlign;                                                    // 0x004D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8VXM[0x2];                                     // 0x004E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Padding;                                                   // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(304);
		return ptr;
	}



};

// Class UMG.ScaleBox
// 0x0020 (FullSize[0x0130] - InheritedSize[0x0110])
class UScaleBox : public UContentWidget
{
public:
	TEnumAsByte<Slate_EStretch>                        Stretch;                                                   // 0x0110(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_EStretchDirection>               StretchDirection;                                          // 0x0111(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CVDU[0x2];                                     // 0x0112(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UserSpecifiedScale;                                        // 0x0114(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreInheritedScale;                                      // 0x0118(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSingleLayoutPass;                                         // 0x0119(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7C37[0x16];                                    // 0x011A(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(305);
		return ptr;
	}



	void STATIC_SetUserSpecifiedScale(float InUserSpecifiedScale);
	void STATIC_SetStretchDirection(TEnumAsByte<Slate_EStretchDirection> InStretchDirection);
	void STATIC_SetStretch(TEnumAsByte<Slate_EStretch> InStretch);
	void STATIC_SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
};

// Class UMG.ScaleBoxSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UScaleBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_65Z5[0x16];                                    // 0x004A(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(306);
		return ptr;
	}



	void STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.ScrollBar
// 0x0468 (FullSize[0x0560] - InheritedSize[0x00F8])
class UScrollBar : public UWidget
{
public:
	struct FScrollBarStyle                             WidgetStyle;                                               // 0x00F8(0x0440) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0538(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysShowScrollbar;                                      // 0x0540(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x0541(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6QMP[0x2];                                     // 0x0542(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Thickness;                                                 // 0x0544(0x0008) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CW2P[0x14];                                    // 0x054C(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(307);
		return ptr;
	}



	void STATIC_SetState(float InOffsetFraction, float InThumbSizeFraction);
};

// Class UMG.ScrollBox
// 0x0678 (FullSize[0x0788] - InheritedSize[0x0110])
class UScrollBox : public UPanelWidget
{
public:
	struct FScrollBoxStyle                             WidgetStyle;                                               // 0x0110(0x01E8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FScrollBarStyle                             WidgetBarStyle;                                            // 0x02F8(0x0440) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0738(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      BarStyle;                                                  // 0x0740(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x0748(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               ScrollBarVisibility;                                       // 0x0749(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SlateCore_EConsumeMouseWheel                       ConsumeMouseWheel;                                         // 0x074A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R9D8[0x1];                                     // 0x074B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   ScrollbarThickness;                                        // 0x074C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AlwaysShowScrollbar;                                       // 0x0754(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowOverscroll;                                           // 0x0755(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Slate_EDescendantScrollDestination                 NavigationDestination;                                     // 0x0756(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FYOP[0x1];                                     // 0x0757(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NavigationScrollPadding;                                   // 0x0758(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowRightClickDragScrolling;                             // 0x075C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U8VD[0x3];                                     // 0x075D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnUserScrolled;                                            // 0x0760(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XNAR[0x18];                                    // 0x0770(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(308);
		return ptr;
	}



	void STATIC_SetScrollOffset(float NewScrollOffset);
	void STATIC_SetScrollBarVisibility(UMG_ESlateVisibility NewScrollBarVisibility);
	void STATIC_SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);
	void STATIC_SetOrientation(TEnumAsByte<SlateCore_EOrientation> NewOrientation);
	void STATIC_SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
	void STATIC_SetAllowOverscroll(bool NewAllowOverscroll);
	void STATIC_ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, Slate_EDescendantScrollDestination ScrollDestination);
	void STATIC_ScrollToStart();
	void STATIC_ScrollToEnd();
	float GetScrollOffset();
};

// Class UMG.ScrollBoxSlot
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UScrollBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N1A5[0xF];                                     // 0x0049(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(309);
		return ptr;
	}



	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.SizeBox
// 0x0030 (FullSize[0x0140] - InheritedSize[0x0110])
class USizeBox : public UContentWidget
{
public:
	unsigned char                                      bOverride_WidthOverride : 1;                               // 0x0110(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_HeightOverride : 1;                              // 0x0110(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MinDesiredWidth : 1;                             // 0x0110(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MinDesiredHeight : 1;                            // 0x0110(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MaxDesiredWidth : 1;                             // 0x0110(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MaxDesiredHeight : 1;                            // 0x0110(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MaxAspectRatio : 1;                              // 0x0110(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EJ9J[0x3];                                     // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WidthOverride;                                             // 0x0114(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeightOverride;                                            // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDesiredWidth;                                           // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDesiredHeight;                                          // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDesiredWidth;                                           // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDesiredHeight;                                          // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxAspectRatio;                                            // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DJ58[0x10];                                    // 0x0130(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(310);
		return ptr;
	}



	void STATIC_SetWidthOverride(float InWidthOverride);
	void STATIC_SetMinDesiredWidth(float InMinDesiredWidth);
	void STATIC_SetMinDesiredHeight(float InMinDesiredHeight);
	void STATIC_SetMaxDesiredWidth(float InMaxDesiredWidth);
	void STATIC_SetMaxDesiredHeight(float InMaxDesiredHeight);
	void STATIC_SetMaxAspectRatio(float InMaxAspectRatio);
	void STATIC_SetHeightOverride(float InHeightOverride);
	void STATIC_ClearWidthOverride();
	void STATIC_ClearMinDesiredWidth();
	void STATIC_ClearMinDesiredHeight();
	void STATIC_ClearMaxDesiredWidth();
	void STATIC_ClearMaxDesiredHeight();
	void STATIC_ClearMaxAspectRatio();
	void STATIC_ClearHeightOverride();
};

// Class UMG.SizeBoxSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class USizeBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UA4T[0x16];                                    // 0x004A(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(311);
		return ptr;
	}



	void STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.SlateBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(312);
		return ptr;
	}



	void STATIC_ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate);
	void STATIC_ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate);
	void STATIC_ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition);
	void STATIC_LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate);
	bool IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
	struct FVector2D GetLocalSize(const struct FGeometry& Geometry);
	struct FVector2D GetAbsoluteSize(const struct FGeometry& Geometry);
	bool EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B);
	void STATIC_AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
};

// Class UMG.SlateDataSheet
// 0x0408 (FullSize[0x0430] - InheritedSize[0x0028])
class USlateDataSheet : public UObject
{
public:
	class UTexture2D*                                  DataTexture;                                               // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DCU4[0x400];                                   // 0x0030(0x0400) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(313);
		return ptr;
	}



};

// Class UMG.SlateVectorArtData
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class USlateVectorArtData : public UObject
{
public:
	TArray<struct FSlateMeshVertex>                    VertexData;                                                // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<uint32_t>                                   IndexData;                                                 // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                          Material;                                                  // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                                   ExtentMin;                                                 // 0x0050(0x0008) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                                   ExtentMax;                                                 // 0x0058(0x0008) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(314);
		return ptr;
	}



};

// Class UMG.Slider
// 0x0298 (FullSize[0x0390] - InheritedSize[0x00F8])
class USlider : public UWidget
{
public:
	float                                              Value;                                                     // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SIMD[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             ValueDelegate;                                             // 0x0100(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSliderStyle                                WidgetStyle;                                               // 0x0110(0x01F0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x0300(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M1N7[0x3];                                     // 0x0301(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                SliderBarColor;                                            // 0x0304(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SliderHandleColor;                                         // 0x0314(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IndentHandle;                                              // 0x0324(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Locked;                                                    // 0x0325(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2AUR[0x2];                                     // 0x0326(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StepSize;                                                  // 0x0328(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                               // 0x032C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5APW[0x3];                                     // 0x032D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMouseCaptureBegin;                                       // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMouseCaptureEnd;                                         // 0x0340(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnControllerCaptureBegin;                                  // 0x0350(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnControllerCaptureEnd;                                    // 0x0360(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnValueChanged;                                            // 0x0370(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CMA9[0x10];                                    // 0x0380(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(315);
		return ptr;
	}



	void STATIC_SetValue(float InValue);
	void STATIC_SetStepSize(float InValue);
	void STATIC_SetSliderHandleColor(const struct FLinearColor& InValue);
	void STATIC_SetSliderBarColor(const struct FLinearColor& InValue);
	void STATIC_SetLocked(bool InValue);
	void STATIC_SetIndentHandle(bool InValue);
	float GetValue();
};

// Class UMG.Spacer
// 0x0018 (FullSize[0x0110] - InheritedSize[0x00F8])
class USpacer : public UWidget
{
public:
	struct FVector2D                                   Size;                                                      // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_134F[0x10];                                    // 0x0100(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(316);
		return ptr;
	}



	void STATIC_SetSize(const struct FVector2D& InSize);
};

// Class UMG.SpinBox
// 0x03B8 (FullSize[0x04B0] - InheritedSize[0x00F8])
class USpinBox : public UWidget
{
public:
	float                                              Value;                                                     // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1G1L[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             ValueDelegate;                                             // 0x0100(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSpinBoxStyle                               WidgetStyle;                                               // 0x0110(0x0298) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x03A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delta;                                                     // 0x03B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SliderExponent;                                            // 0x03B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x03B8(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_ETextJustify>                    Justification;                                             // 0x0410(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U9F9[0x3];                                     // 0x0411(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinDesiredWidth;                                           // 0x0414(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClearKeyboardFocusOnCommit;                                // 0x0418(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextOnCommit;                                     // 0x0419(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GP5P[0x6];                                     // 0x041A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 ForegroundColor;                                           // 0x0420(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnValueChanged;                                            // 0x0448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnValueCommitted;                                          // 0x0458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBeginSliderMovement;                                     // 0x0468(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEndSliderMovement;                                       // 0x0478(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MinValue : 1;                                    // 0x0488(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bOverride_MaxValue : 1;                                    // 0x0488(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bOverride_MinSliderValue : 1;                              // 0x0488(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bOverride_MaxSliderValue : 1;                              // 0x0488(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_X5TK[0x3];                                     // 0x0489(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinValue;                                                  // 0x048C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxValue;                                                  // 0x0490(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinSliderValue;                                            // 0x0494(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxSliderValue;                                            // 0x0498(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GZKR[0x14];                                    // 0x049C(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(317);
		return ptr;
	}



	void STATIC_SetValue(float NewValue);
	void STATIC_SetMinValue(float NewValue);
	void STATIC_SetMinSliderValue(float NewValue);
	void STATIC_SetMaxValue(float NewValue);
	void STATIC_SetMaxSliderValue(float NewValue);
	void STATIC_SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void STATIC_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void STATIC_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void STATIC_OnSpinBoxBeginSliderMovement__DelegateSignature();
	float GetValue();
	float GetMinValue();
	float GetMinSliderValue();
	float GetMaxValue();
	float GetMaxSliderValue();
	void STATIC_ClearMinValue();
	void STATIC_ClearMinSliderValue();
	void STATIC_ClearMaxValue();
	void STATIC_ClearMaxSliderValue();
};

// Class UMG.TextBinding
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UTextBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData_F226[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(318);
		return ptr;
	}



	struct FText GetTextValue();
	struct FString GetStringValue();
};

// Class UMG.TextBlock
// 0x00F8 (FullSize[0x0218] - InheritedSize[0x0120])
class UTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                      // 0x0120(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             TextDelegate;                                              // 0x0138(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ColorAndOpacity;                                           // 0x0148(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                   // 0x0170(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x0180(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ShadowOffset;                                              // 0x01D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ShadowColorAndOpacity;                                     // 0x01E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ShadowColorAndOpacityDelegate;                             // 0x01F0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MinDesiredWidth;                                           // 0x0200(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWrapWithInvalidationPanel;                                // 0x0204(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_941Z[0x13];                                    // 0x0205(0x0013) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(319);
		return ptr;
	}



	void STATIC_SetText(const struct FText& InText);
	void STATIC_SetShadowOffset(const struct FVector2D& InShadowOffset);
	void STATIC_SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void STATIC_SetOpacity(float InOpacity);
	void STATIC_SetMinDesiredWidth(float InMinDesiredWidth);
	void STATIC_SetJustification(TEnumAsByte<Slate_ETextJustify> InJustification);
	void STATIC_SetFont(const struct FSlateFontInfo& InFontInfo);
	void STATIC_SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	struct FText GetText();
};

// Class UMG.Throbber
// 0x0098 (FullSize[0x0190] - InheritedSize[0x00F8])
class UThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                            // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateHorizontally;                                      // 0x00FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateVertically;                                        // 0x00FD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateOpacity;                                           // 0x00FE(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X45F[0x1];                                     // 0x00FF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USlateBrushAsset*                            PieceImage;                                                // 0x0100(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Image;                                                     // 0x0108(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_920P[0x10];                                    // 0x0180(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(320);
		return ptr;
	}



	void STATIC_SetNumberOfPieces(int InNumberOfPieces);
	void STATIC_SetAnimateVertically(bool bInAnimateVertically);
	void STATIC_SetAnimateOpacity(bool bInAnimateOpacity);
	void STATIC_SetAnimateHorizontally(bool bInAnimateHorizontally);
};

// Class UMG.TileView
// 0x0040 (FullSize[0x0138] - InheritedSize[0x00F8])
class UTileView : public UTableViewBase
{
public:
	float                                              ItemWidth;                                                 // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ItemHeight;                                                // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             Items;                                                     // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_ESelectionMode>                  SelectionMode;                                             // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4CAG[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnGenerateTileEvent;                                       // 0x0118(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7VLN[0x10];                                    // 0x0128(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(321);
		return ptr;
	}



	void STATIC_SetItemWidth(float Width);
	void STATIC_SetItemHeight(float Height);
	void STATIC_RequestListRefresh();
};

// Class UMG.UMGSequencePlayer
// 0x0758 (FullSize[0x0780] - InheritedSize[0x0028])
class UUMGSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData_ETJ4[0x348];                                   // 0x0028(0x0348) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidgetAnimation*                            Animation;                                                 // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CXLL[0x408];                                   // 0x0378(0x0408) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(322);
		return ptr;
	}



};

// Class UMG.UniformGridPanel
// 0x0028 (FullSize[0x0138] - InheritedSize[0x0110])
class UUniformGridPanel : public UPanelWidget
{
public:
	struct FMargin                                     SlotPadding;                                               // 0x0110(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MinDesiredSlotWidth;                                       // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDesiredSlotHeight;                                      // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O579[0x10];                                    // 0x0128(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(323);
		return ptr;
	}



	void STATIC_SetSlotPadding(const struct FMargin& InSlotPadding);
	void STATIC_SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
	void STATIC_SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
	class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content);
};

// Class UMG.UniformGridSlot
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UUniformGridSlot : public UPanelSlot
{
public:
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GT73[0x2];                                     // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Row;                                                       // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Column;                                                    // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7GNN[0xC];                                     // 0x0044(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(324);
		return ptr;
	}



	void STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetRow(int InRow);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void STATIC_SetColumn(int InColumn);
};

// Class UMG.UserWidget
// 0x0108 (FullSize[0x0200] - InheritedSize[0x00F8])
class UUserWidget : public UWidget
{
public:
	unsigned char                                      UnknownData_FKDL[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                ColorAndOpacity;                                           // 0x0100(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                   // 0x0110(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ForegroundColor;                                           // 0x0120(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ForegroundColorDelegate;                                   // 0x0148(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                   // 0x0158(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UUMGSequencePlayer*>                  ActiveSequencePlayers;                                     // 0x0168(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UUMGSequencePlayer*>                  StoppedSequencePlayers;                                    // 0x0178(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FNamedSlotBinding>                   NamedSlotBindings;                                         // 0x0188(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UWidgetTree*                                 WidgetTree;                                                // 0x0198(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Priority;                                                  // 0x01A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsKeyboardFocus : 1;                                // 0x01A4(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsFocusable : 1;                                          // 0x01A4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStopAction : 1;                                           // 0x01A4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCanEverTick : 1;                                          // 0x01A4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCanEverPaint : 1;                                         // 0x01A4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BFGY : 1;                                      // 0x01A4(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bCookedWidgetTree : 1;                                     // 0x01A4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KZOC[0x3];                                     // 0x01A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInputComponent*                             InputComponent;                                            // 0x01A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FEBN[0x50];                                    // 0x01B0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(325);
		return ptr;
	}



	void STATIC_UnregisterInputComponent();
	void STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void STATIC_StopListeningForInputAction(const struct FName& ActionName, TEnumAsByte<Engine_EInputEvent> EventType);
	void STATIC_StopListeningForAllInputActions();
	void STATIC_StopAnimation(class UWidgetAnimation* InAnimation);
	void STATIC_SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale);
	void STATIC_SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetOwningPlayer(class APlayerController* LocalPlayerController);
	void STATIC_SetOwningLocalPlayer(class ULocalPlayer* LocalPlayer);
	void STATIC_SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int NumLoopsToPlay);
	void STATIC_SetInputActionPriority(int NewPriority);
	void STATIC_SetInputActionBlocking(bool bShouldBlock);
	void STATIC_SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void STATIC_SetDesiredSizeInViewport(const struct FVector2D& Size);
	void STATIC_SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void STATIC_SetAnchorsInViewport(const struct FAnchors& Anchors);
	void STATIC_SetAlignmentInViewport(const struct FVector2D& Alignment);
	void STATIC_ReverseAnimation(class UWidgetAnimation* InAnimation);
	void STATIC_RemoveFromViewport();
	void STATIC_RegisterInputComponent();
	void STATIC_PreConstruct(bool IsDesignTime);
	void STATIC_PlaySound(class USoundBase* SoundToPlay);
	void STATIC_PlayAnimationTo(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	void STATIC_PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	float PauseAnimation(class UWidgetAnimation* InAnimation);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent);
	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	void STATIC_OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void STATIC_OnPaint(struct FPaintContext* Context);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void STATIC_OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void STATIC_OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void STATIC_OnMouseCaptureLost();
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	struct FEventReply OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void STATIC_OnFocusLost(const struct FFocusEvent& InFocusEvent);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void STATIC_OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void STATIC_OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void STATIC_OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void STATIC_OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void STATIC_OnAnimationStarted(class UWidgetAnimation* Animation);
	void STATIC_OnAnimationFinished(class UWidgetAnimation* Animation);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void STATIC_OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void STATIC_ListenForInputAction(const struct FName& ActionName, TEnumAsByte<Engine_EInputEvent> EventType, bool bConsume, const struct FScriptDelegate& Callback);
	bool IsPlayingAnimation();
	bool IsListeningForInputAction(const struct FName& ActionName);
	bool IsInViewport();
	bool IsInteractable();
	bool IsAnyAnimationPlaying();
	bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);
	bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);
	class APawn* GetOwningPlayerPawn();
	class APlayerController* GetOwningPlayer();
	class ULocalPlayer* GetOwningLocalPlayer();
	bool GetIsVisible();
	float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);
	struct FAnchors GetAnchorsInViewport();
	struct FVector2D GetAlignmentInViewport();
	void STATIC_Destruct();
	void STATIC_Construct();
	void STATIC_AddToViewport(int ZOrder);
	bool AddToPlayerScreen(int ZOrder);
};

// Class UMG.VerticalBox
// 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
class UVerticalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData_MRD5[0x10];                                    // 0x0110(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(326);
		return ptr;
	}



	class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);
};

// Class UMG.VerticalBoxSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UVerticalBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateChildSize                             Size;                                                      // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DJS6[0xE];                                     // 0x0052(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(327);
		return ptr;
	}



	void STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetSize(const struct FSlateChildSize& InSize);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.Viewport
// 0x0028 (FullSize[0x0138] - InheritedSize[0x0110])
class UViewport : public UContentWidget
{
public:
	struct FLinearColor                                BackgroundColor;                                           // 0x0110(0x0010) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YPJQ[0x18];                                    // 0x0120(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(328);
		return ptr;
	}



	class AActor* Spawn(class UClass* ActorClass);
	void STATIC_SetViewRotation(const struct FRotator& Rotation);
	void STATIC_SetViewLocation(const struct FVector& Location);
	struct FRotator GetViewRotation();
	class UWorld* GetViewportWorld();
	struct FVector GetViewLocation();
};

// Class UMG.VisibilityBinding
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UVisibilityBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(329);
		return ptr;
	}



	UMG_ESlateVisibility GetValue();
};

// Class UMG.WidgetAnimation
// 0x0040 (FullSize[0x0370] - InheritedSize[0x0330])
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	struct FScriptMulticastDelegate                    OnAnimationStarted;                                        // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAnimationFinished;                                       // 0x0340(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMovieScene*                                 MovieScene;                                                // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWidgetAnimationBinding>             AnimationBindings;                                         // 0x0358(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8RVA[0x8];                                     // 0x0368(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(330);
		return ptr;
	}



	float GetStartTime();
	float GetEndTime();
};

// Class UMG.WidgetBinding
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWidgetBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(331);
		return ptr;
	}



	class UWidget* GetValue();
};

// Class UMG.WidgetBlueprintGeneratedClass
// 0x0070 (FullSize[0x0348] - InheritedSize[0x02D8])
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                                 WidgetTree;                                                // 0x02D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowTemplate : 1;                                        // 0x02E0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bValidTemplate : 1;                                        // 0x02E0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bTemplateInitialized : 1;                                  // 0x02E0(0x0001) BIT_FIELD (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bCookedTemplate : 1;                                       // 0x02E0(0x0001) BIT_FIELD (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0M75[0x7];                                     // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDelegateRuntimeBinding>             Bindings;                                                  // 0x02E8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UWidgetAnimation*>                    Animations;                                                // 0x02F8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FName>                               NamedSlots;                                                // 0x0308(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      TemplateAsset[0x28];                                       // 0x0318(0x0028) UNKNOWN PROPERTY: SoftObjectProperty UMG.WidgetBlueprintGeneratedClass.TemplateAsset
	class UUserWidget*                                 Template;                                                  // 0x0340(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(333);
		return ptr;
	}



};

// Class UMG.WidgetBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(334);
		return ptr;
	}



	struct FEventReply UnlockMouse(struct FEventReply* Reply);
	struct FEventReply Unhandled();
	struct FEventReply SetUserFocus(struct FEventReply* Reply, class UWidget* FocusWidget, bool bInAllUsers);
	struct FEventReply SetMousePosition(struct FEventReply* Reply, const struct FVector2D& NewMousePosition);
	void STATIC_SetInputMode_UIOnlyEx(class APlayerController* Target, class UWidget* InWidgetToFocus, Engine_EMouseLockMode InMouseLockMode);
	void STATIC_SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
	void STATIC_SetInputMode_GameOnly(class APlayerController* Target);
	void STATIC_SetInputMode_GameAndUIEx(class APlayerController* Target, class UWidget* InWidgetToFocus, Engine_EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
	void STATIC_SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
	bool SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<CoreUObject_EMouseCursor> CursorShape, const struct FName& CursorName, const struct FVector2D& HotSpot);
	void STATIC_SetFocusToGameViewport();
	void STATIC_SetBrushResourceToTexture(struct FSlateBrush* Brush, class UTexture2D* Texture);
	void STATIC_SetBrushResourceToMaterial(struct FSlateBrush* Brush, class UMaterialInterface* Material);
	struct FEventReply ReleaseMouseCapture(struct FEventReply* Reply);
	struct FEventReply ReleaseJoystickCapture(struct FEventReply* Reply, bool bInAllJoysticks);
	struct FSlateBrush NoResourceBrush();
	struct FSlateBrush MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height);
	struct FSlateBrush MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height);
	struct FSlateBrush MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
	struct FEventReply LockMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);
	bool IsDragDropping();
	struct FEventReply Handled();
	void STATIC_GetSafeZonePadding(class UObject* WorldContextObject, struct FVector2D* SafePadding, struct FVector2D* SafePaddingScale, struct FVector2D* SpillOverPadding);
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event);
	struct FInputEvent GetInputEventFromPointerEvent(const struct FPointerEvent& Event);
	struct FInputEvent GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event);
	struct FInputEvent GetInputEventFromKeyEvent(const struct FKeyEvent& Event);
	struct FInputEvent GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event);
	class UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush* Brush);
	class UDragDropOperation* GetDragDroppingContent();
	class UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush* Brush);
	class UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush* Brush);
	class UObject* GetBrushResource(struct FSlateBrush* Brush);
	void STATIC_GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UClass* Interface, TArray<class UUserWidget*>* FoundWidgets, bool TopLevelOnly);
	void STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly);
	struct FEventReply EndDragDrop(struct FEventReply* Reply);
	void STATIC_DrawTextFormatted(struct FPaintContext* Context, const struct FText& Text, const struct FVector2D& Position, class UFont* Font, int FontSize, const struct FName& FontTypeFace, const struct FLinearColor& Tint);
	void STATIC_DrawText(struct FPaintContext* Context, const struct FString& inString, const struct FVector2D& Position, const struct FLinearColor& Tint);
	void STATIC_DrawLines(struct FPaintContext* Context, TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias);
	void STATIC_DrawLine(struct FPaintContext* Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias);
	void STATIC_DrawBox(struct FPaintContext* Context, const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint);
	void STATIC_DismissAllMenus();
	struct FEventReply DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
	struct FEventReply DetectDrag(struct FEventReply* Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
	class UDragDropOperation* CreateDragDropOperation(class UClass* OperationClass);
	class UUserWidget* Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer);
	struct FEventReply ClearUserFocus(struct FEventReply* Reply, bool bInAllUsers);
	struct FEventReply CaptureMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);
	struct FEventReply CaptureJoystick(struct FEventReply* Reply, class UWidget* CapturingWidget, bool bInAllJoysticks);
	void STATIC_CancelDragDrop();
};

// Class UMG.WidgetComponent
// 0x0128 (FullSize[0x07E0] - InheritedSize[0x06B8])
class UWidgetComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData_300K[0x8];                                     // 0x06B8(0x0008) Fix Super Size
	class UClass*                                      WidgetClass;                                               // 0x06C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntPoint                                   DrawSize;                                                  // 0x06C8(0x0008) (Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bManuallyRedraw;                                           // 0x06D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRedrawRequested;                                          // 0x06D1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_94QW[0x2];                                     // 0x06D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RedrawTime;                                                // 0x06D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LBN0[0x8];                                     // 0x06D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntPoint                                   CurrentDrawSize;                                           // 0x06E0(0x0008) (IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDrawAtDesiredSize;                                        // 0x06E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R2Y9[0x3];                                     // 0x06E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Pivot;                                                     // 0x06EC(0x0008) (Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bReceiveHardwareInput;                                     // 0x06F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bWindowFocusable;                                          // 0x06F5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QR27[0x2];                                     // 0x06F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULocalPlayer*                                OwnerPlayer;                                               // 0x06F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                BackgroundColor;                                           // 0x0700(0x0010) (Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                TintColorAndOpacity;                                       // 0x0710(0x0010) (Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              OpacityFromTexture;                                        // 0x0720(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_EWidgetBlendMode                               BlendMode;                                                 // 0x0724(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsTwoSided;                                               // 0x0725(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               TickWhenOffscreen;                                         // 0x0726(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UPEU[0x1];                                     // 0x0727(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUserWidget*                                 Widget;                                                    // 0x0728(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EDZS[0x20];                                    // 0x0730(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBodySetup*                                  BodySetup;                                                 // 0x0750(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          TranslucentMaterial;                                       // 0x0758(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          TranslucentMaterial_OneSided;                              // 0x0760(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          OpaqueMaterial;                                            // 0x0768(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          OpaqueMaterial_OneSided;                                   // 0x0770(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          MaskedMaterial;                                            // 0x0778(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          MaskedMaterial_OneSided;                                   // 0x0780(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                      RenderTarget;                                              // 0x0788(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                          // 0x0790(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAddedToScreen;                                            // 0x0798(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEditTimeUsable;                                           // 0x0799(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PPRQ[0x6];                                     // 0x079A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SharedLayerName;                                           // 0x07A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                LayerZOrder;                                               // 0x07A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_EWidgetGeometryMode                            GeometryMode;                                              // 0x07AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VKD8[0x3];                                     // 0x07AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CylinderArcAngle;                                          // 0x07B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WRFU[0x2C];                                    // 0x07B4(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(335);
		return ptr;
	}



	void STATIC_SetWidget(class UUserWidget* Widget);
	void STATIC_SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity);
	void STATIC_SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
	void STATIC_SetDrawSize(const struct FVector2D& Size);
	void STATIC_SetBackgroundColor(const struct FLinearColor& NewBackgroundColor);
	void STATIC_RequestRedraw();
	class UUserWidget* GetUserWidgetObject();
	class UTextureRenderTarget2D* GetRenderTarget();
	class ULocalPlayer* GetOwnerPlayer();
	class UMaterialInstanceDynamic* GetMaterialInstance();
	struct FVector2D GetDrawSize();
};

// Class UMG.WidgetInteractionComponent
// 0x01F0 (FullSize[0x0480] - InheritedSize[0x0290])
class UWidgetInteractionComponent : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnHoveredWidgetChanged;                                    // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F7G6[0x10];                                    // 0x02A0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                VirtualUserIndex;                                          // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointerIndex;                                              // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              TraceChannel;                                              // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T6EG[0x3];                                     // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InteractionDistance;                                       // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_EWidgetInteractionSource                       InteractionSource;                                         // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableHitTesting;                                         // 0x02C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowDebug;                                                // 0x02C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z0M8[0x1];                                     // 0x02C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                DebugColor;                                                // 0x02C4(0x0010) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LHFL[0x7C];                                    // 0x02D4(0x007C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FHitResult                                  CustomHitResult;                                           // 0x0350(0x0088) (Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                                   LocalHitLocation;                                          // 0x03D8(0x0008) (Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   LastLocalHitLocation;                                      // 0x03E0(0x0008) (Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetComponent*                            HoveredWidgetComponent;                                    // 0x03E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FHitResult                                  LastHitResult;                                             // 0x03F0(0x0088) (Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                               bIsHoveredWidgetInteractable;                              // 0x0478(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsHoveredWidgetFocusable;                                 // 0x0479(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsHoveredWidgetHitTestVisible;                            // 0x047A(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UYNJ[0x5];                                     // 0x047B(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(336);
		return ptr;
	}



	void STATIC_SetCustomHitResult(const struct FHitResult& HitResult);
	bool SendKeyChar(const struct FString& Characters, bool bRepeat);
	void STATIC_ScrollWheel(float ScrollDelta);
	void STATIC_ReleasePointerKey(const struct FKey& Key);
	bool ReleaseKey(const struct FKey& Key);
	void STATIC_PressPointerKey(const struct FKey& Key);
	bool PressKey(const struct FKey& Key, bool bRepeat);
	bool PressAndReleaseKey(const struct FKey& Key);
	bool IsOverInteractableWidget();
	bool IsOverHitTestVisibleWidget();
	bool IsOverFocusableWidget();
	struct FHitResult GetLastHitResult();
	class UWidgetComponent* GetHoveredWidgetComponent();
	struct FVector2D Get2DHitLocation();
};

// Class UMG.WidgetLayoutLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(337);
		return ptr;
	}



	class UVerticalBoxSlot* SlotAsVerticalBoxSlot(class UWidget* Widget);
	class UUniformGridSlot* SlotAsUniformGridSlot(class UWidget* Widget);
	class UOverlaySlot* SlotAsOverlaySlot(class UWidget* Widget);
	class UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(class UWidget* Widget);
	class UGridSlot* SlotAsGridSlot(class UWidget* Widget);
	class UCanvasPanelSlot* SlotAsCanvasSlot(class UWidget* Widget);
	class UBorderSlot* SlotAsBorderSlot(class UWidget* Widget);
	void STATIC_RemoveAllWidgets(class UObject* WorldContextObject);
	bool ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition);
	struct FGeometry GetViewportWidgetGeometry(class UObject* WorldContextObject);
	struct FVector2D GetViewportSize(class UObject* WorldContextObject);
	float GetViewportScale(class UObject* WorldContextObject);
	struct FGeometry GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);
	bool GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY);
	struct FVector2D GetMousePositionOnViewport(class UObject* WorldContextObject);
	struct FVector2D GetMousePositionOnPlatform();
};

// Class UMG.WidgetNavigation
// 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
class UWidgetNavigation : public UObject
{
public:
	struct FWidgetNavigationData                       Up;                                                        // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Down;                                                      // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Left;                                                      // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Right;                                                     // 0x0070(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Next;                                                      // 0x0088(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Previous;                                                  // 0x00A0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(338);
		return ptr;
	}



};

// Class UMG.WidgetSwitcher
// 0x0018 (FullSize[0x0128] - InheritedSize[0x0110])
class UWidgetSwitcher : public UPanelWidget
{
public:
	int                                                ActiveWidgetIndex;                                         // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UCDX[0x14];                                    // 0x0114(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(339);
		return ptr;
	}



	void STATIC_SetActiveWidgetIndex(int Index);
	void STATIC_SetActiveWidget(class UWidget* Widget);
	class UWidget* GetWidgetAtIndex(int Index);
	int GetNumWidgets();
	int GetActiveWidgetIndex();
	class UWidget* GetActiveWidget();
};

// Class UMG.WidgetSwitcherSlot
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q4LW[0xE];                                     // 0x004A(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(340);
		return ptr;
	}



	void STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.WidgetTree
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UWidgetTree : public UObject
{
public:
	class UWidget*                                     RootWidget;                                                // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UWidget*>                             AllWidgets;                                                // 0x0030(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(341);
		return ptr;
	}



};

// Class UMG.WindowTitleBarArea
// 0x0020 (FullSize[0x0130] - InheritedSize[0x0110])
class UWindowTitleBarArea : public UContentWidget
{
public:
	bool                                               bDoubleClickTogglesFullscreen;                             // 0x0110(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WDYN[0x1F];                                    // 0x0111(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(342);
		return ptr;
	}



	void STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.WindowTitleBarAreaSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7LC5[0x16];                                    // 0x004A(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(343);
		return ptr;
	}



	void STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.WrapBox
// 0x0020 (FullSize[0x0130] - InheritedSize[0x0110])
class UWrapBox : public UPanelWidget
{
public:
	struct FVector2D                                   InnerSlotPadding;                                          // 0x0110(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WrapWidth;                                                 // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExplicitWrapWidth;                                        // 0x011C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BDCQ[0x13];                                    // 0x011D(0x0013) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(344);
		return ptr;
	}



	void STATIC_SetInnerSlotPadding(const struct FVector2D& InPadding);
	class UWrapBoxSlot* AddChildWrapBox(class UWidget* Content);
};

// Class UMG.WrapBoxSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bFillEmptySpace;                                           // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_39VE[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FillSpanWhenLessThan;                                      // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4NMP[0xE];                                     // 0x0052(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(345);
		return ptr;
	}



	void STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void STATIC_SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void STATIC_SetFillEmptySpace(bool InbFillEmptySpace);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
