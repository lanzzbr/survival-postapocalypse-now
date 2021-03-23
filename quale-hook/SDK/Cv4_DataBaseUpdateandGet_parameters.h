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

// Function Cv4_DataBaseUpdateandGet.Cv4_DataBaseUpdateAndGet_C.CheckIsValidClassicalState
struct UCv4_DataBaseUpdateAndGet_C_CheckIsValidClassicalState_Params
{
	struct FString                                     OwnerID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Cv4_DataBaseUpdateandGet.Cv4_DataBaseUpdateAndGet_C.ReturnClassicalState
struct UCv4_DataBaseUpdateAndGet_C_ReturnClassicalState_Params
{
	struct FNewDB_Classical                            Classical_Structure;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv4_DataBaseUpdateandGet.Cv4_DataBaseUpdateAndGet_C.UpdateClassicalState
struct UCv4_DataBaseUpdateAndGet_C_UpdateClassicalState_Params
{
	struct FString                                     OwnerID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Clear_Inventory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AddScores;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv4_DataBaseUpdateandGet.Cv4_DataBaseUpdateAndGet_C.WriteMoneyToBase
struct UCv4_DataBaseUpdateAndGet_C_WriteMoneyToBase_Params
{
	int                                                Money;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv4_DataBaseUpdateandGet.Cv4_DataBaseUpdateAndGet_C.CheckIsValidSaveState
struct UCv4_DataBaseUpdateAndGet_C_CheckIsValidSaveState_Params
{
	struct FString                                     OwnerID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Cv4_DataBaseUpdateandGet.Cv4_DataBaseUpdateAndGet_C.UpdateSaveState
struct UCv4_DataBaseUpdateAndGet_C_UpdateSaveState_Params
{
	struct FString                                     OwnerID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               UpdateAndClear;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Banned;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv4_DataBaseUpdateandGet.Cv4_DataBaseUpdateAndGet_C.ReturnSaveState
struct UCv4_DataBaseUpdateAndGet_C_ReturnSaveState_Params
{
	struct Fsurv_2019_FieldsStructure                  LastStructure;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv4_DataBaseUpdateandGet.Cv4_DataBaseUpdateAndGet_C.OnAddScore__DelegateSignature
struct UCv4_DataBaseUpdateAndGet_C_OnAddScore__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
