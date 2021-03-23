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

// Function SpawnManager.SpawnManager_C.GetSpawnTransform
struct USpawnManager_C_GetSpawnTransform_Params
{
	struct FTransform                                  SpawnTransform;                                            // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function SpawnManager.SpawnManager_C.ReceiveBeginPlay
struct USpawnManager_C_ReceiveBeginPlay_Params
{
};

// Function SpawnManager.SpawnManager_C.ExecuteUbergraph_SpawnManager
struct USpawnManager_C_ExecuteUbergraph_SpawnManager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
