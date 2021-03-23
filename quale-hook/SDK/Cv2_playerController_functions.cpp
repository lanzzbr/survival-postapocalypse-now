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

// Function Cv2_playerController.Cv2_playerController_C.CorrectCraftLocation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Output_Get                     (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_CorrectCraftLocation(const struct FVector& Location, struct FVector* Output_Get)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(60097);

	ACv2_playerController_C_CorrectCraftLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;

}


// Function Cv2_playerController.Cv2_playerController_C.ACControll
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_ACControll()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(60079);

	ACv2_playerController_C_ACControll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.SetExitTime
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_SetExitTime()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(60078);

	ACv2_playerController_C_SetExitTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.GetLobbyExitZones
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           isFinding                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_GetLobbyExitZones(bool* isFinding, struct FVector* Location)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(60020);

	ACv2_playerController_C_GetLobbyExitZones_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (isFinding != nullptr)
		*isFinding = params.isFinding;
	if (Location != nullptr)
		*Location = params.Location;

}


// Function Cv2_playerController.Cv2_playerController_C.UpdateSaveStateTimer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_UpdateSaveStateTimer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(60018);

	ACv2_playerController_C_UpdateSaveStateTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.CheckIsValidSaveState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_CheckIsValidSaveState()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(60017);

	ACv2_playerController_C_CheckIsValidSaveState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.UpdateSaveState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           UpdateAndClear                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Banned                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACv2_playerController_C::STATIC_UpdateSaveState(bool UpdateAndClear, bool Banned)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(60015);

	ACv2_playerController_C_UpdateSaveState_Params params;
	params.UpdateAndClear = UpdateAndClear;
	params.Banned = Banned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ReturnSaveState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct Fsurv_2019_FieldsStructure OutStruct                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_ReturnSaveState(const struct Fsurv_2019_FieldsStructure& OutStruct)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(60013);

	ACv2_playerController_C_ReturnSaveState_Params params;
	params.OutStruct = OutStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.GetMyOfficers
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FSelectSpawnOfficerStr> OfficersStr                    (Parm, OutParm, ZeroConstructor)
void ACv2_playerController_C::STATIC_GetMyOfficers(TArray<struct FSelectSpawnOfficerStr>* OfficersStr)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(60010);

	ACv2_playerController_C_GetMyOfficers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OfficersStr != nullptr)
		*OfficersStr = params.OfficersStr;

}


// Function Cv2_playerController.Cv2_playerController_C.SaveInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_SaveInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(60007);

	ACv2_playerController_C_SaveInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.GetPlayerInfoFromStringId
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FString>         String                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FGameOverPlayerInfoStr> InfoArray                      (Parm, OutParm, ZeroConstructor)
void ACv2_playerController_C::STATIC_GetPlayerInfoFromStringId(TArray<struct FString>* String, TArray<struct FGameOverPlayerInfoStr>* InfoArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(60004);

	ACv2_playerController_C_GetPlayerInfoFromStringId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
	if (InfoArray != nullptr)
		*InfoArray = params.InfoArray;

}


// Function Cv2_playerController.Cv2_playerController_C.CheckHouseSpawn
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ACv2_ScenarioZone_C*     ScenarioZone                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 FinalLocation                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_CheckHouseSpawn(class ACv2_ScenarioZone_C* ScenarioZone, struct FVector* FinalLocation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59916);

	ACv2_playerController_C_CheckHouseSpawn_Params params;
	params.ScenarioZone = ScenarioZone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FinalLocation != nullptr)
		*FinalLocation = params.FinalLocation;

}


// Function Cv2_playerController.Cv2_playerController_C.SetCrosshairType
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<CrosshairTypes_ECrosshairTypes> CrossHairType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_SetCrosshairType(TEnumAsByte<CrosshairTypes_ECrosshairTypes> CrossHairType)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59914);

	ACv2_playerController_C_SetCrosshairType_Params params;
	params.CrossHairType = CrossHairType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.GetScenarioSpawnLocation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  ScenarioActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 SpawnLocation                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_GetScenarioSpawnLocation(class AActor* ScenarioActor, struct FVector* SpawnLocation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59912);

	ACv2_playerController_C_GetScenarioSpawnLocation_Params params;
	params.ScenarioActor = ScenarioActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnLocation != nullptr)
		*SpawnLocation = params.SpawnLocation;

}


