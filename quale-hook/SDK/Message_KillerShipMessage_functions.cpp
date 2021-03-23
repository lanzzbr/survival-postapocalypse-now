// Name: ANUSGAME, Version: 4.18

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Message_KillerShipMessage.Message_KillerShipMessage_C.SetOutlineColor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UTextBlock*              self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Outline_Color                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMessage_KillerShipMessage_C::STATIC_SetOutlineColor(class UTextBlock* self2, const struct FLinearColor& Outline_Color)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(74097);

	UMessage_KillerShipMessage_C_SetOutlineColor_Params params;
	params.self2 = self2;
	params.Outline_Color = Outline_Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Message_KillerShipMessage.Message_KillerShipMessage_C.DrawString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FS_GUI_ShipKillerStrukt KillSheepStrukt                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UMessage_KillerShipMessage_C::STATIC_DrawString(const struct FS_GUI_ShipKillerStrukt& KillSheepStrukt)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(74095);

	UMessage_KillerShipMessage_C_DrawString_Params params;
	params.KillSheepStrukt = KillSheepStrukt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Message_KillerShipMessage.Message_KillerShipMessage_C.ExecuteUbergraph_Message_KillerShipMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMessage_KillerShipMessage_C::STATIC_ExecuteUbergraph_Message_KillerShipMessage(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(74074);

	UMessage_KillerShipMessage_C_ExecuteUbergraph_Message_KillerShipMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
