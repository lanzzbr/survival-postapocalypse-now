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

// Function InfoWeaponSlider.InfoWeaponSlider_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfoWeaponSlider_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(42012);

	UInfoWeaponSlider_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoWeaponSlider.InfoWeaponSlider_C.ShowSlider
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      ZLootArray                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UInfoWeaponSlider_C::STATIC_ShowSlider(TArray<struct FZ_LootStr> ZLootArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(41996);

	UInfoWeaponSlider_C_ShowSlider_Params params;
	params.ZLootArray = ZLootArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoWeaponSlider.InfoWeaponSlider_C.SelectItem
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfoWeaponSlider_C::STATIC_SelectItem(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(41994);

	UInfoWeaponSlider_C_SelectItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoWeaponSlider.InfoWeaponSlider_C.HideSlider
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfoWeaponSlider_C::STATIC_HideSlider()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(41993);

	UInfoWeaponSlider_C_HideSlider_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoWeaponSlider.InfoWeaponSlider_C.ExecuteUbergraph_InfoWeaponSlider
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfoWeaponSlider_C::STATIC_ExecuteUbergraph_InfoWeaponSlider(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(41987);

	UInfoWeaponSlider_C_ExecuteUbergraph_InfoWeaponSlider_Params params;
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
