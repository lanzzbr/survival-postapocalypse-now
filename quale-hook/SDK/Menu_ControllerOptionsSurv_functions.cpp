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

// Function Menu_ControllerOptionsSurv.Menu_ControllerOptionsSurv_C.On_Open
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_ControllerOptionsSurv_C::STATIC_On_Open()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63344);

	UMenu_ControllerOptionsSurv_C_On_Open_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_ControllerOptionsSurv.Menu_ControllerOptionsSurv_C.RestoreKeyboardDefault
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_ControllerOptionsSurv_C::STATIC_RestoreKeyboardDefault()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63346);

	UMenu_ControllerOptionsSurv_C_RestoreKeyboardDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_ControllerOptionsSurv.Menu_ControllerOptionsSurv_C.RestoreAzerty
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_ControllerOptionsSurv_C::STATIC_RestoreAzerty()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63345);

	UMenu_ControllerOptionsSurv_C_RestoreAzerty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_ControllerOptionsSurv.Menu_ControllerOptionsSurv_C.ExecuteUbergraph_Menu_ControllerOptionsSurv
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_ControllerOptionsSurv_C::STATIC_ExecuteUbergraph_Menu_ControllerOptionsSurv(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63342);

	UMenu_ControllerOptionsSurv_C_ExecuteUbergraph_Menu_ControllerOptionsSurv_Params params;
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
