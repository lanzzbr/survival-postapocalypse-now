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

// Function InfoSoltRoot.InfoSoltRoot_C.SetPreviosIco
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfoSoltRoot_C::STATIC_SetPreviosIco(const struct FName& RowName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80035);

	UInfoSoltRoot_C_SetPreviosIco_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoSoltRoot.InfoSoltRoot_C.SetElementVisibility
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInfoSoltRoot_C::STATIC_SetElementVisibility(bool Key, bool Icon, bool Count)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80026);

	UInfoSoltRoot_C_SetElementVisibility_Params params;
	params.Key = Key;
	params.Icon = Icon;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoSoltRoot.InfoSoltRoot_C.ClearSlotRoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfoSoltRoot_C::STATIC_ClearSlotRoot()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80025);

	UInfoSoltRoot_C_ClearSlotRoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoSoltRoot.InfoSoltRoot_C.DrawSlotsRoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            LootIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfoSoltRoot_C::STATIC_DrawSlotsRoot(int LootIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80019);

	UInfoSoltRoot_C_DrawSlotsRoot_Params params;
	params.LootIndex = LootIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoSoltRoot.InfoSoltRoot_C.SetIcon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfoSoltRoot_C::STATIC_SetIcon(class UTexture2D* Icon)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80017);

	UInfoSoltRoot_C_SetIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoSoltRoot.InfoSoltRoot_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfoSoltRoot_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80016);

	UInfoSoltRoot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoSoltRoot.InfoSoltRoot_C.ExecuteUbergraph_InfoSoltRoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfoSoltRoot_C::STATIC_ExecuteUbergraph_InfoSoltRoot(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(80014);

	UInfoSoltRoot_C_ExecuteUbergraph_InfoSoltRoot_Params params;
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
