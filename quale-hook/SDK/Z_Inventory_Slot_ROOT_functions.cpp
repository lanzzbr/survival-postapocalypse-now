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

// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.GetAttachIndex
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> LootEquipSocet                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZ_InventoryManager_C*   Manager                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Array_Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_Inventory_Slot_ROOT_C::STATIC_GetAttachIndex(TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> LootEquipSocet, class UZ_InventoryManager_C* Manager, int* Array_Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45786);

	UZ_Inventory_Slot_ROOT_C_GetAttachIndex_Params params;
	params.LootEquipSocet = LootEquipSocet;
	params.Manager = Manager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.CalcDecrementMass
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              StructRef                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UZ_Inventory_Slot_ROOT_C::STATIC_CalcDecrementMass(struct FZ_LootStr* StructRef)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45760);

	UZ_Inventory_Slot_ROOT_C_CalcDecrementMass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StructRef != nullptr)
		*StructRef = params.StructRef;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.SlotDecrementMass
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_ROOT_C::STATIC_SlotDecrementMass()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45759);

	UZ_Inventory_Slot_ROOT_C_SlotDecrementMass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.ShowOverload
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          OverloadMass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_Inventory_Slot_ROOT_C::STATIC_ShowOverload(float OverloadMass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45757);

	UZ_Inventory_Slot_ROOT_C_ShowOverload_Params params;
	params.OverloadMass = OverloadMass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Hide_Ammo_Icon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_ROOT_C::STATIC_Root_Hide_Ammo_Icon()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45756);

	UZ_Inventory_Slot_ROOT_C_Root_Hide_Ammo_Icon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Set_Ammo_Info
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FWeaponAmmoInfoStr      WeaponInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_Inventory_Slot_ROOT_C::STATIC_Root_Set_Ammo_Info(const struct FWeaponAmmoInfoStr& WeaponInfo)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45754);

	UZ_Inventory_Slot_ROOT_C_Root_Set_Ammo_Info_Params params;
	params.WeaponInfo = WeaponInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_MouseWhell
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_Inventory_Slot_ROOT_C::STATIC_Root_MouseWhell(float Delta)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45752);

	UZ_Inventory_Slot_ROOT_C_Root_MouseWhell_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Clear
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_ROOT_C::STATIC_Clear()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45751);

	UZ_Inventory_Slot_ROOT_C_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Style_Draw
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_ROOT_C::STATIC_Root_Style_Draw()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45750);

	UZ_Inventory_Slot_ROOT_C_Root_Style_Draw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Style_Clear
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_ROOT_C::STATIC_Root_Style_Clear()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45749);

	UZ_Inventory_Slot_ROOT_C_Root_Style_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_ShowHInt
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   HintText                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UZ_Inventory_Slot_ROOT_C::STATIC_Root_ShowHInt(const struct FText& HintText)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45747);

	UZ_Inventory_Slot_ROOT_C_Root_ShowHInt_Params params;
	params.HintText = HintText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_HideHInt
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_ROOT_C::STATIC_Root_HideHInt()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45746);

	UZ_Inventory_Slot_ROOT_C_Root_HideHInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Initialization
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UImage*                  Fon                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                  SPLIT_PROGRESS                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*            ATTACH_PANEL                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZ_Inventory_AttachRoot_C* Attach1                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZ_Inventory_AttachRoot_C* Attach2                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*              TEXT_SLOT_TYPE                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                  CAN_DROP_IMAGE                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                  BLOCK_DROP_IMAGE               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                  CAN_COMBINE_IMAGE              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                  ON_DRAG_IMAGE                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_Inventory_Slot_ROOT_C::STATIC_Initialization(class UImage* Fon, class UImage* SPLIT_PROGRESS, class UPanelWidget* ATTACH_PANEL, class UZ_Inventory_AttachRoot_C* Attach1, class UZ_Inventory_AttachRoot_C* Attach2, class UTextBlock* TEXT_SLOT_TYPE, class UImage* CAN_DROP_IMAGE, class UImage* BLOCK_DROP_IMAGE, class UImage* CAN_COMBINE_IMAGE, class UImage* ON_DRAG_IMAGE)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45744);

	UZ_Inventory_Slot_ROOT_C_Initialization_Params params;
	params.Fon = Fon;
	params.SPLIT_PROGRESS = SPLIT_PROGRESS;
	params.ATTACH_PANEL = ATTACH_PANEL;
	params.Attach1 = Attach1;
	params.Attach2 = Attach2;
	params.TEXT_SLOT_TYPE = TEXT_SLOT_TYPE;
	params.CAN_DROP_IMAGE = CAN_DROP_IMAGE;
	params.BLOCK_DROP_IMAGE = BLOCK_DROP_IMAGE;
	params.CAN_COMBINE_IMAGE = CAN_COMBINE_IMAGE;
	params.ON_DRAG_IMAGE = ON_DRAG_IMAGE;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.OnMouseButtonUp
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UZ_Inventory_Slot_ROOT_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45736);

	UZ_Inventory_Slot_ROOT_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.GetHintText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   HintText                       (Parm, OutParm)
