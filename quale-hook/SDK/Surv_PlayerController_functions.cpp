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

// Function Surv_PlayerController.Surv_PlayerController_C.ZL_CONTROLLER_GetSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_SlotStr>      Slots                          (Parm, OutParm, ZeroConstructor)
void ASurv_PlayerController_C::STATIC_ZL_CONTROLLER_GetSlots(TArray<struct FZ_SlotStr>* Slots)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43925);

	ASurv_PlayerController_C_ZL_CONTROLLER_GetSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Slots != nullptr)
		*Slots = params.Slots;

}


// Function Surv_PlayerController.Surv_PlayerController_C.OnRep_PlayerInfoIsLoading
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_OnRep_PlayerInfoIsLoading()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43923);

	ASurv_PlayerController_C_OnRep_PlayerInfoIsLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.GiveAward
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_GiveAward()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43921);

	ASurv_PlayerController_C_GiveAward_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.SetTimeMark
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_SetTimeMark()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43917);

	ASurv_PlayerController_C_SetTimeMark_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ResetAwards
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_ResetAwards()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43915);

	ASurv_PlayerController_C_ResetAwards_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.CheckDalyAwards
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           NeedSave                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurv_PlayerController_C::STATIC_CheckDalyAwards(bool* NeedSave)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43913);

	ASurv_PlayerController_C_CheckDalyAwards_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NeedSave != nullptr)
		*NeedSave = params.NeedSave;

}


// Function Surv_PlayerController.Surv_PlayerController_C.GetRealMyDay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_GetRealMyDay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43905);

	ASurv_PlayerController_C_GetRealMyDay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.CheckIsValidSaveState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_CheckIsValidSaveState()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43904);

	ASurv_PlayerController_C_CheckIsValidSaveState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.UpdateSaveState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_UpdateSaveState()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43903);

	ASurv_PlayerController_C_UpdateSaveState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ReturnSaveState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct Fsurv_2019_FieldsStructure surv_2019_FieldsStructure      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void ASurv_PlayerController_C::STATIC_ReturnSaveState(struct Fsurv_2019_FieldsStructure* surv_2019_FieldsStructure)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43901);

	ASurv_PlayerController_C_ReturnSaveState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (surv_2019_FieldsStructure != nullptr)
		*surv_2019_FieldsStructure = params.surv_2019_FieldsStructure;

}


