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

// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_CONTROLLER_GetSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_SlotStr>      Slots                          (Parm, OutParm, ZeroConstructor)
void ACv2_Game_HUD_C::STATIC_ZL_CONTROLLER_GetSlots(TArray<struct FZ_SlotStr>* Slots)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55356);

	ACv2_Game_HUD_C_ZL_CONTROLLER_GetSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Slots != nullptr)
		*Slots = params.Slots;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.CloseFurnitureIfNeed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_CloseFurnitureIfNeed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55354);

	ACv2_Game_HUD_C_CloseFurnitureIfNeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.LootInfoTune
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_MoveTypeEnum_ECv2_MoveTypeEnum> MoveType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_LootInfoTune(TEnumAsByte<Cv2_MoveTypeEnum_ECv2_MoveTypeEnum> MoveType)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55352);

	ACv2_Game_HUD_C_LootInfoTune_Params params;
	params.MoveType = MoveType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.GetCharacterTimeFormArray
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterEnum                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_GetCharacterTimeFormArray(TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterEnum, float* Output)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55335);

	ACv2_Game_HUD_C_GetCharacterTimeFormArray_Params params;
	params.CharacterEnum = CharacterEnum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.CheckMenuSlotsCreate
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_CheckMenuSlotsCreate()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55308);

	ACv2_Game_HUD_C_CheckMenuSlotsCreate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.SetAmmoStructures
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_SetAmmoStructures()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55304);

	ACv2_Game_HUD_C_SetAmmoStructures_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.GetCharacterBlocktime
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterEnum                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BlockTime                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_GetCharacterBlocktime(TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterEnum, float* BlockTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55302);

	ACv2_Game_HUD_C_GetCharacterBlocktime_Params params;
	params.CharacterEnum = CharacterEnum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BlockTime != nullptr)
		*BlockTime = params.BlockTime;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.Print settings
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_Print_settings()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55300);

	ACv2_Game_HUD_C_Print_settings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.RespawnPlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_RespawnPlayer(TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterClass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55298);

	ACv2_Game_HUD_C_RespawnPlayer_Params params;
	params.CharacterClass = CharacterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.CreateCharacterBlockTimes
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_CreateCharacterBlockTimes()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55296);

	ACv2_Game_HUD_C_CreateCharacterBlockTimes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.GetLandscapePivotActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<class AActor*>          Actors                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ACv2_Game_HUD_C::STATIC_GetLandscapePivotActor(TArray<class AActor*>* Actors)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55293);

	ACv2_Game_HUD_C_GetLandscapePivotActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.CloseMainWidgets
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           WidgetsWasClosed               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACv2_Game_HUD_C::STATIC_CloseMainWidgets(bool* WidgetsWasClosed)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55291);

	ACv2_Game_HUD_C_CloseMainWidgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WidgetsWasClosed != nullptr)
		*WidgetsWasClosed = params.WidgetsWasClosed;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ResetProcedures
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ResetProcedures()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55289);

	ACv2_Game_HUD_C_ResetProcedures_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.CheckBlockChatShow
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           BlockChat                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACv2_Game_HUD_C::STATIC_CheckBlockChatShow(bool* BlockChat)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55287);

	ACv2_Game_HUD_C_CheckBlockChatShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BlockChat != nullptr)
		*BlockChat = params.BlockChat;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ClearViewport
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ClearViewport()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55285);

	ACv2_Game_HUD_C_ClearViewport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.GetLandscapeSize
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_GetLandscapeSize()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55282);

	ACv2_Game_HUD_C_GetLandscapeSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.SpawnRamdomClass
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_SpawnRamdomClass()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55280);

	ACv2_Game_HUD_C_SpawnRamdomClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.SetInputGameMode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           FindMode_IfRemoveWidget        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputModeStructure     InputMode                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_SetInputGameMode(bool FindMode_IfRemoveWidget, const struct FInputModeStructure& InputMode)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55278);

	ACv2_Game_HUD_C_SetInputGameMode_Params params;
	params.FindMode_IfRemoveWidget = FindMode_IfRemoveWidget;
	params.InputMode = InputMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55277);

	ACv2_Game_HUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.AnimateStep__FinishedFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_AnimateStep__FinishedFunc()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55276);

	ACv2_Game_HUD_C_AnimateStep__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.AnimateStep__UpdateFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_AnimateStep__UpdateFunc()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55275);

	ACv2_Game_HUD_C_AnimateStep__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_SLOT_Hovered
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_ZL_GUI_SLOT_Hovered(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55273);

	ACv2_Game_HUD_C_ZL_GUI_SLOT_Hovered_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_SLOT_Unhovered
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ZL_GUI_SLOT_Unhovered()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55272);

	ACv2_Game_HUD_C_ZL_GUI_SLOT_Unhovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_CHARACTER_AttachToWeapon(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes> Scopes                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer> Silencer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_ZL_CHARACTER_AttachToWeapon_Server_(TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes> Scopes, TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer> Silencer, const struct FName& Weapon)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55270);

	ACv2_Game_HUD_C_ZL_CHARACTER_AttachToWeapon_Server__Params params;
	params.Scopes = Scopes;
	params.Silencer = Silencer;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_DrawLootNear
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ACv2_Game_HUD_C::STATIC_ZL_GUI_DrawLootNear(TArray<struct FZ_LootStr>* Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55267);

	ACv2_Game_HUD_C_ZL_GUI_DrawLootNear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loot != nullptr)
		*Loot = params.Loot;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_CHARACTER_UNAttach(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_ZL_CHARACTER_UNAttach_Server_(const struct FName& Weapon)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55265);

	ACv2_Game_HUD_C_ZL_CHARACTER_UNAttach_Server__Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_Overload
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          OverloadMass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_ZL_GUI_Overload(float OverloadMass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55263);

	ACv2_Game_HUD_C_ZL_GUI_Overload_Params params;
	params.OverloadMass = OverloadMass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ReciveChatMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGUI_ChatMessageStructure ChatStruct                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_ReciveChatMessage(const struct FGUI_ChatMessageStructure& ChatStruct)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55261);

	ACv2_Game_HUD_C_ReciveChatMessage_Params params;
	params.ChatStruct = ChatStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.OpenChat
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_OpenChat()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55260);

	ACv2_Game_HUD_C_OpenChat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.Show Inventory Widget
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_Show_Inventory_Widget()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55259);

	ACv2_Game_HUD_C_Show_Inventory_Widget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.Hide Inventory Widget
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_Hide_Inventory_Widget()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55258);

	ACv2_Game_HUD_C_Hide_Inventory_Widget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_CHARACTER_Unequip(Serever)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_ZL_CHARACTER_Unequip_Serever_(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55256);

	ACv2_Game_HUD_C_ZL_CHARACTER_Unequip_Serever__Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowChooseOfSide
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ShowChooseOfSide()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55255);

	ACv2_Game_HUD_C_ShowChooseOfSide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.HideChooseOfSide
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_HideChooseOfSide()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55254);

	ACv2_Game_HUD_C_HideChooseOfSide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_CHARACTER_USEThis(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_ZL_CHARACTER_USEThis_Server_(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55252);

	ACv2_Game_HUD_C_ZL_CHARACTER_USEThis_Server__Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_CHARACTER_DropThis(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              LootStr                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_ZL_CHARACTER_DropThis_Server_(const struct FZ_LootStr& LootStr)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55250);

	ACv2_Game_HUD_C_ZL_CHARACTER_DropThis_Server__Params params;
	params.LootStr = LootStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.Show_MainChatWindow
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_Show_MainChatWindow()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55249);

	ACv2_Game_HUD_C_Show_MainChatWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.Hide_ChatMainWindow
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_Hide_ChatMainWindow()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55248);

	ACv2_Game_HUD_C_Hide_ChatMainWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_CHARACTER_EquipThis(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_ZL_CHARACTER_EquipThis_Server_(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55246);

	ACv2_Game_HUD_C_ZL_CHARACTER_EquipThis_Server__Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowBlackScreen
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_ShowBlackScreen(float Delay)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55244);

	ACv2_Game_HUD_C_ShowBlackScreen_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.Hide Black Screen
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_Hide_Black_Screen()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55243);

	ACv2_Game_HUD_C_Hide_Black_Screen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_DND_Drop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ZL_GUI_DND_Drop()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55242);

	ACv2_Game_HUD_C_ZL_GUI_DND_Drop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.Show InGameMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_Show_InGameMenu()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55241);

	ACv2_Game_HUD_C_Show_InGameMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.Hide InGameMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_Hide_InGameMenu()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55240);

	ACv2_Game_HUD_C_Hide_InGameMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_DnD_Drag
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UUserWidget*             DragSlot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_ZL_GUI_DnD_Drag(class UUserWidget* DragSlot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55238);

	ACv2_Game_HUD_C_ZL_GUI_DnD_Drag_Params params;
	params.DragSlot = DragSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowEndGameWidget
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ShowEndGameWidget()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55237);

	ACv2_Game_HUD_C_ShowEndGameWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.Hide EndGame Widget
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_Hide_EndGame_Widget()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55236);

	ACv2_Game_HUD_C_Hide_EndGame_Widget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_ClearContainer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ZL_GUI_ClearContainer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55235);

	ACv2_Game_HUD_C_ZL_GUI_ClearContainer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowDamageDirection
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_ShowDamageDirection(const struct FVector& Direction)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55233);

	ACv2_Game_HUD_C_ShowDamageDirection_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_Construkt_Container
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      ContainerInventory             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FZ_ContainerInfo        ContInform                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_ZL_GUI_Construkt_Container(TArray<struct FZ_LootStr>* ContainerInventory, const struct FZ_ContainerInfo& ContInform)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55230);

	ACv2_Game_HUD_C_ZL_GUI_Construkt_Container_Params params;
	params.ContInform = ContInform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ContainerInventory != nullptr)
		*ContainerInventory = params.ContainerInventory;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowMapScreen
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ShowMapScreen()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55229);

	ACv2_Game_HUD_C_ShowMapScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.HideMapScreen
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_HideMapScreen()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55228);

	ACv2_Game_HUD_C_HideMapScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_Update
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      Inventori                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FZ_LootStr>      Container                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsOnFloorMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACv2_Game_HUD_C::STATIC_ZL_GUI_Update(TArray<struct FZ_LootStr>* Inventori, TArray<struct FZ_LootStr>* Container, bool IsOnFloorMode)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55225);

	ACv2_Game_HUD_C_ZL_GUI_Update_Params params;
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


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_ConstructMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_SlotStr>      Slots                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ACv2_Game_HUD_C::STATIC_ZL_GUI_ConstructMenu(TArray<struct FZ_SlotStr>* Slots)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55222);

	ACv2_Game_HUD_C_ZL_GUI_ConstructMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Slots != nullptr)
		*Slots = params.Slots;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowAdminPanel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ShowAdminPanel()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55221);

	ACv2_Game_HUD_C_ShowAdminPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.HideAdminPanel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_HideAdminPanel()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55220);

	ACv2_Game_HUD_C_HideAdminPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowBan
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ShowBan()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55219);

	ACv2_Game_HUD_C_ShowBan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_ShowInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ZL_GUI_ShowInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55218);

	ACv2_Game_HUD_C_ZL_GUI_ShowInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_HideInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ZL_GUI_HideInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55217);

	ACv2_Game_HUD_C_ZL_GUI_HideInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.HideGlobalMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_HideGlobalMenu()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55216);

	ACv2_Game_HUD_C_HideGlobalMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowGlobalMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ShowGlobalMenu()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55215);

	ACv2_Game_HUD_C_ShowGlobalMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.HideSelectSpawn
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_HideSelectSpawn()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55214);

	ACv2_Game_HUD_C_HideSelectSpawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowSelectSpawn
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ShowSelectSpawn()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55213);

	ACv2_Game_HUD_C_ShowSelectSpawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowSoftBlackScreen
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_ShowSoftBlackScreen(float Duration)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55211);

	ACv2_Game_HUD_C_ShowSoftBlackScreen_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowTalkMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ShowTalkMenu()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55210);

	ACv2_Game_HUD_C_ShowTalkMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.HideTalkMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_HideTalkMenu()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55209);

	ACv2_Game_HUD_C_HideTalkMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowGameOverWidget
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ShowGameOverWidget()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55208);

	ACv2_Game_HUD_C_ShowGameOverWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.HideGameOverWidget
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_HideGameOverWidget()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55207);

	ACv2_Game_HUD_C_HideGameOverWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55206);

	ACv2_Game_HUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowScoreMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<GUI_ScoreMessageType_EGUI_ScoreMessageType> MessageType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   MessageText                    (BlueprintVisible, BlueprintReadOnly, Parm)
