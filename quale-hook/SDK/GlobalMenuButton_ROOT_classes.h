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

// WidgetBlueprintGeneratedClass GlobalMenuButton_ROOT.GlobalMenuButton_ROOT_C
// 0x008A (FullSize[0x028A] - InheritedSize[0x0200])
class UGlobalMenuButton_ROOT_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	struct FLinearColor                                RootNormalColor;                                           // 0x0208(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                RootSelectedColor;                                         // 0x0218(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClick;                                                   // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FText                                       RootText;                                                  // 0x0238(0x0018) (Edit, BlueprintVisible)
	bool                                               RootIsSelected;                                            // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OIW8[0x3];                                     // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                RootHoveredColor;                                          // 0x0254(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BVMI[0x4];                                     // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGlobalMenu_ROOT_C*                          RootParentMenu;                                            // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       RootKeyText;                                               // 0x0270(0x0018) (Edit, BlueprintVisible)
	bool                                               RootNeedConfirm;                                           // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<GUI_ActionNames_EGUI_ActionNames>      RootKeyAction;                                             // 0x0289(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(43656);
		return ptr;
	}



	void STATIC_Root_Set_SelectedStyle();
	void STATIC_Root_SetUnselectedStyle();
	void STATIC_Root_Set_HoveredStyle();
	void STATIC_Root_ShowConfirm();
	void STATIC_Root_HideConfirm(bool Use_Anim);
	void STATIC_ExecuteUbergraph_GlobalMenuButton_ROOT(int EntryPoint);
	void STATIC_OnClick__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
