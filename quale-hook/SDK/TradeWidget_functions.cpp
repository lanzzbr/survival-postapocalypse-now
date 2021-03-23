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

// Function TradeWidget.TradeWidget_C.Draw
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           ShowNoMoney                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FZ_LootStr              FormLoot                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FZ_LootStr              ToLoot                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UTexture2D*              FromAvatarIcon                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              ToAvatarIcon                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTradeWidget_C::STATIC_Draw(bool ShowNoMoney, const struct FZ_LootStr& FormLoot, const struct FZ_LootStr& ToLoot, class UTexture2D* FromAvatarIcon, class UTexture2D* ToAvatarIcon)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(62723);

	UTradeWidget_C_Draw_Params params;
	params.ShowNoMoney = ShowNoMoney;
	params.FormLoot = FormLoot;
	params.ToLoot = ToLoot;
	params.FromAvatarIcon = FromAvatarIcon;
	params.ToAvatarIcon = ToAvatarIcon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TradeWidget.TradeWidget_C.ExecuteUbergraph_TradeWidget
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTradeWidget_C::STATIC_ExecuteUbergraph_TradeWidget(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(62721);

	UTradeWidget_C_ExecuteUbergraph_TradeWidget_Params params;
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