// Function Cv2_playerController.Cv2_playerController_C.CreateMenuSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_CreateMenuSlots()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59910);

	ACv2_playerController_C_CreateMenuSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.CreateCharacterBlockTimes
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_CreateCharacterBlockTimes()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59908);

	ACv2_playerController_C_CreateCharacterBlockTimes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.UnCryptMesage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsCrypt                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<GUI_UncryptType_EGUI_UncryptType> CryptType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_UnCryptMesage(const struct FText& Message, bool* IsCrypt, TEnumAsByte<GUI_UncryptType_EGUI_UncryptType>* CryptType)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59906);

	ACv2_playerController_C_UnCryptMesage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsCrypt != nullptr)
		*IsCrypt = params.IsCrypt;
	if (CryptType != nullptr)
		*CryptType = params.CryptType;

}


// Function Cv2_playerController.Cv2_playerController_C.CHAT_SendMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGUI_ChatMessageStructure Message                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_CHAT_SendMessage(const struct FGUI_ChatMessageStructure& Message)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59902);

	ACv2_playerController_C_CHAT_SendMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.GetMySteamFriends
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_GetMySteamFriends()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59900);

	ACv2_playerController_C_GetMySteamFriends_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.RespawnPlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_RespawnPlayer(TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterClass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59898);

	ACv2_playerController_C_RespawnPlayer_Params params;
	params.CharacterClass = CharacterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.DropLootServer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FCv2_LootCargoStructure> LootCargo                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ACv2_playerController_C::STATIC_DropLootServer(TArray<struct FCv2_LootCargoStructure>* LootCargo)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59895);

	ACv2_playerController_C_DropLootServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LootCargo != nullptr)
		*LootCargo = params.LootCargo;

}


// Function Cv2_playerController.Cv2_playerController_C.RemoveFromLootServerOnly
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FCv2_LootCargoStructure> RemovedLoot                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ACv2_playerController_C::STATIC_RemoveFromLootServerOnly(TArray<struct FCv2_LootCargoStructure>* RemovedLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59892);

	ACv2_playerController_C_RemoveFromLootServerOnly_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RemovedLoot != nullptr)
		*RemovedLoot = params.RemovedLoot;

}


// Function Cv2_playerController.Cv2_playerController_C.AddToLootServerOnly
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FCv2_LootCargoStructure> Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FCv2_LootCargoStructure> ReturnLoot                     (Parm, OutParm, ZeroConstructor)
void ACv2_playerController_C::STATIC_AddToLootServerOnly(TArray<struct FCv2_LootCargoStructure>* Loot, TArray<struct FCv2_LootCargoStructure>* ReturnLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59877);

	ACv2_playerController_C_AddToLootServerOnly_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loot != nullptr)
		*Loot = params.Loot;
	if (ReturnLoot != nullptr)
		*ReturnLoot = params.ReturnLoot;

}


