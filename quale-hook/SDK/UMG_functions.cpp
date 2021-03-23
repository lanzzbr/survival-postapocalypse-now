// Name: ANUSGAME, Version: 4.18

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function UMG.AsyncTaskDownloadImage.DownloadImage
// ()
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncTaskDownloadImage* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAsyncTaskDownloadImage* UAsyncTaskDownloadImage::DownloadImage(const struct FString& URL)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13593);

	UAsyncTaskDownloadImage_DownloadImage_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.SetVisibility
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// UMG_ESlateVisibility           InVisibility                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::STATIC_SetVisibility(UMG_ESlateVisibility InVisibility)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4021);

	UWidget_SetVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetUserFocus
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::STATIC_SetUserFocus(class APlayerController* PlayerController)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4019);

	UWidget_SetUserFocus_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetToolTipText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   InToolTipText                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UWidget::STATIC_SetToolTipText(const struct FText& InToolTipText)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4017);

	UWidget_SetToolTipText_Params params;
	params.InToolTipText = InToolTipText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetToolTip
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::STATIC_SetToolTip(class UWidget* Widget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4015);

	UWidget_SetToolTip_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetRenderTranslation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector2D               Translation                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::STATIC_SetRenderTranslation(const struct FVector2D& Translation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4013);

	UWidget_SetRenderTranslation_Params params;
	params.Translation = Translation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetRenderTransformPivot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector2D               Pivot                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::STATIC_SetRenderTransformPivot(const struct FVector2D& Pivot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4011);

	UWidget_SetRenderTransformPivot_Params params;
	params.Pivot = Pivot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetRenderTransform
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FWidgetTransform        InTransform                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UWidget::STATIC_SetRenderTransform(const struct FWidgetTransform& InTransform)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4004);

	UWidget_SetRenderTransform_Params params;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetRenderShear
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector2D               Shear                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::STATIC_SetRenderShear(const struct FVector2D& Shear)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4002);

	UWidget_SetRenderShear_Params params;
	params.Shear = Shear;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetRenderScale
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector2D               Scale                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::STATIC_SetRenderScale(const struct FVector2D& Scale)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4000);

	UWidget_SetRenderScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetRenderAngle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Angle                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::STATIC_SetRenderAngle(float Angle)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3998);

	UWidget_SetRenderAngle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetNavigationRule
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// SlateCore_EUINavigation        Direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SlateCore_EUINavigationRule    Rule                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   WidgetToFocus                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::STATIC_SetNavigationRule(SlateCore_EUINavigation Direction, SlateCore_EUINavigationRule Rule, const struct FName& WidgetToFocus)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3992);

	UWidget_SetNavigationRule_Params params;
	params.Direction = Direction;
	params.Rule = Rule;
	params.WidgetToFocus = WidgetToFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetKeyboardFocus
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UWidget::STATIC_SetKeyboardFocus()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3991);

	UWidget_SetKeyboardFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetIsEnabled
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bInIsEnabled                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::STATIC_SetIsEnabled(bool bInIsEnabled)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3989);

	UWidget_SetIsEnabled_Params params;
	params.bInIsEnabled = bInIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetCursor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<CoreUObject_EMouseCursor> InCursor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::STATIC_SetCursor(TEnumAsByte<CoreUObject_EMouseCursor> InCursor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3987);

	UWidget_SetCursor_Params params;
	params.InCursor = InCursor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetClipping
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// SlateCore_EWidgetClipping      InClipping                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::STATIC_SetClipping(SlateCore_EWidgetClipping InClipping)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3984);

	UWidget_SetClipping_Params params;
	params.InClipping = InClipping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.SetAllNavigationRules
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// SlateCore_EUINavigationRule    Rule                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   WidgetToFocus                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::STATIC_SetAllNavigationRules(SlateCore_EUINavigationRule Rule, const struct FName& WidgetToFocus)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3980);

	UWidget_SetAllNavigationRules_Params params;
	params.Rule = Rule;
	params.WidgetToFocus = WidgetToFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.ResetCursor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UWidget::STATIC_ResetCursor()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3979);

	UWidget_ResetCursor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.RemoveFromParent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UWidget::STATIC_RemoveFromParent()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3978);

	UWidget_RemoveFromParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.Widget.OnReply__DelegateSignature
// ()
// Parameters:
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidget::OnReply__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3976);

	UWidget_OnReply__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidget::OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3969);

	UWidget_OnPointerEvent__DelegateSignature_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.IsVisible
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::IsVisible()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3967);

	UWidget_IsVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.IsHovered
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::IsHovered()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3965);

	UWidget_IsHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.InvalidateLayoutAndVolatility
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UWidget::STATIC_InvalidateLayoutAndVolatility()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3964);

	UWidget_InvalidateLayoutAndVolatility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.HasUserFocusedDescendants
// (BlueprintCosmetic)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::HasUserFocusedDescendants(class APlayerController* PlayerController)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3961);

	UWidget_HasUserFocusedDescendants_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.HasUserFocus
// (BlueprintCosmetic)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::HasUserFocus(class APlayerController* PlayerController)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3958);

	UWidget_HasUserFocus_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.HasMouseCapture
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::HasMouseCapture()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3956);

	UWidget_HasMouseCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.HasKeyboardFocus
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::HasKeyboardFocus()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3954);

	UWidget_HasKeyboardFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.HasFocusedDescendants
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::HasFocusedDescendants()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3952);

	UWidget_HasFocusedDescendants_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.HasAnyUserFocus
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::HasAnyUserFocus()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3950);

	UWidget_HasAnyUserFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
// ()
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UWidget::GetWidget__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3948);

	UWidget_GetWidget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetVisibility
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UWidget::GetVisibility()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3945);

	UWidget_GetVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetText__DelegateSignature
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UWidget::GetText__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3943);

	UWidget_GetText__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UWidget::GetSlateVisibility__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3939);

	UWidget_GetSlateVisibility__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
// ()
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateColor UWidget::GetSlateColor__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3937);

	UWidget_GetSlateColor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
// ()
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UWidget::GetSlateBrush__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3914);

	UWidget_GetSlateBrush__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetParent
// ()
// Parameters:
// class UPanelWidget*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPanelWidget* UWidget::GetParent()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3912);

	UWidget_GetParent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetOwningPlayer
// ()
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APlayerController* UWidget::GetOwningPlayer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3910);

	UWidget_GetOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
// ()
// Parameters:
// TEnumAsByte<CoreUObject_EMouseCursor> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<CoreUObject_EMouseCursor> UWidget::GetMouseCursor__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3908);

	UWidget_GetMouseCursor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UWidget::GetLinearColor__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3906);

	UWidget_GetLinearColor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetIsEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::GetIsEnabled()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3904);

	UWidget_GetIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWidget::GetInt32__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3902);

	UWidget_GetInt32__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWidget::GetFloat__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3900);

	UWidget_GetFloat__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetDesiredSize
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidget::GetDesiredSize()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3898);

	UWidget_GetDesiredSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetClipping
// ()
// Parameters:
// SlateCore_EWidgetClipping      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SlateCore_EWidgetClipping UWidget::GetClipping()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3895);

	UWidget_GetClipping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
// ()
// Parameters:
// SlateCore_ECheckBoxState       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SlateCore_ECheckBoxState UWidget::GetCheckBoxState__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3892);

	UWidget_GetCheckBoxState__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.GetCachedGeometry
// ()
// Parameters:
// struct FGeometry               ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FGeometry UWidget::GetCachedGeometry()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3889);

	UWidget_GetCachedGeometry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetBool__DelegateSignature
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::GetBool__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3887);

	UWidget_GetBool__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
// ()
// Parameters:
// struct FString                 Item                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UWidget::GenerateWidgetForString__DelegateSignature(const struct FString& Item)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3884);

	UWidget_GenerateWidgetForString__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UWidget::GenerateWidgetForObject__DelegateSignature(class UObject* Item)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3881);

	UWidget_GenerateWidgetForObject__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Widget.ForceVolatile
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::STATIC_ForceVolatile(bool bForce)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3879);

	UWidget_ForceVolatile_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Widget.ForceLayoutPrepass
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UWidget::STATIC_ForceLayoutPrepass()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(3878);

	UWidget_ForceLayoutPrepass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.PanelWidget.RemoveChildAt
// (BlueprintAuthorityOnly)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPanelWidget::RemoveChildAt(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13618);

	UPanelWidget_RemoveChildAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.PanelWidget.RemoveChild
// (BlueprintCosmetic)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPanelWidget::RemoveChild(class UWidget* Content)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13615);

	UPanelWidget_RemoveChild_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.PanelWidget.HasChild
// (BlueprintCosmetic)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPanelWidget::HasChild(class UWidget* Content)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13612);

	UPanelWidget_HasChild_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.PanelWidget.HasAnyChildren
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPanelWidget::HasAnyChildren()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13610);

	UPanelWidget_HasAnyChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.PanelWidget.GetChildrenCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPanelWidget::GetChildrenCount()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13608);

	UPanelWidget_GetChildrenCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.PanelWidget.GetChildIndex
// (BlueprintCosmetic)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPanelWidget::GetChildIndex(class UWidget* Content)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13605);

	UPanelWidget_GetChildIndex_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.PanelWidget.GetChildAt
// (BlueprintCosmetic)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UPanelWidget::GetChildAt(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13602);

	UPanelWidget_GetChildAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.PanelWidget.ClearChildren
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPanelWidget::STATIC_ClearChildren()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13601);

	UPanelWidget_ClearChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.PanelWidget.AddChild
// (BlueprintCosmetic)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPanelSlot*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPanelSlot* UPanelWidget::AddChild(class UWidget* Content)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13598);

	UPanelWidget_AddChild_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ContentWidget.SetContent
// (BlueprintCosmetic)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPanelSlot*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPanelSlot* UContentWidget::SetContent(class UWidget* Content)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13627);

	UContentWidget_SetContent_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ContentWidget.GetContentSlot
// ()
// Parameters:
// class UPanelSlot*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPanelSlot* UContentWidget::GetContentSlot()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13625);

	UContentWidget_GetContentSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ContentWidget.GetContent