void ACv2_Game_HUD_C::STATIC_ShowScoreMessage(TEnumAsByte<GUI_ScoreMessageType_EGUI_ScoreMessageType> MessageType, const struct FText& MessageText)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55204);

	ACv2_Game_HUD_C_ShowScoreMessage_Params params;
	params.MessageType = MessageType;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.HideAllHUD
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           ShowMessage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACv2_Game_HUD_C::STATIC_HideAllHUD(bool ShowMessage)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55202);

	ACv2_Game_HUD_C_HideAllHUD_Params params;
	params.ShowMessage = ShowMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ReceiveDestroyed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ReceiveDestroyed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55201);

	ACv2_Game_HUD_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ResetAllGUI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ResetAllGUI()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55200);

	ACv2_Game_HUD_C_ResetAllGUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.SlideWeapon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_LootType_ECv2_LootType> LootType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_SlideWeapon(TEnumAsByte<Cv2_LootType_ECv2_LootType> LootType)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55198);

	ACv2_Game_HUD_C_SlideWeapon_Params params;
	params.LootType = LootType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowAllHud
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ShowAllHud()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55197);

	ACv2_Game_HUD_C_ShowAllHud_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.AnimateMapStep
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UMap_Overlay_C*          MapOverlay                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACv2_Game_HUD_C::STATIC_AnimateMapStep(class UMap_Overlay_C* MapOverlay, int Step, bool Reverse)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55195);

	ACv2_Game_HUD_C_AnimateMapStep_Params params;
	params.MapOverlay = MapOverlay;
	params.Step = Step;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.EnableRenderActors
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           SetEnable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACv2_Game_HUD_C::STATIC_EnableRenderActors(bool SetEnable)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55193);

	ACv2_Game_HUD_C_EnableRenderActors_Params params;
	params.SetEnable = SetEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.MapPressed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_MapPressed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55192);

	ACv2_Game_HUD_C_MapPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.InventoryPressed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_InventoryPressed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55191);

	ACv2_Game_HUD_C_InventoryPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.OptionsPressed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_OptionsPressed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55190);

	ACv2_Game_HUD_C_OptionsPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.CraftPressed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_CraftPressed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55189);

	ACv2_Game_HUD_C_CraftPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.OpenCraftActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_OpenCraftActor(class AActor* Actor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55187);

	ACv2_Game_HUD_C_OpenCraftActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ExitPressed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ExitPressed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55186);

	ACv2_Game_HUD_C_ExitPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.PlayerBeginLive
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_PlayerBeginLive()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55185);

	ACv2_Game_HUD_C_PlayerBeginLive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.PlayerDead
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 DeadLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_PlayerDead(const struct FVector& DeadLocation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55183);

	ACv2_Game_HUD_C_PlayerDead_Params params;
	params.DeadLocation = DeadLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.PressedTalkKey
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_PressedTalkKey()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55182);

	ACv2_Game_HUD_C_PressedTalkKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowCommandTalkMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   InstigatorName                 (BlueprintVisible, BlueprintReadOnly, Parm)
