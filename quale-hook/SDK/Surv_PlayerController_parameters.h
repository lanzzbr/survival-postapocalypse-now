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

// Function Surv_PlayerController.Surv_PlayerController_C.ZL_CONTROLLER_GetSlots
struct ASurv_PlayerController_C_ZL_CONTROLLER_GetSlots_Params
{
	TArray<struct FZ_SlotStr>                          Slots;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Surv_PlayerController.Surv_PlayerController_C.OnRep_PlayerInfoIsLoading
struct ASurv_PlayerController_C_OnRep_PlayerInfoIsLoading_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.GiveAward
struct ASurv_PlayerController_C_GiveAward_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.SetTimeMark
struct ASurv_PlayerController_C_SetTimeMark_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.ResetAwards
struct ASurv_PlayerController_C_ResetAwards_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.CheckDalyAwards
struct ASurv_PlayerController_C_CheckDalyAwards_Params
{
	bool                                               NeedSave;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Surv_PlayerController.Surv_PlayerController_C.GetRealMyDay
struct ASurv_PlayerController_C_GetRealMyDay_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.CheckIsValidSaveState
struct ASurv_PlayerController_C_CheckIsValidSaveState_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.UpdateSaveState
struct ASurv_PlayerController_C_UpdateSaveState_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.ReturnSaveState
struct ASurv_PlayerController_C_ReturnSaveState_Params
{
	struct Fsurv_2019_FieldsStructure                  surv_2019_FieldsStructure;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function Surv_PlayerController.Surv_PlayerController_C.CreateMenuSlots
struct ASurv_PlayerController_C_CreateMenuSlots_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.UserConstructionScript
struct ASurv_PlayerController_C_UserConstructionScript_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.OnFailure_B04AF70C4F0D83150985F9BE89646F01
struct ASurv_PlayerController_C_OnFailure_B04AF70C4F0D83150985F9BE89646F01_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.OnSuccess_B04AF70C4F0D83150985F9BE89646F01
struct ASurv_PlayerController_C_OnSuccess_B04AF70C4F0D83150985F9BE89646F01_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.OnFailure_00DBCDFB49EE95F7290527A8A67DFFC6
struct ASurv_PlayerController_C_OnFailure_00DBCDFB49EE95F7290527A8A67DFFC6_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.OnSuccess_00DBCDFB49EE95F7290527A8A67DFFC6
struct ASurv_PlayerController_C_OnSuccess_00DBCDFB49EE95F7290527A8A67DFFC6_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.OnFailure_3596E7F2462CC8F51AADFFBC1BED8DE6
struct ASurv_PlayerController_C_OnFailure_3596E7F2462CC8F51AADFFBC1BED8DE6_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.OnSuccess_3596E7F2462CC8F51AADFFBC1BED8DE6
struct ASurv_PlayerController_C_OnSuccess_3596E7F2462CC8F51AADFFBC1BED8DE6_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.GetDBActorData
struct ASurv_PlayerController_C_GetDBActorData_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.SaveConnectSession
struct ASurv_PlayerController_C_SaveConnectSession_Params
{
	struct FBlueprintSessionResult                     selectSession;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Surv_PlayerController.Surv_PlayerController_C.ClientDestroySession
struct ASurv_PlayerController_C_ClientDestroySession_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.CLIENT_Show_day_Award
struct ASurv_PlayerController_C_CLIENT_Show_day_Award_Params
{
	int                                                Day;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WinIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowAwardOverload;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Surv_PlayerController.Surv_PlayerController_C.SERVER_Chaek_7Days_Stat
struct ASurv_PlayerController_C_SERVER_Chaek_7Days_Stat_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_ConstructMenu
struct ASurv_PlayerController_C_ZL_GUI_ConstructMenu_Params
{
	TArray<struct FZ_SlotStr>                          Slots;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_Update
struct ASurv_PlayerController_C_ZL_GUI_Update_Params
{
	TArray<struct FZ_LootStr>                          Inventori;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FZ_LootStr>                          Container;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsOnFloorMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_ShowInventory
struct ASurv_PlayerController_C_ZL_GUI_ShowInventory_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.SERVER_UpdateBase
struct ASurv_PlayerController_C_SERVER_UpdateBase_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_HideInventory
struct ASurv_PlayerController_C_ZL_GUI_HideInventory_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_Construkt_Container
struct ASurv_PlayerController_C_ZL_GUI_Construkt_Container_Params
{
	TArray<struct FZ_LootStr>                          ContainerInventory;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FZ_ContainerInfo                            ContInform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Surv_PlayerController.Surv_PlayerController_C.GET_INFORMATION_COMPLITE
struct ASurv_PlayerController_C_GET_INFORMATION_COMPLITE_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.ConnectToSession
struct ASurv_PlayerController_C_ConnectToSession_Params
{
	struct FBlueprintSessionResult                     SearchResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Surv_PlayerController.Surv_PlayerController_C.INI_MenuPawns
struct ASurv_PlayerController_C_INI_MenuPawns_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.CHANGE_MODE
struct ASurv_PlayerController_C_CHANGE_MODE_Params
{
	bool                                               Classical;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Surv_PlayerController.Surv_PlayerController_C.SetInventoryCharacterLocation
struct ASurv_PlayerController_C_SetInventoryCharacterLocation_Params
{
	bool                                               isClassic;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Surv_PlayerController.Surv_PlayerController_C.SetDefaultPawnTransform
struct ASurv_PlayerController_C_SetDefaultPawnTransform_Params
{
	struct FTransform                                  Transf;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              FieldOfView;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Surv_PlayerController.Surv_PlayerController_C.ReceiveBeginPlay
struct ASurv_PlayerController_C_ReceiveBeginPlay_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_InventoryRespawnMode
struct ASurv_PlayerController_C_ZL_GUI_InventoryRespawnMode_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_Overload
struct ASurv_PlayerController_C_ZL_GUI_Overload_Params
{
	float                                              OverloadMass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Surv_PlayerController.Surv_PlayerController_C.ZL_CHARACTER_UNAttach(Server)
struct ASurv_PlayerController_C_ZL_CHARACTER_UNAttach_Server__Params
{
	struct FName                                       Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_DrawLootNear
struct ASurv_PlayerController_C_ZL_GUI_DrawLootNear_Params
{
	TArray<struct FZ_LootStr>                          Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Surv_PlayerController.Surv_PlayerController_C.ZL_CHARACTER_AttachToWeapon(Server)
struct ASurv_PlayerController_C_ZL_CHARACTER_AttachToWeapon_Server__Params
{
	TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes>        Scopes;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer>    Silencer;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_SLOT_Unhovered
struct ASurv_PlayerController_C_ZL_GUI_SLOT_Unhovered_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_SLOT_Hovered
struct ASurv_PlayerController_C_ZL_GUI_SLOT_Hovered_Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Surv_PlayerController.Surv_PlayerController_C.ZL_CHARACTER_Unequip(Serever)
struct ASurv_PlayerController_C_ZL_CHARACTER_Unequip_Serever__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Surv_PlayerController.Surv_PlayerController_C.ZL_CHARACTER_USEThis(Server)
struct ASurv_PlayerController_C_ZL_CHARACTER_USEThis_Server__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Surv_PlayerController.Surv_PlayerController_C.ZL_CHARACTER_DropThis(Server)
struct ASurv_PlayerController_C_ZL_CHARACTER_DropThis_Server__Params
{
	struct FZ_LootStr                                  LootStr;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Surv_PlayerController.Surv_PlayerController_C.ZL_CHARACTER_EquipThis(Server)
struct ASurv_PlayerController_C_ZL_CHARACTER_EquipThis_Server__Params
{
	struct FZ_LootStr                                  Loot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_DND_Drop
struct ASurv_PlayerController_C_ZL_GUI_DND_Drop_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_DnD_Drag
struct ASurv_PlayerController_C_ZL_GUI_DnD_Drag_Params
{
	class UUserWidget*                                 DragSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Surv_PlayerController.Surv_PlayerController_C.ZL_GUI_ClearContainer
struct ASurv_PlayerController_C_ZL_GUI_ClearContainer_Params
{
};

// Function Surv_PlayerController.Surv_PlayerController_C.ExecuteUbergraph_Surv_PlayerController
struct ASurv_PlayerController_C_ExecuteUbergraph_Surv_PlayerController_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
