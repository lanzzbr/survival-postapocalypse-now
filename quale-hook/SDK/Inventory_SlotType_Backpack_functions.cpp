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

// Function Inventory_SlotType_Backpack.Inventory_SlotType_Backpack_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventory_SlotType_Backpack_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103548);

	UInventory_SlotType_Backpack_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_SlotType_Backpack.Inventory_SlotType_Backpack_C.Draw
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Loot_name                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventory_SlotType_Backpack_C::STATIC_Draw(const struct FText& Loot_name, const struct FText& Description, class UTexture2D* Texture, const struct FName& Name)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103553);

	UInventory_SlotType_Backpack_C_Draw_Params params;
	params.Loot_name = Loot_name;
	params.Description = Description;
	params.Texture = Texture;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_SlotType_Backpack.Inventory_SlotType_Backpack_C.ShowHint
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UInventory_SlotType_Backpack_C::STATIC_ShowHint(const struct FText& InText)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103560);

	UInventory_SlotType_Backpack_C_ShowHint_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_SlotType_Backpack.Inventory_SlotType_Backpack_C.HideHint
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventory_SlotType_Backpack_C::STATIC_HideHint()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103558);

	UInventory_SlotType_Backpack_C_HideHint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_SlotType_Backpack.Inventory_SlotType_Backpack_C.ExecuteUbergraph_Inventory_SlotType_Backpack
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventory_SlotType_Backpack_C::STATIC_ExecuteUbergraph_Inventory_SlotType_Backpack(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103540);

	UInventory_SlotType_Backpack_C_ExecuteUbergraph_Inventory_SlotType_Backpack_Params params;
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