void ACv2_Game_HUD_C::STATIC_ShowCommandTalkMessage(const struct FText& Message, const struct FText& InstigatorName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55180);

	ACv2_Game_HUD_C_ShowCommandTalkMessage_Params params;
	params.Message = Message;
	params.InstigatorName = InstigatorName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.SendCommandTalkMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv3_VoicesEnum_ECv3_VoicesEnum> VoiceEnum                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_SendCommandTalkMessage(TEnumAsByte<Cv3_VoicesEnum_ECv3_VoicesEnum> VoiceEnum)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55178);

	ACv2_Game_HUD_C_SendCommandTalkMessage_Params params;
	params.VoiceEnum = VoiceEnum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowHeadshot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ShowHeadshot()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55177);

	ACv2_Game_HUD_C_ShowHeadshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowRebootEvaquation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            SecondsToReboot                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_ShowRebootEvaquation(const struct FText& Text, int SecondsToReboot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55175);

	ACv2_Game_HUD_C_ShowRebootEvaquation_Params params;
	params.Text = Text;
	params.SecondsToReboot = SecondsToReboot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.InventroyHide
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_InventroyHide()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55174);

	ACv2_Game_HUD_C_InventroyHide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.AddMArkerOnCompas
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShowDistance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACv2_Game_HUD_C::STATIC_AddMArkerOnCompas(const struct FVector& Location, class UTexture2D* Icon, bool ShowDistance)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55172);

	ACv2_Game_HUD_C_AddMArkerOnCompas_Params params;
	params.Location = Location;
	params.Icon = Icon;
	params.ShowDistance = ShowDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.DeleteMarkersFromCompas
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_DeleteMarkersFromCompas(const struct FVector& Location)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55170);

	ACv2_Game_HUD_C_DeleteMarkersFromCompas_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ShowTimer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           UseAnim                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACv2_Game_HUD_C::STATIC_ShowTimer(float Seconds, bool UseAnim)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55168);

	ACv2_Game_HUD_C_ShowTimer_Params params;
	params.Seconds = Seconds;
	params.UseAnim = UseAnim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ZL_GUI_InventoryRespawnMode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Game_HUD_C::STATIC_ZL_GUI_InventoryRespawnMode()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55167);

	ACv2_Game_HUD_C_ZL_GUI_InventoryRespawnMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Game_HUD.Cv2_Game_HUD_C.ExecuteUbergraph_Cv2_Game_HUD
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_Game_HUD_C::STATIC_ExecuteUbergraph_Cv2_Game_HUD(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55165);

	ACv2_Game_HUD_C_ExecuteUbergraph_Cv2_Game_HUD_Params params;
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