// ()
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UContentWidget::GetContent()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13623);

	UContentWidget_GetContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.BackgroundBlur.SetVerticalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBackgroundBlur::STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13642);

	UBackgroundBlur_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BackgroundBlur.SetPadding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMargin                 InPadding                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UBackgroundBlur::STATIC_SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13640);

	UBackgroundBlur_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FSlateBrush             InBrush                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UBackgroundBlur::STATIC_SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13638);

	UBackgroundBlur_SetLowQualityFallbackBrush_Params params;
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BackgroundBlur.SetHorizontalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBackgroundBlur::STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13636);

	UBackgroundBlur_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BackgroundBlur.SetBlurStrength
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InStrength                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBackgroundBlur::STATIC_SetBlurStrength(float InStrength)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13634);

	UBackgroundBlur_SetBlurStrength_Params params;
	params.InStrength = InStrength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BackgroundBlur.SetBlurRadius
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            InBlurRadius                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBackgroundBlur::STATIC_SetBlurRadius(int InBlurRadius)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13632);

	UBackgroundBlur_SetBlurRadius_Params params;
	params.InBlurRadius = InBlurRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BackgroundBlur.SetApplyAlphaToBlur
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bInApplyAlphaToBlur            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBackgroundBlur::STATIC_SetApplyAlphaToBlur(bool bInApplyAlphaToBlur)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13630);

	UBackgroundBlur_SetApplyAlphaToBlur_Params params;
	params.bInApplyAlphaToBlur = bInApplyAlphaToBlur;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BackgroundBlurSlot.SetVerticalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBackgroundBlurSlot::STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13658);

	UBackgroundBlurSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BackgroundBlurSlot.SetPadding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMargin                 InPadding                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UBackgroundBlurSlot::STATIC_SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13656);

	UBackgroundBlurSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBackgroundBlurSlot::STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13654);

	UBackgroundBlurSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BoolBinding.GetValue
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBoolBinding::GetValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13666);

	UBoolBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Border.SetVerticalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13688);

	UBorder_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Border.SetPadding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMargin                 InPadding                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UBorder::STATIC_SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13686);

	UBorder_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Border.SetHorizontalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13684);

	UBorder_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Border.SetDesiredSizeScale
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector2D               InScale                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::STATIC_SetDesiredSizeScale(const struct FVector2D& InScale)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13682);

	UBorder_SetDesiredSizeScale_Params params;
	params.InScale = InScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Border.SetContentColorAndOpacity
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FLinearColor            InContentColorAndOpacity       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::STATIC_SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13680);

	UBorder_SetContentColorAndOpacity_Params params;
	params.InContentColorAndOpacity = InContentColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Border.SetBrushFromTexture
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::STATIC_SetBrushFromTexture(class UTexture2D* Texture)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13678);

	UBorder_SetBrushFromTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Border.SetBrushFromMaterial
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::STATIC_SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13676);

	UBorder_SetBrushFromMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Border.SetBrushFromAsset
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class USlateBrushAsset*        Asset                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::STATIC_SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13674);

	UBorder_SetBrushFromAsset_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Border.SetBrushColor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FLinearColor            InBrushColor                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::STATIC_SetBrushColor(const struct FLinearColor& InBrushColor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13672);

	UBorder_SetBrushColor_Params params;
	params.InBrushColor = InBrushColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Border.SetBrush
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FSlateBrush             InBrush                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UBorder::STATIC_SetBrush(const struct FSlateBrush& InBrush)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13670);

	UBorder_SetBrush_Params params;
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Border.GetDynamicMaterial
// ()
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* UBorder::GetDynamicMaterial()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13668);

	UBorder_GetDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.BorderSlot.SetVerticalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorderSlot::STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13709);

	UBorderSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BorderSlot.SetPadding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMargin                 InPadding                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UBorderSlot::STATIC_SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13707);

	UBorderSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BorderSlot.SetHorizontalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorderSlot::STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13705);

	UBorderSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.BrushBinding.GetValue
// ()
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UBrushBinding::GetValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13714);

	UBrushBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Button.SetTouchMethod
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EButtonTouchMethod> InTouchMethod                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UButton::STATIC_SetTouchMethod(TEnumAsByte<SlateCore_EButtonTouchMethod> InTouchMethod)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13726);

	UButton_SetTouchMethod_Params params;
	params.InTouchMethod = InTouchMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Button.SetStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FButtonStyle            InStyle                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UButton::STATIC_SetStyle(const struct FButtonStyle& InStyle)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13724);

	UButton_SetStyle_Params params;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Button.SetColorAndOpacity
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FLinearColor            InColorAndOpacity              (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UButton::STATIC_SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13722);

	UButton_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Button.SetClickMethod
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EButtonClickMethod> InClickMethod                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UButton::STATIC_SetClickMethod(TEnumAsByte<SlateCore_EButtonClickMethod> InClickMethod)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13720);

	UButton_SetClickMethod_Params params;
	params.InClickMethod = InClickMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Button.SetBackgroundColor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FLinearColor            InBackgroundColor              (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UButton::STATIC_SetBackgroundColor(const struct FLinearColor& InBackgroundColor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13718);

	UButton_SetBackgroundColor_Params params;
	params.InBackgroundColor = InBackgroundColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Button.IsPressed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UButton::IsPressed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13716);

	UButton_IsPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ButtonSlot.SetVerticalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UButtonSlot::STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13744);

	UButtonSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ButtonSlot.SetPadding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMargin                 InPadding                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UButtonSlot::STATIC_SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13742);

	UButtonSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ButtonSlot.SetHorizontalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UButtonSlot::STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13740);

	UButtonSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CanvasPanel.AddChildToCanvas
// (BlueprintCosmetic)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCanvasPanelSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCanvasPanelSlot* UCanvasPanel::AddChildToCanvas(class UWidget* Content)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13749);

	UCanvasPanel_AddChildToCanvas_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.SetZOrder
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            InZOrder                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::STATIC_SetZOrder(int InZOrder)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13786);

	UCanvasPanelSlot_SetZOrder_Params params;
	params.InZOrder = InZOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CanvasPanelSlot.SetSize
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector2D               InSize                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::STATIC_SetSize(const struct FVector2D& InSize)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13784);

	UCanvasPanelSlot_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CanvasPanelSlot.SetPosition
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector2D               InPosition                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::STATIC_SetPosition(const struct FVector2D& InPosition)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13782);

	UCanvasPanelSlot_SetPosition_Params params;
	params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CanvasPanelSlot.SetOffsets
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMargin                 InOffset                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::STATIC_SetOffsets(const struct FMargin& InOffset)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13780);

	UCanvasPanelSlot_SetOffsets_Params params;
	params.InOffset = InOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CanvasPanelSlot.SetMinimum
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector2D               InMinimumAnchors               (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::STATIC_SetMinimum(const struct FVector2D& InMinimumAnchors)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13778);

	UCanvasPanelSlot_SetMinimum_Params params;
	params.InMinimumAnchors = InMinimumAnchors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CanvasPanelSlot.SetMaximum
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector2D               InMaximumAnchors               (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::STATIC_SetMaximum(const struct FVector2D& InMaximumAnchors)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13776);

	UCanvasPanelSlot_SetMaximum_Params params;
	params.InMaximumAnchors = InMaximumAnchors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CanvasPanelSlot.SetLayout
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FAnchorData             InLayoutData                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::STATIC_SetLayout(const struct FAnchorData& InLayoutData)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13774);

	UCanvasPanelSlot_SetLayout_Params params;
	params.InLayoutData = InLayoutData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CanvasPanelSlot.SetAutoSize
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           InbAutoSize                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::STATIC_SetAutoSize(bool InbAutoSize)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13772);

	UCanvasPanelSlot_SetAutoSize_Params params;
	params.InbAutoSize = InbAutoSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CanvasPanelSlot.SetAnchors
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FAnchors                InAnchors                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::STATIC_SetAnchors(const struct FAnchors& InAnchors)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13770);

	UCanvasPanelSlot_SetAnchors_Params params;
	params.InAnchors = InAnchors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CanvasPanelSlot.SetAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector2D               InAlignment                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::STATIC_SetAlignment(const struct FVector2D& InAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13768);

	UCanvasPanelSlot_SetAlignment_Params params;
	params.InAlignment = InAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CanvasPanelSlot.GetZOrder
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UCanvasPanelSlot::GetZOrder()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13766);

	UCanvasPanelSlot_GetZOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetSize
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UCanvasPanelSlot::GetSize()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13764);

	UCanvasPanelSlot_GetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetPosition
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UCanvasPanelSlot::GetPosition()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13762);

	UCanvasPanelSlot_GetPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetOffsets
// ()
// Parameters:
// struct FMargin                 ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FMargin UCanvasPanelSlot::GetOffsets()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13760);

	UCanvasPanelSlot_GetOffsets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetLayout
// ()
// Parameters:
// struct FAnchorData             ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FAnchorData UCanvasPanelSlot::GetLayout()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13758);

	UCanvasPanelSlot_GetLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetAutoSize
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCanvasPanelSlot::GetAutoSize()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13756);

	UCanvasPanelSlot_GetAutoSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetAnchors
// ()
// Parameters:
// struct FAnchors                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FAnchors UCanvasPanelSlot::GetAnchors()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13754);

	UCanvasPanelSlot_GetAnchors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetAlignment
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UCanvasPanelSlot::GetAlignment()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13752);

	UCanvasPanelSlot_GetAlignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CheckBox.SetIsChecked
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           InIsChecked                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCheckBox::STATIC_SetIsChecked(bool InIsChecked)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13801);

	UCheckBox_SetIsChecked_Params params;
	params.InIsChecked = InIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CheckBox.SetCheckedState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// SlateCore_ECheckBoxState       InCheckedState                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCheckBox::STATIC_SetCheckedState(SlateCore_ECheckBoxState InCheckedState)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13798);

	UCheckBox_SetCheckedState_Params params;
	params.InCheckedState = InCheckedState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CheckBox.IsPressed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCheckBox::IsPressed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13796);

	UCheckBox_IsPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CheckBox.IsChecked
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCheckBox::IsChecked()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13794);

	UCheckBox_IsChecked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CheckBox.GetCheckedState
// ()
// Parameters:
// SlateCore_ECheckBoxState       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SlateCore_ECheckBoxState UCheckBox::GetCheckedState()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13791);

	UCheckBox_GetCheckedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CheckedStateBinding.GetValue
// ()
// Parameters:
// SlateCore_ECheckBoxState       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SlateCore_ECheckBoxState UCheckedStateBinding::GetValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13822);

	UCheckedStateBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.CircularThrobber.SetRadius
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InRadius                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCircularThrobber::STATIC_SetRadius(float InRadius)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13829);

	UCircularThrobber_SetRadius_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CircularThrobber.SetPeriod
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InPeriod                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCircularThrobber::STATIC_SetPeriod(float InPeriod)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13827);

	UCircularThrobber_SetPeriod_Params params;
	params.InPeriod = InPeriod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.CircularThrobber.SetNumberOfPieces
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            InNumberOfPieces               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCircularThrobber::STATIC_SetNumberOfPieces(int InNumberOfPieces)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13825);

	UCircularThrobber_SetNumberOfPieces_Params params;
	params.InNumberOfPieces = InNumberOfPieces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ColorBinding.GetSlateValue
// ()
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateColor UColorBinding::GetSlateValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13839);

	UColorBinding_GetSlateValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ColorBinding.GetLinearValue
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UColorBinding::GetLinearValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13837);

	UColorBinding_GetLinearValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ComboBoxString.SetSelectedOption
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 Option                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UComboBoxString::STATIC_SetSelectedOption(const struct FString& Option)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4081);

	UComboBoxString_SetSelectedOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ComboBoxString.RemoveOption
// ()
// Parameters:
// struct FString                 Option                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UComboBoxString::RemoveOption(const struct FString& Option)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4078);

	UComboBoxString_RemoveOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ComboBoxString.RefreshOptions
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UComboBoxString::STATIC_RefreshOptions()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4077);

	UComboBoxString_RefreshOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ESelectInfo> SelectionType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UComboBoxString::STATIC_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4074);

	UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UComboBoxString::STATIC_OnOpeningEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4073);

	UComboBoxString_OnOpeningEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ComboBoxString.GetSelectedOption
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UComboBoxString::GetSelectedOption()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4071);

	UComboBoxString_GetSelectedOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ComboBoxString.GetOptionCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UComboBoxString::GetOptionCount()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4069);

	UComboBoxString_GetOptionCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ComboBoxString.GetOptionAtIndex
// (BlueprintCosmetic)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UComboBoxString::GetOptionAtIndex(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4066);

	UComboBoxString_GetOptionAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ComboBoxString.FindOptionIndex
// ()
// Parameters:
// struct FString                 Option                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UComboBoxString::FindOptionIndex(const struct FString& Option)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4063);

	UComboBoxString_FindOptionIndex_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ComboBoxString.ClearSelection
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UComboBoxString::STATIC_ClearSelection()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4062);

	UComboBoxString_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ComboBoxString.ClearOptions
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UComboBoxString::STATIC_ClearOptions()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4061);

	UComboBoxString_ClearOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ComboBoxString.AddOption
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 Option                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UComboBoxString::STATIC_AddOption(const struct FString& Option)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4059);

	UComboBoxString_AddOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.DragDropOperation.Drop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPointerEvent           PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UDragDropOperation::STATIC_Drop(const struct FPointerEvent& PointerEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13849);

	UDragDropOperation_Drop_Params params;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.DragDropOperation.Dragged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPointerEvent           PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UDragDropOperation::STATIC_Dragged(const struct FPointerEvent& PointerEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13847);

	UDragDropOperation_Dragged_Params params;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.DragDropOperation.DragCancelled
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPointerEvent           PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UDragDropOperation::STATIC_DragCancelled(const struct FPointerEvent& PointerEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13845);

	UDragDropOperation_DragCancelled_Params params;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.EditableText.SetText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   InText                         (Parm, NativeAccessSpecifierPublic)
