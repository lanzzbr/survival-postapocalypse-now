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

// Function TradeWidget.TradeWidget_C.Draw
struct UTradeWidget_C_Draw_Params
{
	bool                                               ShowNoMoney;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FZ_LootStr                                  FormLoot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FZ_LootStr                                  ToLoot;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UTexture2D*                                  FromAvatarIcon;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  ToAvatarIcon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TradeWidget.TradeWidget_C.ExecuteUbergraph_TradeWidget
struct UTradeWidget_C_ExecuteUbergraph_TradeWidget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