// Function Surv_PlayerController.Surv_PlayerController_C.CreateMenuSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_CreateMenuSlots()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43875);

	ASurv_PlayerController_C_CreateMenuSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43874);

	ASurv_PlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.OnFailure_B04AF70C4F0D83150985F9BE89646F01
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_OnFailure_B04AF70C4F0D83150985F9BE89646F01()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43873);

	ASurv_PlayerController_C_OnFailure_B04AF70C4F0D83150985F9BE89646F01_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.OnSuccess_B04AF70C4F0D83150985F9BE89646F01
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_OnSuccess_B04AF70C4F0D83150985F9BE89646F01()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43872);

	ASurv_PlayerController_C_OnSuccess_B04AF70C4F0D83150985F9BE89646F01_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.OnFailure_00DBCDFB49EE95F7290527A8A67DFFC6
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_OnFailure_00DBCDFB49EE95F7290527A8A67DFFC6()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43871);

	ASurv_PlayerController_C_OnFailure_00DBCDFB49EE95F7290527A8A67DFFC6_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.OnSuccess_00DBCDFB49EE95F7290527A8A67DFFC6
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_OnSuccess_00DBCDFB49EE95F7290527A8A67DFFC6()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43870);

	ASurv_PlayerController_C_OnSuccess_00DBCDFB49EE95F7290527A8A67DFFC6_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.OnFailure_3596E7F2462CC8F51AADFFBC1BED8DE6
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_OnFailure_3596E7F2462CC8F51AADFFBC1BED8DE6()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43869);

	ASurv_PlayerController_C_OnFailure_3596E7F2462CC8F51AADFFBC1BED8DE6_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.OnSuccess_3596E7F2462CC8F51AADFFBC1BED8DE6
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_OnSuccess_3596E7F2462CC8F51AADFFBC1BED8DE6()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43868);

	ASurv_PlayerController_C_OnSuccess_3596E7F2462CC8F51AADFFBC1BED8DE6_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.GetDBActorData
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_GetDBActorData()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43867);

	ASurv_PlayerController_C_GetDBActorData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.SaveConnectSession
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBlueprintSessionResult selectSession                  (BlueprintVisible, BlueprintReadOnly, Parm)
void ASurv_PlayerController_C::STATIC_SaveConnectSession(const struct FBlueprintSessionResult& selectSession)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43865);

	ASurv_PlayerController_C_SaveConnectSession_Params params;
	params.selectSession = selectSession;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ClientDestroySession
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_ClientDestroySession()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43864);

	ASurv_PlayerController_C_ClientDestroySession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.CLIENT_Show_day_Award
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Day                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WinIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShowAwardOverload              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurv_PlayerController_C::STATIC_CLIENT_Show_day_Award(int Day, int WinIndex, bool ShowAwardOverload)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43862);

	ASurv_PlayerController_C_CLIENT_Show_day_Award_Params params;
	params.Day = Day;
	params.WinIndex = WinIndex;
	params.ShowAwardOverload = ShowAwardOverload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.SERVER_Chaek_7Days_Stat
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_SERVER_Chaek_7Days_Stat()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43861);

	ASurv_PlayerController_C_SERVER_Chaek_7Days_Stat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_ConstructMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_SlotStr>      Slots                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ASurv_PlayerController_C::STATIC_ZL_GUI_ConstructMenu(TArray<struct FZ_SlotStr>* Slots)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43858);

	ASurv_PlayerController_C_ZL_GUI_ConstructMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Slots != nullptr)
		*Slots = params.Slots;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_Update
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      Inventori                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FZ_LootStr>      Container                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsOnFloorMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurv_PlayerController_C::STATIC_ZL_GUI_Update(TArray<struct FZ_LootStr>* Inventori, TArray<struct FZ_LootStr>* Container, bool IsOnFloorMode)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43855);

	ASurv_PlayerController_C_ZL_GUI_Update_Params params;
	params.IsOnFloorMode = IsOnFloorMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Inventori != nullptr)
		*Inventori = params.Inventori;
	if (Container != nullptr)
		*Container = params.Container;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_ShowInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_ZL_GUI_ShowInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43854);

	ASurv_PlayerController_C_ZL_GUI_ShowInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.SERVER_UpdateBase
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_SERVER_UpdateBase()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43853);

	ASurv_PlayerController_C_SERVER_UpdateBase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_HideInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_ZL_GUI_HideInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43852);

	ASurv_PlayerController_C_ZL_GUI_HideInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_Construkt_Container
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      ContainerInventory             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FZ_ContainerInfo        ContInform                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurv_PlayerController_C::STATIC_ZL_GUI_Construkt_Container(TArray<struct FZ_LootStr>* ContainerInventory, const struct FZ_ContainerInfo& ContInform)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43849);

	ASurv_PlayerController_C_ZL_GUI_Construkt_Container_Params params;
	params.ContInform = ContInform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ContainerInventory != nullptr)
		*ContainerInventory = params.ContainerInventory;

}