// Function Cv2_playerController.Cv2_playerController_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59876);

	ACv2_playerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_Enter_K2Node_InputKeyEvent_11
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_InpActEvt_Enter_K2Node_InputKeyEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59874);

	ACv2_playerController_C_InpActEvt_Enter_K2Node_InputKeyEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_Escape_K2Node_InputKeyEvent_10
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_InpActEvt_Escape_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59872);

	ACv2_playerController_C_InpActEvt_Escape_K2Node_InputKeyEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_P_K2Node_InputKeyEvent_9
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_InpActEvt_P_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59870);

	ACv2_playerController_C_InpActEvt_P_K2Node_InputKeyEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_One_K2Node_InputKeyEvent_8
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_InpActEvt_One_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59868);

	ACv2_playerController_C_InpActEvt_One_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_Two_K2Node_InputKeyEvent_7
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_InpActEvt_Two_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59866);

	ACv2_playerController_C_InpActEvt_Two_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_Three_K2Node_InputKeyEvent_6
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_InpActEvt_Three_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59864);

	ACv2_playerController_C_InpActEvt_Three_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_Four_K2Node_InputKeyEvent_5
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_InpActEvt_Four_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59862);

	ACv2_playerController_C_InpActEvt_Four_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_Inventory_K2Node_InputActionEvent_4
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_InpActEvt_Inventory_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59860);

	ACv2_playerController_C_InpActEvt_Inventory_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_Map_K2Node_InputActionEvent_3
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_InpActEvt_Map_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59858);

	ACv2_playerController_C_InpActEvt_Map_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_Heal_K2Node_InputActionEvent_2
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_InpActEvt_Heal_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59856);

	ACv2_playerController_C_InpActEvt_Heal_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_DropWeapon_K2Node_InputActionEvent_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_InpActEvt_DropWeapon_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59854);

	ACv2_playerController_C_InpActEvt_DropWeapon_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_F1_K2Node_InputKeyEvent_4
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_InpActEvt_F1_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59852);

	ACv2_playerController_C_InpActEvt_F1_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_F2_K2Node_InputKeyEvent_3
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_InpActEvt_F2_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59850);

	ACv2_playerController_C_InpActEvt_F2_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_F3_K2Node_InputKeyEvent_2
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_InpActEvt_F3_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59848);

	ACv2_playerController_C_InpActEvt_F3_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.InpActEvt_F4_K2Node_InputKeyEvent_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_InpActEvt_F4_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59846);

	ACv2_playerController_C_InpActEvt_F4_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.OnFailure_BE497B2B4AEE791EF7C9C1B266252EF2
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_OnFailure_BE497B2B4AEE791EF7C9C1B266252EF2()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59845);

	ACv2_playerController_C_OnFailure_BE497B2B4AEE791EF7C9C1B266252EF2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.OnSuccess_BE497B2B4AEE791EF7C9C1B266252EF2
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_OnSuccess_BE497B2B4AEE791EF7C9C1B266252EF2()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59844);

	ACv2_playerController_C_OnSuccess_BE497B2B4AEE791EF7C9C1B266252EF2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ReciveChatMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGUI_ChatMessageStructure ChatStruct                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_ReciveChatMessage(const struct FGUI_ChatMessageStructure& ChatStruct)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59842);

	ACv2_playerController_C_ReciveChatMessage_Params params;
	params.ChatStruct = ChatStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.OpenChat
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_OpenChat()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59841);

	ACv2_playerController_C_OpenChat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59839);

	ACv2_playerController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.AddInventoryActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_AddInventoryActor(class AActor* Actor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59837);

	ACv2_playerController_C_AddInventoryActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ShowInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_ShowInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59836);

	ACv2_playerController_C_ShowInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ClearInventoryActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_ClearInventoryActor()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59835);

	ACv2_playerController_C_ClearInventoryActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ShowScoreMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<GUI_ScoreMessageType_EGUI_ScoreMessageType> MessageType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   MessageText                    (BlueprintVisible, BlueprintReadOnly, Parm)
void ACv2_playerController_C::STATIC_ShowScoreMessage(TEnumAsByte<GUI_ScoreMessageType_EGUI_ScoreMessageType> MessageType, const struct FText& MessageText)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59833);

	ACv2_playerController_C_ShowScoreMessage_Params params;
	params.MessageType = MessageType;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ServerCreateBuildingCraft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> CraftEnum                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Roll                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          YawAzimut                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 CamLoc                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                CamRot                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
