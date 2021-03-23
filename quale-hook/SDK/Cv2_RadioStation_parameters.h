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

// Function Cv2_RadioStation.Cv2_RadioStation_C.UserConstructionScript
struct ACv2_RadioStation_C_UserConstructionScript_Params
{
};

// Function Cv2_RadioStation.Cv2_RadioStation_C.UpdateLootArray
struct ACv2_RadioStation_C_UpdateLootArray_Params
{
	TArray<struct FS_InventorySlot>                    LootSlotsArray;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Cv2_RadioStation.Cv2_RadioStation_C.ReceiveDestroyed
struct ACv2_RadioStation_C_ReceiveDestroyed_Params
{
};

// Function Cv2_RadioStation.Cv2_RadioStation_C.ReceiveAnyDamage
struct ACv2_RadioStation_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_RadioStation.Cv2_RadioStation_C.ExecuteUbergraph_Cv2_RadioStation
struct ACv2_RadioStation_C_ExecuteUbergraph_Cv2_RadioStation_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
