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

// Function Cv2_LootBP.Cv2_LootBP_C.OnRep_LootName
struct ACv2_LootBP_C_OnRep_LootName_Params
{
};

// Function Cv2_LootBP.Cv2_LootBP_C.OnRep_isLooted
struct ACv2_LootBP_C_OnRep_isLooted_Params
{
};

// Function Cv2_LootBP.Cv2_LootBP_C.OnRep_isDrop
struct ACv2_LootBP_C_OnRep_isDrop_Params
{
};

// Function Cv2_LootBP.Cv2_LootBP_C.SetStaticMesh
struct ACv2_LootBP_C_SetStaticMesh_Params
{
};

// Function Cv2_LootBP.Cv2_LootBP_C.UserConstructionScript
struct ACv2_LootBP_C_UserConstructionScript_Params
{
};

// Function Cv2_LootBP.Cv2_LootBP_C.ReceiveBeginPlay
struct ACv2_LootBP_C_ReceiveBeginPlay_Params
{
};

// Function Cv2_LootBP.Cv2_LootBP_C.SetPhysics
struct ACv2_LootBP_C_SetPhysics_Params
{
};

// Function Cv2_LootBP.Cv2_LootBP_C.GenerateLoot
struct ACv2_LootBP_C_GenerateLoot_Params
{
	TEnumAsByte<Cv3_FurnitureLootType_ECv3_FurnitureLootType> Loot_Type;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_LootBP.Cv2_LootBP_C.SetZLoot
struct ACv2_LootBP_C_SetZLoot_Params
{
};

// Function Cv2_LootBP.Cv2_LootBP_C.Root_UpdateMesh
struct ACv2_LootBP_C_Root_UpdateMesh_Params
{
};

// Function Cv2_LootBP.Cv2_LootBP_C.OffPhysics
struct ACv2_LootBP_C_OffPhysics_Params
{
};

// Function Cv2_LootBP.Cv2_LootBP_C.SetCustomLoot
struct ACv2_LootBP_C_SetCustomLoot_Params
{
	TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>            Loot_Type;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_LootBP.Cv2_LootBP_C.SetCustomLootName
struct ACv2_LootBP_C_SetCustomLootName_Params
{
	struct FName                                       Loot_Type;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_LootBP.Cv2_LootBP_C.ExecuteUbergraph_Cv2_LootBP
struct ACv2_LootBP_C_ExecuteUbergraph_Cv2_LootBP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
