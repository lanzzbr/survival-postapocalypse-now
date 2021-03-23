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

// Function Z_Inventory_CV3_AttachSlot.Z_Inventory_CV3_AttachSlot_C.OnMouseButtonDown
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UZ_Inventory_CV3_AttachSlot_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81770);

	UZ_Inventory_CV3_AttachSlot_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function Z_Inventory_CV3_AttachSlot.Z_Inventory_CV3_AttachSlot_C.OnDragDetected
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_Inventory_CV3_AttachSlot_C::STATIC_OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81757);

	UZ_Inventory_CV3_AttachSlot_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PointerEvent != nullptr)
		*PointerEvent = params.PointerEvent;
	if (Operation != nullptr)
		*Operation = params.Operation;

}


// Function Z_Inventory_CV3_AttachSlot.Z_Inventory_CV3_AttachSlot_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_Inventory_CV3_AttachSlot_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81755);

	UZ_Inventory_CV3_AttachSlot_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_CV3_AttachSlot.Z_Inventory_CV3_AttachSlot_C.MouseDrop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_CV3_AttachSlot_C::STATIC_MouseDrop()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81754);

	UZ_Inventory_CV3_AttachSlot_C_MouseDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_CV3_AttachSlot.Z_Inventory_CV3_AttachSlot_C.Draw
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Z_Loot                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_Inventory_CV3_AttachSlot_C::STATIC_Draw(const struct FZ_LootStr& Z_Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81752);

	UZ_Inventory_CV3_AttachSlot_C_Draw_Params params;
	params.Z_Loot = Z_Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_CV3_AttachSlot.Z_Inventory_CV3_AttachSlot_C.Root_MouseDrop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_CV3_AttachSlot_C::STATIC_Root_MouseDrop()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81751);

	UZ_Inventory_CV3_AttachSlot_C_Root_MouseDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_CV3_AttachSlot.Z_Inventory_CV3_AttachSlot_C.Clear
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_CV3_AttachSlot_C::STATIC_Clear()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81750);

	UZ_Inventory_CV3_AttachSlot_C_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_CV3_AttachSlot.Z_Inventory_CV3_AttachSlot_C.ExecuteUbergraph_Z_Inventory_CV3_AttachSlot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_Inventory_CV3_AttachSlot_C::STATIC_ExecuteUbergraph_Z_Inventory_CV3_AttachSlot(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81746);

	UZ_Inventory_CV3_AttachSlot_C_ExecuteUbergraph_Z_Inventory_CV3_AttachSlot_Params params;
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