void UZ_Inventory_Slot_ROOT_C::STATIC_GetHintText(struct FText* HintText)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45734);

	UZ_Inventory_Slot_ROOT_C_GetHintText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HintText != nullptr)
		*HintText = params.HintText;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Get_CountText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UZ_Inventory_Slot_ROOT_C::Root_Get_CountText()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45732);

	UZ_Inventory_Slot_ROOT_C_Root_Get_CountText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Get_SplitProgress_Visibility
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UZ_Inventory_Slot_ROOT_C::Root_Get_SplitProgress_Visibility()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45729);

	UZ_Inventory_Slot_ROOT_C_Root_Get_SplitProgress_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.SetSplitProgress
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_ROOT_C::STATIC_SetSplitProgress()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45727);

	UZ_Inventory_Slot_ROOT_C_SetSplitProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.CheckCanCombine
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           CanCombine                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_Inventory_Slot_ROOT_C::STATIC_CheckCanCombine(const struct FZ_LootStr& Loot, bool* CanCombine)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45725);

	UZ_Inventory_Slot_ROOT_C_CheckCanCombine_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanCombine != nullptr)
		*CanCombine = params.CanCombine;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Style_SetCanCombine
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_ROOT_C::STATIC_Root_Style_SetCanCombine()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45724);

	UZ_Inventory_Slot_ROOT_C_Root_Style_SetCanCombine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_ShowBackpackIcon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_Inventory_Slot_ROOT_C::STATIC_Root_ShowBackpackIcon(bool Show)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45722);

	UZ_Inventory_Slot_ROOT_C_Root_ShowBackpackIcon_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.DoUNATTACH
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           From_IsContainer               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           To_IsContainer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            FromIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Toindex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZ_InventoryManager_C*   Manager                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsScope                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsMagazine                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_Inventory_Slot_ROOT_C::STATIC_DoUNATTACH(bool From_IsContainer, bool To_IsContainer, int FromIndex, int Toindex, class UZ_InventoryManager_C* Manager, bool IsScope, bool IsMagazine)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45720);

	UZ_Inventory_Slot_ROOT_C_DoUNATTACH_Params params;
	params.From_IsContainer = From_IsContainer;
	params.To_IsContainer = To_IsContainer;
	params.FromIndex = FromIndex;
	params.Toindex = Toindex;
	params.Manager = Manager;
	params.IsScope = IsScope;
	params.IsMagazine = IsMagazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.CheckAttachet
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_ROOT_C::STATIC_CheckAttachet()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45718);

	UZ_Inventory_Slot_ROOT_C_CheckAttachet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.UseItem
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsDoubleClick                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_Inventory_Slot_ROOT_C::STATIC_UseItem(bool IsDoubleClick)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45716);

	UZ_Inventory_Slot_ROOT_C_UseItem_Params params;
	params.IsDoubleClick = IsDoubleClick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           InMouseEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UZ_Inventory_Slot_ROOT_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45714);

	UZ_Inventory_Slot_ROOT_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InMouseEvent != nullptr)
		*InMouseEvent = params.InMouseEvent;


	return params.ReturnValue;
}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.CallDropOut
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_ROOT_C::STATIC_CallDropOut()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45712);

	UZ_Inventory_Slot_ROOT_C_CallDropOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.CheckCanDrop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_Inventory_Slot_ROOT_C::STATIC_CheckCanDrop(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45710);

	UZ_Inventory_Slot_ROOT_C_CheckCanDrop_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.CallDropEvent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_ROOT_C::STATIC_CallDropEvent()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45708);

	UZ_Inventory_Slot_ROOT_C_CallDropEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Style_SetCanDrop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_ROOT_C::STATIC_Root_Style_SetCanDrop()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45706);

	UZ_Inventory_Slot_ROOT_C_Root_Style_SetCanDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Style_SetBlockDrop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_ROOT_C::STATIC_Root_Style_SetBlockDrop()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45704);

	UZ_Inventory_Slot_ROOT_C_Root_Style_SetBlockDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.CheckTypeText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_ROOT_C::STATIC_CheckTypeText()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45701);

	UZ_Inventory_Slot_ROOT_C_CheckTypeText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Style_SetNormal
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_ROOT_C::STATIC_Style_SetNormal()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45699);

	UZ_Inventory_Slot_ROOT_C_Style_SetNormal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Style_SetDrag
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_ROOT_C::STATIC_Root_Style_SetDrag()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45629);

	UZ_Inventory_Slot_ROOT_C_Root_Style_SetDrag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.OnDrop
