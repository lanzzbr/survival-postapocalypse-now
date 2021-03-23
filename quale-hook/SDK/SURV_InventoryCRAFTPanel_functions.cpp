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

// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.GenerateTable
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_InventoryCRAFTPanel_C::STATIC_GenerateTable()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81843);

	USURV_InventoryCRAFTPanel_C_GenerateTable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.SetAboutText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> CraftItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USURV_InventoryCRAFTPanel_C::STATIC_SetAboutText(TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> CraftItem)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81841);

	USURV_InventoryCRAFTPanel_C_SetAboutText_Params params;
	params.CraftItem = CraftItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.DrawSelected
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_InventoryCRAFTPanel_C::STATIC_DrawSelected()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81840);

	USURV_InventoryCRAFTPanel_C_DrawSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.CheckCraft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           NoSort                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USURV_InventoryCRAFTPanel_C::STATIC_CheckCraft(class AActor* Actor, bool NoSort)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81824);

	USURV_InventoryCRAFTPanel_C_CheckCraft_Params params;
	params.Actor = Actor;
	params.NoSort = NoSort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.GetText_1
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText USURV_InventoryCRAFTPanel_C::GetText_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81822);

	USURV_InventoryCRAFTPanel_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.Get_Button_Craft_bIsEnabled_1
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool USURV_InventoryCRAFTPanel_C::Get_Button_Craft_bIsEnabled_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81820);

	USURV_InventoryCRAFTPanel_C_Get_Button_Craft_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.Create CraftSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_InventoryCRAFTPanel_C::STATIC_Create_CraftSlots()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81819);

	USURV_InventoryCRAFTPanel_C_Create_CraftSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.AddSlotsToArray
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_InventoryCRAFTPanel_C::STATIC_AddSlotsToArray()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81816);

	USURV_InventoryCRAFTPanel_C_AddSlotsToArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USURV_InventoryCRAFTPanel_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81814);

	USURV_InventoryCRAFTPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.BndEvt__Button_Craft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_InventoryCRAFTPanel_C::STATIC_BndEvt__Button_Craft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81813);

	USURV_InventoryCRAFTPanel_C_BndEvt__Button_Craft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.BndEvt__Button_113_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_InventoryCRAFTPanel_C::STATIC_BndEvt__Button_113_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81812);

	USURV_InventoryCRAFTPanel_C_BndEvt__Button_113_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.RootDrawSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USURV_InventoryCRAFTPanel_C::STATIC_RootDrawSlots(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81810);

	USURV_InventoryCRAFTPanel_C_RootDrawSlots_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.RootCraft This
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USURV_InventoryCRAFTPanel_C::STATIC_RootCraft_This(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81808);

	USURV_InventoryCRAFTPanel_C_RootCraft_This_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_InventoryCRAFTPanel_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81807);

	USURV_InventoryCRAFTPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.RootShowMyCraft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_InventoryCRAFTPanel_C::STATIC_RootShowMyCraft()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81806);

	USURV_InventoryCRAFTPanel_C_RootShowMyCraft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.RootShowActorCraft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USURV_InventoryCRAFTPanel_C::STATIC_RootShowActorCraft(class AActor* Actor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81804);

	USURV_InventoryCRAFTPanel_C_RootShowActorCraft_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.RootUpdateCraftPanel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_InventoryCRAFTPanel_C::STATIC_RootUpdateCraftPanel()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81803);

	USURV_InventoryCRAFTPanel_C_RootUpdateCraftPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.OnCloseCraft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_InventoryCRAFTPanel_C::STATIC_OnCloseCraft()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81802);

	USURV_InventoryCRAFTPanel_C_OnCloseCraft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.ExecuteUbergraph_SURV_InventoryCRAFTPanel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USURV_InventoryCRAFTPanel_C::STATIC_ExecuteUbergraph_SURV_InventoryCRAFTPanel(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81800);

	USURV_InventoryCRAFTPanel_C_ExecuteUbergraph_SURV_InventoryCRAFTPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C.ClickClose_0__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USURV_InventoryCRAFTPanel_C::STATIC_ClickClose_0__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81799);

	USURV_InventoryCRAFTPanel_C_ClickClose_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
