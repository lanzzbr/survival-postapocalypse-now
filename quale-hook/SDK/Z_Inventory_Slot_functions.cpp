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

// Function Z_Inventory_Slot.Z_Inventory_Slot_C.OnMouseButtonUp
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UZ_Inventory_Slot_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103983);

	UZ_Inventory_Slot_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.GetHintText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   HintText                       (Parm, OutParm)
void UZ_Inventory_Slot_C::STATIC_GetHintText(struct FText* HintText)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103806);

	UZ_Inventory_Slot_C_GetHintText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HintText != nullptr)
		*HintText = params.HintText;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.Get_CountText_Text_1
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UZ_Inventory_Slot_C::Get_CountText_Text_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103802);

	UZ_Inventory_Slot_C_Get_CountText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.Get_SplitProgress_Visibility_1
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UZ_Inventory_Slot_C::Get_SplitProgress_Visibility_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103665);

	UZ_Inventory_Slot_C_Get_SplitProgress_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.SetSplitProgress
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_C::STATIC_SetSplitProgress()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103663);

	UZ_Inventory_Slot_C_SetSplitProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.CheckCanCombine
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           CanCombine                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_Inventory_Slot_C::STATIC_CheckCanCombine(const struct FZ_LootStr& Loot, bool* CanCombine)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103661);

	UZ_Inventory_Slot_C_CheckCanCombine_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanCombine != nullptr)
		*CanCombine = params.CanCombine;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.Style_SetCanCombine
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_C::STATIC_Style_SetCanCombine()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103660);

	UZ_Inventory_Slot_C_Style_SetCanCombine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.ShowBackpackIcon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_Inventory_Slot_C::STATIC_ShowBackpackIcon(bool Show)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103658);

	UZ_Inventory_Slot_C_ShowBackpackIcon_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.DoUNATTACH
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           From_IsContainer               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           To_IsContainer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            FromIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Toindex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZ_InventoryManager_C*   Manager                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsScope                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_Inventory_Slot_C::STATIC_DoUNATTACH(bool From_IsContainer, bool To_IsContainer, int FromIndex, int Toindex, class UZ_InventoryManager_C* Manager, bool IsScope)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103656);

	UZ_Inventory_Slot_C_DoUNATTACH_Params params;
	params.From_IsContainer = From_IsContainer;
	params.To_IsContainer = To_IsContainer;
	params.FromIndex = FromIndex;
	params.Toindex = Toindex;
	params.Manager = Manager;
	params.IsScope = IsScope;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.CheckAttachet
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_C::STATIC_CheckAttachet()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103654);

	UZ_Inventory_Slot_C_CheckAttachet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.UseItem
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsDoubleClick                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_Inventory_Slot_C::STATIC_UseItem(bool IsDoubleClick)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103652);

	UZ_Inventory_Slot_C_UseItem_Params params;
	params.IsDoubleClick = IsDoubleClick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           InMouseEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UZ_Inventory_Slot_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103650);

	UZ_Inventory_Slot_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InMouseEvent != nullptr)
		*InMouseEvent = params.InMouseEvent;


	return params.ReturnValue;
}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.CallDropOut
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_C::STATIC_CallDropOut()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103648);

	UZ_Inventory_Slot_C_CallDropOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.CheckCanDrop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_Inventory_Slot_C::STATIC_CheckCanDrop(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103646);

	UZ_Inventory_Slot_C_CheckCanDrop_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.CallDropEvent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_C::STATIC_CallDropEvent()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103640);

	UZ_Inventory_Slot_C_CallDropEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.Style_SetCanDrop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_C::STATIC_Style_SetCanDrop()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103639);

	UZ_Inventory_Slot_C_Style_SetCanDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.Style_SetBlockDrop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_C::STATIC_Style_SetBlockDrop()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103638);

	UZ_Inventory_Slot_C_Style_SetBlockDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.CheckTypeText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_C::STATIC_CheckTypeText()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103636);

	UZ_Inventory_Slot_C_CheckTypeText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.Style_SetNormal
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_C::STATIC_Style_SetNormal()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103635);

	UZ_Inventory_Slot_C_Style_SetNormal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.Style_SetDrag
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_C::STATIC_Style_SetDrag()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103634);

	UZ_Inventory_Slot_C_Style_SetDrag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.OnDrop
// (NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UZ_Inventory_Slot_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103632);

	UZ_Inventory_Slot_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.OnDragDetected
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_Inventory_Slot_C::STATIC_OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103630);

	UZ_Inventory_Slot_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PointerEvent != nullptr)
		*PointerEvent = params.PointerEvent;
	if (Operation != nullptr)
		*Operation = params.Operation;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.OnMouseButtonDown
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UZ_Inventory_Slot_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103628);

	UZ_Inventory_Slot_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103627);

	UZ_Inventory_Slot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.Draw
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              LootStr                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           GlobalUpdate                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_Inventory_Slot_C::STATIC_Draw(const struct FZ_LootStr& LootStr, bool GlobalUpdate)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103625);

	UZ_Inventory_Slot_C_Draw_Params params;
	params.LootStr = LootStr;
	params.GlobalUpdate = GlobalUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.OnMouseEnter
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UZ_Inventory_Slot_C::STATIC_OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103623);

	UZ_Inventory_Slot_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.OnMouseLeave
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UZ_Inventory_Slot_C::STATIC_OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103621);

	UZ_Inventory_Slot_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.SetSlotType
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<InventoryWidgetType_EInventoryWidgetType> SlotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Loot_name                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_Inventory_Slot_C::STATIC_SetSlotType(TEnumAsByte<InventoryWidgetType_EInventoryWidgetType> SlotType, const struct FText& Loot_name, const struct FText& Description, class UTexture2D* Texture)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103619);

	UZ_Inventory_Slot_C_SetSlotType_Params params;
	params.SlotType = SlotType;
	params.Loot_name = Loot_name;
	params.Description = Description;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_Inventory_Slot_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103617);

	UZ_Inventory_Slot_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.BndEvt__MouseWheelZone_K2Node_ComponentBoundEvent_4_MouseWheel__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_Inventory_Slot_C::STATIC_BndEvt__MouseWheelZone_K2Node_ComponentBoundEvent_4_MouseWheel__DelegateSignature(float Delta)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103615);

	UZ_Inventory_Slot_C_BndEvt__MouseWheelZone_K2Node_ComponentBoundEvent_4_MouseWheel__DelegateSignature_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.MOuseRelease
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_C::STATIC_MOuseRelease()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103614);

	UZ_Inventory_Slot_C_MOuseRelease_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot.Z_Inventory_Slot_C.ExecuteUbergraph_Z_Inventory_Slot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_Inventory_Slot_C::STATIC_ExecuteUbergraph_Z_Inventory_Slot(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103612);

	UZ_Inventory_Slot_C_ExecuteUbergraph_Z_Inventory_Slot_Params params;
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
