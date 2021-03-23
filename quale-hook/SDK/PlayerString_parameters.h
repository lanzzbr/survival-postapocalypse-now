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

// Function PlayerString.PlayerString_C.ShowPlayerOnAdmin
struct UPlayerString_C_ShowPlayerOnAdmin_Params
{
};

// Function PlayerString.PlayerString_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
struct UPlayerString_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerString.PlayerString_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature
struct UPlayerString_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerString.PlayerString_C.SetSelfStyle
struct UPlayerString_C_SetSelfStyle_Params
{
};

// Function PlayerString.PlayerString_C.BndEvt__FriendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UPlayerString_C_BndEvt__FriendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerString.PlayerString_C.SetFriendStyle
struct UPlayerString_C_SetFriendStyle_Params
{
};

// Function PlayerString.PlayerString_C.SetNormalStyle
struct UPlayerString_C_SetNormalStyle_Params
{
};

// Function PlayerString.PlayerString_C.OnMouseLeave
struct UPlayerString_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PlayerString.PlayerString_C.DrawString
struct UPlayerString_C_DrawString_Params
{
	struct FText                                       Ping;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Nick;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Kills;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Death;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          Side;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBPUniqueNetId                              SteamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Rank;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     UniqIDString;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               SpeedHack;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AntiCheatOK;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerString.PlayerString_C.Construct
struct UPlayerString_C_Construct_Params
{
};

// Function PlayerString.PlayerString_C.PreConstruct
struct UPlayerString_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerString.PlayerString_C.SetSelected
struct UPlayerString_C_SetSelected_Params
{
	bool                                               IsSelected;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerString.PlayerString_C.ExecuteUbergraph_PlayerString
struct UPlayerString_C_ExecuteUbergraph_PlayerString_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