void ACv2_playerController_C::STATIC_ServerCreateBuildingCraft(TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> CraftEnum, float Roll, float YawAzimut, float Pitch, const struct FVector& CamLoc, const struct FRotator& CamRot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59831);

	ACv2_playerController_C_ServerCreateBuildingCraft_Params params;
	params.CraftEnum = CraftEnum;
	params.Roll = Roll;
	params.YawAzimut = YawAzimut;
	params.Pitch = Pitch;
	params.CamLoc = CamLoc;
	params.CamRot = CamRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.CraftingPlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> Craft                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_CraftingPlayer(TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> Craft)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59829);

	ACv2_playerController_C_CraftingPlayer_Params params;
	params.Craft = Craft;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.UpdateLootSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FS_InventorySlot> LootSlotsArray                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ACv2_playerController_C::STATIC_UpdateLootSlots(TArray<struct FS_InventorySlot> LootSlotsArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59826);

	ACv2_playerController_C_UpdateLootSlots_Params params;
	params.LootSlotsArray = LootSlotsArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.UpdateLootArray
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FS_InventorySlot> LootSlotsArray                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ACv2_playerController_C::STATIC_UpdateLootArray(TArray<struct FS_InventorySlot>* LootSlotsArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59823);

	ACv2_playerController_C_UpdateLootArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LootSlotsArray != nullptr)
		*LootSlotsArray = params.LootSlotsArray;

}


