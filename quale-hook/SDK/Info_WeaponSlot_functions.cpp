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

// Function Info_WeaponSlot.Info_WeaponSlot_C.SlotTypeToEqptSocet
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_SlotsTypeEnum_ECv2_SlotsTypeEnum> SlotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> EqptSocet                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfo_WeaponSlot_C::STATIC_SlotTypeToEqptSocet(TEnumAsByte<Cv2_SlotsTypeEnum_ECv2_SlotsTypeEnum> SlotType, TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>* EqptSocet)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80440);

	UInfo_WeaponSlot_C_SlotTypeToEqptSocet_Params params;
	params.SlotType = SlotType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EqptSocet != nullptr)
		*EqptSocet = params.EqptSocet;

}


// Function Info_WeaponSlot.Info_WeaponSlot_C.SetAmmo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfo_WeaponSlot_C::STATIC_SetAmmo()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80409);

	UInfo_WeaponSlot_C_SetAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_WeaponSlot.Info_WeaponSlot_C.CheckSelected
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfo_WeaponSlot_C::STATIC_CheckSelected()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80407);

	UInfo_WeaponSlot_C_CheckSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_WeaponSlot.Info_WeaponSlot_C.Get_Key_Text_1
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UInfo_WeaponSlot_C::Get_Key_Text_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80403);

	UInfo_WeaponSlot_C_Get_Key_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Info_WeaponSlot.Info_WeaponSlot_C.CheckGranate
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInfo_WeaponSlot_C::STATIC_CheckGranate(bool* Ok)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80399);

	UInfo_WeaponSlot_C_CheckGranate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ok != nullptr)
		*Ok = params.Ok;

}


// Function Info_WeaponSlot.Info_WeaponSlot_C.Get_PreviosIco_Brush_1
// ()
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UInfo_WeaponSlot_C::Get_PreviosIco_Brush_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80397);

	UInfo_WeaponSlot_C_Get_PreviosIco_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Info_WeaponSlot.Info_WeaponSlot_C.CheckState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfo_WeaponSlot_C::STATIC_CheckState()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80395);

	UInfo_WeaponSlot_C_CheckState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_WeaponSlot.Info_WeaponSlot_C.Get_Ico_Brush_1
// ()
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UInfo_WeaponSlot_C::Get_Ico_Brush_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80393);

	UInfo_WeaponSlot_C_Get_Ico_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Info_WeaponSlot.Info_WeaponSlot_C.SetElementVisibility
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInfo_WeaponSlot_C::STATIC_SetElementVisibility(bool Key, bool Icon, bool Count)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80391);

	UInfo_WeaponSlot_C_SetElementVisibility_Params params;
	params.Key = Key;
	params.Icon = Icon;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_WeaponSlot.Info_WeaponSlot_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfo_WeaponSlot_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80390);

	UInfo_WeaponSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_WeaponSlot.Info_WeaponSlot_C.NextWeapon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfo_WeaponSlot_C::STATIC_NextWeapon(TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80388);

	UInfo_WeaponSlot_C_NextWeapon_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_WeaponSlot.Info_WeaponSlot_C.ClearSlotRoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfo_WeaponSlot_C::STATIC_ClearSlotRoot()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80387);

	UInfo_WeaponSlot_C_ClearSlotRoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_WeaponSlot.Info_WeaponSlot_C.StartCheckState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfo_WeaponSlot_C::STATIC_StartCheckState()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80386);

	UInfo_WeaponSlot_C_StartCheckState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_WeaponSlot.Info_WeaponSlot_C.StopCheckState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfo_WeaponSlot_C::STATIC_StopCheckState()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80385);

	UInfo_WeaponSlot_C_StopCheckState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_WeaponSlot.Info_WeaponSlot_C.ExecuteUbergraph_Info_WeaponSlot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfo_WeaponSlot_C::STATIC_ExecuteUbergraph_Info_WeaponSlot(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80383);

	UInfo_WeaponSlot_C_ExecuteUbergraph_Info_WeaponSlot_Params params;
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
