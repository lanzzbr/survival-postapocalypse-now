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

// Function Info_Inventory_Panel.Info_Inventory_Panel_C.GetCanFire
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           CanFire                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInfo_Inventory_Panel_C::STATIC_GetCanFire(bool* CanFire)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80557);

	UInfo_Inventory_Panel_C_GetCanFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanFire != nullptr)
		*CanFire = params.CanFire;

}


// Function Info_Inventory_Panel.Info_Inventory_Panel_C.GetVisibility_1
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UInfo_Inventory_Panel_C::GetVisibility_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80554);

	UInfo_Inventory_Panel_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Info_Inventory_Panel.Info_Inventory_Panel_C.ChangeWeapon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_LootType_ECv2_LootType> NewLootType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfo_Inventory_Panel_C::STATIC_ChangeWeapon(TEnumAsByte<Cv2_LootType_ECv2_LootType> NewLootType)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80541);

	UInfo_Inventory_Panel_C_ChangeWeapon_Params params;
	params.NewLootType = NewLootType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_Inventory_Panel.Info_Inventory_Panel_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfo_Inventory_Panel_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80540);

	UInfo_Inventory_Panel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_Inventory_Panel.Info_Inventory_Panel_C.Destruct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfo_Inventory_Panel_C::STATIC_Destruct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80539);

	UInfo_Inventory_Panel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_Inventory_Panel.Info_Inventory_Panel_C.ShowSliderSlot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfo_Inventory_Panel_C::STATIC_ShowSliderSlot()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80538);

	UInfo_Inventory_Panel_C_ShowSliderSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_Inventory_Panel.Info_Inventory_Panel_C.SlideWeapon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_LootType_ECv2_LootType> LootType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfo_Inventory_Panel_C::STATIC_SlideWeapon(TEnumAsByte<Cv2_LootType_ECv2_LootType> LootType)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80536);

	UInfo_Inventory_Panel_C_SlideWeapon_Params params;
	params.LootType = LootType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_Inventory_Panel.Info_Inventory_Panel_C.UseNow
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfo_Inventory_Panel_C::STATIC_UseNow()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80535);

	UInfo_Inventory_Panel_C_UseNow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_Inventory_Panel.Info_Inventory_Panel_C.SwitchSelectWeapon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfo_Inventory_Panel_C::STATIC_SwitchSelectWeapon()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80534);

	UInfo_Inventory_Panel_C_SwitchSelectWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_Inventory_Panel.Info_Inventory_Panel_C.ShowWeapon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfo_Inventory_Panel_C::STATIC_ShowWeapon()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80533);

	UInfo_Inventory_Panel_C_ShowWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_Inventory_Panel.Info_Inventory_Panel_C.ExecuteUbergraph_Info_Inventory_Panel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfo_Inventory_Panel_C::STATIC_ExecuteUbergraph_Info_Inventory_Panel(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80521);

	UInfo_Inventory_Panel_C_ExecuteUbergraph_Info_Inventory_Panel_Params params;
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
