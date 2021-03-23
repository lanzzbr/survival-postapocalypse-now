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

// Function Menu_KeyboardString.Menu_KeyboardString_C.PreConstruct
struct UMenu_KeyboardString_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_KeyboardString.Menu_KeyboardString_C.Draw
struct UMenu_KeyboardString_C_Draw_Params
{
	struct FInputActionKeyMapping                      KeyVar;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsAxies;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInputAxisKeyMapping                        AxisStr;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ActionName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Menu_KeyboardString.Menu_KeyboardString_C.BndEvt__InputKeySelector_0_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature
struct UMenu_KeyboardString_C_BndEvt__InputKeySelector_0_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Menu_KeyboardString.Menu_KeyboardString_C.Reset
struct UMenu_KeyboardString_C_Reset_Params
{
};

// Function Menu_KeyboardString.Menu_KeyboardString_C.RestoreDefaults
struct UMenu_KeyboardString_C_RestoreDefaults_Params
{
};

// Function Menu_KeyboardString.Menu_KeyboardString_C.RestoreDefAzerty
struct UMenu_KeyboardString_C_RestoreDefAzerty_Params
{
};

// Function Menu_KeyboardString.Menu_KeyboardString_C.OnMouseEnter
struct UMenu_KeyboardString_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Menu_KeyboardString.Menu_KeyboardString_C.OnMouseLeave
struct UMenu_KeyboardString_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Menu_KeyboardString.Menu_KeyboardString_C.Construct
struct UMenu_KeyboardString_C_Construct_Params
{
};

// Function Menu_KeyboardString.Menu_KeyboardString_C.ExecuteUbergraph_Menu_KeyboardString
struct UMenu_KeyboardString_C_ExecuteUbergraph_Menu_KeyboardString_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
