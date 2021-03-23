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

// Function PlayerHeader.PlayerHeader_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPlayerHeader_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(72937);

	UPlayerHeader_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerHeader.PlayerHeader_C.ResetSortStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPlayerHeader_C::STATIC_ResetSortStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73251);

	UPlayerHeader_C_ResetSortStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerHeader.PlayerHeader_C.BndEvt__SB_Score_K2Node_ComponentBoundEvent_4_ButtonClick__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           SortFromMin                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerHeader_C::STATIC_BndEvt__SB_Score_K2Node_ComponentBoundEvent_4_ButtonClick__DelegateSignature(bool SortFromMin)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(72918);

	UPlayerHeader_C_BndEvt__SB_Score_K2Node_ComponentBoundEvent_4_ButtonClick__DelegateSignature_Params params;
	params.SortFromMin = SortFromMin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerHeader.PlayerHeader_C.BndEvt__SB_Deaths_K2Node_ComponentBoundEvent_5_ButtonClick__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           SortFromMin                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerHeader_C::STATIC_BndEvt__SB_Deaths_K2Node_ComponentBoundEvent_5_ButtonClick__DelegateSignature(bool SortFromMin)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(72916);

	UPlayerHeader_C_BndEvt__SB_Deaths_K2Node_ComponentBoundEvent_5_ButtonClick__DelegateSignature_Params params;
	params.SortFromMin = SortFromMin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerHeader.PlayerHeader_C.BndEvt__SB_KillsButton_K2Node_ComponentBoundEvent_6_ButtonClick__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           SortFromMin                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerHeader_C::STATIC_BndEvt__SB_KillsButton_K2Node_ComponentBoundEvent_6_ButtonClick__DelegateSignature(bool SortFromMin)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(72914);

	UPlayerHeader_C_BndEvt__SB_KillsButton_K2Node_ComponentBoundEvent_6_ButtonClick__DelegateSignature_Params params;
	params.SortFromMin = SortFromMin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerHeader.PlayerHeader_C.BndEvt__SB_Damage_K2Node_ComponentBoundEvent_7_ButtonClick__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           SortFromMin                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerHeader_C::STATIC_BndEvt__SB_Damage_K2Node_ComponentBoundEvent_7_ButtonClick__DelegateSignature(bool SortFromMin)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(72912);

	UPlayerHeader_C_BndEvt__SB_Damage_K2Node_ComponentBoundEvent_7_ButtonClick__DelegateSignature_Params params;
	params.SortFromMin = SortFromMin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerHeader.PlayerHeader_C.SetSort
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           FromMin                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<GUI_SortPlayerParam_EGUI_SortPlayerParam> SortParametr                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHeader_C::STATIC_SetSort(bool FromMin, TEnumAsByte<GUI_SortPlayerParam_EGUI_SortPlayerParam> SortParametr)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(72910);

	UPlayerHeader_C_SetSort_Params params;
	params.FromMin = FromMin;
	params.SortParametr = SortParametr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerHeader.PlayerHeader_C.ExecuteUbergraph_PlayerHeader
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHeader_C::STATIC_ExecuteUbergraph_PlayerHeader(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(72908);

	UPlayerHeader_C_ExecuteUbergraph_PlayerHeader_Params params;
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