// Function Surv_PlayerController.Surv_PlayerController_C.GET_INFORMATION_COMPLITE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_GET_INFORMATION_COMPLITE()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43848);

	ASurv_PlayerController_C_GET_INFORMATION_COMPLITE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ConnectToSession
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBlueprintSessionResult SearchResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ASurv_PlayerController_C::STATIC_ConnectToSession(const struct FBlueprintSessionResult& SearchResult)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43846);

	ASurv_PlayerController_C_ConnectToSession_Params params;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.INI_MenuPawns
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_INI_MenuPawns()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43845);

	ASurv_PlayerController_C_INI_MenuPawns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.CHANGE_MODE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Classical                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurv_PlayerController_C::STATIC_CHANGE_MODE(bool Classical)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43843);

	ASurv_PlayerController_C_CHANGE_MODE_Params params;
	params.Classical = Classical;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.SetInventoryCharacterLocation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           isClassic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurv_PlayerController_C::STATIC_SetInventoryCharacterLocation(bool isClassic)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43841);

	ASurv_PlayerController_C_SetInventoryCharacterLocation_Params params;
	params.isClassic = isClassic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.SetDefaultPawnTransform
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FTransform              Transf                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          FieldOfView                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurv_PlayerController_C::STATIC_SetDefaultPawnTransform(const struct FTransform& Transf, float FieldOfView)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43839);

	ASurv_PlayerController_C_SetDefaultPawnTransform_Params params;
	params.Transf = Transf;
	params.FieldOfView = FieldOfView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43838);

	ASurv_PlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_InventoryRespawnMode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_ZL_GUI_InventoryRespawnMode()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43837);

	ASurv_PlayerController_C_ZL_GUI_InventoryRespawnMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_Overload
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          OverloadMass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurv_PlayerController_C::STATIC_ZL_GUI_Overload(float OverloadMass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43835);

	ASurv_PlayerController_C_ZL_GUI_Overload_Params params;
	params.OverloadMass = OverloadMass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ZL_CHARACTER_UNAttach(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurv_PlayerController_C::STATIC_ZL_CHARACTER_UNAttach_Server_(const struct FName& Weapon)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43833);

	ASurv_PlayerController_C_ZL_CHARACTER_UNAttach_Server__Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_DrawLootNear
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ASurv_PlayerController_C::STATIC_ZL_GUI_DrawLootNear(TArray<struct FZ_LootStr>* Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43830);

	ASurv_PlayerController_C_ZL_GUI_DrawLootNear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loot != nullptr)
		*Loot = params.Loot;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ZL_CHARACTER_AttachToWeapon(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes> Scopes                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer> Silencer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurv_PlayerController_C::STATIC_ZL_CHARACTER_AttachToWeapon_Server_(TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes> Scopes, TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer> Silencer, const struct FName& Weapon)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43828);

	ASurv_PlayerController_C_ZL_CHARACTER_AttachToWeapon_Server__Params params;
	params.Scopes = Scopes;
	params.Silencer = Silencer;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_SLOT_Unhovered
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_ZL_GUI_SLOT_Unhovered()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43827);

	ASurv_PlayerController_C_ZL_GUI_SLOT_Unhovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_SLOT_Hovered
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurv_PlayerController_C::STATIC_ZL_GUI_SLOT_Hovered(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43825);

	ASurv_PlayerController_C_ZL_GUI_SLOT_Hovered_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ZL_CHARACTER_Unequip(Serever)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurv_PlayerController_C::STATIC_ZL_CHARACTER_Unequip_Serever_(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43823);

	ASurv_PlayerController_C_ZL_CHARACTER_Unequip_Serever__Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ZL_CHARACTER_USEThis(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurv_PlayerController_C::STATIC_ZL_CHARACTER_USEThis_Server_(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43821);

	ASurv_PlayerController_C_ZL_CHARACTER_USEThis_Server__Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ZL_CHARACTER_DropThis(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              LootStr                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurv_PlayerController_C::STATIC_ZL_CHARACTER_DropThis_Server_(const struct FZ_LootStr& LootStr)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43819);

	ASurv_PlayerController_C_ZL_CHARACTER_DropThis_Server__Params params;
	params.LootStr = LootStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ZL_CHARACTER_EquipThis(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurv_PlayerController_C::STATIC_ZL_CHARACTER_EquipThis_Server_(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43817);

	ASurv_PlayerController_C_ZL_CHARACTER_EquipThis_Server__Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_DND_Drop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_ZL_GUI_DND_Drop()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43816);

	ASurv_PlayerController_C_ZL_GUI_DND_Drop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_DnD_Drag
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UUserWidget*             DragSlot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurv_PlayerController_C::STATIC_ZL_GUI_DnD_Drag(class UUserWidget* DragSlot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43814);

	ASurv_PlayerController_C_ZL_GUI_DnD_Drag_Params params;
	params.DragSlot = DragSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_ClearContainer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_PlayerController_C::STATIC_ZL_GUI_ClearContainer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43813);

	ASurv_PlayerController_C_ZL_GUI_ClearContainer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_PlayerController.Surv_PlayerController_C.ExecuteUbergraph_Surv_PlayerController
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurv_PlayerController_C::STATIC_ExecuteUbergraph_Surv_PlayerController(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43811);

	ASurv_PlayerController_C_ExecuteUbergraph_Surv_PlayerController_Params params;
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
