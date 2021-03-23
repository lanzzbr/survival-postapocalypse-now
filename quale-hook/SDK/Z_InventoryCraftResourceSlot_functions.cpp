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

// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.Get_Fon_ColorAndOpacity_1
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UZ_InventoryCraftResourceSlot_C::Get_Fon_ColorAndOpacity_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57925);

	UZ_InventoryCraftResourceSlot_C_Get_Fon_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.GetVisibility_1
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UZ_InventoryCraftResourceSlot_C::GetVisibility_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57922);

	UZ_InventoryCraftResourceSlot_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.Get_Count_Text_1
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UZ_InventoryCraftResourceSlot_C::Get_Count_Text_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57915);

	UZ_InventoryCraftResourceSlot_C_Get_Count_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.OnMouseButtonUp
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UZ_InventoryCraftResourceSlot_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57913);

	UZ_InventoryCraftResourceSlot_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.OnMouseButtonDown
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UZ_InventoryCraftResourceSlot_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57911);

	UZ_InventoryCraftResourceSlot_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryCraftResourceSlot_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57910);

	UZ_InventoryCraftResourceSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.OnMouseEnter
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UZ_InventoryCraftResourceSlot_C::STATIC_OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57908);

	UZ_InventoryCraftResourceSlot_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.OnMouseLeave
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UZ_InventoryCraftResourceSlot_C::STATIC_OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57906);

	UZ_InventoryCraftResourceSlot_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.ClearSlot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryCraftResourceSlot_C::STATIC_ClearSlot()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57905);

	UZ_InventoryCraftResourceSlot_C_ClearSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.DrawSlot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FCv2_LootCargoStructure Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryCraftResourceSlot_C::STATIC_DrawSlot(const struct FCv2_LootCargoStructure& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57903);

	UZ_InventoryCraftResourceSlot_C_DrawSlot_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C.ExecuteUbergraph_Z_InventoryCraftResourceSlot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryCraftResourceSlot_C::STATIC_ExecuteUbergraph_Z_InventoryCraftResourceSlot(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57901);

	UZ_InventoryCraftResourceSlot_C_ExecuteUbergraph_Z_InventoryCraftResourceSlot_Params params;
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