// (NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UZ_Inventory_Slot_ROOT_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45627);

	UZ_Inventory_Slot_ROOT_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.OnDragDetected
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_Inventory_Slot_ROOT_C::STATIC_OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(45625);

	UZ_Inventory_Slot_ROOT_C_OnDragDetected_Params params;
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


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.OnMouseButtonDown
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UZ_Inventory_Slot_ROOT_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44650);

	UZ_Inventory_Slot_ROOT_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_ROOT_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44649);

	UZ_Inventory_Slot_ROOT_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Draw
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              LootStr                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           GlobalUpdate                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_Inventory_Slot_ROOT_C::STATIC_Draw(const struct FZ_LootStr& LootStr, bool GlobalUpdate)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44647);

	UZ_Inventory_Slot_ROOT_C_Draw_Params params;
	params.LootStr = LootStr;
	params.GlobalUpdate = GlobalUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.OnMouseEnter
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UZ_Inventory_Slot_ROOT_C::STATIC_OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44645);

	UZ_Inventory_Slot_ROOT_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.OnMouseLeave
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UZ_Inventory_Slot_ROOT_C::STATIC_OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44643);

	UZ_Inventory_Slot_ROOT_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.MOuseRelease
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_ROOT_C::STATIC_MOuseRelease()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44642);

	UZ_Inventory_Slot_ROOT_C_MOuseRelease_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.RootConstruct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_ROOT_C::STATIC_RootConstruct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44641);

	UZ_Inventory_Slot_ROOT_C_RootConstruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.Root_Child_SetNormalStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_ROOT_C::STATIC_Root_Child_SetNormalStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44640);

	UZ_Inventory_Slot_ROOT_C_Root_Child_SetNormalStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.ROOT_OnSplit
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_Slot_ROOT_C::STATIC_ROOT_OnSplit()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44639);

	UZ_Inventory_Slot_ROOT_C_ROOT_OnSplit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C.ExecuteUbergraph_Z_Inventory_Slot_ROOT
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_Inventory_Slot_ROOT_C::STATIC_ExecuteUbergraph_Z_Inventory_Slot_ROOT(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44637);

	UZ_Inventory_Slot_ROOT_C_ExecuteUbergraph_Z_Inventory_Slot_ROOT_Params params;
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
