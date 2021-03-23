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

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.UpdatePlayersCount
struct USURV_GlobalMenuBase_C_UpdatePlayersCount_Params
{
};

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.OnMouseWheel
struct USURV_GlobalMenuBase_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.OnMouseButtonDoubleClick
struct USURV_GlobalMenuBase_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               InMouseEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.OnMouseButtonDown
struct USURV_GlobalMenuBase_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.Construct
struct USURV_GlobalMenuBase_C_Construct_Params
{
};

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.Root_ShowExitMenu
struct USURV_GlobalMenuBase_C_Root_ShowExitMenu_Params
{
};

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.Root_ShowInventory
struct USURV_GlobalMenuBase_C_Root_ShowInventory_Params
{
};

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.Root_ShowOptions
struct USURV_GlobalMenuBase_C_Root_ShowOptions_Params
{
};

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_805_OnClick_button__DelegateSignature
struct USURV_GlobalMenuBase_C_BndEvt__Inventory_K2Node_ComponentBoundEvent_805_OnClick_button__DelegateSignature_Params
{
};

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.BndEvt__Options_K2Node_ComponentBoundEvent_815_OnClick_button__DelegateSignature
struct USURV_GlobalMenuBase_C_BndEvt__Options_K2Node_ComponentBoundEvent_815_OnClick_button__DelegateSignature_Params
{
};

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.BndEvt__Respawn_K2Node_ComponentBoundEvent_0_OnClick_button__DelegateSignature
struct USURV_GlobalMenuBase_C_BndEvt__Respawn_K2Node_ComponentBoundEvent_0_OnClick_button__DelegateSignature_Params
{
};

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.BndEvt__Exit_K2Node_ComponentBoundEvent_32_OnClick_button__DelegateSignature
struct USURV_GlobalMenuBase_C_BndEvt__Exit_K2Node_ComponentBoundEvent_32_OnClick_button__DelegateSignature_Params
{
};

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.BndEvt__Close_K2Node_ComponentBoundEvent_1_OnClick_button__DelegateSignature
struct USURV_GlobalMenuBase_C_BndEvt__Close_K2Node_ComponentBoundEvent_1_OnClick_button__DelegateSignature_Params
{
};

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.Root_ShowActorCraft
struct USURV_GlobalMenuBase_C_Root_ShowActorCraft_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.RootShowInventory_NoAnim
struct USURV_GlobalMenuBase_C_RootShowInventory_NoAnim_Params
{
};

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.Root_MinimalMode
struct USURV_GlobalMenuBase_C_Root_MinimalMode_Params
{
	bool                                               SetMinimalistic;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.Root_HideBlur
struct USURV_GlobalMenuBase_C_Root_HideBlur_Params
{
	bool                                               Hide;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.Root_RespanwMenu
struct USURV_GlobalMenuBase_C_Root_RespanwMenu_Params
{
};

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.Root_OnOpen
struct USURV_GlobalMenuBase_C_Root_OnOpen_Params
{
};

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.Root_OnClose
struct USURV_GlobalMenuBase_C_Root_OnClose_Params
{
};

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.BndEvt__SURV_GlobalMenuExit_K2Node_ComponentBoundEvent_1_ON START EXIT__DelegateSignature
struct USURV_GlobalMenuBase_C_BndEvt__SURV_GlobalMenuExit_K2Node_ComponentBoundEvent_1_ON_START_EXIT__DelegateSignature_Params
{
};

// Function SURV_GlobalMenuBase.SURV_GlobalMenuBase_C.ExecuteUbergraph_SURV_GlobalMenuBase
struct USURV_GlobalMenuBase_C_ExecuteUbergraph_SURV_GlobalMenuBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
