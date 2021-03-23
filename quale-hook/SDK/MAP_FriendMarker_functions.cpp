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

// Function MAP_FriendMarker.MAP_FriendMarker_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_FriendMarker_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95552);

	UMAP_FriendMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_FriendMarker.MAP_FriendMarker_C.SetBrushROOT
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UMAP_FriendMarker_C::STATIC_SetBrushROOT(const struct FSlateBrush& Brush)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96984);

	UMAP_FriendMarker_C_SetBrushROOT_Params params;
	params.Brush = Brush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_FriendMarker.MAP_FriendMarker_C.SetBestFriendStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Yes                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMAP_FriendMarker_C::STATIC_SetBestFriendStyle(bool Yes)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96982);

	UMAP_FriendMarker_C_SetBestFriendStyle_Params params;
	params.Yes = Yes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_FriendMarker.MAP_FriendMarker_C.ExecuteUbergraph_MAP_FriendMarker
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMAP_FriendMarker_C::STATIC_ExecuteUbergraph_MAP_FriendMarker(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95547);

	UMAP_FriendMarker_C_ExecuteUbergraph_MAP_FriendMarker_Params params;
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