void UEditableText::STATIC_SetText(const struct FText& InText)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4158);

	UEditableText_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.EditableText.SetIsReadOnly
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           InbIsReadyOnly                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableText::STATIC_SetIsReadOnly(bool InbIsReadyOnly)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4156);

	UEditableText_SetIsReadOnly_Params params;
	params.InbIsReadyOnly = InbIsReadyOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.EditableText.SetIsPassword
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           InbIsPassword                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableText::STATIC_SetIsPassword(bool InbIsPassword)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4154);

	UEditableText_SetIsPassword_Params params;
	params.InbIsPassword = InbIsPassword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.EditableText.SetHintText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   InHintText                     (Parm, NativeAccessSpecifierPublic)
void UEditableText::STATIC_SetHintText(const struct FText& InHintText)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4152);

	UEditableText_SetHintText_Params params;
	params.InHintText = InHintText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableText::STATIC_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4149);

	UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UEditableText::STATIC_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4147);

	UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.EditableText.GetText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UEditableText::GetText()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4145);

	UEditableText_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.EditableTextBox.SetText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   InText                         (Parm, NativeAccessSpecifierPublic)
void UEditableTextBox::STATIC_SetText(const struct FText& InText)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4214);

	UEditableTextBox_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.EditableTextBox.SetIsReadOnly
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bReadOnly                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableTextBox::STATIC_SetIsReadOnly(bool bReadOnly)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4212);

	UEditableTextBox_SetIsReadOnly_Params params;
	params.bReadOnly = bReadOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.EditableTextBox.SetHintText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   InText                         (Parm, NativeAccessSpecifierPublic)
void UEditableTextBox::STATIC_SetHintText(const struct FText& InText)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4210);

	UEditableTextBox_SetHintText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.EditableTextBox.SetError
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   InError                        (Parm, NativeAccessSpecifierPublic)
void UEditableTextBox::STATIC_SetError(const struct FText& InError)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4208);

	UEditableTextBox_SetError_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableTextBox::STATIC_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4205);

	UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UEditableTextBox::STATIC_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4203);

	UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.EditableTextBox.HasError
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEditableTextBox::HasError()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4201);

	UEditableTextBox_HasError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.EditableTextBox.GetText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UEditableTextBox::GetText()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4199);

	UEditableTextBox_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.EditableTextBox.ClearError
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UEditableTextBox::STATIC_ClearError()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4198);

	UEditableTextBox_ClearError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ExpandableArea.SetIsExpanded_Animated
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsExpanded                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UExpandableArea::STATIC_SetIsExpanded_Animated(bool IsExpanded)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13864);

	UExpandableArea_SetIsExpanded_Animated_Params params;
	params.IsExpanded = IsExpanded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ExpandableArea.SetIsExpanded
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsExpanded                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UExpandableArea::STATIC_SetIsExpanded(bool IsExpanded)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13862);

	UExpandableArea_SetIsExpanded_Params params;
	params.IsExpanded = IsExpanded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ExpandableArea.GetIsExpanded
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UExpandableArea::GetIsExpanded()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13860);

	UExpandableArea_GetIsExpanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.FloatBinding.GetValue
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFloatBinding::GetValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13876);

	UFloatBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.GridPanel.AddChildToGrid
// (BlueprintCosmetic)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGridSlot*               ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGridSlot* UGridPanel::AddChildToGrid(class UWidget* Content)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13878);

	UGridPanel_AddChildToGrid_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.GridSlot.SetVerticalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13899);

	UGridSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.GridSlot.SetRowSpan
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            InRowSpan                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::STATIC_SetRowSpan(int InRowSpan)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13897);

	UGridSlot_SetRowSpan_Params params;
	params.InRowSpan = InRowSpan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.GridSlot.SetRow
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            InRow                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::STATIC_SetRow(int InRow)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13895);

	UGridSlot_SetRow_Params params;
	params.InRow = InRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.GridSlot.SetPadding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMargin                 InPadding                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UGridSlot::STATIC_SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13893);

	UGridSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.GridSlot.SetLayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            InLayer                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::STATIC_SetLayer(int InLayer)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13891);

	UGridSlot_SetLayer_Params params;
	params.InLayer = InLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.GridSlot.SetHorizontalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13889);

	UGridSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.GridSlot.SetColumnSpan
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            InColumnSpan                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::STATIC_SetColumnSpan(int InColumnSpan)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13887);

	UGridSlot_SetColumnSpan_Params params;
	params.InColumnSpan = InColumnSpan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.GridSlot.SetColumn
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            InColumn                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::STATIC_SetColumn(int InColumn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13885);

	UGridSlot_SetColumn_Params params;
	params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.HorizontalBox.AddChildToHorizontalBox
// (BlueprintCosmetic)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHorizontalBoxSlot*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHorizontalBoxSlot* UHorizontalBox::AddChildToHorizontalBox(class UWidget* Content)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13910);

	UHorizontalBox_AddChildToHorizontalBox_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.HorizontalBoxSlot.SetVerticalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHorizontalBoxSlot::STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13919);

	UHorizontalBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.HorizontalBoxSlot.SetSize
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FSlateChildSize         InSize                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UHorizontalBoxSlot::STATIC_SetSize(const struct FSlateChildSize& InSize)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13917);

	UHorizontalBoxSlot_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.HorizontalBoxSlot.SetPadding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMargin                 InPadding                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UHorizontalBoxSlot::STATIC_SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13915);

	UHorizontalBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHorizontalBoxSlot::STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13913);

	UHorizontalBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Image.SetOpacity
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InOpacity                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::STATIC_SetOpacity(float InOpacity)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13941);

	UImage_SetOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Image.SetColorAndOpacity
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FLinearColor            InColorAndOpacity              (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::STATIC_SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13939);

	UImage_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Image.SetBrushFromTextureDynamic
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UTexture2DDynamic*       Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bMatchSize                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::STATIC_SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13936);

	UImage_SetBrushFromTextureDynamic_Params params;
	params.Texture = Texture;
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Image.SetBrushFromTexture
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bMatchSize                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::STATIC_SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13933);

	UImage_SetBrushFromTexture_Params params;
	params.Texture = Texture;
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Image.SetBrushFromMaterial
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::STATIC_SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13931);

	UImage_SetBrushFromMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Image.SetBrushFromAsset
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class USlateBrushAsset*        Asset                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::STATIC_SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13929);

	UImage_SetBrushFromAsset_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Image.SetBrush
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FSlateBrush             InBrush                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UImage::STATIC_SetBrush(const struct FSlateBrush& InBrush)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13927);

	UImage_SetBrush_Params params;
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Image.GetDynamicMaterial
// ()
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* UImage::GetDynamicMaterial()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13925);

	UImage_GetDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.InputKeySelector.SetTextBlockVisibility
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// UMG_ESlateVisibility           InVisibility                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInputKeySelector::STATIC_SetTextBlockVisibility(UMG_ESlateVisibility InVisibility)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4287);

	UInputKeySelector_SetTextBlockVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.InputKeySelector.SetSelectedKey
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FInputChord             InSelectedKey                  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInputKeySelector::STATIC_SetSelectedKey(const struct FInputChord& InSelectedKey)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4285);

	UInputKeySelector_SetSelectedKey_Params params;
	params.InSelectedKey = InSelectedKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.InputKeySelector.SetNoKeySpecifiedText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   InNoKeySpecifiedText           (Parm, NativeAccessSpecifierPublic)
void UInputKeySelector::STATIC_SetNoKeySpecifiedText(const struct FText& InNoKeySpecifiedText)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4283);

	UInputKeySelector_SetNoKeySpecifiedText_Params params;
	params.InNoKeySpecifiedText = InNoKeySpecifiedText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.InputKeySelector.SetKeySelectionText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   InKeySelectionText             (Parm, NativeAccessSpecifierPublic)
void UInputKeySelector::STATIC_SetKeySelectionText(const struct FText& InKeySelectionText)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4281);

	UInputKeySelector_SetKeySelectionText_Params params;
	params.InKeySelectionText = InKeySelectionText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.InputKeySelector.SetAllowModifierKeys
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bInAllowModifierKeys           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInputKeySelector::STATIC_SetAllowModifierKeys(bool bInAllowModifierKeys)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4279);

	UInputKeySelector_SetAllowModifierKeys_Params params;
	params.bInAllowModifierKeys = bInAllowModifierKeys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.InputKeySelector.SetAllowGamepadKeys
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bInAllowGamepadKeys            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInputKeySelector::STATIC_SetAllowGamepadKeys(bool bInAllowGamepadKeys)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4277);

	UInputKeySelector_SetAllowGamepadKeys_Params params;
	params.bInAllowGamepadKeys = bInAllowGamepadKeys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FInputChord             SelectedKey                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInputKeySelector::STATIC_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4269);

	UInputKeySelector_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInputKeySelector::STATIC_OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4268);

	UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.InputKeySelector.GetIsSelectingKey
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInputKeySelector::GetIsSelectingKey()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4266);

	UInputKeySelector_GetIsSelectingKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Int32Binding.GetValue
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UInt32Binding::GetValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13948);

	UInt32Binding_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.InvalidationBox.SetCanCache
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           CanCache                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInvalidationBox::STATIC_SetCanCache(bool CanCache)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13953);

	UInvalidationBox_SetCanCache_Params params;
	params.CanCache = CanCache;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.InvalidationBox.InvalidateCache
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInvalidationBox::STATIC_InvalidateCache()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13952);

	UInvalidationBox_InvalidateCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.InvalidationBox.GetCanCache
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInvalidationBox::GetCanCache()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13950);

	UInvalidationBox_GetCanCache_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.MenuAnchor.ToggleOpen
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bFocusOnOpen                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMenuAnchor::STATIC_ToggleOpen(bool bFocusOnOpen)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13973);

	UMenuAnchor_ToggleOpen_Params params;
	params.bFocusOnOpen = bFocusOnOpen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.MenuAnchor.ShouldOpenDueToClick
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMenuAnchor::ShouldOpenDueToClick()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13971);

	UMenuAnchor_ShouldOpenDueToClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.MenuAnchor.Open
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bFocusMenu                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMenuAnchor::STATIC_Open(bool bFocusMenu)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13969);

	UMenuAnchor_Open_Params params;
	params.bFocusMenu = bFocusMenu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.MenuAnchor.IsOpen
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMenuAnchor::IsOpen()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13967);

	UMenuAnchor_IsOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.MenuAnchor.HasOpenSubMenus
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMenuAnchor::HasOpenSubMenus()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13965);

	UMenuAnchor_HasOpenSubMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.MenuAnchor.GetMenuPosition
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UMenuAnchor::GetMenuPosition()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13963);

	UMenuAnchor_GetMenuPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.MenuAnchor.Close
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenuAnchor::STATIC_Close()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13962);

	UMenuAnchor_Close_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.MouseCursorBinding.GetValue
// ()
// Parameters:
// TEnumAsByte<CoreUObject_EMouseCursor> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<CoreUObject_EMouseCursor> UMouseCursorBinding::GetValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13981);

	UMouseCursorBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.MultiLineEditableText.SetText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   InText                         (Parm, NativeAccessSpecifierPublic)
void UMultiLineEditableText::STATIC_SetText(const struct FText& InText)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4335);

	UMultiLineEditableText_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.MultiLineEditableText.SetIsReadOnly
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bReadOnly                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiLineEditableText::STATIC_SetIsReadOnly(bool bReadOnly)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4333);

	UMultiLineEditableText_SetIsReadOnly_Params params;
	params.bReadOnly = bReadOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiLineEditableText::STATIC_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4330);

	UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UMultiLineEditableText::STATIC_OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4328);

	UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.MultiLineEditableText.GetText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMultiLineEditableText::GetText()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4326);

	UMultiLineEditableText_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.MultiLineEditableTextBox.SetText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   InText                         (Parm, NativeAccessSpecifierPublic)
