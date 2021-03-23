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

// Function LoadingScreen.LoadingScreen_C.HideBlackScreen
struct ULoadingScreen_C_HideBlackScreen_Params
{
};

// Function LoadingScreen.LoadingScreen_C.ShowBlackScreen
struct ULoadingScreen_C_ShowBlackScreen_Params
{
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoadingScreen.LoadingScreen_C.ShowSoftStyle
struct ULoadingScreen_C_ShowSoftStyle_Params
{
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoadingScreen.LoadingScreen_C.Stop
struct ULoadingScreen_C_Stop_Params
{
};

// Function LoadingScreen.LoadingScreen_C.Tick
struct ULoadingScreen_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoadingScreen.LoadingScreen_C.ExecuteUbergraph_LoadingScreen
struct ULoadingScreen_C_ExecuteUbergraph_LoadingScreen_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
