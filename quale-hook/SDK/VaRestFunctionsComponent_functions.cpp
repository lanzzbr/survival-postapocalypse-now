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

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.Generate body and run
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Va_Rest_Req                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FNewDB_JSON>     JSON_BODY                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 VIEWER_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 URL_TO_PHP                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// VaRestPlugin_ERequestVerb      ReqTYPE                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UVaRestFunctionsComponent_C::STATIC_Generate_body_and_run(class UVaRestRequestJSON* Va_Rest_Req, TArray<struct FNewDB_JSON>* JSON_BODY, const struct FString& VIEWER_ID, const struct FString& URL_TO_PHP, VaRestPlugin_ERequestVerb ReqTYPE, bool* Ok)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34781);

	UVaRestFunctionsComponent_C_Generate_body_and_run_Params params;
	params.Va_Rest_Req = Va_Rest_Req;
	params.VIEWER_ID = VIEWER_ID;
	params.URL_TO_PHP = URL_TO_PHP;
	params.ReqTYPE = ReqTYPE;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (JSON_BODY != nullptr)
		*JSON_BODY = params.JSON_BODY;
	if (Ok != nullptr)
		*Ok = params.Ok;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CreateJSON
// ()
// Parameters:
// TArray<struct FNewDB_JSON>     NewDB_JSON                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UVaRestFunctionsComponent_C::CreateJSON(TArray<struct FNewDB_JSON>* NewDB_JSON)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34736);

	UVaRestFunctionsComponent_C_CreateJSON_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewDB_JSON != nullptr)
		*NewDB_JSON = params.NewDB_JSON;


	return params.ReturnValue;
}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.VaRest_UpdateUserScore
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct Fsurv_2019_FieldsStructure Surv2019_Str                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_VaRest_UpdateUserScore(const struct Fsurv_2019_FieldsStructure& Surv2019_Str)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34734);

	UVaRestFunctionsComponent_C_VaRest_UpdateUserScore_Params params;
	params.Surv2019_Str = Surv2019_Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnRequestComplete_UpdateUserScore
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_OnRequestComplete_UpdateUserScore(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34732);

	UVaRestFunctionsComponent_C_OnRequestComplete_UpdateUserScore_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnRequestComplete_CheckWasPlayingSurvivalBefore
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_OnRequestComplete_CheckWasPlayingSurvivalBefore(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34730);

	UVaRestFunctionsComponent_C_OnRequestComplete_CheckWasPlayingSurvivalBefore_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnRequestComplete_DisplayUserScore
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_OnRequestComplete_DisplayUserScore(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34728);

	UVaRestFunctionsComponent_C_OnRequestComplete_DisplayUserScore_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.VaRest_IsAdminCheck
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 VIEWER_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_VaRest_IsAdminCheck(const struct FString& VIEWER_ID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34726);

	UVaRestFunctionsComponent_C_VaRest_IsAdminCheck_Params params;
	params.VIEWER_ID = VIEWER_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnIsAdminCkeckRequestComplete
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_OnIsAdminCkeckRequestComplete(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34724);

	UVaRestFunctionsComponent_C_OnIsAdminCkeckRequestComplete_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.VaRest_SetBAN
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FSurv2019_BanStructure  BanStructure                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_VaRest_SetBAN(const struct FSurv2019_BanStructure& BanStructure)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34722);

	UVaRestFunctionsComponent_C_VaRest_SetBAN_Params params;
	params.BanStructure = BanStructure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnRequestComplete_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_OnRequestComplete_Event_1(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34720);

	UVaRestFunctionsComponent_C_OnRequestComplete_Event_1_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.VaRest_CheckBanByUserID
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 UserID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_VaRest_CheckBanByUserID(const struct FString& UserID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34718);

	UVaRestFunctionsComponent_C_VaRest_CheckBanByUserID_Params params;
	params.UserID = UserID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.VaRest_CheckBanByDeviceID
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 DeviceID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_VaRest_CheckBanByDeviceID(const struct FString& DeviceID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34716);

	UVaRestFunctionsComponent_C_VaRest_CheckBanByDeviceID_Params params;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnCheckBanByUserID_Complete
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_OnCheckBanByUserID_Complete(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34714);

	UVaRestFunctionsComponent_C_OnCheckBanByUserID_Complete_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnRequestComplete_Event_2
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_OnRequestComplete_Event_2(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34712);

	UVaRestFunctionsComponent_C_OnRequestComplete_Event_2_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.VaRest_DisplayUserScores
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 VIEWER_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_VaRest_DisplayUserScores(const struct FString& VIEWER_ID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34710);

	UVaRestFunctionsComponent_C_VaRest_DisplayUserScores_Params params;
	params.VIEWER_ID = VIEWER_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.TestRequest
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 Body_data                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_TestRequest(const struct FString& Body_data)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34708);

	UVaRestFunctionsComponent_C_TestRequest_Params params;
	params.Body_data = Body_data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnRequestFail_TestRequest
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_OnRequestFail_TestRequest(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34706);

	UVaRestFunctionsComponent_C_OnRequestFail_TestRequest_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnRequestComplete_TestRequest
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_OnRequestComplete_TestRequest(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34704);

	UVaRestFunctionsComponent_C_OnRequestComplete_TestRequest_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.DisplayUserScores_Timer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UVaRestFunctionsComponent_C::STATIC_DisplayUserScores_Timer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34703);

	UVaRestFunctionsComponent_C_DisplayUserScores_Timer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.PLAYER_STATE_GET_ALL
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 VIEWER_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_PLAYER_STATE_GET_ALL(const struct FString& VIEWER_ID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34701);

	UVaRestFunctionsComponent_C_PLAYER_STATE_GET_ALL_Params params;
	params.VIEWER_ID = VIEWER_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.On_GetPlayerState_Fail
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_On_GetPlayerState_Fail(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34699);

	UVaRestFunctionsComponent_C_On_GetPlayerState_Fail_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnGet_PlayerState_Complite
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_OnGet_PlayerState_Complite(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34697);

	UVaRestFunctionsComponent_C_OnGet_PlayerState_Complite_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.PLAYER_STAT_CREATE_ENTRY
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 viwer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_PLAYER_STAT_CREATE_ENTRY(const struct FString& viwer)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34695);

	UVaRestFunctionsComponent_C_PLAYER_STAT_CREATE_ENTRY_Params params;
	params.viwer = viwer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.On_CreateDbPlayerState_Fail
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_On_CreateDbPlayerState_Fail(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34693);

	UVaRestFunctionsComponent_C_On_CreateDbPlayerState_Fail_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.On_CreatePlayerState_Complite
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_On_CreatePlayerState_Complite(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34691);

	UVaRestFunctionsComponent_C_On_CreatePlayerState_Complite_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.Save_Inventory_to_db
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 VIEWER_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FNewDB_JSON>     DB_JSON                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UVaRestFunctionsComponent_C::STATIC_Save_Inventory_to_db(const struct FString& VIEWER_ID, TArray<struct FNewDB_JSON> DB_JSON)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34689);

	UVaRestFunctionsComponent_C_Save_Inventory_to_db_Params params;
	params.VIEWER_ID = VIEWER_ID;
	params.DB_JSON = DB_JSON;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.On_Save_Inventory_to_db_Failed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_On_Save_Inventory_to_db_Failed(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34687);

	UVaRestFunctionsComponent_C_On_Save_Inventory_to_db_Failed_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.On_Save_Inventory_to_db_Complete
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_On_Save_Inventory_to_db_Complete(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34685);

	UVaRestFunctionsComponent_C_On_Save_Inventory_to_db_Complete_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.INVENTORY_GET_from_db
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 VIEWER_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_INVENTORY_GET_from_db(const struct FString& VIEWER_ID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34683);

	UVaRestFunctionsComponent_C_INVENTORY_GET_from_db_Params params;
	params.VIEWER_ID = VIEWER_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.On_Get_Inventory_from_db_Complete
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_On_Get_Inventory_from_db_Complete(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34681);

	UVaRestFunctionsComponent_C_On_Get_Inventory_from_db_Complete_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.On_Get_Inventory_from_db_Failed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_On_Get_Inventory_from_db_Failed(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34679);

	UVaRestFunctionsComponent_C_On_Get_Inventory_from_db_Failed_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.VaRest_CheckWasPlayingSurvivalBefore
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 VIEWER_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_VaRest_CheckWasPlayingSurvivalBefore(const struct FString& VIEWER_ID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34677);

	UVaRestFunctionsComponent_C_VaRest_CheckWasPlayingSurvivalBefore_Params params;
	params.VIEWER_ID = VIEWER_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.PLAYER_STAT_SET
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FNewDB_JSON>     NewDB_JSON                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ViewerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_PLAYER_STAT_SET(TArray<struct FNewDB_JSON> NewDB_JSON, const struct FString& ViewerID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34674);

	UVaRestFunctionsComponent_C_PLAYER_STAT_SET_Params params;
	params.NewDB_JSON = NewDB_JSON;
	params.ViewerID = ViewerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.ON_Set_DB_PlayerStateParametr_Fail
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_ON_Set_DB_PlayerStateParametr_Fail(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34672);

	UVaRestFunctionsComponent_C_ON_Set_DB_PlayerStateParametr_Fail_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.ON_Set_DB_PlayerStateParametr_COMPLITE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_ON_Set_DB_PlayerStateParametr_COMPLITE(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34670);

	UVaRestFunctionsComponent_C_ON_Set_DB_PlayerStateParametr_COMPLITE_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.INVENTORY_CREATE_ENTRY
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 VIEWER_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_INVENTORY_CREATE_ENTRY(const struct FString& VIEWER_ID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34668);

	UVaRestFunctionsComponent_C_INVENTORY_CREATE_ENTRY_Params params;
	params.VIEWER_ID = VIEWER_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.INVENTORY_Create_complite
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_INVENTORY_Create_complite(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34666);

	UVaRestFunctionsComponent_C_INVENTORY_Create_complite_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.INVENTORY_CREATE_FAIL
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_INVENTORY_CREATE_FAIL(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34664);

	UVaRestFunctionsComponent_C_INVENTORY_CREATE_FAIL_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.GET_ALL_PLAYER_INFORMATION
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 VIEWER_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_GET_ALL_PLAYER_INFORMATION(const struct FString& VIEWER_ID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34662);

	UVaRestFunctionsComponent_C_GET_ALL_PLAYER_INFORMATION_Params params;
	params.VIEWER_ID = VIEWER_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.PLAYER_INFORMATION_COMPLITE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UVaRestFunctionsComponent_C::STATIC_PLAYER_INFORMATION_COMPLITE()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34661);

	UVaRestFunctionsComponent_C_PLAYER_INFORMATION_COMPLITE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.PLAYER_INFORMATION_FAIL
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UVaRestFunctionsComponent_C::STATIC_PLAYER_INFORMATION_FAIL()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34660);

	UVaRestFunctionsComponent_C_PLAYER_INFORMATION_FAIL_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnRequestComplete_AddUserScore
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_OnRequestComplete_AddUserScore(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34658);

	UVaRestFunctionsComponent_C_OnRequestComplete_AddUserScore_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.SET_ALL_PLAYER_INFORMATION
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct Fsurv_2019_FieldsStructure Surv2019_Fields                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_SET_ALL_PLAYER_INFORMATION(const struct Fsurv_2019_FieldsStructure& Surv2019_Fields)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34656);

	UVaRestFunctionsComponent_C_SET_ALL_PLAYER_INFORMATION_Params params;
	params.Surv2019_Fields = Surv2019_Fields;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.RETURN_GET_INVENTORY_F
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FNewDB_Inventory        NewDB_Inventory                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_RETURN_GET_INVENTORY_F(const struct FNewDB_Inventory& NewDB_Inventory)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34654);

	UVaRestFunctionsComponent_C_RETURN_GET_INVENTORY_F_Params params;
	params.NewDB_Inventory = NewDB_Inventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.RETURN_GET_PLAYER_STATE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FNewDB_PlayerState      NewDB_PlayerState              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_RETURN_GET_PLAYER_STATE(const struct FNewDB_PlayerState& NewDB_PlayerState)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34652);

	UVaRestFunctionsComponent_C_RETURN_GET_PLAYER_STATE_Params params;
	params.NewDB_PlayerState = NewDB_PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.WriteAboutPlayerInfo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ViewerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_WriteAboutPlayerInfo(class APlayerState* PlayerState, const struct FString& ViewerID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34650);

	UVaRestFunctionsComponent_C_WriteAboutPlayerInfo_Params params;
	params.PlayerState = PlayerState;
	params.ViewerID = ViewerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLEAR_PLAYER_INVENTORY
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           base                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 VIEWER_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_CLEAR_PLAYER_INVENTORY(bool Player, bool base, const struct FString& VIEWER_ID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34648);

	UVaRestFunctionsComponent_C_CLEAR_PLAYER_INVENTORY_Params params;
	params.Player = Player;
	params.base = base;
	params.VIEWER_ID = VIEWER_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnRequestFailed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_OnRequestFailed(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34646);

	UVaRestFunctionsComponent_C_OnRequestFailed_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLASSICAL_GET_FROM_DB
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 VIEWER_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           UpdateCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UVaRestFunctionsComponent_C::STATIC_CLASSICAL_GET_FROM_DB(const struct FString& VIEWER_ID, bool UpdateCharacter)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34644);

	UVaRestFunctionsComponent_C_CLASSICAL_GET_FROM_DB_Params params;
	params.VIEWER_ID = VIEWER_ID;
	params.UpdateCharacter = UpdateCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLASSICAL_GET_Complite
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_CLASSICAL_GET_Complite(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34642);

	UVaRestFunctionsComponent_C_CLASSICAL_GET_Complite_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLASSICAL_Get_Fail
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_CLASSICAL_Get_Fail(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34640);

	UVaRestFunctionsComponent_C_CLASSICAL_Get_Fail_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLASSICAL_CREATE_Entry
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 VIEWER_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_CLASSICAL_CREATE_Entry(const struct FString& VIEWER_ID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34638);

	UVaRestFunctionsComponent_C_CLASSICAL_CREATE_Entry_Params params;
	params.VIEWER_ID = VIEWER_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLASSICAL_CREATE_Entry_Complite
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_CLASSICAL_CREATE_Entry_Complite(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34636);

	UVaRestFunctionsComponent_C_CLASSICAL_CREATE_Entry_Complite_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLASSICAL_CREATE_Entry_Fail
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_CLASSICAL_CREATE_Entry_Fail(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34634);

	UVaRestFunctionsComponent_C_CLASSICAL_CREATE_Entry_Fail_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLASSICAL_SET
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 VIEWER_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FNewDB_JSON>     DB_JSON                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UVaRestFunctionsComponent_C::STATIC_CLASSICAL_SET(const struct FString& VIEWER_ID, TArray<struct FNewDB_JSON> DB_JSON)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34628);

	UVaRestFunctionsComponent_C_CLASSICAL_SET_Params params;
	params.VIEWER_ID = VIEWER_ID;
	params.DB_JSON = DB_JSON;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLASSICAL_SET_Fail
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_CLASSICAL_SET_Fail(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34626);

	UVaRestFunctionsComponent_C_CLASSICAL_SET_Fail_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLASSICAL_SET_Complite
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_CLASSICAL_SET_Complite(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34624);

	UVaRestFunctionsComponent_C_CLASSICAL_SET_Complite_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.VaRest_AddUserScores
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct Fsurv_2019_FieldsStructure Surv2019_Str                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_VaRest_AddUserScores(const struct Fsurv_2019_FieldsStructure& Surv2019_Str)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34622);

	UVaRestFunctionsComponent_C_VaRest_AddUserScores_Params params;
	params.Surv2019_Str = Surv2019_Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLASSICAL_SET_ALL
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FNewDB_Classical        Classical_str                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_CLASSICAL_SET_ALL(const struct FNewDB_Classical& Classical_str)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34620);

	UVaRestFunctionsComponent_C_CLASSICAL_SET_ALL_Params params;
	params.Classical_str = Classical_str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.GET_TOTAL_TOP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 VIEWER_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_GET_TOTAL_TOP(const struct FString& VIEWER_ID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34618);

	UVaRestFunctionsComponent_C_GET_TOTAL_TOP_Params params;
	params.VIEWER_ID = VIEWER_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.GET_TOTAL_TOP_COMPLITE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_GET_TOTAL_TOP_COMPLITE(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34616);

	UVaRestFunctionsComponent_C_GET_TOTAL_TOP_COMPLITE_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.GET_TOTAL_TOP_FAIL
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_GET_TOTAL_TOP_FAIL(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34614);

	UVaRestFunctionsComponent_C_GET_TOTAL_TOP_FAIL_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.DisplayUserScore_Return_Event
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 ResponceToString               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UVaRestJsonObject*       Responce                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_DisplayUserScore_Return_Event(const struct FString& ResponceToString, class UVaRestJsonObject* Responce)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34612);

	UVaRestFunctionsComponent_C_DisplayUserScore_Return_Event_Params params;
	params.ResponceToString = ResponceToString;
	params.Responce = Responce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.GET_WEEK_TOP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 VIEWER_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_GET_WEEK_TOP(const struct FString& VIEWER_ID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34610);

	UVaRestFunctionsComponent_C_GET_WEEK_TOP_Params params;
	params.VIEWER_ID = VIEWER_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.GET_WEEK_TOP_Complite
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_GET_WEEK_TOP_Complite(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34608);

	UVaRestFunctionsComponent_C_GET_WEEK_TOP_Complite_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.GET_WEEK_TOP_Fail
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_GET_WEEK_TOP_Fail(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34606);

	UVaRestFunctionsComponent_C_GET_WEEK_TOP_Fail_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.BAN_CreateEntry
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 VIEWER_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_BAN_CreateEntry(const struct FString& VIEWER_ID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34604);

	UVaRestFunctionsComponent_C_BAN_CreateEntry_Params params;
	params.VIEWER_ID = VIEWER_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.BAN_CreateEntry_Complite
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_BAN_CreateEntry_Complite(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34602);

	UVaRestFunctionsComponent_C_BAN_CreateEntry_Complite_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.BAN_CreateEntry_Fail
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_BAN_CreateEntry_Fail(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34600);

	UVaRestFunctionsComponent_C_BAN_CreateEntry_Fail_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.BAN_Set
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 VIEWER_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FNewDB_JSON>     DB_JSON                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UVaRestFunctionsComponent_C::STATIC_BAN_Set(const struct FString& VIEWER_ID, TArray<struct FNewDB_JSON> DB_JSON)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34596);

	UVaRestFunctionsComponent_C_BAN_Set_Params params;
	params.VIEWER_ID = VIEWER_ID;
	params.DB_JSON = DB_JSON;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.BAN_Set_error
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_BAN_Set_error(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34594);

	UVaRestFunctionsComponent_C_BAN_Set_error_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.BAN_Set_Complite
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_BAN_Set_Complite(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34592);

	UVaRestFunctionsComponent_C_BAN_Set_Complite_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.BAN_GET
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 VIEWER_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_BAN_GET(const struct FString& VIEWER_ID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34590);

	UVaRestFunctionsComponent_C_BAN_GET_Params params;
	params.VIEWER_ID = VIEWER_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.Ban_Get_Complite
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_Ban_Get_Complite(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34588);

	UVaRestFunctionsComponent_C_Ban_Get_Complite_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.BAN_Get_Fail
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_BAN_Get_Fail(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34586);

	UVaRestFunctionsComponent_C_BAN_Get_Fail_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.BAN_PLAYER
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 VIEWER_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 admin_id                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Comment                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_BAN_PLAYER(const struct FString& VIEWER_ID, const struct FString& admin_id, const struct FString& Comment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34584);

	UVaRestFunctionsComponent_C_BAN_PLAYER_Params params;
	params.VIEWER_ID = VIEWER_ID;
	params.admin_id = admin_id;
	params.Comment = Comment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.ExecuteUbergraph_VaRestFunctionsComponent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_ExecuteUbergraph_VaRestFunctionsComponent(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34582);

	UVaRestFunctionsComponent_C_ExecuteUbergraph_VaRestFunctionsComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.GET_CLASSICAL_COMPLITE__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UVaRestFunctionsComponent_C::STATIC_GET_CLASSICAL_COMPLITE__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34581);

	UVaRestFunctionsComponent_C_GET_CLASSICAL_COMPLITE__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.GET_INFORMATION_COMPLITE__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UVaRestFunctionsComponent_C::STATIC_GET_INFORMATION_COMPLITE__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34580);

	UVaRestFunctionsComponent_C_GET_INFORMATION_COMPLITE__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.ReturnGetTimeStampError__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UVaRestFunctionsComponent_C::STATIC_ReturnGetTimeStampError__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34579);

	UVaRestFunctionsComponent_C_ReturnGetTimeStampError__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.ReturnGetTimeStamp__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UVaRestFunctionsComponent_C::STATIC_ReturnGetTimeStamp__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34578);

	UVaRestFunctionsComponent_C_ReturnGetTimeStamp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.DisplayUserScore_Return__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 ResponceToString               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UVaRestJsonObject*       Responce                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVaRestFunctionsComponent_C::STATIC_DisplayUserScore_Return__DelegateSignature(const struct FString& ResponceToString, class UVaRestJsonObject* Responce)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34576);

	UVaRestFunctionsComponent_C_DisplayUserScore_Return__DelegateSignature_Params params;
	params.ResponceToString = ResponceToString;
	params.Responce = Responce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
