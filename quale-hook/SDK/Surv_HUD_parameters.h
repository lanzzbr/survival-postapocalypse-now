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

// Function Surv_HUD.Surv_HUD_C.SetAmmoStructures
struct ASurv_HUD_C_SetAmmoStructures_Params
{
};

// Function Surv_HUD.Surv_HUD_C.LoadInventoy
struct ASurv_HUD_C_LoadInventoy_Params
{
};

// Function Surv_HUD.Surv_HUD_C.CheckSlotsCreate
struct ASurv_HUD_C_CheckSlotsCreate_Params
{
};

// Function Surv_HUD.Surv_HUD_C.UserConstructionScript
struct ASurv_HUD_C_UserConstructionScript_Params
{
};

// Function Surv_HUD.Surv_HUD_C.HideInventory
struct ASurv_HUD_C_HideInventory_Params
{
};

// Function Surv_HUD.Surv_HUD_C.ReceiveBeginPlay
struct ASurv_HUD_C_ReceiveBeginPlay_Params
{
};

// Function Surv_HUD.Surv_HUD_C.EnableRenderActors
struct ASurv_HUD_C_EnableRenderActors_Params
{
	bool                                               SetEnable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Surv_HUD.Surv_HUD_C.ShowInventory
struct ASurv_HUD_C_ShowInventory_Params
{
};

// Function Surv_HUD.Surv_HUD_C.ShowTradeInfo
struct ASurv_HUD_C_ShowTradeInfo_Params
{
	struct FZ_TradeStr                                 TradeStr;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Surv_HUD.Surv_HUD_C.SetMoneyText
struct ASurv_HUD_C_SetMoneyText_Params
{
	int                                                MoneysCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Surv_HUD.Surv_HUD_C.Show Select Game Mode
struct ASurv_HUD_C_Show_Select_Game_Mode_Params
{
};

// Function Surv_HUD.Surv_HUD_C.ExecuteUbergraph_Surv_HUD
struct ASurv_HUD_C_ExecuteUbergraph_Surv_HUD_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