void UMultiLineEditableTextBox::STATIC_SetText(const struct FText& InText)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4357);

	UMultiLineEditableTextBox_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.MultiLineEditableTextBox.SetIsReadOnly
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bReadOnly                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiLineEditableTextBox::STATIC_SetIsReadOnly(bool bReadOnly)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4355);

	UMultiLineEditableTextBox_SetIsReadOnly_Params params;
	params.bReadOnly = bReadOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.MultiLineEditableTextBox.SetError
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   InError                        (Parm, NativeAccessSpecifierPublic)
void UMultiLineEditableTextBox::STATIC_SetError(const struct FText& InError)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4353);

	UMultiLineEditableTextBox_SetError_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiLineEditableTextBox::STATIC_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4350);

	UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UMultiLineEditableTextBox::STATIC_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4348);

	UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.MultiLineEditableTextBox.GetText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMultiLineEditableTextBox::GetText()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4346);

	UMultiLineEditableTextBox_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Overlay.AddChildToOverlay
// (BlueprintCosmetic)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOverlaySlot*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UOverlaySlot* UOverlay::AddChildToOverlay(class UWidget* Content)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13994);

	UOverlay_AddChildToOverlay_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.OverlaySlot.SetVerticalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOverlaySlot::STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14001);

	UOverlaySlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.OverlaySlot.SetPadding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMargin                 InPadding                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UOverlaySlot::STATIC_SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13999);

	UOverlaySlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.OverlaySlot.SetHorizontalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOverlaySlot::STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(13997);

	UOverlaySlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ProgressBar.SetPercent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InPercent                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProgressBar::STATIC_SetPercent(float InPercent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14010);

	UProgressBar_SetPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ProgressBar.SetIsMarquee
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           InbIsMarquee                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProgressBar::STATIC_SetIsMarquee(bool InbIsMarquee)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14008);

	UProgressBar_SetIsMarquee_Params params;
	params.InbIsMarquee = InbIsMarquee;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ProgressBar.SetFillColorAndOpacity
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FLinearColor            InColor                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProgressBar::STATIC_SetFillColorAndOpacity(const struct FLinearColor& InColor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14006);

	UProgressBar_SetFillColorAndOpacity_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.RetainerBox.SetTextureParameter
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   TextureParameter               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URetainerBox::STATIC_SetTextureParameter(const struct FName& TextureParameter)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14029);

	URetainerBox_SetTextureParameter_Params params;
	params.TextureParameter = TextureParameter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.RetainerBox.SetEffectMaterial
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UMaterialInterface*      EffectMaterial                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URetainerBox::STATIC_SetEffectMaterial(class UMaterialInterface* EffectMaterial)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14027);

	URetainerBox_SetEffectMaterial_Params params;
	params.EffectMaterial = EffectMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.RetainerBox.RequestRender
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void URetainerBox::STATIC_RequestRender()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14026);

	URetainerBox_RequestRender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.RetainerBox.GetEffectMaterial
// ()
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* URetainerBox::GetEffectMaterial()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14024);

	URetainerBox_GetEffectMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SafeZone.SetSidesToPad
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           InPadLeft                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InPadRight                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InPadTop                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InPadBottom                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USafeZone::STATIC_SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14045);

	USafeZone_SetSidesToPad_Params params;
	params.InPadLeft = InPadLeft;
	params.InPadRight = InPadRight;
	params.InPadTop = InPadTop;
	params.InPadBottom = InPadBottom;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScaleBox.SetUserSpecifiedScale
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InUserSpecifiedScale           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScaleBox::STATIC_SetUserSpecifiedScale(float InUserSpecifiedScale)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14065);

	UScaleBox_SetUserSpecifiedScale_Params params;
	params.InUserSpecifiedScale = InUserSpecifiedScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScaleBox.SetStretchDirection
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Slate_EStretchDirection> InStretchDirection             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScaleBox::STATIC_SetStretchDirection(TEnumAsByte<Slate_EStretchDirection> InStretchDirection)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14063);

	UScaleBox_SetStretchDirection_Params params;
	params.InStretchDirection = InStretchDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScaleBox.SetStretch
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Slate_EStretch>    InStretch                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScaleBox::STATIC_SetStretch(TEnumAsByte<Slate_EStretch> InStretch)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14061);

	UScaleBox_SetStretch_Params params;
	params.InStretch = InStretch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScaleBox.SetIgnoreInheritedScale
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bInIgnoreInheritedScale        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScaleBox::STATIC_SetIgnoreInheritedScale(bool bInIgnoreInheritedScale)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14059);

	UScaleBox_SetIgnoreInheritedScale_Params params;
	params.bInIgnoreInheritedScale = bInIgnoreInheritedScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScaleBoxSlot.SetVerticalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScaleBoxSlot::STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14076);

	UScaleBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScaleBoxSlot.SetPadding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMargin                 InPadding                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UScaleBoxSlot::STATIC_SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14074);

	UScaleBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScaleBoxSlot.SetHorizontalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScaleBoxSlot::STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14072);

	UScaleBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBar.SetState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InOffsetFraction               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InThumbSizeFraction            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBar::STATIC_SetState(float InOffsetFraction, float InThumbSizeFraction)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14081);

	UScrollBar_SetState_Params params;
	params.InOffsetFraction = InOffsetFraction;
	params.InThumbSizeFraction = InThumbSizeFraction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.SetScrollOffset
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          NewScrollOffset                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::STATIC_SetScrollOffset(float NewScrollOffset)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14109);

	UScrollBox_SetScrollOffset_Params params;
	params.NewScrollOffset = NewScrollOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.SetScrollBarVisibility
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// UMG_ESlateVisibility           NewScrollBarVisibility         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::STATIC_SetScrollBarVisibility(UMG_ESlateVisibility NewScrollBarVisibility)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14106);

	UScrollBox_SetScrollBarVisibility_Params params;
	params.NewScrollBarVisibility = NewScrollBarVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.SetScrollbarThickness
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector2D               NewScrollbarThickness          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::STATIC_SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14104);

	UScrollBox_SetScrollbarThickness_Params params;
	params.NewScrollbarThickness = NewScrollbarThickness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.SetOrientation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EOrientation> NewOrientation                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::STATIC_SetOrientation(TEnumAsByte<SlateCore_EOrientation> NewOrientation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14102);

	UScrollBox_SetOrientation_Params params;
	params.NewOrientation = NewOrientation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.SetAlwaysShowScrollbar
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           NewAlwaysShowScrollbar         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::STATIC_SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14100);

	UScrollBox_SetAlwaysShowScrollbar_Params params;
	params.NewAlwaysShowScrollbar = NewAlwaysShowScrollbar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.SetAllowOverscroll
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           NewAllowOverscroll             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::STATIC_SetAllowOverscroll(bool NewAllowOverscroll)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14098);

	UScrollBox_SetAllowOverscroll_Params params;
	params.NewAllowOverscroll = NewAllowOverscroll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.ScrollWidgetIntoView
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UWidget*                 WidgetToFind                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AnimateScroll                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Slate_EDescendantScrollDestination ScrollDestination              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::STATIC_ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, Slate_EDescendantScrollDestination ScrollDestination)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14093);

	UScrollBox_ScrollWidgetIntoView_Params params;
	params.WidgetToFind = WidgetToFind;
	params.AnimateScroll = AnimateScroll;
	params.ScrollDestination = ScrollDestination;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.ScrollToStart
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UScrollBox::STATIC_ScrollToStart()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14092);

	UScrollBox_ScrollToStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.ScrollToEnd
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UScrollBox::STATIC_ScrollToEnd()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14091);

	UScrollBox_ScrollToEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBox.GetScrollOffset
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UScrollBox::GetScrollOffset()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14089);

	UScrollBox_GetScrollOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.ScrollBoxSlot.SetPadding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMargin                 InPadding                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UScrollBoxSlot::STATIC_SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14130);

	UScrollBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.ScrollBoxSlot.SetHorizontalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBoxSlot::STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14128);

	UScrollBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.SetWidthOverride
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InWidthOverride                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::STATIC_SetWidthOverride(float InWidthOverride)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14153);

	USizeBox_SetWidthOverride_Params params;
	params.InWidthOverride = InWidthOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.SetMinDesiredWidth
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InMinDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::STATIC_SetMinDesiredWidth(float InMinDesiredWidth)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14151);

	USizeBox_SetMinDesiredWidth_Params params;
	params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.SetMinDesiredHeight
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InMinDesiredHeight             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::STATIC_SetMinDesiredHeight(float InMinDesiredHeight)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14149);

	USizeBox_SetMinDesiredHeight_Params params;
	params.InMinDesiredHeight = InMinDesiredHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.SetMaxDesiredWidth
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InMaxDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::STATIC_SetMaxDesiredWidth(float InMaxDesiredWidth)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14147);

	USizeBox_SetMaxDesiredWidth_Params params;
	params.InMaxDesiredWidth = InMaxDesiredWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.SetMaxDesiredHeight
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InMaxDesiredHeight             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::STATIC_SetMaxDesiredHeight(float InMaxDesiredHeight)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14145);

	USizeBox_SetMaxDesiredHeight_Params params;
	params.InMaxDesiredHeight = InMaxDesiredHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.SetMaxAspectRatio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InMaxAspectRatio               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::STATIC_SetMaxAspectRatio(float InMaxAspectRatio)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14143);

	USizeBox_SetMaxAspectRatio_Params params;
	params.InMaxAspectRatio = InMaxAspectRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.SetHeightOverride
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InHeightOverride               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::STATIC_SetHeightOverride(float InHeightOverride)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14141);

	USizeBox_SetHeightOverride_Params params;
	params.InHeightOverride = InHeightOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.ClearWidthOverride
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USizeBox::STATIC_ClearWidthOverride()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14140);

	USizeBox_ClearWidthOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.ClearMinDesiredWidth
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USizeBox::STATIC_ClearMinDesiredWidth()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14139);

	USizeBox_ClearMinDesiredWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.ClearMinDesiredHeight
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USizeBox::STATIC_ClearMinDesiredHeight()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14138);

	USizeBox_ClearMinDesiredHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.ClearMaxDesiredWidth
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USizeBox::STATIC_ClearMaxDesiredWidth()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14137);

	USizeBox_ClearMaxDesiredWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.ClearMaxDesiredHeight
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USizeBox::STATIC_ClearMaxDesiredHeight()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14136);

	USizeBox_ClearMaxDesiredHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.ClearMaxAspectRatio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USizeBox::STATIC_ClearMaxAspectRatio()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14135);

	USizeBox_ClearMaxAspectRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBox.ClearHeightOverride
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USizeBox::STATIC_ClearHeightOverride()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14134);

	USizeBox_ClearHeightOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBoxSlot.SetVerticalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBoxSlot::STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14173);

	USizeBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBoxSlot.SetPadding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMargin                 InPadding                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void USizeBoxSlot::STATIC_SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14171);

	USizeBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SizeBoxSlot.SetHorizontalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBoxSlot::STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14169);

	USizeBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               ScreenPosition                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               LocalCoordinate                (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlateBlueprintLibrary::STATIC_ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14219);

	USlateBlueprintLibrary_ScreenToWidgetLocal_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Geometry = Geometry;
	params.ScreenPosition = ScreenPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LocalCoordinate != nullptr)
		*LocalCoordinate = params.LocalCoordinate;

}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ScreenPosition                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               AbsoluteCoordinate             (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlateBlueprintLibrary::STATIC_ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14215);

	USlateBlueprintLibrary_ScreenToWidgetAbsolute_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AbsoluteCoordinate != nullptr)
		*AbsoluteCoordinate = params.AbsoluteCoordinate;

}


// Function UMG.SlateBlueprintLibrary.ScreenToViewport
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ScreenPosition                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ViewportPosition               (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlateBlueprintLibrary::STATIC_ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14211);

	USlateBlueprintLibrary_ScreenToViewport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;

}


