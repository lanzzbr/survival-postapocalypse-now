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

// Function CV2_SaveOptions.CV2_SaveOptions_C.CheckSettingsCorrect
struct UCV2_SaveOptions_C_CheckSettingsCorrect_Params
{
	bool                                               IsCorrect;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CV2_SaveOptions.CV2_SaveOptions_C.GetSettings
struct UCV2_SaveOptions_C_GetSettings_Params
{
	struct FSettingsStructure                          SettingsStr;                                               // (Parm, OutParm, HasGetValueTypeHash)
};

// Function CV2_SaveOptions.CV2_SaveOptions_C.SaveSettings
struct UCV2_SaveOptions_C_SaveSettings_Params
{
	struct FSettingsStructure                          Settings;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
