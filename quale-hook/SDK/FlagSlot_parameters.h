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

// Function FlagSlot.FlagSlot_C.SetbuttonStyle
struct UFlagSlot_C_SetbuttonStyle_Params
{
	class UObject*                                     Image;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FlagSlot.FlagSlot_C.PreConstruct
struct UFlagSlot_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlagSlot.FlagSlot_C.DrawFlag
struct UFlagSlot_C_DrawFlag_Params
{
	TEnumAsByte<Cv2_Nations_ECv2_Nations>              Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FlagSlot.FlagSlot_C.SelectFlag
struct UFlagSlot_C_SelectFlag_Params
{
};

// Function FlagSlot.FlagSlot_C.UNSelectFlag
struct UFlagSlot_C_UNSelectFlag_Params
{
};

// Function FlagSlot.FlagSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
struct UFlagSlot_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function FlagSlot.FlagSlot_C.Set disabled
struct UFlagSlot_C_Set_disabled_Params
{
};

// Function FlagSlot.FlagSlot_C.SetEnabled
struct UFlagSlot_C_SetEnabled_Params
{
};

// Function FlagSlot.FlagSlot_C.OnMouseEnter
struct UFlagSlot_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function FlagSlot.FlagSlot_C.ExecuteUbergraph_FlagSlot
struct UFlagSlot_C_ExecuteUbergraph_FlagSlot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FlagSlot.FlagSlot_C.Click__DelegateSignature
struct UFlagSlot_C_Click__DelegateSignature_Params
{
	TEnumAsByte<Cv2_Nations_ECv2_Nations>              Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