// Function UMG.SlateBlueprintLibrary.LocalToViewport
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               LocalCoordinate                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               PixelPosition                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ViewportPosition               (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlateBlueprintLibrary::STATIC_LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14205);

	USlateBlueprintLibrary_LocalToViewport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Geometry = Geometry;
	params.LocalCoordinate = LocalCoordinate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PixelPosition != nullptr)
		*PixelPosition = params.PixelPosition;
	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;

}


// Function UMG.SlateBlueprintLibrary.LocalToAbsolute
// (Net)
// Parameters:
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               LocalCoordinate                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D USlateBlueprintLibrary::LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14201);

	USlateBlueprintLibrary_LocalToAbsolute_Params params;
	params.Geometry = Geometry;
	params.LocalCoordinate = LocalCoordinate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.IsUnderLocation
// (Net)
// Parameters:
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               AbsoluteCoordinate             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USlateBlueprintLibrary::IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14197);

	USlateBlueprintLibrary_IsUnderLocation_Params params;
	params.Geometry = Geometry;
	params.AbsoluteCoordinate = AbsoluteCoordinate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.GetLocalSize
// (BlueprintCosmetic)
// Parameters:
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D USlateBlueprintLibrary::GetLocalSize(const struct FGeometry& Geometry)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14194);

	USlateBlueprintLibrary_GetLocalSize_Params params;
	params.Geometry = Geometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
// (BlueprintCosmetic)
// Parameters:
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D USlateBlueprintLibrary::GetAbsoluteSize(const struct FGeometry& Geometry)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14191);

	USlateBlueprintLibrary_GetAbsoluteSize_Params params;
	params.Geometry = Geometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
// (Net, NetReliable)
// Parameters:
// struct FSlateBrush             A                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSlateBrush             B                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USlateBlueprintLibrary::EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14187);

	USlateBlueprintLibrary_EqualEqual_SlateBrush_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               AbsoluteDesktopCoordinate      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               PixelPosition                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ViewportPosition               (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlateBlueprintLibrary::STATIC_AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14182);

	USlateBlueprintLibrary_AbsoluteToViewport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AbsoluteDesktopCoordinate = AbsoluteDesktopCoordinate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PixelPosition != nullptr)
		*PixelPosition = params.PixelPosition;
	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;

}


// Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
// (Net)
// Parameters:
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               AbsoluteCoordinate             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D USlateBlueprintLibrary::AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14178);

	USlateBlueprintLibrary_AbsoluteToLocal_Params params;
	params.Geometry = Geometry;
	params.AbsoluteCoordinate = AbsoluteCoordinate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Slider.SetValue
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::STATIC_SetValue(float InValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14244);

	USlider_SetValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Slider.SetStepSize
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::STATIC_SetStepSize(float InValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14242);

	USlider_SetStepSize_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Slider.SetSliderHandleColor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FLinearColor            InValue                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::STATIC_SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14240);

	USlider_SetSliderHandleColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Slider.SetSliderBarColor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FLinearColor            InValue                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::STATIC_SetSliderBarColor(const struct FLinearColor& InValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14238);

	USlider_SetSliderBarColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Slider.SetLocked
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::STATIC_SetLocked(bool InValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14236);

	USlider_SetLocked_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Slider.SetIndentHandle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::STATIC_SetIndentHandle(bool InValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14234);

	USlider_SetIndentHandle_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Slider.GetValue
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USlider::GetValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14232);

	USlider_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Spacer.SetSize
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector2D               InSize                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpacer::STATIC_SetSize(const struct FVector2D& InSize)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14261);

	USpacer_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.SetValue
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::STATIC_SetValue(float NewValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4411);

	USpinBox_SetValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.SetMinValue
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::STATIC_SetMinValue(float NewValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4409);

	USpinBox_SetMinValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.SetMinSliderValue
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::STATIC_SetMinSliderValue(float NewValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4407);

	USpinBox_SetMinSliderValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.SetMaxValue
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::STATIC_SetMaxValue(float NewValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4405);

	USpinBox_SetMaxValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.SetMaxSliderValue
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::STATIC_SetMaxSliderValue(float NewValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4403);

	USpinBox_SetMaxSliderValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.SetForegroundColor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FSlateColor             InForegroundColor              (Parm, NativeAccessSpecifierPublic)
void USpinBox::STATIC_SetForegroundColor(const struct FSlateColor& InForegroundColor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4401);

	USpinBox_SetForegroundColor_Params params;
	params.InForegroundColor = InForegroundColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::STATIC_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4398);

	USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::STATIC_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4396);

	USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USpinBox::STATIC_OnSpinBoxBeginSliderMovement__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4395);

	USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.GetValue
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpinBox::GetValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4393);

	USpinBox_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMinValue
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpinBox::GetMinValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4391);

	USpinBox_GetMinValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMinSliderValue
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpinBox::GetMinSliderValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4389);

	USpinBox_GetMinSliderValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMaxValue
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpinBox::GetMaxValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4387);

	USpinBox_GetMaxValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMaxSliderValue
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpinBox::GetMaxSliderValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4385);

	USpinBox_GetMaxSliderValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.SpinBox.ClearMinValue
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USpinBox::STATIC_ClearMinValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4384);

	USpinBox_ClearMinValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.ClearMinSliderValue
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USpinBox::STATIC_ClearMinSliderValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4383);

	USpinBox_ClearMinSliderValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.ClearMaxValue
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USpinBox::STATIC_ClearMaxValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4382);

	USpinBox_ClearMaxValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.SpinBox.ClearMaxSliderValue
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USpinBox::STATIC_ClearMaxSliderValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(4381);

	USpinBox_ClearMaxSliderValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TextBinding.GetTextValue
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UTextBinding::GetTextValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14266);

	UTextBinding_GetTextValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.TextBinding.GetStringValue
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTextBinding::GetStringValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14264);

	UTextBinding_GetStringValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.TextBlock.SetText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   InText                         (Parm, NativeAccessSpecifierPublic)
void UTextBlock::STATIC_SetText(const struct FText& InText)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14284);

	UTextBlock_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TextBlock.SetShadowOffset
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector2D               InShadowOffset                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextBlock::STATIC_SetShadowOffset(const struct FVector2D& InShadowOffset)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14282);

	UTextBlock_SetShadowOffset_Params params;
	params.InShadowOffset = InShadowOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TextBlock.SetShadowColorAndOpacity
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FLinearColor            InShadowColorAndOpacity        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextBlock::STATIC_SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14280);

	UTextBlock_SetShadowColorAndOpacity_Params params;
	params.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TextBlock.SetOpacity
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InOpacity                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextBlock::STATIC_SetOpacity(float InOpacity)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14278);

	UTextBlock_SetOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TextBlock.SetMinDesiredWidth
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InMinDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextBlock::STATIC_SetMinDesiredWidth(float InMinDesiredWidth)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14276);

	UTextBlock_SetMinDesiredWidth_Params params;
	params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TextBlock.SetJustification
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Slate_ETextJustify> InJustification                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextBlock::STATIC_SetJustification(TEnumAsByte<Slate_ETextJustify> InJustification)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14274);

	UTextBlock_SetJustification_Params params;
	params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TextBlock.SetFont
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FSlateFontInfo          InFontInfo                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextBlock::STATIC_SetFont(const struct FSlateFontInfo& InFontInfo)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14272);

	UTextBlock_SetFont_Params params;
	params.InFontInfo = InFontInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TextBlock.SetColorAndOpacity
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FSlateColor             InColorAndOpacity              (Parm, NativeAccessSpecifierPublic)
void UTextBlock::STATIC_SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14270);

	UTextBlock_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TextBlock.GetText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UTextBlock::GetText()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14268);

	UTextBlock_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Throbber.SetNumberOfPieces
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            InNumberOfPieces               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThrobber::STATIC_SetNumberOfPieces(int InNumberOfPieces)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14302);

	UThrobber_SetNumberOfPieces_Params params;
	params.InNumberOfPieces = InNumberOfPieces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Throbber.SetAnimateVertically
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bInAnimateVertically           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThrobber::STATIC_SetAnimateVertically(bool bInAnimateVertically)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14300);

	UThrobber_SetAnimateVertically_Params params;
	params.bInAnimateVertically = bInAnimateVertically;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Throbber.SetAnimateOpacity
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bInAnimateOpacity              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThrobber::STATIC_SetAnimateOpacity(bool bInAnimateOpacity)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14298);

	UThrobber_SetAnimateOpacity_Params params;
	params.bInAnimateOpacity = bInAnimateOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Throbber.SetAnimateHorizontally
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bInAnimateHorizontally         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThrobber::STATIC_SetAnimateHorizontally(bool bInAnimateHorizontally)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14296);

	UThrobber_SetAnimateHorizontally_Params params;
	params.bInAnimateHorizontally = bInAnimateHorizontally;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TileView.SetItemWidth
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Width                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTileView::STATIC_SetItemWidth(float Width)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14313);

	UTileView_SetItemWidth_Params params;
	params.Width = Width;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TileView.SetItemHeight
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Height                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTileView::STATIC_SetItemHeight(float Height)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14311);

	UTileView_SetItemHeight_Params params;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.TileView.RequestListRefresh
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UTileView::STATIC_RequestListRefresh()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14310);

	UTileView_RequestListRefresh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UniformGridPanel.SetSlotPadding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMargin                 InSlotPadding                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUniformGridPanel::STATIC_SetSlotPadding(const struct FMargin& InSlotPadding)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14329);

	UUniformGridPanel_SetSlotPadding_Params params;
	params.InSlotPadding = InSlotPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InMinDesiredSlotWidth          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUniformGridPanel::STATIC_SetMinDesiredSlotWidth(float InMinDesiredSlotWidth)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14327);

	UUniformGridPanel_SetMinDesiredSlotWidth_Params params;
	params.InMinDesiredSlotWidth = InMinDesiredSlotWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InMinDesiredSlotHeight         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUniformGridPanel::STATIC_SetMinDesiredSlotHeight(float InMinDesiredSlotHeight)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14325);

	UUniformGridPanel_SetMinDesiredSlotHeight_Params params;
	params.InMinDesiredSlotHeight = InMinDesiredSlotHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UniformGridPanel.AddChildToUniformGrid
