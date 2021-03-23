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

// Function CommandWidgetBase.CommandWidgetBase_C.Construct
struct UCommandWidgetBase_C_Construct_Params
{
};

// Function CommandWidgetBase.CommandWidgetBase_C.ShowMenu
struct UCommandWidgetBase_C_ShowMenu_Params
{
};

// Function CommandWidgetBase.CommandWidgetBase_C.HIde Menu
struct UCommandWidgetBase_C_HIde_Menu_Params
{
};

// Function CommandWidgetBase.CommandWidgetBase_C.ShowTalkMessage
struct UCommandWidgetBase_C_ShowTalkMessage_Params
{
	struct FText                                       Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       InstigatorName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CommandWidgetBase.CommandWidgetBase_C.ExecuteUbergraph_CommandWidgetBase
struct UCommandWidgetBase_C_ExecuteUbergraph_CommandWidgetBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
