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

// Function SURV_Inventory_CraftResSlot.SURV_Inventory_CraftResSlot_C.Get_Fon_ColorAndOpacity_1
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor USURV_Inventory_CraftResSlot_C::Get_Fon_ColorAndOpacity_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44353);

	USURV_Inventory_CraftResSlot_C_Get_Fon_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SURV_Inventory_CraftResSlot.SURV_Inventory_CraftResSlot_C.Get_Count_Text_1
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText USURV_Inventory_CraftResSlot_C::Get_Count_Text_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44347);

	USURV_Inventory_CraftResSlot_C_Get_Count_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SURV_Inventory_CraftResSlot.SURV_Inventory_CraftResSlot_C.Get_Count_ColorAndOpacity_1
// ()
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor USURV_Inventory_CraftResSlot_C::Get_Count_ColorAndOpacity_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44345);

	USURV_Inventory_CraftResSlot_C_Get_Count_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SURV_Inventory_CraftResSlot.SURV_Inventory_CraftResSlot_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_Inventory_CraftResSlot_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44344);

	USURV_Inventory_CraftResSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_Inventory_CraftResSlot.SURV_Inventory_CraftResSlot_C.RootClearSlot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_Inventory_CraftResSlot_C::STATIC_RootClearSlot()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(46532);

	USURV_Inventory_CraftResSlot_C_RootClearSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_Inventory_CraftResSlot.SURV_Inventory_CraftResSlot_C.ExecuteUbergraph_SURV_Inventory_CraftResSlot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USURV_Inventory_CraftResSlot_C::STATIC_ExecuteUbergraph_SURV_Inventory_CraftResSlot(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44342);

	USURV_Inventory_CraftResSlot_C_ExecuteUbergraph_SURV_Inventory_CraftResSlot_Params params;
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
