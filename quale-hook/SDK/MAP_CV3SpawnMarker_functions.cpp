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

// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.CheckState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_CV3SpawnMarker_C::STATIC_CheckState()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95830);

	UMAP_CV3SpawnMarker_C_CheckState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.OnMouseButtonDown
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UMAP_CV3SpawnMarker_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95828);

	UMAP_CV3SpawnMarker_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_CV3SpawnMarker_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95827);

	UMAP_CV3SpawnMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMAP_CV3SpawnMarker_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95825);

	UMAP_CV3SpawnMarker_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_CV3SpawnMarker_C::STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95824);

	UMAP_CV3SpawnMarker_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.DrawTown
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   TownName                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UMAP_CV3SpawnMarker_C::STATIC_DrawTown(const struct FText& TownName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95822);

	UMAP_CV3SpawnMarker_C_DrawTown_Params params;
	params.TownName = TownName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.SetMiniMapStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_CV3SpawnMarker_C::STATIC_SetMiniMapStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95821);

	UMAP_CV3SpawnMarker_C_SetMiniMapStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.SetHovered
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Hovered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMAP_CV3SpawnMarker_C::STATIC_SetHovered(bool Hovered)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95819);

	UMAP_CV3SpawnMarker_C_SetHovered_Params params;
	params.Hovered = Hovered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.OnMouseEnter
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UMAP_CV3SpawnMarker_C::STATIC_OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95817);

	UMAP_CV3SpawnMarker_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.OnMouseLeave
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UMAP_CV3SpawnMarker_C::STATIC_OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95815);

	UMAP_CV3SpawnMarker_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.MouseDown
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_CV3SpawnMarker_C::STATIC_MouseDown()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95814);

	UMAP_CV3SpawnMarker_C_MouseDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.SelectStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_CV3SpawnMarker_C::STATIC_SelectStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95813);

	UMAP_CV3SpawnMarker_C_SelectStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.UnSelectStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_CV3SpawnMarker_C::STATIC_UnSelectStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95812);

	UMAP_CV3SpawnMarker_C_UnSelectStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.HoverStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_CV3SpawnMarker_C::STATIC_HoverStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95811);

	UMAP_CV3SpawnMarker_C_HoverStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.SetUnhoverStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_CV3SpawnMarker_C::STATIC_SetUnhoverStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95810);

	UMAP_CV3SpawnMarker_C_SetUnhoverStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.SetBlockStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_CV3SpawnMarker_C::STATIC_SetBlockStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95809);

	UMAP_CV3SpawnMarker_C_SetBlockStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.SetUnblock
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_CV3SpawnMarker_C::STATIC_SetUnblock()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95808);

	UMAP_CV3SpawnMarker_C_SetUnblock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.RootShowMarker
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_CV3SpawnMarker_C::STATIC_RootShowMarker()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(97158);

	UMAP_CV3SpawnMarker_C_RootShowMarker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.RootHideMarker
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_CV3SpawnMarker_C::STATIC_RootHideMarker()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(97157);

	UMAP_CV3SpawnMarker_C_RootHideMarker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.IsBlinked
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Blinked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMAP_CV3SpawnMarker_C::STATIC_IsBlinked(bool Blinked)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95806);

	UMAP_CV3SpawnMarker_C_IsBlinked_Params params;
	params.Blinked = Blinked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.BlinkTent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsBlink                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMAP_CV3SpawnMarker_C::STATIC_BlinkTent(bool IsBlink)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95804);

	UMAP_CV3SpawnMarker_C_BlinkTent_Params params;
	params.IsBlink = IsBlink;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.Destroy
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMAP_CV3SpawnMarker_C::STATIC_Destroy()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95803);

	UMAP_CV3SpawnMarker_C_Destroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_CV3SpawnMarker.MAP_CV3SpawnMarker_C.ExecuteUbergraph_MAP_CV3SpawnMarker
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMAP_CV3SpawnMarker_C::STATIC_ExecuteUbergraph_MAP_CV3SpawnMarker(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95797);

	UMAP_CV3SpawnMarker_C_ExecuteUbergraph_MAP_CV3SpawnMarker_Params params;
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
