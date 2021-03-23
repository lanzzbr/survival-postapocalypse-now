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

// Function Cv3_GameMode.Cv3_GameMode_C.CheckRebootTimer
struct ACv3_GameMode_C_CheckRebootTimer_Params
{
};

// Function Cv3_GameMode.Cv3_GameMode_C.SpawnAirDrop_Ju88
struct ACv3_GameMode_C_SpawnAirDrop_Ju88_Params
{
};

// Function Cv3_GameMode.Cv3_GameMode_C.isBanned
struct ACv3_GameMode_C_isBanned_Params
{
	struct FString                                     UniqID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               isBanned;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv3_GameMode.Cv3_GameMode_C.isAdmin
struct ACv3_GameMode_C_isAdmin_Params
{
	struct FString                                     UniqID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               isAdmin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv3_GameMode.Cv3_GameMode_C.UserConstructionScript
struct ACv3_GameMode_C_UserConstructionScript_Params
{
};

// Function Cv3_GameMode.Cv3_GameMode_C.ReceiveBeginPlay
struct ACv3_GameMode_C_ReceiveBeginPlay_Params
{
};

// Function Cv3_GameMode.Cv3_GameMode_C.RebootServerAfter
struct ACv3_GameMode_C_RebootServerAfter_Params
{
	int                                                TimeInseconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv3_GameMode.Cv3_GameMode_C.ExecuteUbergraph_Cv3_GameMode
struct ACv3_GameMode_C_ExecuteUbergraph_Cv3_GameMode_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
