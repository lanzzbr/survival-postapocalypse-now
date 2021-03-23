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

// WidgetBlueprintGeneratedClass GlobalMenu_ROOT.GlobalMenu_ROOT_C
// 0x00D0 (FullSize[0x02D0] - InheritedSize[0x0200])
class UGlobalMenu_ROOT_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            Slidemenu;                                                 // 0x0208(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UGlobalMenuButton_ROOT_C*>            RootButtonsArray;                                          // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UZ_InventoryBASE_ROOT_C*                     RootCurrentInventoryRef;                                   // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Click_CRAFT_Button;                                        // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    Click_MAP_Button;                                          // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    Click_Options_Button;                                      // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    Click_CLOSE_Button;                                        // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    Click_RESPAWN_Button;                                      // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    Click_EXIT_Button;                                         // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UWidget*>                             RootPanelsArray;                                           // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UGlobalMenuButton_ROOT_C*                    RootInventoryButton;                                       // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGlobalMenuButton_ROOT_C*                    RootCraftButton;                                           // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGlobalMenuButton_ROOT_C*                    RootMapButton;                                             // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGlobalMenuButton_ROOT_C*                    RootOptionsButton;                                         // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGlobalMenuButton_ROOT_C*                    RootExitButton;                                            // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGlobalMenuButton_ROOT_C*                    RootCloseButton;                                           // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGlobalMenuButton_ROOT_C*                    RooRespawnButton;                                          // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(78452);
		return ptr;
	}



	void STATIC_Root_ini_Buttons_IsValid_(class UGlobalMenuButton_ROOT_C* Inventory, class UGlobalMenuButton_ROOT_C* Craft, class UGlobalMenuButton_ROOT_C* Map, class UGlobalMenuButton_ROOT_C* Options, class UGlobalMenuButton_ROOT_C* Exit, class UGlobalMenuButton_ROOT_C* Close, class UGlobalMenuButton_ROOT_C* Respawn);
	void STATIC_RootHideAllPanels();
	void STATIC_RootUnselectAll();
	void STATIC_Root_ShowInventory();
	void STATIC_Root_ShowCraft();
	void STATIC_Root_ShowMap();
	void STATIC_Root_ShowOptions();
	void STATIC_Root_ShowActorCraft(class AActor* Actor);
	void STATIC_Root_ShowExitMenu();
	void STATIC_RootShowInventory_NoAnim();
	void STATIC_Root_MinimalMode(bool SetMinimalistic);
	void STATIC_Root_HideBlur(bool Hide);
	void STATIC_Root_RespanwMenu();
	void STATIC_Root_OnOpen();
	void STATIC_Root_OnClose();
	void STATIC_ExecuteUbergraph_GlobalMenu_ROOT(int EntryPoint);
	void STATIC_Click_EXIT_Button__DelegateSignature();
	void STATIC_Click_RESPAWN_Button__DelegateSignature();
	void STATIC_Click_CLOSE_Button__DelegateSignature();
	void STATIC_Click_Options_Button__DelegateSignature();
	void STATIC_Click_MAP_Button__DelegateSignature();
	void STATIC_Click_CRAFT_Button__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
