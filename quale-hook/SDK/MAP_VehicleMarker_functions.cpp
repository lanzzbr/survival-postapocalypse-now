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

// Function MAP_VehicleMarker.MAP_VehicleMarker_C.GetColor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMAP_VehicleMarker_C::STATIC_GetColor(struct FLinearColor* Color)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95273);

	UMAP_VehicleMarker_C_GetColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function MAP_VehicleMarker.MAP_VehicleMarker_C.EnemyAnim
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_VehicleMarker_C::STATIC_EnemyAnim()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95272);

	UMAP_VehicleMarker_C_EnemyAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_VehicleMarker.MAP_VehicleMarker_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_VehicleMarker_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95271);

	UMAP_VehicleMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_VehicleMarker.MAP_VehicleMarker_C.SetBrushROOT
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UMAP_VehicleMarker_C::STATIC_SetBrushROOT(const struct FSlateBrush& Brush)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96919);

	UMAP_VehicleMarker_C_SetBrushROOT_Params params;
	params.Brush = Brush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_VehicleMarker.MAP_VehicleMarker_C.RootHideMarker
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_VehicleMarker_C::STATIC_RootHideMarker()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(97156);

	UMAP_VehicleMarker_C_RootHideMarker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_VehicleMarker.MAP_VehicleMarker_C.RootShowMarker
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_VehicleMarker_C::STATIC_RootShowMarker()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(97155);

	UMAP_VehicleMarker_C_RootShowMarker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_VehicleMarker.MAP_VehicleMarker_C.ShowEnemyAnim
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_VehicleMarker_C::STATIC_ShowEnemyAnim()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95270);

	UMAP_VehicleMarker_C_ShowEnemyAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_VehicleMarker.MAP_VehicleMarker_C.StopEnemyAnim
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_VehicleMarker_C::STATIC_StopEnemyAnim()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95269);

	UMAP_VehicleMarker_C_StopEnemyAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_VehicleMarker.MAP_VehicleMarker_C.ExecuteUbergraph_MAP_VehicleMarker
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMAP_VehicleMarker_C::STATIC_ExecuteUbergraph_MAP_VehicleMarker(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95244);

	UMAP_VehicleMarker_C_ExecuteUbergraph_MAP_VehicleMarker_Params params;
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
