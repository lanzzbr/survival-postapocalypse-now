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

// Function MapMarkerROOT.MapMarkerROOT_C.RootShowMarker
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMapMarkerROOT_C::STATIC_RootShowMarker()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(97145);

	UMapMarkerROOT_C_RootShowMarker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapMarkerROOT.MapMarkerROOT_C.RootHideMarker
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMapMarkerROOT_C::STATIC_RootHideMarker()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(97144);

	UMapMarkerROOT_C_RootHideMarker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapMarkerROOT.MapMarkerROOT_C.CheckCarSide
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Destroy                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMapMarkerROOT_C::STATIC_CheckCarSide(bool* Destroy)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95913);

	UMapMarkerROOT_C_CheckCarSide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destroy != nullptr)
		*Destroy = params.Destroy;

}


// Function MapMarkerROOT.MapMarkerROOT_C.SetBestFriendStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Yes                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMapMarkerROOT_C::STATIC_SetBestFriendStyle(bool Yes)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95911);

	UMapMarkerROOT_C_SetBestFriendStyle_Params params;
	params.Yes = Yes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapMarkerROOT.MapMarkerROOT_C.SetUnselectedStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMapMarkerROOT_C::STATIC_SetUnselectedStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95910);

	UMapMarkerROOT_C_SetUnselectedStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapMarkerROOT.MapMarkerROOT_C.SetSelectedStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMapMarkerROOT_C::STATIC_SetSelectedStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95909);

	UMapMarkerROOT_C_SetSelectedStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapMarkerROOT.MapMarkerROOT_C.CheckEnemyOrFriend
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsFriend                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMapMarkerROOT_C::STATIC_CheckEnemyOrFriend(bool IsFriend, bool* Ok)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95907);

	UMapMarkerROOT_C_CheckEnemyOrFriend_Params params;
	params.IsFriend = IsFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ok != nullptr)
		*Ok = params.Ok;

}


// Function MapMarkerROOT.MapMarkerROOT_C.SetBrushROOT
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UMapMarkerROOT_C::STATIC_SetBrushROOT(const struct FSlateBrush& Brush)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95905);

	UMapMarkerROOT_C_SetBrushROOT_Params params;
	params.Brush = Brush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapMarkerROOT.MapMarkerROOT_C.CheckActorValid
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMapMarkerROOT_C::STATIC_CheckActorValid()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95903);

	UMapMarkerROOT_C_CheckActorValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapMarkerROOT.MapMarkerROOT_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMapMarkerROOT_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95203);

	UMapMarkerROOT_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapMarkerROOT.MapMarkerROOT_C.RemoveMe
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMapMarkerROOT_C::STATIC_RemoveMe()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95202);

	UMapMarkerROOT_C_RemoveMe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapMarkerROOT.MapMarkerROOT_C.ExecuteUbergraph_MapMarkerROOT
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMapMarkerROOT_C::STATIC_ExecuteUbergraph_MapMarkerROOT(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95200);

	UMapMarkerROOT_C_ExecuteUbergraph_MapMarkerROOT_Params params;
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
