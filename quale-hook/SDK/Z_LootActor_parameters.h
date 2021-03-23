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

// Function Z_LootActor.Z_LootActor_C.Root_UpdateMesh
struct AZ_LootActor_C_Root_UpdateMesh_Params
{
};

// Function Z_LootActor.Z_LootActor_C.OnRep_ZTransportLoot
struct AZ_LootActor_C_OnRep_ZTransportLoot_Params
{
};

// Function Z_LootActor.Z_LootActor_C.LootIsValid
struct AZ_LootActor_C_LootIsValid_Params
{
	bool                                               Valid;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_LootActor.Z_LootActor_C.UserConstructionScript
struct AZ_LootActor_C_UserConstructionScript_Params
{
};

// Function Z_LootActor.Z_LootActor_C.ReceiveBeginPlay
struct AZ_LootActor_C_ReceiveBeginPlay_Params
{
};

// Function Z_LootActor.Z_LootActor_C.DRAW_LOOT
struct AZ_LootActor_C_DRAW_LOOT_Params
{
	struct FZ_LootStr                                  Loot_Struct;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Z_LootActor.Z_LootActor_C.ExecuteUbergraph_Z_LootActor
struct AZ_LootActor_C_ExecuteUbergraph_Z_LootActor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