// (BlueprintCosmetic)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUniformGridSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUniformGridSlot* UUniformGridPanel::AddChildToUniformGrid(class UWidget* Content)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14322);

	UUniformGridPanel_AddChildToUniformGrid_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UniformGridSlot.SetVerticalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUniformGridSlot::STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14340);

	UUniformGridSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UniformGridSlot.SetRow
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            InRow                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUniformGridSlot::STATIC_SetRow(int InRow)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14338);

	UUniformGridSlot_SetRow_Params params;
	params.InRow = InRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UniformGridSlot.SetHorizontalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUniformGridSlot::STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14336);

	UUniformGridSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UniformGridSlot.SetColumn
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            InColumn                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUniformGridSlot::STATIC_SetColumn(int InColumn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14334);

	UUniformGridSlot_SetColumn_Params params;
	params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.UnregisterInputComponent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UUserWidget::STATIC_UnregisterInputComponent()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14562);

	UUserWidget_UnregisterInputComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14559);

	UUserWidget_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.StopListeningForInputAction
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EInputEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_StopListeningForInputAction(const struct FName& ActionName, TEnumAsByte<Engine_EInputEvent> EventType)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14556);

	UUserWidget_StopListeningForInputAction_Params params;
	params.ActionName = ActionName;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.StopListeningForAllInputActions
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UUserWidget::STATIC_StopListeningForAllInputActions()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14555);

	UUserWidget_StopListeningForAllInputActions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.StopAnimation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_StopAnimation(class UWidgetAnimation* InAnimation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14553);

	UUserWidget_StopAnimation_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetPositionInViewport
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector2D               Position                       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRemoveDPIScale                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14550);

	UUserWidget_SetPositionInViewport_Params params;
	params.Position = Position;
	params.bRemoveDPIScale = bRemoveDPIScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetPlaybackSpeed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14547);

	UUserWidget_SetPlaybackSpeed_Params params;
	params.InAnimation = InAnimation;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetPadding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMargin                 InPadding                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14545);

	UUserWidget_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetOwningPlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       LocalPlayerController          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_SetOwningPlayer(class APlayerController* LocalPlayerController)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14543);

	UUserWidget_SetOwningPlayer_Params params;
	params.LocalPlayerController = LocalPlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetOwningLocalPlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ULocalPlayer*            LocalPlayer                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_SetOwningLocalPlayer(class ULocalPlayer* LocalPlayer)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14541);

	UUserWidget_SetOwningLocalPlayer_Params params;
	params.LocalPlayer = LocalPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetNumLoopsToPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumLoopsToPlay                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int NumLoopsToPlay)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14538);

	UUserWidget_SetNumLoopsToPlay_Params params;
	params.InAnimation = InAnimation;
	params.NumLoopsToPlay = NumLoopsToPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetInputActionPriority
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            NewPriority                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_SetInputActionPriority(int NewPriority)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14536);

	UUserWidget_SetInputActionPriority_Params params;
	params.NewPriority = NewPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetInputActionBlocking
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bShouldBlock                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_SetInputActionBlocking(bool bShouldBlock)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14534);

	UUserWidget_SetInputActionBlocking_Params params;
	params.bShouldBlock = bShouldBlock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetForegroundColor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FSlateColor             InForegroundColor              (Parm, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_SetForegroundColor(const struct FSlateColor& InForegroundColor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14532);

	UUserWidget_SetForegroundColor_Params params;
	params.InForegroundColor = InForegroundColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetDesiredSizeInViewport
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector2D               Size                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_SetDesiredSizeInViewport(const struct FVector2D& Size)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14530);

	UUserWidget_SetDesiredSizeInViewport_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetColorAndOpacity
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FLinearColor            InColorAndOpacity              (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14528);

	UUserWidget_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetAnchorsInViewport
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FAnchors                Anchors                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_SetAnchorsInViewport(const struct FAnchors& Anchors)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14526);

	UUserWidget_SetAnchorsInViewport_Params params;
	params.Anchors = Anchors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.SetAlignmentInViewport
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector2D               Alignment                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_SetAlignmentInViewport(const struct FVector2D& Alignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14524);

	UUserWidget_SetAlignmentInViewport_Params params;
	params.Alignment = Alignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.ReverseAnimation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_ReverseAnimation(class UWidgetAnimation* InAnimation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14522);

	UUserWidget_ReverseAnimation_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.RemoveFromViewport
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UUserWidget::STATIC_RemoveFromViewport()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14521);

	UUserWidget_RemoveFromViewport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.RegisterInputComponent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UUserWidget::STATIC_RegisterInputComponent()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14520);

	UUserWidget_RegisterInputComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.PreConstruct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14518);

	UUserWidget_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.PlaySound
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class USoundBase*              SoundToPlay                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_PlaySound(class USoundBase* SoundToPlay)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14516);

	UUserWidget_PlaySound_Params params;
	params.SoundToPlay = SoundToPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.PlayAnimationTo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartAtTime                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          EndAtTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumLoopsToPlay                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_PlayAnimationTo(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14509);

	UUserWidget_PlayAnimationTo_Params params;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.EndAtTime = EndAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.PlayAnimation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartAtTime                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumLoopsToPlay                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14503);

	UUserWidget_PlayAnimation_Params params;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.PauseAnimation
// (BlueprintCosmetic)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UUserWidget::PauseAnimation(class UWidgetAnimation* InAnimation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14500);

	UUserWidget_PauseAnimation_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchStarted
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           InTouchEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14496);

	UUserWidget_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchMoved
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           InTouchEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14492);

	UUserWidget_OnTouchMoved_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchGesture
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           GestureEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14488);

	UUserWidget_OnTouchGesture_Params params;
	params.MyGeometry = MyGeometry;
	params.GestureEvent = GestureEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchEnded
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           InTouchEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14484);

	UUserWidget_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnRemovedFromFocusPath
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14482);

	UUserWidget_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.OnPreviewMouseButtonDown
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14478);

	UUserWidget_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnPreviewKeyDown
// (BlueprintCosmetic, Net)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FKeyEvent               InKeyEvent                     (Parm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14474);

	UUserWidget_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnPaint
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14472);

	UUserWidget_OnPaint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function UMG.UserWidget.OnMouseWheel
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14468);

	UUserWidget_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMouseMove
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14464);

	UUserWidget_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMouseLeave
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14462);

	UUserWidget_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.OnMouseEnter
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14459);

	UUserWidget_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.OnMouseCaptureLost
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UUserWidget::STATIC_OnMouseCaptureLost()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14458);

	UUserWidget_OnMouseCaptureLost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.OnMouseButtonUp
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14454);

	UUserWidget_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMouseButtonDown
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14450);

	UUserWidget_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMouseButtonDoubleClick
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               InMyGeometry                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           InMouseEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14446);

	UUserWidget_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMotionDetected
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FMotionEvent            InMotionEvent                  (Parm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14442);

	UUserWidget_OnMotionDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.InMotionEvent = InMotionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnKeyUp
// (BlueprintCosmetic, Net)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FKeyEvent               InKeyEvent                     (Parm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14438);

	UUserWidget_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnKeyDown
// (BlueprintCosmetic, Net)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FKeyEvent               InKeyEvent                     (Parm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14434);

	UUserWidget_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnKeyChar
// (Net)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FCharacterEvent         InCharacterEvent               (Parm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14430);

	UUserWidget_OnKeyChar_Params params;
	params.MyGeometry = MyGeometry;
	params.InCharacterEvent = InCharacterEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnFocusReceived
// (Net)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FFocusEvent             InFocusEvent                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14426);

	UUserWidget_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnFocusLost
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14424);

	UUserWidget_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.OnDrop
// (NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           PointerEvent                   (Parm, NativeAccessSpecifierPublic)
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14419);

	UUserWidget_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnDragOver
// (NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           PointerEvent                   (Parm, NativeAccessSpecifierPublic)
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14414);

	UUserWidget_OnDragOver_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnDragLeave
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPointerEvent           PointerEvent                   (Parm, NativeAccessSpecifierPublic)
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14411);

	UUserWidget_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.OnDragEnter
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           PointerEvent                   (Parm, NativeAccessSpecifierPublic)
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14407);

	UUserWidget_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.OnDragDetected
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14403);

	UUserWidget_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;

}


// Function UMG.UserWidget.OnDragCancelled
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPointerEvent           PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14400);

	UUserWidget_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.OnAnimationStarted
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14398);

	UUserWidget_OnAnimationStarted_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.OnAnimationFinished
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14396);

	UUserWidget_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.OnAnalogValueChanged
// (NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FAnalogInputEvent       InAnalogInputEvent             (Parm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14392);

	UUserWidget_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.OnAddedToFocusPath
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14390);

	UUserWidget_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.ListenForInputAction
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EInputEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bConsume                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Callback                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_ListenForInputAction(const struct FName& ActionName, TEnumAsByte<Engine_EInputEvent> EventType, bool bConsume, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14385);

	UUserWidget_ListenForInputAction_Params params;
	params.ActionName = ActionName;
	params.EventType = EventType;
	params.bConsume = bConsume;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.IsPlayingAnimation
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::IsPlayingAnimation()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14383);

	UUserWidget_IsPlayingAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.IsListeningForInputAction
// (BlueprintCosmetic)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::IsListeningForInputAction(const struct FName& ActionName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14380);

	UUserWidget_IsListeningForInputAction_Params params;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.IsInViewport
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::IsInViewport()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14378);

	UUserWidget_IsInViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.IsInteractable
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::IsInteractable()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14376);

	UUserWidget_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.IsAnyAnimationPlaying
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::IsAnyAnimationPlaying()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14374);

	UUserWidget_IsAnyAnimationPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.IsAnimationPlayingForward
// (BlueprintCosmetic)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::IsAnimationPlayingForward(class UWidgetAnimation* InAnimation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14371);

	UUserWidget_IsAnimationPlayingForward_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.IsAnimationPlaying
// (BlueprintCosmetic)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::IsAnimationPlaying(class UWidgetAnimation* InAnimation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14368);

	UUserWidget_IsAnimationPlaying_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.GetOwningPlayerPawn
// ()
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UUserWidget::GetOwningPlayerPawn()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14366);

	UUserWidget_GetOwningPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.GetOwningPlayer
// ()
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APlayerController* UUserWidget::GetOwningPlayer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14364);

	UUserWidget_GetOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.GetOwningLocalPlayer
// ()
// Parameters:
// class ULocalPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULocalPlayer* UUserWidget::GetOwningLocalPlayer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14362);

	UUserWidget_GetOwningLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.GetIsVisible
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::GetIsVisible()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14360);

	UUserWidget_GetIsVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.GetAnimationCurrentTime
// (BlueprintCosmetic)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UUserWidget::GetAnimationCurrentTime(class UWidgetAnimation* InAnimation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14357);

	UUserWidget_GetAnimationCurrentTime_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.GetAnchorsInViewport
// ()
// Parameters:
// struct FAnchors                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FAnchors UUserWidget::GetAnchorsInViewport()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14355);

	UUserWidget_GetAnchorsInViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.GetAlignmentInViewport
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UUserWidget::GetAlignmentInViewport()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14353);

	UUserWidget_GetAlignmentInViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.UserWidget.Destruct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UUserWidget::STATIC_Destruct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14352);

	UUserWidget_Destruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UUserWidget::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14351);

	UUserWidget_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.AddToViewport
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            ZOrder                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::STATIC_AddToViewport(int ZOrder)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14349);

	UUserWidget_AddToViewport_Params params;
	params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.UserWidget.AddToPlayerScreen
// (BlueprintAuthorityOnly)
// Parameters:
// int                            ZOrder                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::AddToPlayerScreen(int ZOrder)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14346);

	UUserWidget_AddToPlayerScreen_Params params;
	params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.VerticalBox.AddChildToVerticalBox
// (BlueprintCosmetic)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVerticalBoxSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVerticalBoxSlot* UVerticalBox::AddChildToVerticalBox(class UWidget* Content)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14583);

	UVerticalBox_AddChildToVerticalBox_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.VerticalBoxSlot.SetVerticalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVerticalBoxSlot::STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14592);

	UVerticalBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.VerticalBoxSlot.SetSize
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FSlateChildSize         InSize                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UVerticalBoxSlot::STATIC_SetSize(const struct FSlateChildSize& InSize)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14590);

	UVerticalBoxSlot_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.VerticalBoxSlot.SetPadding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMargin                 InPadding                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UVerticalBoxSlot::STATIC_SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14588);

	UVerticalBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.VerticalBoxSlot.SetHorizontalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVerticalBoxSlot::STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14586);

	UVerticalBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Viewport.Spawn
// (BlueprintCosmetic)
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UViewport::Spawn(class UClass* ActorClass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14608);

	UViewport_Spawn_Params params;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Viewport.SetViewRotation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FRotator                Rotation                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UViewport::STATIC_SetViewRotation(const struct FRotator& Rotation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14606);

	UViewport_SetViewRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Viewport.SetViewLocation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UViewport::STATIC_SetViewLocation(const struct FVector& Location)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14604);

	UViewport_SetViewLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.Viewport.GetViewRotation
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UViewport::GetViewRotation()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14602);

	UViewport_GetViewRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Viewport.GetViewportWorld
// ()
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWorld* UViewport::GetViewportWorld()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14600);

	UViewport_GetViewportWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.Viewport.GetViewLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UViewport::GetViewLocation()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14598);

	UViewport_GetViewLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.VisibilityBinding.GetValue
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UVisibilityBinding::GetValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14612);

	UVisibilityBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetAnimation.GetStartTime
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWidgetAnimation::GetStartTime()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14617);

	UWidgetAnimation_GetStartTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetAnimation.GetEndTime
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWidgetAnimation::GetEndTime()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14615);

	UWidgetAnimation_GetEndTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBinding.GetValue
