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

// Function Z_InventoryCraftResourseSlotROOT.Z_InventoryCraftResourseSlotROOT_C.RootClearSlot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryCraftResourseSlotROOT_C::STATIC_RootClearSlot()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(46513);

	UZ_InventoryCraftResourseSlotROOT_C_RootClearSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCraftResourseSlotROOT.Z_InventoryCraftResourseSlotROOT_C.RootDrawSlot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   LootName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryCraftResourseSlotROOT_C::STATIC_RootDrawSlot(const struct FName& LootName, int Count)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(46516);

	UZ_InventoryCraftResourseSlotROOT_C_RootDrawSlot_Params params;
	params.LootName = LootName;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCraftResourseSlotROOT.Z_InventoryCraftResourseSlotROOT_C.ExecuteUbergraph_Z_InventoryCraftResourseSlotROOT
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryCraftResourseSlotROOT_C::STATIC_ExecuteUbergraph_Z_InventoryCraftResourseSlotROOT(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(46500);

	UZ_InventoryCraftResourseSlotROOT_C_ExecuteUbergraph_Z_InventoryCraftResourseSlotROOT_Params params;
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
