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

// Function Z_Inventory_AttachRoot.Z_Inventory_AttachRoot_C.Clear
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_AttachRoot_C::STATIC_Clear()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(42137);

	UZ_Inventory_AttachRoot_C_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_AttachRoot.Z_Inventory_AttachRoot_C.Draw
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Z_Loot                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_Inventory_AttachRoot_C::STATIC_Draw(const struct FZ_LootStr& Z_Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(42138);

	UZ_Inventory_AttachRoot_C_Draw_Params params;
	params.Z_Loot = Z_Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_AttachRoot.Z_Inventory_AttachRoot_C.SetParametrs
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsContainer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_Inventory_AttachRoot_C::STATIC_SetParametrs(bool IsContainer, int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(42135);

	UZ_Inventory_AttachRoot_C_SetParametrs_Params params;
	params.IsContainer = IsContainer;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_AttachRoot.Z_Inventory_AttachRoot_C.Root_MouseDrop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_Inventory_AttachRoot_C::STATIC_Root_MouseDrop()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(42134);

	UZ_Inventory_AttachRoot_C_Root_MouseDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Inventory_AttachRoot.Z_Inventory_AttachRoot_C.ExecuteUbergraph_Z_Inventory_AttachRoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_Inventory_AttachRoot_C::STATIC_ExecuteUbergraph_Z_Inventory_AttachRoot(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(42132);

	UZ_Inventory_AttachRoot_C_ExecuteUbergraph_Z_Inventory_AttachRoot_Params params;
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
