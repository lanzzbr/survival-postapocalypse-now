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

// Function Inventory_SlotType_Equip.Inventory_SlotType_Equip_C.Draw
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Loot_name                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventory_SlotType_Equip_C::STATIC_Draw(const struct FText& Loot_name, const struct FText& Description, class UTexture2D* Texture)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103512);

	UInventory_SlotType_Equip_C_Draw_Params params;
	params.Loot_name = Loot_name;
	params.Description = Description;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_SlotType_Equip.Inventory_SlotType_Equip_C.SetAmmoInfo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UInventory_SlotType_Equip_C::STATIC_SetAmmoInfo(class UTexture2D* Texture, const struct FText& Name)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103518);

	UInventory_SlotType_Equip_C_SetAmmoInfo_Params params;
	params.Texture = Texture;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_SlotType_Equip.Inventory_SlotType_Equip_C.ExecuteUbergraph_Inventory_SlotType_Equip
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventory_SlotType_Equip_C::STATIC_ExecuteUbergraph_Inventory_SlotType_Equip(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(103503);

	UInventory_SlotType_Equip_C_ExecuteUbergraph_Inventory_SlotType_Equip_Params params;
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
