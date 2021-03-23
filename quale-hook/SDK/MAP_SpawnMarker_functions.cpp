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

// Function MAP_SpawnMarker.MAP_SpawnMarker_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_SpawnMarker_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95389);

	UMAP_SpawnMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_SpawnMarker.MAP_SpawnMarker_C.SetBrushROOT
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UMAP_SpawnMarker_C::STATIC_SetBrushROOT(const struct FSlateBrush& Brush)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96970);

	UMAP_SpawnMarker_C_SetBrushROOT_Params params;
	params.Brush = Brush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_SpawnMarker.MAP_SpawnMarker_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_SpawnMarker_C::STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95388);

	UMAP_SpawnMarker_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_SpawnMarker.MAP_SpawnMarker_C.SetSelectedStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_SpawnMarker_C::STATIC_SetSelectedStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96972);

	UMAP_SpawnMarker_C_SetSelectedStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_SpawnMarker.MAP_SpawnMarker_C.SetUnselectedStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_SpawnMarker_C::STATIC_SetUnselectedStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96973);

	UMAP_SpawnMarker_C_SetUnselectedStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_SpawnMarker.MAP_SpawnMarker_C.ExecuteUbergraph_MAP_SpawnMarker
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMAP_SpawnMarker_C::STATIC_ExecuteUbergraph_MAP_SpawnMarker(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95383);

	UMAP_SpawnMarker_C_ExecuteUbergraph_MAP_SpawnMarker_Params params;
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
