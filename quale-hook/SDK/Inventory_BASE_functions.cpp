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

// Function Inventory_BASE.Inventory_BASE_C.OnMouseWheel
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UInventory_BASE_C::OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70437);

	UInventory_BASE_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function Inventory_BASE.Inventory_BASE_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           InMouseEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UInventory_BASE_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70427);

	UInventory_BASE_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InMouseEvent != nullptr)
		*InMouseEvent = params.InMouseEvent;


	return params.ReturnValue;
}


// Function Inventory_BASE.Inventory_BASE_C.OnMouseButtonDown
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UInventory_BASE_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70432);

	UInventory_BASE_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function Inventory_BASE.Inventory_BASE_C.Get_DropMouseIco_Visibility_1
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UInventory_BASE_C::Get_DropMouseIco_Visibility_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70370);

	UInventory_BASE_C_Get_DropMouseIco_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Inventory_BASE.Inventory_BASE_C.Get_TextDrop_Visibility_1
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UInventory_BASE_C::Get_TextDrop_Visibility_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70367);

	UInventory_BASE_C_Get_TextDrop_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Inventory_BASE.Inventory_BASE_C.UpdateOtherPanel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventory_BASE_C::STATIC_UpdateOtherPanel()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70365);

	UInventory_BASE_C_UpdateOtherPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.GetText_3
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UInventory_BASE_C::GetText_3()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70363);

	UInventory_BASE_C_GetText_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Inventory_BASE.Inventory_BASE_C.Get_Button_Trash_Visibility_1
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UInventory_BASE_C::Get_Button_Trash_Visibility_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70303);

	UInventory_BASE_C_Get_Button_Trash_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Inventory_BASE.Inventory_BASE_C.CheckAmmo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventory_BASE_C::STATIC_CheckAmmo(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70287);

	UInventory_BASE_C_CheckAmmo_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.GetText_2
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UInventory_BASE_C::GetText_2()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70285);

	UInventory_BASE_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Inventory_BASE.Inventory_BASE_C.GetText_1
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UInventory_BASE_C::GetText_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70283);

	UInventory_BASE_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Inventory_BASE.Inventory_BASE_C.Get_OutButton_Visibility_1
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UInventory_BASE_C::Get_OutButton_Visibility_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70280);

	UInventory_BASE_C_Get_OutButton_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Inventory_BASE.Inventory_BASE_C.Get_InButton_Visibility_1
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UInventory_BASE_C::Get_InButton_Visibility_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70277);

	UInventory_BASE_C_Get_InButton_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Inventory_BASE.Inventory_BASE_C.HidePanelAndButtons
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInventory_BASE_C::STATIC_HidePanelAndButtons(bool Hide)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70275);

	UInventory_BASE_C_HidePanelAndButtons_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.GetSelectedSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<int>                    SelectedIndexes                (Parm, OutParm, ZeroConstructor)
void UInventory_BASE_C::STATIC_GetSelectedSlots(TArray<int>* SelectedIndexes)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70272);

	UInventory_BASE_C_GetSelectedSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SelectedIndexes != nullptr)
		*SelectedIndexes = params.SelectedIndexes;

}


// Function Inventory_BASE.Inventory_BASE_C.RemoveFromInventoryArray
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<int>                    Indexes                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FCv2_LootCargoStructure> ReturnLoot                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UInventory_BASE_C::STATIC_RemoveFromInventoryArray(TArray<int>* Indexes, TArray<struct FCv2_LootCargoStructure>* ReturnLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70269);

	UInventory_BASE_C_RemoveFromInventoryArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Indexes != nullptr)
		*Indexes = params.Indexes;
	if (ReturnLoot != nullptr)
		*ReturnLoot = params.ReturnLoot;

}


// Function Inventory_BASE.Inventory_BASE_C.MoveLootIn
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventory_BASE_C::STATIC_MoveLootIn()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70266);

	UInventory_BASE_C_MoveLootIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.GetWidgetByIndex
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*             UserWidget                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventory_BASE_C::STATIC_GetWidgetByIndex(int Index, class UUserWidget** UserWidget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70264);

	UInventory_BASE_C_GetWidgetByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UserWidget != nullptr)
		*UserWidget = params.UserWidget;

}


// Function Inventory_BASE.Inventory_BASE_C.RefreshInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventory_BASE_C::STATIC_RefreshInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70262);

	UInventory_BASE_C_RefreshInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.ClearBackPack
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventory_BASE_C::STATIC_ClearBackPack()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70260);

	UInventory_BASE_C_ClearBackPack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.DrawBackPack
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventory_BASE_C::STATIC_DrawBackPack()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70258);

	UInventory_BASE_C_DrawBackPack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.AddRootToChild
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventory_BASE_C::STATIC_AddRootToChild()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70256);

	UInventory_BASE_C_AddRootToChild_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.ClearMainSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventory_BASE_C::STATIC_ClearMainSlots()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70254);

	UInventory_BASE_C_ClearMainSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.USE_Backpak_slot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FCv2_LootCargoStructure Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int                            Instigator_Index               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventory_BASE_C::STATIC_USE_Backpak_slot(const struct FCv2_LootCargoStructure& Loot, int Instigator_Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70252);

	UInventory_BASE_C_USE_Backpak_slot_Params params;
	params.Loot = Loot;
	params.Instigator_Index = Instigator_Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventory_BASE_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70251);

	UInventory_BASE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventory_BASE_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70249);

	UInventory_BASE_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.BndEvt__Button_118_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventory_BASE_C::STATIC_BndEvt__Button_118_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70248);

	UInventory_BASE_C_BndEvt__Button_118_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.BndEvt__Button_367_K2Node_ComponentBoundEvent_206_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventory_BASE_C::STATIC_BndEvt__Button_367_K2Node_ComponentBoundEvent_206_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70247);

	UInventory_BASE_C_BndEvt__Button_367_K2Node_ComponentBoundEvent_206_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.BndEvt__InButton_K2Node_ComponentBoundEvent_209_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventory_BASE_C::STATIC_BndEvt__InButton_K2Node_ComponentBoundEvent_209_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70246);

	UInventory_BASE_C_BndEvt__InButton_K2Node_ComponentBoundEvent_209_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.BndEvt__OutButton_K2Node_ComponentBoundEvent_412_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventory_BASE_C::STATIC_BndEvt__OutButton_K2Node_ComponentBoundEvent_412_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70245);

	UInventory_BASE_C_BndEvt__OutButton_K2Node_ComponentBoundEvent_412_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.RefreshWidgetsEvent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventory_BASE_C::STATIC_RefreshWidgetsEvent()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70244);

	UInventory_BASE_C_RefreshWidgetsEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.Destruct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventory_BASE_C::STATIC_Destruct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70243);

	UInventory_BASE_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventory_BASE_C::STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70242);

	UInventory_BASE_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.BndEvt__Button_Trash_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventory_BASE_C::STATIC_BndEvt__Button_Trash_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70241);

	UInventory_BASE_C_BndEvt__Button_Trash_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.CheckActorValid
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventory_BASE_C::STATIC_CheckActorValid()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70240);

	UInventory_BASE_C_CheckActorValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.BindRefreshInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventory_BASE_C::STATIC_BindRefreshInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70239);

	UInventory_BASE_C_BindRefreshInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_BASE.Inventory_BASE_C.ExecuteUbergraph_Inventory_BASE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventory_BASE_C::STATIC_ExecuteUbergraph_Inventory_BASE(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70237);

	UInventory_BASE_C_ExecuteUbergraph_Inventory_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
