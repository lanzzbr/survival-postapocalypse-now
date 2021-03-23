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

// Function PlayerHeader.PlayerHeader_C.Construct
struct UPlayerHeader_C_Construct_Params
{
};

// Function PlayerHeader.PlayerHeader_C.ResetSortStyle
struct UPlayerHeader_C_ResetSortStyle_Params
{
};

// Function PlayerHeader.PlayerHeader_C.BndEvt__SB_Score_K2Node_ComponentBoundEvent_4_ButtonClick__DelegateSignature
struct UPlayerHeader_C_BndEvt__SB_Score_K2Node_ComponentBoundEvent_4_ButtonClick__DelegateSignature_Params
{
	bool                                               SortFromMin;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerHeader.PlayerHeader_C.BndEvt__SB_Deaths_K2Node_ComponentBoundEvent_5_ButtonClick__DelegateSignature
struct UPlayerHeader_C_BndEvt__SB_Deaths_K2Node_ComponentBoundEvent_5_ButtonClick__DelegateSignature_Params
{
	bool                                               SortFromMin;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerHeader.PlayerHeader_C.BndEvt__SB_KillsButton_K2Node_ComponentBoundEvent_6_ButtonClick__DelegateSignature
struct UPlayerHeader_C_BndEvt__SB_KillsButton_K2Node_ComponentBoundEvent_6_ButtonClick__DelegateSignature_Params
{
	bool                                               SortFromMin;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerHeader.PlayerHeader_C.BndEvt__SB_Damage_K2Node_ComponentBoundEvent_7_ButtonClick__DelegateSignature
struct UPlayerHeader_C_BndEvt__SB_Damage_K2Node_ComponentBoundEvent_7_ButtonClick__DelegateSignature_Params
{
	bool                                               SortFromMin;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerHeader.PlayerHeader_C.SetSort
struct UPlayerHeader_C_SetSort_Params
{
	bool                                               FromMin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<GUI_SortPlayerParam_EGUI_SortPlayerParam> SortParametr;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerHeader.PlayerHeader_C.ExecuteUbergraph_PlayerHeader
struct UPlayerHeader_C_ExecuteUbergraph_PlayerHeader_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
