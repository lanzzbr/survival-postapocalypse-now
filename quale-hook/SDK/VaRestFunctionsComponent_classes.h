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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VaRestFunctionsComponent.VaRestFunctionsComponent_C
// 0x06D0 (FullSize[0x07C0] - InheritedSize[0x00F0])
class UVaRestFunctionsComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class UVaRestRequestJSON*                          addRequest;                                                // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                          displayRequest;                                            // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    DisplayUserScore_Return;                                   // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UVaRestRequestJSON*                          updateRequest;                                             // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                          checkRequest;                                              // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                           Responce;                                                  // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                          checkIsAdminRequest;                                       // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Fsurv_2019_FieldsStructure                  OutStructure;                                              // 0x0138(0x0198) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     addScoreKey;                                               // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     VIEWER_ID;                                                 // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               MyStructure;                                               // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_12ZS[0x7];                                     // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fsurv_2019_FieldsStructure                  AddedStructure;                                            // 0x02F8(0x0198) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class ACv2_playerController_C*                     MyController;                                              // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurv_PlayerController_C*                    MyMainMenuController;                                      // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSurv2019_BanStructure                      BanStruct_Ref;                                             // 0x04A0(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    ReturnGetTimeStamp;                                        // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    ReturnGetTimeStampError;                                   // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UVaRestRequestJSON*                          GetTimeStampReqest;                                        // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                          UpdateTimeStampReq;                                        // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                          TestReq_Request;                                           // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Req_URL;                                                   // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     playerstate_viewer_id;                                     // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UVaRestRequestJSON*                          INVENTORY_GET_req;                                         // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                          PLAYER_STATE_GET_Req;                                      // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                          PLAYER_STATE_Create_req;                                   // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                          PLAYER_STATE_SET_req;                                      // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                          INVENTORY_SET_req;                                         // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     INVENTORY_viewer_id;                                       // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UVaRestRequestJSON*                          INVENTORY_CREATE_req;                                      // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Req_count;                                                 // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentReq_count;                                          // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GetPlayerInformationFail;                                  // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V5AW[0x7];                                     // 0x0599(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNewDB_JSON>                         ClearArray;                                                // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    GET_INFORMATION_COMPLITE;                                  // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FNewDB_JSON>                         PlayerState_setItems;                                      // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UVaRestRequestJSON*                          CLASSICAL_GET_Req;                                         // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                          CLASSICAL_Create_Entry_req;                                // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                          CLASSICAL_SET_req;                                         // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNewDB_Classical                            Classical_str;                                             // 0x05E8(0x00D0) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    GET_CLASSICAL_COMPLITE;                                    // 0x06B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               Classical_Is_UpdateCharacter;                              // 0x06C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ECLC[0x7];                                     // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVaRestRequestJSON*                          GET_TOTAL_TOP_Req;                                         // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                           TOP_ALL_JSON_OBJ;                                          // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                          WeekMode_req;                                              // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                          BAN_CreateEntry_req;                                       // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                          Ban_SET_Req;                                               // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                          BanGetReq;                                                 // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     BAN_PHP_NAME;                                              // 0x0700(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     PHP_MAIN_PATH;                                             // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FNewDB_Ban                                  BanStr;                                                    // 0x0720(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     PLAYER_STATE_PHP_NAME;                                     // 0x0780(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     OLD_INVENTORY_PHP_NAME;                                    // 0x0790(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     CLASSICAL_INVENTORY_PHP_NAME;                              // 0x07A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     LIDERBOARDS_INVENTORY_PHP_NAME;                            // 0x07B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(34573);
		return ptr;
	}



	void STATIC_Generate_body_and_run(class UVaRestRequestJSON* Va_Rest_Req, TArray<struct FNewDB_JSON>* JSON_BODY, const struct FString& VIEWER_ID, const struct FString& URL_TO_PHP, VaRestPlugin_ERequestVerb ReqTYPE, bool* Ok);
	struct FString CreateJSON(TArray<struct FNewDB_JSON>* NewDB_JSON);
	void STATIC_VaRest_UpdateUserScore(const struct Fsurv_2019_FieldsStructure& Surv2019_Str);
	void STATIC_OnRequestComplete_UpdateUserScore(class UVaRestRequestJSON* Request);
	void STATIC_OnRequestComplete_CheckWasPlayingSurvivalBefore(class UVaRestRequestJSON* Request);
	void STATIC_OnRequestComplete_DisplayUserScore(class UVaRestRequestJSON* Request);
	void STATIC_VaRest_IsAdminCheck(const struct FString& VIEWER_ID);
	void STATIC_OnIsAdminCkeckRequestComplete(class UVaRestRequestJSON* Request);
	void STATIC_VaRest_SetBAN(const struct FSurv2019_BanStructure& BanStructure);
	void STATIC_OnRequestComplete_Event_1(class UVaRestRequestJSON* Request);
	void STATIC_VaRest_CheckBanByUserID(const struct FString& UserID);
	void STATIC_VaRest_CheckBanByDeviceID(const struct FString& DeviceID);
	void STATIC_OnCheckBanByUserID_Complete(class UVaRestRequestJSON* Request);
	void STATIC_OnRequestComplete_Event_2(class UVaRestRequestJSON* Request);
	void STATIC_VaRest_DisplayUserScores(const struct FString& VIEWER_ID);
	void STATIC_TestRequest(const struct FString& Body_data);
	void STATIC_OnRequestFail_TestRequest(class UVaRestRequestJSON* Request);
	void STATIC_OnRequestComplete_TestRequest(class UVaRestRequestJSON* Request);
	void STATIC_DisplayUserScores_Timer();
	void STATIC_PLAYER_STATE_GET_ALL(const struct FString& VIEWER_ID);
	void STATIC_On_GetPlayerState_Fail(class UVaRestRequestJSON* Request);
	void STATIC_OnGet_PlayerState_Complite(class UVaRestRequestJSON* Request);
	void STATIC_PLAYER_STAT_CREATE_ENTRY(const struct FString& viwer);
	void STATIC_On_CreateDbPlayerState_Fail(class UVaRestRequestJSON* Request);
	void STATIC_On_CreatePlayerState_Complite(class UVaRestRequestJSON* Request);
	void STATIC_Save_Inventory_to_db(const struct FString& VIEWER_ID, TArray<struct FNewDB_JSON> DB_JSON);
	void STATIC_On_Save_Inventory_to_db_Failed(class UVaRestRequestJSON* Request);
	void STATIC_On_Save_Inventory_to_db_Complete(class UVaRestRequestJSON* Request);
	void STATIC_INVENTORY_GET_from_db(const struct FString& VIEWER_ID);
	void STATIC_On_Get_Inventory_from_db_Complete(class UVaRestRequestJSON* Request);
	void STATIC_On_Get_Inventory_from_db_Failed(class UVaRestRequestJSON* Request);
	void STATIC_VaRest_CheckWasPlayingSurvivalBefore(const struct FString& VIEWER_ID);
	void STATIC_PLAYER_STAT_SET(TArray<struct FNewDB_JSON> NewDB_JSON, const struct FString& ViewerID);
	void STATIC_ON_Set_DB_PlayerStateParametr_Fail(class UVaRestRequestJSON* Request);
	void STATIC_ON_Set_DB_PlayerStateParametr_COMPLITE(class UVaRestRequestJSON* Request);
	void STATIC_INVENTORY_CREATE_ENTRY(const struct FString& VIEWER_ID);
	void STATIC_INVENTORY_Create_complite(class UVaRestRequestJSON* Request);
	void STATIC_INVENTORY_CREATE_FAIL(class UVaRestRequestJSON* Request);
	void STATIC_GET_ALL_PLAYER_INFORMATION(const struct FString& VIEWER_ID);
	void STATIC_PLAYER_INFORMATION_COMPLITE();
	void STATIC_PLAYER_INFORMATION_FAIL();
	void STATIC_OnRequestComplete_AddUserScore(class UVaRestRequestJSON* Request);
	void STATIC_SET_ALL_PLAYER_INFORMATION(const struct Fsurv_2019_FieldsStructure& Surv2019_Fields);
	void STATIC_RETURN_GET_INVENTORY_F(const struct FNewDB_Inventory& NewDB_Inventory);
	void STATIC_RETURN_GET_PLAYER_STATE(const struct FNewDB_PlayerState& NewDB_PlayerState);
	void STATIC_WriteAboutPlayerInfo(class APlayerState* PlayerState, const struct FString& ViewerID);
	void STATIC_CLEAR_PLAYER_INVENTORY(bool Player, bool base, const struct FString& VIEWER_ID);
	void STATIC_OnRequestFailed(class UVaRestRequestJSON* Request);
	void STATIC_CLASSICAL_GET_FROM_DB(const struct FString& VIEWER_ID, bool UpdateCharacter);
	void STATIC_CLASSICAL_GET_Complite(class UVaRestRequestJSON* Request);
	void STATIC_CLASSICAL_Get_Fail(class UVaRestRequestJSON* Request);
	void STATIC_CLASSICAL_CREATE_Entry(const struct FString& VIEWER_ID);
	void STATIC_CLASSICAL_CREATE_Entry_Complite(class UVaRestRequestJSON* Request);
	void STATIC_CLASSICAL_CREATE_Entry_Fail(class UVaRestRequestJSON* Request);
	void STATIC_CLASSICAL_SET(const struct FString& VIEWER_ID, TArray<struct FNewDB_JSON> DB_JSON);
	void STATIC_CLASSICAL_SET_Fail(class UVaRestRequestJSON* Request);
	void STATIC_CLASSICAL_SET_Complite(class UVaRestRequestJSON* Request);
	void STATIC_VaRest_AddUserScores(const struct Fsurv_2019_FieldsStructure& Surv2019_Str);
	void STATIC_CLASSICAL_SET_ALL(const struct FNewDB_Classical& Classical_str);
	void STATIC_GET_TOTAL_TOP(const struct FString& VIEWER_ID);
	void STATIC_GET_TOTAL_TOP_COMPLITE(class UVaRestRequestJSON* Request);
	void STATIC_GET_TOTAL_TOP_FAIL(class UVaRestRequestJSON* Request);
	void STATIC_DisplayUserScore_Return_Event(const struct FString& ResponceToString, class UVaRestJsonObject* Responce);
	void STATIC_GET_WEEK_TOP(const struct FString& VIEWER_ID);
	void STATIC_GET_WEEK_TOP_Complite(class UVaRestRequestJSON* Request);
	void STATIC_GET_WEEK_TOP_Fail(class UVaRestRequestJSON* Request);
	void STATIC_BAN_CreateEntry(const struct FString& VIEWER_ID);
	void STATIC_BAN_CreateEntry_Complite(class UVaRestRequestJSON* Request);
	void STATIC_BAN_CreateEntry_Fail(class UVaRestRequestJSON* Request);
	void STATIC_BAN_Set(const struct FString& VIEWER_ID, TArray<struct FNewDB_JSON> DB_JSON);
	void STATIC_BAN_Set_error(class UVaRestRequestJSON* Request);
	void STATIC_BAN_Set_Complite(class UVaRestRequestJSON* Request);
	void STATIC_BAN_GET(const struct FString& VIEWER_ID);
	void STATIC_Ban_Get_Complite(class UVaRestRequestJSON* Request);
	void STATIC_BAN_Get_Fail(class UVaRestRequestJSON* Request);
	void STATIC_BAN_PLAYER(const struct FString& VIEWER_ID, const struct FString& admin_id, const struct FString& Comment);
	void STATIC_ExecuteUbergraph_VaRestFunctionsComponent(int EntryPoint);
	void STATIC_GET_CLASSICAL_COMPLITE__DelegateSignature();
	void STATIC_GET_INFORMATION_COMPLITE__DelegateSignature();
	void STATIC_ReturnGetTimeStampError__DelegateSignature();
	void STATIC_ReturnGetTimeStamp__DelegateSignature();
	void STATIC_DisplayUserScore_Return__DelegateSignature(const struct FString& ResponceToString, class UVaRestJsonObject* Responce);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
