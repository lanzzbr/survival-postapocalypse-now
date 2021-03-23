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

// Function GameOverTopString.GameOverTopString_C.Draw
struct UGameOverTopString_C_Draw_Params
{
	struct FText                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Parametr;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       PlaceVar;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  AvatarTexture;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameOverTopString.GameOverTopString_C.ShowMe
struct UGameOverTopString_C_ShowMe_Params
{
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameOverTopString.GameOverTopString_C.MiniDraw
struct UGameOverTopString_C_MiniDraw_Params
{
	struct FText                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  Icon;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameOverTopString.GameOverTopString_C.ExecuteUbergraph_GameOverTopString
struct UGameOverTopString_C_ExecuteUbergraph_GameOverTopString_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
