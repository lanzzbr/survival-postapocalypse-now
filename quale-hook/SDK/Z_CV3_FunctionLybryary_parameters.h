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

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_VaresResponceToArray
struct UZ_CV3_FunctionLybryary_C_Z_CV3_VaresResponceToArray_Params
{
	struct FString                                     String;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FIntegerVector>                      IntegerArray;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_ConvertGetPlayerStateInfo
struct UZ_CV3_FunctionLybryary_C_Z_CV3_ConvertGetPlayerStateInfo_Params
{
	struct FString                                     SourceString;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Hunger1;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Thirst1;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Tempirature1;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Health1;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_IsSingleMode
struct UZ_CV3_FunctionLybryary_C_Z_CV3_IsSingleMode_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSingle;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_SereverSetLootActorBP_GET_ON_GROUND(ServerOnly)
struct UZ_CV3_FunctionLybryary_C_Z_CV3_SereverSetLootActorBP_GET_ON_GROUND_ServerOnly__Params
{
	class ACv2_LootBP_C*                               LootActorBP;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  Z_Loot;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_CharacterSwichWeapon
struct UZ_CV3_FunctionLybryary_C_Z_CV3_CharacterSwichWeapon_Params
{
	class APlayerController*                           PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>          Z_Socet;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_Name_To_ZLoot
struct UZ_CV3_FunctionLybryary_C_Z_CV3_Name_To_ZLoot_Params
{
	struct FName                                       LootName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  ZLoot;                                                     // (Parm, OutParm, HasGetValueTypeHash)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_ClearSplit
struct UZ_CV3_FunctionLybryary_C_Z_CV3_ClearSplit_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_SetDebugMode
struct UZ_CV3_FunctionLybryary_C_Z_CV3_SetDebugMode_Params
{
	bool                                               SetDebug;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_PrintDebugMessage(ClientOnly)
struct UZ_CV3_FunctionLybryary_C_Z_CV3_PrintDebugMessage_ClientOnly__Params
{
	struct FString                                     Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Param;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_GetDebugMode
struct UZ_CV3_FunctionLybryary_C_Z_CV3_GetDebugMode_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsDebugMode;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_CheckCanSplit
struct UZ_CV3_FunctionLybryary_C_Z_CV3_CheckCanSplit_Params
{
	struct FName                                       LootName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanSplit;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_UseAlcohol
struct UZ_CV3_FunctionLybryary_C_Z_CV3_UseAlcohol_Params
{
	float                                              Effectivity;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_UseFood
struct UZ_CV3_FunctionLybryary_C_Z_CV3_UseFood_Params
{
	float                                              Effectivuty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ChangeThirsty;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_UseDrink
struct UZ_CV3_FunctionLybryary_C_Z_CV3_UseDrink_Params
{
	float                                              Effectivuty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ChangeThirsty;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_UseUsable
struct UZ_CV3_FunctionLybryary_C_Z_CV3_UseUsable_Params
{
	struct FZ_LootStr                                  Z_Loot;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                                     PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WasUsefull;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_UseExplosive
struct UZ_CV3_FunctionLybryary_C_Z_CV3_UseExplosive_Params
{
	struct FZ_LootStr                                  Z_Loot;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                                     PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_UseMedicine
struct UZ_CV3_FunctionLybryary_C_Z_CV3_UseMedicine_Params
{
	float                                              Effectivuty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ChangeHP;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_GetEffectivity
struct UZ_CV3_FunctionLybryary_C_Z_CV3_GetEffectivity_Params
{
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Effectivity;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_SereverSetLootActorBP(ServerOnly)
struct UZ_CV3_FunctionLybryary_C_Z_CV3_SereverSetLootActorBP_ServerOnly__Params
{
	class ACv2_LootBP_C*                               LootActorBP;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  Z_Loot;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_CheckResourceForCraft
struct UZ_CV3_FunctionLybryary_C_Z_CV3_CheckResourceForCraft_Params
{
	class ACv2_playerController_C*                     Cv2_playerController;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> Craft;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_Cv3LootType_ToZ_Equip_Socket
struct UZ_CV3_FunctionLybryary_C_Z_CV3_Cv3LootType_ToZ_Equip_Socket_Params
{
	TEnumAsByte<Cv2_LootType_ECv2_LootType>            LootType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>          Z_EquipSocket;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.F_CV3_GetCv3Loot
struct UZ_CV3_FunctionLybryary_C_F_CV3_GetCv3Loot_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_GetLootByType
struct UZ_CV3_FunctionLybryary_C_Z_CV3_GetLootByType_Params
{
	class UZ_InventoryComponent_C*                     Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_LootType_ECv2_LootType>            LootType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FZ_LootStr>                          ZLoot;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_ZLoot_to_Loot
struct UZ_CV3_FunctionLybryary_C_Z_CV3_ZLoot_to_Loot_Params
{
	TArray<struct FZ_LootStr>                          Z_Loot;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCv2_LootStructure>                  Loot;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3Loot_To_Z_Loot_ONLYCARGO
struct UZ_CV3_FunctionLybryary_C_Z_CV3Loot_To_Z_Loot_ONLYCARGO_Params
{
	struct FCv2_LootStructure                          CV3Loot;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FCv2_LootCargoStructure                     Cargo_Loot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               IsCargo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  Z_Loot;                                                    // (Parm, OutParm, HasGetValueTypeHash)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_WeaponToZLoot
struct UZ_CV3_FunctionLybryary_C_Z_CV3_WeaponToZLoot_Params
{
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZ_LootStr                                  Out_Row;                                                   // (Parm, OutParm, HasGetValueTypeHash)
};

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_CharacterToInventory
struct UZ_CV3_FunctionLybryary_C_Z_CV3_CharacterToInventory_Params
{
	class UZ_InventoryManager_C*                       Manager;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCV2_CharacterTypeStructure                 CV2_CharacterTypeStructure;                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
