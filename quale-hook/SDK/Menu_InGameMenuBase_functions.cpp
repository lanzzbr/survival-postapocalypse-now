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

// Function Menu_InGameMenuBase.Menu_InGameMenuBase_C.SetParentInPanel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_InGameMenuBase_C::STATIC_SetParentInPanel()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64155);

	UMenu_InGameMenuBase_C_SetParentInPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGameMenuBase.Menu_InGameMenuBase_C.Open Menu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<GUI_Menu_InGameState_EGUI_Menu_InGameState> MenuType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_InGameMenuBase_C::STATIC_Open_Menu(TEnumAsByte<GUI_Menu_InGameState_EGUI_Menu_InGameState> MenuType)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64153);

	UMenu_InGameMenuBase_C_Open_Menu_Params params;
	params.MenuType = MenuType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGameMenuBase.Menu_InGameMenuBase_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_InGameMenuBase_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64152);

	UMenu_InGameMenuBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGameMenuBase.Menu_InGameMenuBase_C.ExecuteUbergraph_Menu_InGameMenuBase
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_InGameMenuBase_C::STATIC_ExecuteUbergraph_Menu_InGameMenuBase(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64148);

	UMenu_InGameMenuBase_C_ExecuteUbergraph_Menu_InGameMenuBase_Params params;
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