// ()
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UWidgetBinding::GetValue()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14624);

	UWidgetBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.UnlockMouse
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::UnlockMouse(struct FEventReply* Reply)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14843);

	UWidgetBlueprintLibrary_UnlockMouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.Unhandled
// ()
// Parameters:
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::Unhandled()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14841);

	UWidgetBlueprintLibrary_Unhandled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetUserFocus
// (BlueprintCosmetic, Net, NetReliable)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                 FocusWidget                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInAllUsers                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::SetUserFocus(struct FEventReply* Reply, class UWidget* FocusWidget, bool bInAllUsers)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14836);

	UWidgetBlueprintLibrary_SetUserFocus_Params params;
	params.FocusWidget = FocusWidget;
	params.bInAllUsers = bInAllUsers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetMousePosition
// (Net, NetReliable)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector2D               NewMousePosition               (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::SetMousePosition(struct FEventReply* Reply, const struct FVector2D& NewMousePosition)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14832);

	UWidgetBlueprintLibrary_SetMousePosition_Params params;
	params.NewMousePosition = NewMousePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Engine_EMouseLockMode          InMouseLockMode                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::STATIC_SetInputMode_UIOnlyEx(class APlayerController* Target, class UWidget* InWidgetToFocus, Engine_EMouseLockMode InMouseLockMode)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14827);

	UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.InMouseLockMode = InMouseLockMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLockMouseToViewport           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::STATIC_SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14823);

	UWidgetBlueprintLibrary_SetInputMode_UIOnly_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.bLockMouseToViewport = bLockMouseToViewport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::STATIC_SetInputMode_GameOnly(class APlayerController* Target)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14821);

	UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Engine_EMouseLockMode          InMouseLockMode                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHideCursorDuringCapture       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::STATIC_SetInputMode_GameAndUIEx(class APlayerController* Target, class UWidget* InWidgetToFocus, Engine_EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14815);

	UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.InMouseLockMode = InMouseLockMode;
	params.bHideCursorDuringCapture = bHideCursorDuringCapture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLockMouseToViewport           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHideCursorDuringCapture       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::STATIC_SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14810);

	UWidgetBlueprintLibrary_SetInputMode_GameAndUI_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.bLockMouseToViewport = bLockMouseToViewport;
	params.bHideCursorDuringCapture = bHideCursorDuringCapture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<CoreUObject_EMouseCursor> CursorShape                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   CursorName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               HotSpot                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetBlueprintLibrary::SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<CoreUObject_EMouseCursor> CursorShape, const struct FName& CursorName, const struct FVector2D& HotSpot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14804);

	UWidgetBlueprintLibrary_SetHardwareCursor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CursorShape = CursorShape;
	params.CursorName = CursorName;
	params.HotSpot = HotSpot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UWidgetBlueprintLibrary::STATIC_SetFocusToGameViewport()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14803);

	UWidgetBlueprintLibrary_SetFocusToGameViewport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::STATIC_SetBrushResourceToTexture(struct FSlateBrush* Brush, class UTexture2D* Texture)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14800);

	UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;

}


// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::STATIC_SetBrushResourceToMaterial(struct FSlateBrush* Brush, class UMaterialInterface* Material)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14797);

	UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;

}


// Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::ReleaseMouseCapture(struct FEventReply* Reply)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14794);

	UWidgetBlueprintLibrary_ReleaseMouseCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
// (Net, NetReliable)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bInAllJoysticks                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::ReleaseJoystickCapture(struct FEventReply* Reply, bool bInAllJoysticks)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14790);

	UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params params;
	params.bInAllJoysticks = bInAllJoysticks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.NoResourceBrush
// ()
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UWidgetBlueprintLibrary::NoResourceBrush()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14788);

	UWidgetBlueprintLibrary_NoResourceBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
// ()
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14783);

	UWidgetBlueprintLibrary_MakeBrushFromTexture_Params params;
	params.Texture = Texture;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
// ()
// Parameters:
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14778);

	UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params params;
	params.Material = Material;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
// (BlueprintCosmetic)
// Parameters:
// class USlateBrushAsset*        BrushAsset                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromAsset(class USlateBrushAsset* BrushAsset)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14775);

	UWidgetBlueprintLibrary_MakeBrushFromAsset_Params params;
	params.BrushAsset = BrushAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.LockMouse
// (Net, NetReliable)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                 CapturingWidget                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::LockMouse(struct FEventReply* Reply, class UWidget* CapturingWidget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14771);

	UWidgetBlueprintLibrary_LockMouse_Params params;
	params.CapturingWidget = CapturingWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.IsDragDropping
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetBlueprintLibrary::IsDragDropping()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14769);

	UWidgetBlueprintLibrary_IsDragDropping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.Handled
// ()
// Parameters:
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::Handled()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14767);

	UWidgetBlueprintLibrary_Handled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               SafePadding                    (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               SafePaddingScale               (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               SpillOverPadding               (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::STATIC_GetSafeZonePadding(class UObject* WorldContextObject, struct FVector2D* SafePadding, struct FVector2D* SafePaddingScale, struct FVector2D* SpillOverPadding)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14762);

	UWidgetBlueprintLibrary_GetSafeZonePadding_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SafePadding != nullptr)
		*SafePadding = params.SafePadding;
	if (SafePaddingScale != nullptr)
		*SafePaddingScale = params.SafePaddingScale;
	if (SpillOverPadding != nullptr)
		*SpillOverPadding = params.SpillOverPadding;

}


// Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
// (BlueprintCosmetic, Net)
// Parameters:
// struct FAnalogInputEvent       Event                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FKeyEvent               ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FKeyEvent UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14759);

	UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
// (Net)
// Parameters:
// struct FPointerEvent           Event                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(const struct FPointerEvent& Event)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14756);

	UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
// (BlueprintCosmetic)
// Parameters:
// struct FNavigationEvent        Event                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14753);

	UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
// (Net)
// Parameters:
// struct FKeyEvent               Event                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(const struct FKeyEvent& Event)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14750);

	UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
// (BlueprintCosmetic)
// Parameters:
// struct FCharacterEvent         Event                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14747);

	UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
// (BlueprintCosmetic, Net)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* UWidgetBlueprintLibrary::GetDynamicMaterial(struct FSlateBrush* Brush)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14744);

	UWidgetBlueprintLibrary_GetDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
// ()
// Parameters:
// class UDragDropOperation*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDragDropOperation* UWidgetBlueprintLibrary::GetDragDroppingContent()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14742);

	UWidgetBlueprintLibrary_GetDragDroppingContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
// (BlueprintCosmetic, Net)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(struct FSlateBrush* Brush)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14739);

	UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
// (BlueprintCosmetic, Net)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInterface* UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(struct FSlateBrush* Brush)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14736);

	UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetBrushResource
// (BlueprintCosmetic, Net)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UWidgetBlueprintLibrary::GetBrushResource(struct FSlateBrush* Brush)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14733);

	UWidgetBlueprintLibrary_GetBrushResource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  Interface                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UUserWidget*>     FoundWidgets                   (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                           TopLevelOnly                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::STATIC_GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UClass* Interface, TArray<class UUserWidget*>* FoundWidgets, bool TopLevelOnly)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14727);

	UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Interface = Interface;
	params.TopLevelOnly = TopLevelOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FoundWidgets != nullptr)
		*FoundWidgets = params.FoundWidgets;

}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UUserWidget*>     FoundWidgets                   (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UClass*                  WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TopLevelOnly                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14721);

	UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetClass = WidgetClass;
	params.TopLevelOnly = TopLevelOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FoundWidgets != nullptr)
		*FoundWidgets = params.FoundWidgets;

}


// Function UMG.WidgetBlueprintLibrary.EndDragDrop
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::EndDragDrop(struct FEventReply* Reply)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14718);

	UWidgetBlueprintLibrary_EndDragDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector2D               Position                       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFont*                   Font                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FontSize                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   FontTypeFace                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Tint                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::STATIC_DrawTextFormatted(struct FPaintContext* Context, const struct FText& Text, const struct FVector2D& Position, class UFont* Font, int FontSize, const struct FName& FontTypeFace, const struct FLinearColor& Tint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14710);

	UWidgetBlueprintLibrary_DrawTextFormatted_Params params;
	params.Text = Text;
	params.Position = Position;
	params.Font = Font;
	params.FontSize = FontSize;
	params.FontTypeFace = FontTypeFace;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function UMG.WidgetBlueprintLibrary.DrawText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 inString                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               Position                       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Tint                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::STATIC_DrawText(struct FPaintContext* Context, const struct FString& inString, const struct FVector2D& Position, const struct FLinearColor& Tint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14705);

	UWidgetBlueprintLibrary_DrawText_Params params;
	params.inString = inString;
	params.Position = Position;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function UMG.WidgetBlueprintLibrary.DrawLines
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>       Points                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor            Tint                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAntiAlias                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::STATIC_DrawLines(struct FPaintContext* Context, TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14699);

	UWidgetBlueprintLibrary_DrawLines_Params params;
	params.Points = Points;
	params.Tint = Tint;
	params.bAntiAlias = bAntiAlias;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function UMG.WidgetBlueprintLibrary.DrawLine
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               PositionA                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               PositionB                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Tint                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAntiAlias                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::STATIC_DrawLine(struct FPaintContext* Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14693);

	UWidgetBlueprintLibrary_DrawLine_Params params;
	params.PositionA = PositionA;
	params.PositionB = PositionB;
	params.Tint = Tint;
	params.bAntiAlias = bAntiAlias;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function UMG.WidgetBlueprintLibrary.DrawBox
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               Position                       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               Size                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USlateBrushAsset*        Brush                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Tint                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::STATIC_DrawBox(struct FPaintContext* Context, const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14687);

	UWidgetBlueprintLibrary_DrawBox_Params params;
	params.Position = Position;
	params.Size = Size;
	params.Brush = Brush;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function UMG.WidgetBlueprintLibrary.DismissAllMenus
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UWidgetBlueprintLibrary::STATIC_DismissAllMenus()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14686);

	UWidgetBlueprintLibrary_DismissAllMenus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
// (NetReliable)
// Parameters:
// struct FPointerEvent           PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                 WidgetDetectingDrag            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                    DragKey                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14681);

	UWidgetBlueprintLibrary_DetectDragIfPressed_Params params;
	params.PointerEvent = PointerEvent;
	params.WidgetDetectingDrag = WidgetDetectingDrag;
	params.DragKey = DragKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.DetectDrag
// (BlueprintCosmetic, Net, NetReliable)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                 WidgetDetectingDrag            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                    DragKey                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::DetectDrag(struct FEventReply* Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14676);

	UWidgetBlueprintLibrary_DetectDrag_Params params;
	params.WidgetDetectingDrag = WidgetDetectingDrag;
	params.DragKey = DragKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
// (BlueprintCosmetic)
// Parameters:
// class UClass*                  OperationClass                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDragDropOperation*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDragDropOperation* UWidgetBlueprintLibrary::CreateDragDropOperation(class UClass* OperationClass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14673);

	UWidgetBlueprintLibrary_CreateDragDropOperation_Params params;
	params.OperationClass = OperationClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.Create
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  WidgetType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUserWidget* UWidgetBlueprintLibrary::Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14668);

	UWidgetBlueprintLibrary_Create_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetType = WidgetType;
	params.OwningPlayer = OwningPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.ClearUserFocus
// (Net, NetReliable)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bInAllUsers                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::ClearUserFocus(struct FEventReply* Reply, bool bInAllUsers)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14664);

	UWidgetBlueprintLibrary_ClearUserFocus_Params params;
	params.bInAllUsers = bInAllUsers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.CaptureMouse
// (Net, NetReliable)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                 CapturingWidget                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::CaptureMouse(struct FEventReply* Reply, class UWidget* CapturingWidget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14660);

	UWidgetBlueprintLibrary_CaptureMouse_Params params;
	params.CapturingWidget = CapturingWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.CaptureJoystick
