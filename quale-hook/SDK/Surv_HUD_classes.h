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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Surv_HUD.Surv_HUD_C
// 0x0099 (FullSize[0x04E9] - InheritedSize[0x0450])
class ASurv_HUD_C : public AHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0450(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                SlotsTimer;                                                // 0x0460(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class USurvMainMenuBase_C*                         MainMenu;                                                  // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenu_MainMenu_Lobby_C*                      LobbyVar;                                                  // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AInventoryCharacterRender_C*                 RenderCharacter;                                           // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeaponAmmoInfoStr                          AmmoPrymaryStr;                                            // 0x0480(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FWeaponAmmoInfoStr                          AmmoSecondaryStr;                                          // 0x04A8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UConnectToMainMenuBase_C*                    ConnectWidget;                                             // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     NewVar_1;                                                  // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               PlayerIformationCorrect;                                   // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(47444);
		return ptr;
	}



	void STATIC_SetAmmoStructures();
	void STATIC_LoadInventoy();
	void STATIC_CheckSlotsCreate();
	void STATIC_UserConstructionScript();
	void STATIC_HideInventory();
	void STATIC_ReceiveBeginPlay();
	void STATIC_EnableRenderActors(bool SetEnable);
	void STATIC_ShowInventory();
	void STATIC_ShowTradeInfo(const struct FZ_TradeStr& TradeStr);
	void STATIC_SetMoneyText(int MoneysCount);
	void STATIC_Show_Select_Game_Mode();
	void STATIC_ExecuteUbergraph_Surv_HUD(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
