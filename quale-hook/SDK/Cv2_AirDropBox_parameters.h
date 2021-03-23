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

// Function Cv2_AirDropBox.Cv2_AirDropBox_C.GenerateRandoomLoot
struct ACv2_AirDropBox_C_GenerateRandoomLoot_Params
{
	TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>            LootID;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_AirDropBox.Cv2_AirDropBox_C.OnRep_isDestroy
struct ACv2_AirDropBox_C_OnRep_isDestroy_Params
{
};

// Function Cv2_AirDropBox.Cv2_AirDropBox_C.UserConstructionScript
struct ACv2_AirDropBox_C_UserConstructionScript_Params
{
};

// Function Cv2_AirDropBox.Cv2_AirDropBox_C.UpdateLootArray
struct ACv2_AirDropBox_C_UpdateLootArray_Params
{
	TArray<struct FS_InventorySlot>                    LootSlotsArray;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Cv2_AirDropBox.Cv2_AirDropBox_C.ReceiveBeginPlay
struct ACv2_AirDropBox_C_ReceiveBeginPlay_Params
{
};

// Function Cv2_AirDropBox.Cv2_AirDropBox_C.ReceiveAnyDamage
struct ACv2_AirDropBox_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_AirDropBox.Cv2_AirDropBox_C.ExecuteUbergraph_Cv2_AirDropBox
struct ACv2_AirDropBox_C_ExecuteUbergraph_Cv2_AirDropBox_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
