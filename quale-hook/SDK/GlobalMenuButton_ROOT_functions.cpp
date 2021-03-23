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

// Function GlobalMenuButton_ROOT.GlobalMenuButton_ROOT_C.Root_Set SelectedStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenuButton_ROOT_C::STATIC_Root_Set_SelectedStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43669);

	UGlobalMenuButton_ROOT_C_Root_Set_SelectedStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenuButton_ROOT.GlobalMenuButton_ROOT_C.Root_SetUnselectedStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenuButton_ROOT_C::STATIC_Root_SetUnselectedStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43670);

	UGlobalMenuButton_ROOT_C_Root_SetUnselectedStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenuButton_ROOT.GlobalMenuButton_ROOT_C.Root_Set HoveredStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenuButton_ROOT_C::STATIC_Root_Set_HoveredStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43668);

	UGlobalMenuButton_ROOT_C_Root_Set_HoveredStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenuButton_ROOT.GlobalMenuButton_ROOT_C.Root_ShowConfirm
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenuButton_ROOT_C::STATIC_Root_ShowConfirm()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43671);

	UGlobalMenuButton_ROOT_C_Root_ShowConfirm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenuButton_ROOT.GlobalMenuButton_ROOT_C.Root_HideConfirm
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Use_Anim                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGlobalMenuButton_ROOT_C::STATIC_Root_HideConfirm(bool Use_Anim)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43663);

	UGlobalMenuButton_ROOT_C_Root_HideConfirm_Params params;
	params.Use_Anim = Use_Anim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenuButton_ROOT.GlobalMenuButton_ROOT_C.ExecuteUbergraph_GlobalMenuButton_ROOT
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGlobalMenuButton_ROOT_C::STATIC_ExecuteUbergraph_GlobalMenuButton_ROOT(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43660);

	UGlobalMenuButton_ROOT_C_ExecuteUbergraph_GlobalMenuButton_ROOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlobalMenuButton_ROOT.GlobalMenuButton_ROOT_C.OnClick__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGlobalMenuButton_ROOT_C::STATIC_OnClick__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43659);

	UGlobalMenuButton_ROOT_C_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
