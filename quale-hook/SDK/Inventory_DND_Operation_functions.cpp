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

// Function Inventory_DND_Operation.Inventory_DND_Operation_C.DragCancelled
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPointerEvent           PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UInventory_DND_Operation_C::STATIC_DragCancelled(const struct FPointerEvent& PointerEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81728);

	UInventory_DND_Operation_C_DragCancelled_Params params;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_DND_Operation.Inventory_DND_Operation_C.Drop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPointerEvent           PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UInventory_DND_Operation_C::STATIC_Drop(const struct FPointerEvent& PointerEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81731);

	UInventory_DND_Operation_C_Drop_Params params;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_DND_Operation.Inventory_DND_Operation_C.ExecuteUbergraph_Inventory_DND_Operation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventory_DND_Operation_C::STATIC_ExecuteUbergraph_Inventory_DND_Operation(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81719);

	UInventory_DND_Operation_C_ExecuteUbergraph_Inventory_DND_Operation_Params params;
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
