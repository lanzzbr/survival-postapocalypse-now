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

// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.SetAboutText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> CraftItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryCRAFTPanel_C::STATIC_SetAboutText(TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> CraftItem)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69657);

	UInventoryCRAFTPanel_C_SetAboutText_Params params;
	params.CraftItem = CraftItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.DrawSelected
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventoryCRAFTPanel_C::STATIC_DrawSelected()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69655);

	UInventoryCRAFTPanel_C_DrawSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.SortCraft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryCRAFTPanel_C::STATIC_SortCraft(class AActor* Actor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69653);

	UInventoryCRAFTPanel_C_SortCraft_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.GetText_1
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UInventoryCRAFTPanel_C::GetText_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69651);

	UInventoryCRAFTPanel_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.Get_Button_Craft_bIsEnabled_1
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UInventoryCRAFTPanel_C::Get_Button_Craft_bIsEnabled_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69649);

	UInventoryCRAFTPanel_C_Get_Button_Craft_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.AddRootToChild
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventoryCRAFTPanel_C::STATIC_AddRootToChild()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69647);

	UInventoryCRAFTPanel_C_AddRootToChild_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.Create CraftSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventoryCRAFTPanel_C::STATIC_Create_CraftSlots()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69646);

	UInventoryCRAFTPanel_C_Create_CraftSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.AddSlotsToArray
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventoryCRAFTPanel_C::STATIC_AddSlotsToArray()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69637);

	UInventoryCRAFTPanel_C_AddSlotsToArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventoryCRAFTPanel_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69636);

	UInventoryCRAFTPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryCRAFTPanel_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69634);

	UInventoryCRAFTPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.DrawSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryCRAFTPanel_C::STATIC_DrawSlots(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69632);

	UInventoryCRAFTPanel_C_DrawSlots_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.BndEvt__Button_Craft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventoryCRAFTPanel_C::STATIC_BndEvt__Button_Craft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69631);

	UInventoryCRAFTPanel_C_BndEvt__Button_Craft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.ShowActorCraft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryCRAFTPanel_C::STATIC_ShowActorCraft(class AActor* Actor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69629);

	UInventoryCRAFTPanel_C_ShowActorCraft_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.ShowMyCraft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventoryCRAFTPanel_C::STATIC_ShowMyCraft()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69628);

	UInventoryCRAFTPanel_C_ShowMyCraft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.Craft This
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryCRAFTPanel_C::STATIC_Craft_This(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69626);

	UInventoryCRAFTPanel_C_Craft_This_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.Reset
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventoryCRAFTPanel_C::STATIC_Reset()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69625);

	UInventoryCRAFTPanel_C_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.UpdateCraftPanel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInventoryCRAFTPanel_C::STATIC_UpdateCraftPanel()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69624);

	UInventoryCRAFTPanel_C_UpdateCraftPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryCRAFTPanel.InventoryCRAFTPanel_C.ExecuteUbergraph_InventoryCRAFTPanel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryCRAFTPanel_C::STATIC_ExecuteUbergraph_InventoryCRAFTPanel(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(69622);

	UInventoryCRAFTPanel_C_ExecuteUbergraph_InventoryCRAFTPanel_Params params;
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
