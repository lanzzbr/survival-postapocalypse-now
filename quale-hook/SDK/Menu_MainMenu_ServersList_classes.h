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

// WidgetBlueprintGeneratedClass Menu_MainMenu_ServersList.Menu_MainMenu_ServersList_C
// 0x0078 (FullSize[0x0289] - InheritedSize[0x0211])
class UMenu_MainMenu_ServersList_C : public UMenu_InGame_Panel_ROOT_C
{
public:
	unsigned char                                      UnknownData_2EP6[0x7];                                     // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0218(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            SearchAnim;                                                // 0x0220(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenu_Item_C*                                BackButton;                                                // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_3;                                                  // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenu_Item_C*                                Connectbyip;                                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ConnectToIp;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                               EditableText_1;                                            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    IP;                                                        // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USurvMainMenuButton_C*                       Refresh;                                                   // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Search;                                                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ServerName;                                                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenu_MainMenu_ServerListTable_C*            Table;                                                     // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenu_InGameMenuBase_C*                      Parent;                                                    // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMG_ESlateVisibility                               SerchingVisibility;                                        // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(77975);
		return ptr;
	}



	void STATIC_RefreshList(TArray<struct FBlueprintSessionResult>* SessionsResults);
	void STATIC_OnFailure_399DA7EF494AEE85CDB407AAB186BFAB(TArray<struct FBlueprintSessionResult> Results);
	void STATIC_OnSuccess_399DA7EF494AEE85CDB407AAB186BFAB(TArray<struct FBlueprintSessionResult> Results);
	void STATIC_Construct();
	void STATIC_BndEvt__Menu_Item_2_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void STATIC_BndEvt__Connectbyip_K2Node_ComponentBoundEvent_105_OnClick__DelegateSignature();
	void STATIC_BndEvt__Button_2_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature();
	void STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_134_OnButtonClickedEvent__DelegateSignature();
	void STATIC_On_Open();
	void STATIC_BndEvt__SurvMainMenuButton_K2Node_ComponentBoundEvent_86_OnClick__DelegateSignature();
	void STATIC_Update();
	void STATIC_ExecuteUbergraph_Menu_MainMenu_ServersList(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
