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

// WidgetBlueprintGeneratedClass MENU_ROOT.MENU_ROOT_C
// 0x0018 (FullSize[0x0218] - InheritedSize[0x0200])
class UMENU_ROOT_C : public UUserWidget
{
public:
	TEnumAsByte<GUI_Menu_InGameState_EGUI_Menu_InGameState> ROOT_Menu_State;                                           // 0x0200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LKCD[0x7];                                     // 0x0201(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMenu_InGame_Panel_ROOT_C*>           ROOP_Panels_Array;                                         // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(63863);
		return ptr;
	}



	void STATIC_Root_SaveSettings();
	void STATIC_Root_LoadSettings();
	void STATIC_OnMenuStateChanged(TEnumAsByte<GUI_Menu_InGameState_EGUI_Menu_InGameState> CurrentState);
	void STATIC_ShowMenu(TEnumAsByte<GUI_Menu_InGameState_EGUI_Menu_InGameState> MenuType);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
