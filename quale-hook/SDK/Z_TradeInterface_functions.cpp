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

// Function Z_TradeInterface.Z_TradeInterface_C.ShowTradeInfo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_TradeStr             TradeStr                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_TradeInterface_C::STATIC_ShowTradeInfo(const struct FZ_TradeStr& TradeStr)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32581);

	UZ_TradeInterface_C_ShowTradeInfo_Params params;
	params.TradeStr = TradeStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
