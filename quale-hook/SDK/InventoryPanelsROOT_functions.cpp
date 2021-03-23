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

// Function InventoryPanelsROOT.InventoryPanelsROOT_C.RemoveLootByIndexes
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<int>                    IndexesToRemove                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UInventoryPanelsROOT_C::STATIC_RemoveLootByIndexes(TArray<int>* IndexesToRemove)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(38428);

	UInventoryPanelsROOT_C_RemoveLootByIndexes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IndexesToRemove != nullptr)
		*IndexesToRemove = params.IndexesToRemove;

}


// Function InventoryPanelsROOT.InventoryPanelsROOT_C.GetSelectedItems
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<int>                    SelectedItems                  (Parm, OutParm, ZeroConstructor)
void UInventoryPanelsROOT_C::STATIC_GetSelectedItems(TArray<int>* SelectedItems)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(38425);

	UInventoryPanelsROOT_C_GetSelectedItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SelectedItems != nullptr)
		*SelectedItems = params.SelectedItems;

}


// Function InventoryPanelsROOT.InventoryPanelsROOT_C.DrawSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryPanelsROOT_C::STATIC_DrawSlots(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(38421);

	UInventoryPanelsROOT_C_DrawSlots_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryPanelsROOT.InventoryPanelsROOT_C.GetAllLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FCv2_LootCargoStructure> Loot                           (Parm, OutParm, ZeroConstructor)
void UInventoryPanelsROOT_C::STATIC_GetAllLoot(TArray<struct FCv2_LootCargoStructure>* Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(38418);

	UInventoryPanelsROOT_C_GetAllLoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loot != nullptr)
		*Loot = params.Loot;

}


// Function InventoryPanelsROOT.InventoryPanelsROOT_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventoryPanelsROOT_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(38417);

	UInventoryPanelsROOT_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryPanelsROOT.InventoryPanelsROOT_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryPanelsROOT_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(38415);

	UInventoryPanelsROOT_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryPanelsROOT.InventoryPanelsROOT_C.ExecuteUbergraph_InventoryPanelsROOT
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryPanelsROOT_C::STATIC_ExecuteUbergraph_InventoryPanelsROOT(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(38413);

	UInventoryPanelsROOT_C_ExecuteUbergraph_InventoryPanelsROOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryPanelsROOT.InventoryPanelsROOT_C.DrawCards__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FCv2_LootCargoStructure> InventoryLoot                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UInventoryPanelsROOT_C::STATIC_DrawCards__DelegateSignature(TArray<struct FCv2_LootCargoStructure>* InventoryLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(38410);

	UInventoryPanelsROOT_C_DrawCards__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InventoryLoot != nullptr)
		*InventoryLoot = params.InventoryLoot;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