// (BlueprintCosmetic, Net, NetReliable)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                 CapturingWidget                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInAllJoysticks                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::CaptureJoystick(struct FEventReply* Reply, class UWidget* CapturingWidget, bool bInAllJoysticks)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14655);

	UWidgetBlueprintLibrary_CaptureJoystick_Params params;
	params.CapturingWidget = CapturingWidget;
	params.bInAllJoysticks = bInAllJoysticks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.CancelDragDrop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UWidgetBlueprintLibrary::STATIC_CancelDragDrop()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14654);

	UWidgetBlueprintLibrary_CancelDragDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.SetWidget
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::STATIC_SetWidget(class UUserWidget* Widget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14865);

	UWidgetComponent_SetWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.SetTintColorAndOpacity
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FLinearColor            NewTintColorAndOpacity         (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::STATIC_SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14863);

	UWidgetComponent_SetTintColorAndOpacity_Params params;
	params.NewTintColorAndOpacity = NewTintColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.SetOwnerPlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ULocalPlayer*            LocalPlayer                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::STATIC_SetOwnerPlayer(class ULocalPlayer* LocalPlayer)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14861);

	UWidgetComponent_SetOwnerPlayer_Params params;
	params.LocalPlayer = LocalPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.SetDrawSize
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector2D               Size                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::STATIC_SetDrawSize(const struct FVector2D& Size)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14859);

	UWidgetComponent_SetDrawSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.SetBackgroundColor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FLinearColor            NewBackgroundColor             (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::STATIC_SetBackgroundColor(const struct FLinearColor& NewBackgroundColor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14857);

	UWidgetComponent_SetBackgroundColor_Params params;
	params.NewBackgroundColor = NewBackgroundColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.RequestRedraw
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UWidgetComponent::STATIC_RequestRedraw()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14856);

	UWidgetComponent_RequestRedraw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetComponent.GetUserWidgetObject
// ()
// Parameters:
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUserWidget* UWidgetComponent::GetUserWidgetObject()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14854);

	UWidgetComponent_GetUserWidgetObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetRenderTarget
// ()
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTextureRenderTarget2D* UWidgetComponent::GetRenderTarget()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14852);

	UWidgetComponent_GetRenderTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetOwnerPlayer
// ()
// Parameters:
// class ULocalPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULocalPlayer* UWidgetComponent::GetOwnerPlayer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14850);

	UWidgetComponent_GetOwnerPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetMaterialInstance
// ()
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* UWidgetComponent::GetMaterialInstance()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14848);

	UWidgetComponent_GetMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetDrawSize
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidgetComponent::GetDrawSize()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14846);

	UWidgetComponent_GetDrawSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.SetCustomHitResult
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UWidgetInteractionComponent::STATIC_SetCustomHitResult(const struct FHitResult& HitResult)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14938);

	UWidgetInteractionComponent_SetCustomHitResult_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetInteractionComponent.SendKeyChar
// (Final)
// Parameters:
// struct FString                 Characters                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRepeat                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetInteractionComponent::SendKeyChar(const struct FString& Characters, bool bRepeat)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14934);

	UWidgetInteractionComponent_SendKeyChar_Params params;
	params.Characters = Characters;
	params.bRepeat = bRepeat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.ScrollWheel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          ScrollDelta                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetInteractionComponent::STATIC_ScrollWheel(float ScrollDelta)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14932);

	UWidgetInteractionComponent_ScrollWheel_Params params;
	params.ScrollDelta = ScrollDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetInteractionComponent.ReleasePointerKey
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetInteractionComponent::STATIC_ReleasePointerKey(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14930);

	UWidgetInteractionComponent_ReleasePointerKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetInteractionComponent.ReleaseKey
// (BlueprintCosmetic)
// Parameters:
// struct FKey                    Key                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetInteractionComponent::ReleaseKey(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14927);

	UWidgetInteractionComponent_ReleaseKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.PressPointerKey
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetInteractionComponent::STATIC_PressPointerKey(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14925);

	UWidgetInteractionComponent_PressPointerKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetInteractionComponent.PressKey
// (Final, BlueprintCosmetic)
// Parameters:
// struct FKey                    Key                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRepeat                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetInteractionComponent::PressKey(const struct FKey& Key, bool bRepeat)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14921);

	UWidgetInteractionComponent_PressKey_Params params;
	params.Key = Key;
	params.bRepeat = bRepeat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.PressAndReleaseKey
// (BlueprintCosmetic)
// Parameters:
// struct FKey                    Key                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetInteractionComponent::PressAndReleaseKey(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14918);

	UWidgetInteractionComponent_PressAndReleaseKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetInteractionComponent::IsOverInteractableWidget()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14916);

	UWidgetInteractionComponent_IsOverInteractableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetInteractionComponent::IsOverHitTestVisibleWidget()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14914);

	UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetInteractionComponent::IsOverFocusableWidget()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14912);

	UWidgetInteractionComponent_IsOverFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.GetLastHitResult
// ()
// Parameters:
// struct FHitResult              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
struct FHitResult UWidgetInteractionComponent::GetLastHitResult()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14910);

	UWidgetInteractionComponent_GetLastHitResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
// ()
// Parameters:
// class UWidgetComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidgetComponent* UWidgetInteractionComponent::GetHoveredWidgetComponent()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14908);

	UWidgetInteractionComponent_GetHoveredWidgetComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.Get2DHitLocation
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidgetInteractionComponent::Get2DHitLocation()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14906);

	UWidgetInteractionComponent_Get2DHitLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
// (BlueprintCosmetic)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVerticalBoxSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVerticalBoxSlot* UWidgetLayoutLibrary::SlotAsVerticalBoxSlot(class UWidget* Widget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15005);

	UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
// (BlueprintCosmetic)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUniformGridSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUniformGridSlot* UWidgetLayoutLibrary::SlotAsUniformGridSlot(class UWidget* Widget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15002);

	UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
// (BlueprintCosmetic)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOverlaySlot*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UOverlaySlot* UWidgetLayoutLibrary::SlotAsOverlaySlot(class UWidget* Widget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14999);

	UWidgetLayoutLibrary_SlotAsOverlaySlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
// (BlueprintCosmetic)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHorizontalBoxSlot*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHorizontalBoxSlot* UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(class UWidget* Widget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14996);

	UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
// (BlueprintCosmetic)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGridSlot*               ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGridSlot* UWidgetLayoutLibrary::SlotAsGridSlot(class UWidget* Widget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14993);

	UWidgetLayoutLibrary_SlotAsGridSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
// (BlueprintCosmetic)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCanvasPanelSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCanvasPanelSlot* UWidgetLayoutLibrary::SlotAsCanvasSlot(class UWidget* Widget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14990);

	UWidgetLayoutLibrary_SlotAsCanvasSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
// (BlueprintCosmetic)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBorderSlot*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBorderSlot* UWidgetLayoutLibrary::SlotAsBorderSlot(class UWidget* Widget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14987);

	UWidgetLayoutLibrary_SlotAsBorderSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetLayoutLibrary::STATIC_RemoveAllWidgets(class UObject* WorldContextObject)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14985);

	UWidgetLayoutLibrary_RemoveAllWidgets_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 WorldLocation                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ScreenPosition                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14980);

	UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params params;
	params.PlayerController = PlayerController;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScreenPosition != nullptr)
		*ScreenPosition = params.ScreenPosition;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGeometry               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FGeometry UWidgetLayoutLibrary::GetViewportWidgetGeometry(class UObject* WorldContextObject)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14977);

	UWidgetLayoutLibrary_GetViewportWidgetGeometry_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetViewportSize
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidgetLayoutLibrary::GetViewportSize(class UObject* WorldContextObject)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14974);

	UWidgetLayoutLibrary_GetViewportSize_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetViewportScale
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWidgetLayoutLibrary::GetViewportScale(class UObject* WorldContextObject)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14971);

	UWidgetLayoutLibrary_GetViewportScale_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
// (BlueprintCosmetic)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGeometry               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FGeometry UWidgetLayoutLibrary::GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14968);

	UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
// ()
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          LocationX                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          LocationY                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetLayoutLibrary::GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14963);

	UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LocationX != nullptr)
		*LocationX = params.LocationX;
	if (LocationY != nullptr)
		*LocationY = params.LocationY;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnViewport(class UObject* WorldContextObject)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14960);

	UWidgetLayoutLibrary_GetMousePositionOnViewport_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnPlatform()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(14958);

	UWidgetLayoutLibrary_GetMousePositionOnPlatform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetSwitcher::STATIC_SetActiveWidgetIndex(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15025);

	UWidgetSwitcher_SetActiveWidgetIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetSwitcher.SetActiveWidget
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetSwitcher::STATIC_SetActiveWidget(class UWidget* Widget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15023);

	UWidgetSwitcher_SetActiveWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetSwitcher.GetWidgetAtIndex
// (BlueprintCosmetic)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UWidgetSwitcher::GetWidgetAtIndex(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15020);

	UWidgetSwitcher_GetWidgetAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.GetNumWidgets
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWidgetSwitcher::GetNumWidgets()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15018);

	UWidgetSwitcher_GetNumWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWidgetSwitcher::GetActiveWidgetIndex()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15016);

	UWidgetSwitcher_GetActiveWidgetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.GetActiveWidget
// ()
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UWidgetSwitcher::GetActiveWidget()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15014);

	UWidgetSwitcher_GetActiveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetSwitcherSlot::STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15032);

	UWidgetSwitcherSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetSwitcherSlot.SetPadding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMargin                 InPadding                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UWidgetSwitcherSlot::STATIC_SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15030);

	UWidgetSwitcherSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetSwitcherSlot::STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15028);

	UWidgetSwitcherSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WindowTitleBarArea.SetVerticalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWindowTitleBarArea::STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15044);

	UWindowTitleBarArea_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WindowTitleBarArea.SetPadding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMargin                 InPadding                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UWindowTitleBarArea::STATIC_SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15042);

	UWindowTitleBarArea_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WindowTitleBarArea.SetHorizontalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWindowTitleBarArea::STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15040);

	UWindowTitleBarArea_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWindowTitleBarAreaSlot::STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15051);

	UWindowTitleBarAreaSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WindowTitleBarAreaSlot.SetPadding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMargin                 InPadding                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UWindowTitleBarAreaSlot::STATIC_SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15049);

	UWindowTitleBarAreaSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWindowTitleBarAreaSlot::STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15047);

	UWindowTitleBarAreaSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WrapBox.SetInnerSlotPadding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector2D               InPadding                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWrapBox::STATIC_SetInnerSlotPadding(const struct FVector2D& InPadding)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15059);

	UWrapBox_SetInnerSlotPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WrapBox.AddChildWrapBox
// (BlueprintCosmetic)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWrapBoxSlot*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWrapBoxSlot* UWrapBox::AddChildWrapBox(class UWidget* Content)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15056);

	UWrapBox_AddChildWrapBox_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG.WrapBoxSlot.SetVerticalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWrapBoxSlot::STATIC_SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15072);

	UWrapBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WrapBoxSlot.SetPadding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FMargin                 InPadding                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UWrapBoxSlot::STATIC_SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15070);

	UWrapBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WrapBoxSlot.SetHorizontalAlignment
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWrapBoxSlot::STATIC_SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15068);

	UWrapBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InFillSpanWhenLessThan         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWrapBoxSlot::STATIC_SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15066);

	UWrapBoxSlot_SetFillSpanWhenLessThan_Params params;
	params.InFillSpanWhenLessThan = InFillSpanWhenLessThan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG.WrapBoxSlot.SetFillEmptySpace
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           InbFillEmptySpace              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWrapBoxSlot::STATIC_SetFillEmptySpace(bool InbFillEmptySpace)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15064);

	UWrapBoxSlot_SetFillEmptySpace_Params params;
	params.InbFillEmptySpace = InbFillEmptySpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
