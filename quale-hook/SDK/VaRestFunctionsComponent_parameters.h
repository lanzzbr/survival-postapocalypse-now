#pragma once

// Name: ANUSGAME, Version: 4.18


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.Generate body and run
struct UVaRestFunctionsComponent_C_Generate_body_and_run_Params
{
	class UVaRestRequestJSON*                          Va_Rest_Req;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FNewDB_JSON>                         JSON_BODY;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     VIEWER_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     URL_TO_PHP;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	VaRestPlugin_ERequestVerb                          ReqTYPE;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CreateJSON
struct UVaRestFunctionsComponent_C_CreateJSON_Params
{
	TArray<struct FNewDB_JSON>                         NewDB_JSON;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.VaRest_UpdateUserScore
struct UVaRestFunctionsComponent_C_VaRest_UpdateUserScore_Params
{
	struct Fsurv_2019_FieldsStructure                  Surv2019_Str;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnRequestComplete_UpdateUserScore
struct UVaRestFunctionsComponent_C_OnRequestComplete_UpdateUserScore_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnRequestComplete_CheckWasPlayingSurvivalBefore
struct UVaRestFunctionsComponent_C_OnRequestComplete_CheckWasPlayingSurvivalBefore_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnRequestComplete_DisplayUserScore
struct UVaRestFunctionsComponent_C_OnRequestComplete_DisplayUserScore_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.VaRest_IsAdminCheck
struct UVaRestFunctionsComponent_C_VaRest_IsAdminCheck_Params
{
	struct FString                                     VIEWER_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnIsAdminCkeckRequestComplete
struct UVaRestFunctionsComponent_C_OnIsAdminCkeckRequestComplete_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.VaRest_SetBAN
struct UVaRestFunctionsComponent_C_VaRest_SetBAN_Params
{
	struct FSurv2019_BanStructure                      BanStructure;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnRequestComplete_Event_1
struct UVaRestFunctionsComponent_C_OnRequestComplete_Event_1_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.VaRest_CheckBanByUserID
struct UVaRestFunctionsComponent_C_VaRest_CheckBanByUserID_Params
{
	struct FString                                     UserID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.VaRest_CheckBanByDeviceID
struct UVaRestFunctionsComponent_C_VaRest_CheckBanByDeviceID_Params
{
	struct FString                                     DeviceID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnCheckBanByUserID_Complete
struct UVaRestFunctionsComponent_C_OnCheckBanByUserID_Complete_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnRequestComplete_Event_2
struct UVaRestFunctionsComponent_C_OnRequestComplete_Event_2_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.VaRest_DisplayUserScores
struct UVaRestFunctionsComponent_C_VaRest_DisplayUserScores_Params
{
	struct FString                                     VIEWER_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.TestRequest
struct UVaRestFunctionsComponent_C_TestRequest_Params
{
	struct FString                                     Body_data;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnRequestFail_TestRequest
struct UVaRestFunctionsComponent_C_OnRequestFail_TestRequest_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnRequestComplete_TestRequest
struct UVaRestFunctionsComponent_C_OnRequestComplete_TestRequest_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.DisplayUserScores_Timer
struct UVaRestFunctionsComponent_C_DisplayUserScores_Timer_Params
{
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.PLAYER_STATE_GET_ALL
struct UVaRestFunctionsComponent_C_PLAYER_STATE_GET_ALL_Params
{
	struct FString                                     VIEWER_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.On_GetPlayerState_Fail
struct UVaRestFunctionsComponent_C_On_GetPlayerState_Fail_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnGet_PlayerState_Complite
struct UVaRestFunctionsComponent_C_OnGet_PlayerState_Complite_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.PLAYER_STAT_CREATE_ENTRY
struct UVaRestFunctionsComponent_C_PLAYER_STAT_CREATE_ENTRY_Params
{
	struct FString                                     viwer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.On_CreateDbPlayerState_Fail
struct UVaRestFunctionsComponent_C_On_CreateDbPlayerState_Fail_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.On_CreatePlayerState_Complite
struct UVaRestFunctionsComponent_C_On_CreatePlayerState_Complite_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.Save_Inventory_to_db
struct UVaRestFunctionsComponent_C_Save_Inventory_to_db_Params
{
	struct FString                                     VIEWER_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FNewDB_JSON>                         DB_JSON;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.On_Save_Inventory_to_db_Failed
struct UVaRestFunctionsComponent_C_On_Save_Inventory_to_db_Failed_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.On_Save_Inventory_to_db_Complete
struct UVaRestFunctionsComponent_C_On_Save_Inventory_to_db_Complete_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.INVENTORY_GET_from_db
struct UVaRestFunctionsComponent_C_INVENTORY_GET_from_db_Params
{
	struct FString                                     VIEWER_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.On_Get_Inventory_from_db_Complete
struct UVaRestFunctionsComponent_C_On_Get_Inventory_from_db_Complete_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.On_Get_Inventory_from_db_Failed
struct UVaRestFunctionsComponent_C_On_Get_Inventory_from_db_Failed_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.VaRest_CheckWasPlayingSurvivalBefore
struct UVaRestFunctionsComponent_C_VaRest_CheckWasPlayingSurvivalBefore_Params
{
	struct FString                                     VIEWER_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.PLAYER_STAT_SET
struct UVaRestFunctionsComponent_C_PLAYER_STAT_SET_Params
{
	TArray<struct FNewDB_JSON>                         NewDB_JSON;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ViewerID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.ON_Set_DB_PlayerStateParametr_Fail
struct UVaRestFunctionsComponent_C_ON_Set_DB_PlayerStateParametr_Fail_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.ON_Set_DB_PlayerStateParametr_COMPLITE
struct UVaRestFunctionsComponent_C_ON_Set_DB_PlayerStateParametr_COMPLITE_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.INVENTORY_CREATE_ENTRY
struct UVaRestFunctionsComponent_C_INVENTORY_CREATE_ENTRY_Params
{
	struct FString                                     VIEWER_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.INVENTORY_Create_complite
struct UVaRestFunctionsComponent_C_INVENTORY_Create_complite_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.INVENTORY_CREATE_FAIL
struct UVaRestFunctionsComponent_C_INVENTORY_CREATE_FAIL_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.GET_ALL_PLAYER_INFORMATION
struct UVaRestFunctionsComponent_C_GET_ALL_PLAYER_INFORMATION_Params
{
	struct FString                                     VIEWER_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.PLAYER_INFORMATION_COMPLITE
struct UVaRestFunctionsComponent_C_PLAYER_INFORMATION_COMPLITE_Params
{
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.PLAYER_INFORMATION_FAIL
struct UVaRestFunctionsComponent_C_PLAYER_INFORMATION_FAIL_Params
{
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnRequestComplete_AddUserScore
struct UVaRestFunctionsComponent_C_OnRequestComplete_AddUserScore_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.SET_ALL_PLAYER_INFORMATION
struct UVaRestFunctionsComponent_C_SET_ALL_PLAYER_INFORMATION_Params
{
	struct Fsurv_2019_FieldsStructure                  Surv2019_Fields;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.RETURN_GET_INVENTORY_F
struct UVaRestFunctionsComponent_C_RETURN_GET_INVENTORY_F_Params
{
	struct FNewDB_Inventory                            NewDB_Inventory;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.RETURN_GET_PLAYER_STATE
struct UVaRestFunctionsComponent_C_RETURN_GET_PLAYER_STATE_Params
{
	struct FNewDB_PlayerState                          NewDB_PlayerState;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.WriteAboutPlayerInfo
struct UVaRestFunctionsComponent_C_WriteAboutPlayerInfo_Params
{
	class APlayerState*                                PlayerState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ViewerID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLEAR_PLAYER_INVENTORY
struct UVaRestFunctionsComponent_C_CLEAR_PLAYER_INVENTORY_Params
{
	bool                                               Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               base;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     VIEWER_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.OnRequestFailed
struct UVaRestFunctionsComponent_C_OnRequestFailed_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLASSICAL_GET_FROM_DB
struct UVaRestFunctionsComponent_C_CLASSICAL_GET_FROM_DB_Params
{
	struct FString                                     VIEWER_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               UpdateCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLASSICAL_GET_Complite
struct UVaRestFunctionsComponent_C_CLASSICAL_GET_Complite_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLASSICAL_Get_Fail
struct UVaRestFunctionsComponent_C_CLASSICAL_Get_Fail_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLASSICAL_CREATE_Entry
struct UVaRestFunctionsComponent_C_CLASSICAL_CREATE_Entry_Params
{
	struct FString                                     VIEWER_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLASSICAL_CREATE_Entry_Complite
struct UVaRestFunctionsComponent_C_CLASSICAL_CREATE_Entry_Complite_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLASSICAL_CREATE_Entry_Fail
struct UVaRestFunctionsComponent_C_CLASSICAL_CREATE_Entry_Fail_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLASSICAL_SET
struct UVaRestFunctionsComponent_C_CLASSICAL_SET_Params
{
	struct FString                                     VIEWER_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FNewDB_JSON>                         DB_JSON;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLASSICAL_SET_Fail
struct UVaRestFunctionsComponent_C_CLASSICAL_SET_Fail_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLASSICAL_SET_Complite
struct UVaRestFunctionsComponent_C_CLASSICAL_SET_Complite_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.VaRest_AddUserScores
struct UVaRestFunctionsComponent_C_VaRest_AddUserScores_Params
{
	struct Fsurv_2019_FieldsStructure                  Surv2019_Str;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.CLASSICAL_SET_ALL
struct UVaRestFunctionsComponent_C_CLASSICAL_SET_ALL_Params
{
	struct FNewDB_Classical                            Classical_str;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.GET_TOTAL_TOP
struct UVaRestFunctionsComponent_C_GET_TOTAL_TOP_Params
{
	struct FString                                     VIEWER_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.GET_TOTAL_TOP_COMPLITE
struct UVaRestFunctionsComponent_C_GET_TOTAL_TOP_COMPLITE_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.GET_TOTAL_TOP_FAIL
struct UVaRestFunctionsComponent_C_GET_TOTAL_TOP_FAIL_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.DisplayUserScore_Return_Event
struct UVaRestFunctionsComponent_C_DisplayUserScore_Return_Event_Params
{
	struct FString                                     ResponceToString;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                           Responce;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.GET_WEEK_TOP
struct UVaRestFunctionsComponent_C_GET_WEEK_TOP_Params
{
	struct FString                                     VIEWER_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.GET_WEEK_TOP_Complite
struct UVaRestFunctionsComponent_C_GET_WEEK_TOP_Complite_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.GET_WEEK_TOP_Fail
struct UVaRestFunctionsComponent_C_GET_WEEK_TOP_Fail_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.BAN_CreateEntry
struct UVaRestFunctionsComponent_C_BAN_CreateEntry_Params
{
	struct FString                                     VIEWER_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.BAN_CreateEntry_Complite
struct UVaRestFunctionsComponent_C_BAN_CreateEntry_Complite_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.BAN_CreateEntry_Fail
struct UVaRestFunctionsComponent_C_BAN_CreateEntry_Fail_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.BAN_Set
struct UVaRestFunctionsComponent_C_BAN_Set_Params
{
	struct FString                                     VIEWER_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FNewDB_JSON>                         DB_JSON;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.BAN_Set_error
struct UVaRestFunctionsComponent_C_BAN_Set_error_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.BAN_Set_Complite
struct UVaRestFunctionsComponent_C_BAN_Set_Complite_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.BAN_GET
struct UVaRestFunctionsComponent_C_BAN_GET_Params
{
	struct FString                                     VIEWER_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.Ban_Get_Complite
struct UVaRestFunctionsComponent_C_Ban_Get_Complite_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.BAN_Get_Fail
struct UVaRestFunctionsComponent_C_BAN_Get_Fail_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.BAN_PLAYER
struct UVaRestFunctionsComponent_C_BAN_PLAYER_Params
{
	struct FString                                     VIEWER_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     admin_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Comment;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.ExecuteUbergraph_VaRestFunctionsComponent
struct UVaRestFunctionsComponent_C_ExecuteUbergraph_VaRestFunctionsComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.GET_CLASSICAL_COMPLITE__DelegateSignature
struct UVaRestFunctionsComponent_C_GET_CLASSICAL_COMPLITE__DelegateSignature_Params
{
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.GET_INFORMATION_COMPLITE__DelegateSignature
struct UVaRestFunctionsComponent_C_GET_INFORMATION_COMPLITE__DelegateSignature_Params
{
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.ReturnGetTimeStampError__DelegateSignature
struct UVaRestFunctionsComponent_C_ReturnGetTimeStampError__DelegateSignature_Params
{
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.ReturnGetTimeStamp__DelegateSignature
struct UVaRestFunctionsComponent_C_ReturnGetTimeStamp__DelegateSignature_Params
{
};

// Function VaRestFunctionsComponent.VaRestFunctionsComponent_C.DisplayUserScore_Return__DelegateSignature
struct UVaRestFunctionsComponent_C_DisplayUserScore_Return__DelegateSignature_Params
{
	struct FString                                     ResponceToString;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                           Responce;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
