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

// Function Cv2_GameInstance.Cv2_GameInstance_C.CheatControll
struct UCv2_GameInstance_C_CheatControll_Params
{
};

// Function Cv2_GameInstance.Cv2_GameInstance_C.QuitGameExit
struct UCv2_GameInstance_C_QuitGameExit_Params
{
};

// Function Cv2_GameInstance.Cv2_GameInstance_C.CreateStorageActor
struct UCv2_GameInstance_C_CreateStorageActor_Params
{
};

// Function Cv2_GameInstance.Cv2_GameInstance_C.CreateBatFiles
struct UCv2_GameInstance_C_CreateBatFiles_Params
{
};

// Function Cv2_GameInstance.Cv2_GameInstance_C.ShowZagluha
struct UCv2_GameInstance_C_ShowZagluha_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv2_GameInstance.Cv2_GameInstance_C.ApplyVideoSettings
struct UCv2_GameInstance_C_ApplyVideoSettings_Params
{
};

// Function Cv2_GameInstance.Cv2_GameInstance_C.ApplyMouseSettings
struct UCv2_GameInstance_C_ApplyMouseSettings_Params
{
};

// Function Cv2_GameInstance.Cv2_GameInstance_C.CheckResolution
struct UCv2_GameInstance_C_CheckResolution_Params
{
	struct FString                                     String;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv2_GameInstance.Cv2_GameInstance_C.ApplySettings
struct UCv2_GameInstance_C_ApplySettings_Params
{
};

// Function Cv2_GameInstance.Cv2_GameInstance_C.SaveSettings
struct UCv2_GameInstance_C_SaveSettings_Params
{
	struct FSettingsStructure                          SettingsStruct;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Cv2_GameInstance.Cv2_GameInstance_C.LoadSettings
struct UCv2_GameInstance_C_LoadSettings_Params
{
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cv2_GameInstance.Cv2_GameInstance_C.OnFailure_71D85BA246BA90EDBA5995AD2163273F
struct UCv2_GameInstance_C_OnFailure_71D85BA246BA90EDBA5995AD2163273F_Params
{
};

// Function Cv2_GameInstance.Cv2_GameInstance_C.OnSuccess_71D85BA246BA90EDBA5995AD2163273F
struct UCv2_GameInstance_C_OnSuccess_71D85BA246BA90EDBA5995AD2163273F_Params
{
};

// Function Cv2_GameInstance.Cv2_GameInstance_C.OnFailure_FF52DE6242D10D4E178AF0B0830C1FFB
struct UCv2_GameInstance_C_OnFailure_FF52DE6242D10D4E178AF0B0830C1FFB_Params
{
};

// Function Cv2_GameInstance.Cv2_GameInstance_C.OnSuccess_FF52DE6242D10D4E178AF0B0830C1FFB
struct UCv2_GameInstance_C_OnSuccess_FF52DE6242D10D4E178AF0B0830C1FFB_Params
{
};

// Function Cv2_GameInstance.Cv2_GameInstance_C.ChangeVolume
struct UCv2_GameInstance_C_ChangeVolume_Params
{
	float                                              MasterVolume;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MusicVolume;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_GameInstance.Cv2_GameInstance_C.ReceiveInit
struct UCv2_GameInstance_C_ReceiveInit_Params
{
};

// Function Cv2_GameInstance.Cv2_GameInstance_C.ReconnectMainMenu
struct UCv2_GameInstance_C_ReconnectMainMenu_Params
{
};

// Function Cv2_GameInstance.Cv2_GameInstance_C.UpdateSession
struct UCv2_GameInstance_C_UpdateSession_Params
{
};

// Function Cv2_GameInstance.Cv2_GameInstance_C.ExecuteUbergraph_Cv2_GameInstance
struct UCv2_GameInstance_C_ExecuteUbergraph_Cv2_GameInstance_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
