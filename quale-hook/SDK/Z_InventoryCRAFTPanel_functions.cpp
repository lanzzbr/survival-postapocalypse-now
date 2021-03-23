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

// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.GenerateTable
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryCRAFTPanel_C::STATIC_GenerateTable()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81988);

	UZ_InventoryCRAFTPanel_C_GenerateTable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.SetAboutText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> CraftItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryCRAFTPanel_C::STATIC_SetAboutText(TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> CraftItem)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81986);

	UZ_InventoryCRAFTPanel_C_SetAboutText_Params params;
	params.CraftItem = CraftItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.DrawSelected
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryCRAFTPanel_C::STATIC_DrawSelected()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81984);

	UZ_InventoryCRAFTPanel_C_DrawSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.CheckCraft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           NoSort                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryCRAFTPanel_C::STATIC_CheckCraft(class AActor* Actor, bool NoSort)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81964);

	UZ_InventoryCRAFTPanel_C_CheckCraft_Params params;
	params.Actor = Actor;
	params.NoSort = NoSort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.GetText_1
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UZ_InventoryCRAFTPanel_C::GetText_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81962);

	UZ_InventoryCRAFTPanel_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.Get_Button_Craft_bIsEnabled_1
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UZ_InventoryCRAFTPanel_C::Get_Button_Craft_bIsEnabled_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81960);

	UZ_InventoryCRAFTPanel_C_Get_Button_Craft_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.AddRootToChild
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryCRAFTPanel_C::STATIC_AddRootToChild()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81958);

	UZ_InventoryCRAFTPanel_C_AddRootToChild_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.Create CraftSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryCRAFTPanel_C::STATIC_Create_CraftSlots()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81957);

	UZ_InventoryCRAFTPanel_C_Create_CraftSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.AddSlotsToArray
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryCRAFTPanel_C::STATIC_AddSlotsToArray()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81954);

	UZ_InventoryCRAFTPanel_C_AddSlotsToArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryCRAFTPanel_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81953);

	UZ_InventoryCRAFTPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryCRAFTPanel_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81951);

	UZ_InventoryCRAFTPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.DrawSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryCRAFTPanel_C::STATIC_DrawSlots(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81949);

	UZ_InventoryCRAFTPanel_C_DrawSlots_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.BndEvt__Button_Craft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryCRAFTPanel_C::STATIC_BndEvt__Button_Craft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81948);

	UZ_InventoryCRAFTPanel_C_BndEvt__Button_Craft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.ShowActorCraft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryCRAFTPanel_C::STATIC_ShowActorCraft(class AActor* Actor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81946);

	UZ_InventoryCRAFTPanel_C_ShowActorCraft_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.ShowMyCraft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryCRAFTPanel_C::STATIC_ShowMyCraft()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81945);

	UZ_InventoryCRAFTPanel_C_ShowMyCraft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.Craft This
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryCRAFTPanel_C::STATIC_Craft_This(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81943);

	UZ_InventoryCRAFTPanel_C_Craft_This_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.Reset
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryCRAFTPanel_C::STATIC_Reset()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81942);

	UZ_InventoryCRAFTPanel_C_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.UpdateCraftPanel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryCRAFTPanel_C::STATIC_UpdateCraftPanel()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81941);

	UZ_InventoryCRAFTPanel_C_UpdateCraftPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.BndEvt__Button_113_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryCRAFTPanel_C::STATIC_BndEvt__Button_113_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81940);

	UZ_InventoryCRAFTPanel_C_BndEvt__Button_113_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.OnCloseCraft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryCRAFTPanel_C::STATIC_OnCloseCraft()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81939);

	UZ_InventoryCRAFTPanel_C_OnCloseCraft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.ExecuteUbergraph_Z_InventoryCRAFTPanel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryCRAFTPanel_C::STATIC_ExecuteUbergraph_Z_InventoryCRAFTPanel(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81937);

	UZ_InventoryCRAFTPanel_C_ExecuteUbergraph_Z_InventoryCRAFTPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C.ClickClose__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryCRAFTPanel_C::STATIC_ClickClose__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81936);

	UZ_InventoryCRAFTPanel_C_ClickClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
