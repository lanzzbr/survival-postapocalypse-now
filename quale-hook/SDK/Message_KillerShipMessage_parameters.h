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

// Function Message_KillerShipMessage.Message_KillerShipMessage_C.SetOutlineColor
struct UMessage_KillerShipMessage_C_SetOutlineColor_Params
{
	class UTextBlock*                                  self2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Outline_Color;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Message_KillerShipMessage.Message_KillerShipMessage_C.DrawString
struct UMessage_KillerShipMessage_C_DrawString_Params
{
	struct FS_GUI_ShipKillerStrukt                     KillSheepStrukt;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Message_KillerShipMessage.Message_KillerShipMessage_C.ExecuteUbergraph_Message_KillerShipMessage
struct UMessage_KillerShipMessage_C_ExecuteUbergraph_Message_KillerShipMessage_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