// Function Cv2_playerController.Cv2_playerController_C.ShowKillerSheepMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FS_GUI_ShipKillerStrukt KillSheepStruct                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_ShowKillerSheepMessage(const struct FS_GUI_ShipKillerStrukt& KillSheepStruct)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59821);

	ACv2_playerController_C_ShowKillerSheepMessage_Params params;
	params.KillSheepStruct = KillSheepStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.SendKillSheepMessageToAll(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FS_GUI_ShipKillerStrukt KillSheepStruct                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_SendKillSheepMessageToAll_Server_(const struct FS_GUI_ShipKillerStrukt& KillSheepStruct)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59819);

	ACv2_playerController_C_SendKillSheepMessageToAll_Server__Params params;
	params.KillSheepStruct = KillSheepStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ShowNumberScore
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void ACv2_playerController_C::STATIC_ShowNumberScore(const struct FVector& Location, const struct FText& Text)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59817);

	ACv2_playerController_C_ShowNumberScore_Params params;
	params.Location = Location;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ClientRespawnPlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_ClientRespawnPlayer(TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterClass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59815);

	ACv2_playerController_C_ClientRespawnPlayer_Params params;
	params.CharacterClass = CharacterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ShowScoreMessageToAll(from server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<GUI_ScoreMessageType_EGUI_ScoreMessageType> MessageType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   MessageText                    (BlueprintVisible, BlueprintReadOnly, Parm)
void ACv2_playerController_C::STATIC_ShowScoreMessageToAll_from_server_(TEnumAsByte<GUI_ScoreMessageType_EGUI_ScoreMessageType> MessageType, const struct FText& MessageText)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59813);

	ACv2_playerController_C_ShowScoreMessageToAll_from_server__Params params;
	params.MessageType = MessageType;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.Recive_CHAT_Message(Client)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGUI_ChatMessageStructure Message                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_Recive_CHAT_Message_Client_(const struct FGUI_ChatMessageStructure& Message)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59811);

	ACv2_playerController_C_Recive_CHAT_Message_Client__Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.Send_CHAT_Message_run_On_Server
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGUI_ChatMessageStructure ChatMessageStr                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           SendToAll                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACv2_playerController_C::STATIC_Send_CHAT_Message_run_On_Server(const struct FGUI_ChatMessageStructure& ChatMessageStr, bool SendToAll)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59809);

	ACv2_playerController_C_Send_CHAT_Message_run_On_Server_Params params;
	params.ChatMessageStr = ChatMessageStr;
	params.SendToAll = SendToAll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ShowChatToAll
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   TextChat                       (BlueprintVisible, BlueprintReadOnly, Parm)
void ACv2_playerController_C::STATIC_ShowChatToAll(const struct FText& TextChat)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59807);

	ACv2_playerController_C_ShowChatToAll_Params params;
	params.TextChat = TextChat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.CraftingClientOnly
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> Craft                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_CraftingClientOnly(TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> Craft)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59805);

	ACv2_playerController_C_CraftingClientOnly_Params params;
	params.Craft = Craft;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.SetCraftArray
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_Nations_ECv2_Nations> Nation                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_SetCraftArray(TEnumAsByte<Cv2_Nations_ECv2_Nations> Nation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59803);

	ACv2_playerController_C_SetCraftArray_Params params;
	params.Nation = Nation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.AddInventoryActorShort
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_AddInventoryActorShort(class AActor* Actor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59801);

	ACv2_playerController_C_AddInventoryActorShort_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.CancelCraft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_CancelCraft()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59800);

	ACv2_playerController_C_CancelCraft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.GetEnemyBaseCoords
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_GetEnemyBaseCoords()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59799);

	ACv2_playerController_C_GetEnemyBaseCoords_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.Add_PointerWidget
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<GUI_Pointer_Type_EGUI_Pointer_Type> POinterType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_Add_PointerWidget(TEnumAsByte<GUI_Pointer_Type_EGUI_Pointer_Type> POinterType, const struct FVector& Location)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59797);

	ACv2_playerController_C_Add_PointerWidget_Params params;
	params.POinterType = POinterType;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.SetRespawnActorClient
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  RespActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_SetRespawnActorClient(class AActor* RespActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59795);

	ACv2_playerController_C_SetRespawnActorClient_Params params;
	params.RespActor = RespActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.SetRespawnActorServer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  RespActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_SetRespawnActorServer(class AActor* RespActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59793);

	ACv2_playerController_C_SetRespawnActorServer_Params params;
	params.RespActor = RespActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.PlayerSuicideClient
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_PlayerSuicideClient()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59792);

	ACv2_playerController_C_PlayerSuicideClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.PlayerSuicideServer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_PlayerSuicideServer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59791);

	ACv2_playerController_C_PlayerSuicideServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59790);

	ACv2_playerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.SpawnAdminPawnServer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_SpawnAdminPawnServer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59789);

	ACv2_playerController_C_SpawnAdminPawnServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.AddResourceComplect
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_AddResourceComplect()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59788);

	ACv2_playerController_C_AddResourceComplect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.BanPlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ACv2_playerController_C* Admin_Controller               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_BanPlayer(class ACv2_playerController_C* Admin_Controller)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59786);

	ACv2_playerController_C_BanPlayer_Params params;
	params.Admin_Controller = Admin_Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.KickPlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ACv2_playerController_C* Admin_Controller               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_KickPlayer(class ACv2_playerController_C* Admin_Controller)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59784);

	ACv2_playerController_C_KickPlayer_Params params;
	params.Admin_Controller = Admin_Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.KickPlayerClient
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_KickPlayerClient()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59783);

	ACv2_playerController_C_KickPlayerClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ShowBanOnClient
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_ShowBanOnClient()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59782);

	ACv2_playerController_C_ShowBanOnClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.CheckBan
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_CheckBan()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59781);

	ACv2_playerController_C_CheckBan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.Delete_Cheat_AddLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_Delete_Cheat_AddLoot()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59780);

	ACv2_playerController_C_Delete_Cheat_AddLoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.EnemyHitEvent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           isHeadShoot                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACv2_playerController_C::STATIC_EnemyHitEvent(bool isHeadShoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59778);

	ACv2_playerController_C_EnemyHitEvent_Params params;
	params.isHeadShoot = isHeadShoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ShowBlood
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_ShowBlood()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59777);

	ACv2_playerController_C_ShowBlood_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.PlaySoundMulticast
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class USoundCue*               Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_PlaySoundMulticast(class USoundCue* Sound, const struct FVector& Location)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59775);

	ACv2_playerController_C_PlaySoundMulticast_Params params;
	params.Sound = Sound;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ShowLevelUp
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            NewLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_ShowLevelUp(int NewLevel)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59773);

	ACv2_playerController_C_ShowLevelUp_Params params;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ControllerINICIALIZEInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_ControllerINICIALIZEInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59772);

	ACv2_playerController_C_ControllerINICIALIZEInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.InicializeInventoryOnClient
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_InicializeInventoryOnClient()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59771);

	ACv2_playerController_C_InicializeInventoryOnClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ServerSendCommandTalkMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv3_VoicesEnum_ECv3_VoicesEnum> VoiceEnum                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_ServerSendCommandTalkMessage(TEnumAsByte<Cv3_VoicesEnum_ECv3_VoicesEnum> VoiceEnum)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59769);

	ACv2_playerController_C_ServerSendCommandTalkMessage_Params params;
	params.VoiceEnum = VoiceEnum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ClientReciveCommandTalkMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGUI_ChatMessageStructure ChatStruct                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_ClientReciveCommandTalkMessage(const struct FGUI_ChatMessageStructure& ChatStruct)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59767);

	ACv2_playerController_C_ClientReciveCommandTalkMessage_Params params;
	params.ChatStruct = ChatStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.DeleteTest1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_DeleteTest1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59766);

	ACv2_playerController_C_DeleteTest1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.SERVER_GiveOfficers
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_SERVER_GiveOfficers()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59765);

	ACv2_playerController_C_SERVER_GiveOfficers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.CLIENT_GetOfficersFromServer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FSelectSpawnOfficerStr> Officers                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ACv2_playerController_C::STATIC_CLIENT_GetOfficersFromServer(TArray<struct FSelectSpawnOfficerStr> Officers)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59762);

	ACv2_playerController_C_CLIENT_GetOfficersFromServer_Params params;
	params.Officers = Officers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ApplyDamageCreature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_ApplyDamageCreature(class APawn* Pawn, float Damage)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59760);

	ACv2_playerController_C_ApplyDamageCreature_Params params;
	params.Pawn = Pawn;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ClientExitToMainMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_ClientExitToMainMenu()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59759);

	ACv2_playerController_C_ClientExitToMainMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ClientSpawnExitZone
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_ClientSpawnExitZone(const struct FVector& Location)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59757);

	ACv2_playerController_C_ClientSpawnExitZone_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.CLIENT_ShowRebootEvaquation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            SecondsToReboot                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_CLIENT_ShowRebootEvaquation(const struct FText& Text, int SecondsToReboot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59755);

	ACv2_playerController_C_CLIENT_ShowRebootEvaquation_Params params;
	params.Text = Text;
	params.SecondsToReboot = SecondsToReboot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ClientToServerSetLobbyID
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            LobbyID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            countPlayer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_ClientToServerSetLobbyID(int LobbyID, int countPlayer)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59753);

	ACv2_playerController_C_ClientToServerSetLobbyID_Params params;
	params.LobbyID = LobbyID;
	params.countPlayer = countPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.GetDBActorData
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_GetDBActorData()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59752);

	ACv2_playerController_C_GetDBActorData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.SERVER_SET_AC_control
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           AC_Ok                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACv2_playerController_C::STATIC_SERVER_SET_AC_control(bool AC_Ok)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59750);

	ACv2_playerController_C_SERVER_SET_AC_control_Params params;
	params.AC_Ok = AC_Ok;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ReceiveEndPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59748);

	ACv2_playerController_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.SERVER_ON_EXIT
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_SERVER_ON_EXIT()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59747);

	ACv2_playerController_C_SERVER_ON_EXIT_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.CLIENT_On_ADD_SCORE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_CLIENT_On_ADD_SCORE()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59746);

	ACv2_playerController_C_CLIENT_On_ADD_SCORE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.BndEvt__Cv4_DataBaseUpdateAndGet_K2Node_ComponentBoundEvent_0_OnAddScore__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_playerController_C::STATIC_BndEvt__Cv4_DataBaseUpdateAndGet_K2Node_ComponentBoundEvent_0_OnAddScore__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59745);

	ACv2_playerController_C_BndEvt__Cv4_DataBaseUpdateAndGet_K2Node_ComponentBoundEvent_0_OnAddScore__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_playerController.Cv2_playerController_C.ExecuteUbergraph_Cv2_playerController
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_playerController_C::STATIC_ExecuteUbergraph_Cv2_playerController(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59743);

	ACv2_playerController_C_ExecuteUbergraph_Cv2_playerController_Params params;
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
