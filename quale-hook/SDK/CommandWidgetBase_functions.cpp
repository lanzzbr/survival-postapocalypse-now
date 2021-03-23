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

// Function CommandWidgetBase.CommandWidgetBase_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCommandWidgetBase_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43396);

	UCommandWidgetBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommandWidgetBase.CommandWidgetBase_C.ShowMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCommandWidgetBase_C::STATIC_ShowMenu()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43398);

	UCommandWidgetBase_C_ShowMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommandWidgetBase.CommandWidgetBase_C.HIde Menu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCommandWidgetBase_C::STATIC_HIde_Menu()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43397);

	UCommandWidgetBase_C_HIde_Menu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommandWidgetBase.CommandWidgetBase_C.ShowTalkMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   InstigatorName                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UCommandWidgetBase_C::STATIC_ShowTalkMessage(const struct FText& Message, const struct FText& InstigatorName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43401);

	UCommandWidgetBase_C_ShowTalkMessage_Params params;
	params.Message = Message;
	params.InstigatorName = InstigatorName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommandWidgetBase.CommandWidgetBase_C.ExecuteUbergraph_CommandWidgetBase
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCommandWidgetBase_C::STATIC_ExecuteUbergraph_CommandWidgetBase(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43388);

	UCommandWidgetBase_C_ExecuteUbergraph_CommandWidgetBase_Params params;
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
