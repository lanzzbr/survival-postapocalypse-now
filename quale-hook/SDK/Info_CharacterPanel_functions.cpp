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

// Function Info_CharacterPanel.Info_CharacterPanel_C.ZL_CONTROLLER_StorageActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfo_CharacterPanel_C::STATIC_ZL_CONTROLLER_StorageActor(class AActor** Actor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80872);

	UInfo_CharacterPanel_C_ZL_CONTROLLER_StorageActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;

}


// Function Info_CharacterPanel.Info_CharacterPanel_C.ZL_CONTROLLER_GetSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_SlotStr>      Slots                          (Parm, OutParm, ZeroConstructor)
void UInfo_CharacterPanel_C::STATIC_ZL_CONTROLLER_GetSlots(TArray<struct FZ_SlotStr>* Slots)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80843);

	UInfo_CharacterPanel_C_ZL_CONTROLLER_GetSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Slots != nullptr)
		*Slots = params.Slots;

}


// Function Info_CharacterPanel.Info_CharacterPanel_C.GetVisibility_3
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UInfo_CharacterPanel_C::GetVisibility_3()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80840);

	UInfo_CharacterPanel_C_GetVisibility_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Info_CharacterPanel.Info_CharacterPanel_C.Get_DeltaHp_Percent_1
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UInfo_CharacterPanel_C::Get_DeltaHp_Percent_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80838);

	UInfo_CharacterPanel_C_Get_DeltaHp_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Info_CharacterPanel.Info_CharacterPanel_C.Get_HP_ProgressBar_89_Percent_1
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UInfo_CharacterPanel_C::Get_HP_ProgressBar_89_Percent_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80836);

	UInfo_CharacterPanel_C_Get_HP_ProgressBar_89_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Info_CharacterPanel.Info_CharacterPanel_C.GetText_1
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UInfo_CharacterPanel_C::GetText_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80830);

	UInfo_CharacterPanel_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Info_CharacterPanel.Info_CharacterPanel_C.GetVisibility_1
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UInfo_CharacterPanel_C::GetVisibility_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80827);

	UInfo_CharacterPanel_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Info_CharacterPanel.Info_CharacterPanel_C.GetHealthText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UInfo_CharacterPanel_C::GetHealthText()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80823);

	UInfo_CharacterPanel_C_GetHealthText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Info_CharacterPanel.Info_CharacterPanel_C.SetAmmoText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FWeaponAmmoInfoStr      AmmoStr                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UInfo_CharacterPanel_C::STATIC_SetAmmoText(const struct FWeaponAmmoInfoStr& AmmoStr)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80821);

	UInfo_CharacterPanel_C_SetAmmoText_Params params;
	params.AmmoStr = AmmoStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_CharacterPanel.Info_CharacterPanel_C.ExecuteUbergraph_Info_CharacterPanel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfo_CharacterPanel_C::STATIC_ExecuteUbergraph_Info_CharacterPanel(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80819);

	UInfo_CharacterPanel_C_ExecuteUbergraph_Info_CharacterPanel_Params params;
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
