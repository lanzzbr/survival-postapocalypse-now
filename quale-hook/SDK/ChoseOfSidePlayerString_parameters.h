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

// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.CheckRankLock
struct UChoseOfSidePlayerString_C_CheckRankLock_Params
{
};

// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.GetText_1
struct UChoseOfSidePlayerString_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.Get_TimeLock_Visibility_1
struct UChoseOfSidePlayerString_C_Get_TimeLock_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.OnMouseButtonDown
struct UChoseOfSidePlayerString_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.SetSeletedStyle
struct UChoseOfSidePlayerString_C_SetSeletedStyle_Params
{
};

// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.SetUnselectedStyle
struct UChoseOfSidePlayerString_C_SetUnselectedStyle_Params
{
};

// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.OnMouseEnter
struct UChoseOfSidePlayerString_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.OnMouseLeave
struct UChoseOfSidePlayerString_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.DrawString
struct UChoseOfSidePlayerString_C_DrawString_Params
{
	struct FCV2_CharacterTypeStructure                 CharacterStr;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.Tick
struct UChoseOfSidePlayerString_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.SetTimeLockStyle
struct UChoseOfSidePlayerString_C_SetTimeLockStyle_Params
{
	bool                                               Lock;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.SetRankLockStyle
struct UChoseOfSidePlayerString_C_SetRankLockStyle_Params
{
	struct FCV2_CharacterTypeStructure                 CharacterStr;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.Construct
struct UChoseOfSidePlayerString_C_Construct_Params
{
};

// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.SetNormalStyle
struct UChoseOfSidePlayerString_C_SetNormalStyle_Params
{
};

// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.ExecuteUbergraph_ChoseOfSidePlayerString
struct UChoseOfSidePlayerString_C_ExecuteUbergraph_ChoseOfSidePlayerString_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
