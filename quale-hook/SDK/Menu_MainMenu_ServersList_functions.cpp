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

// Function Menu_MainMenu_ServersList.Menu_MainMenu_ServersList_C.RefreshList
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FBlueprintSessionResult> SessionsResults                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UMenu_MainMenu_ServersList_C::STATIC_RefreshList(TArray<struct FBlueprintSessionResult>* SessionsResults)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78004);

	UMenu_MainMenu_ServersList_C_RefreshList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SessionsResults != nullptr)
		*SessionsResults = params.SessionsResults;

}


// Function Menu_MainMenu_ServersList.Menu_MainMenu_ServersList_C.OnFailure_399DA7EF494AEE85CDB407AAB186BFAB
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UMenu_MainMenu_ServersList_C::STATIC_OnFailure_399DA7EF494AEE85CDB407AAB186BFAB(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(78001);

	UMenu_MainMenu_ServersList_C_OnFailure_399DA7EF494AEE85CDB407AAB186BFAB_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_ServersList.Menu_MainMenu_ServersList_C.OnSuccess_399DA7EF494AEE85CDB407AAB186BFAB
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UMenu_MainMenu_ServersList_C::STATIC_OnSuccess_399DA7EF494AEE85CDB407AAB186BFAB(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(77998);

	UMenu_MainMenu_ServersList_C_OnSuccess_399DA7EF494AEE85CDB407AAB186BFAB_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_ServersList.Menu_MainMenu_ServersList_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_ServersList_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(77997);

	UMenu_MainMenu_ServersList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_ServersList.Menu_MainMenu_ServersList_C.BndEvt__Menu_Item_2_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_ServersList_C::STATIC_BndEvt__Menu_Item_2_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(77996);

	UMenu_MainMenu_ServersList_C_BndEvt__Menu_Item_2_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_ServersList.Menu_MainMenu_ServersList_C.BndEvt__Connectbyip_K2Node_ComponentBoundEvent_105_OnClick__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_ServersList_C::STATIC_BndEvt__Connectbyip_K2Node_ComponentBoundEvent_105_OnClick__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(77995);

	UMenu_MainMenu_ServersList_C_BndEvt__Connectbyip_K2Node_ComponentBoundEvent_105_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_ServersList.Menu_MainMenu_ServersList_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_ServersList_C::STATIC_BndEvt__Button_2_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(77994);

	UMenu_MainMenu_ServersList_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_ServersList.Menu_MainMenu_ServersList_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_134_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_ServersList_C::STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_134_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(77993);

	UMenu_MainMenu_ServersList_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_134_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_ServersList.Menu_MainMenu_ServersList_C.On_Open
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_ServersList_C::STATIC_On_Open()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(77992);

	UMenu_MainMenu_ServersList_C_On_Open_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_ServersList.Menu_MainMenu_ServersList_C.BndEvt__SurvMainMenuButton_K2Node_ComponentBoundEvent_86_OnClick__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_ServersList_C::STATIC_BndEvt__SurvMainMenuButton_K2Node_ComponentBoundEvent_86_OnClick__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(77991);

	UMenu_MainMenu_ServersList_C_BndEvt__SurvMainMenuButton_K2Node_ComponentBoundEvent_86_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_ServersList.Menu_MainMenu_ServersList_C.Update
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMenu_MainMenu_ServersList_C::STATIC_Update()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(77990);

	UMenu_MainMenu_ServersList_C_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_ServersList.Menu_MainMenu_ServersList_C.ExecuteUbergraph_Menu_MainMenu_ServersList
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_MainMenu_ServersList_C::STATIC_ExecuteUbergraph_Menu_MainMenu_ServersList(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(77978);

	UMenu_MainMenu_ServersList_C_ExecuteUbergraph_Menu_MainMenu_ServersList_Params params;
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
