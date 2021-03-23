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

// WidgetBlueprintGeneratedClass Menu_InGame_MainMenu.Menu_InGame_MainMenu_C
// 0x003F (FullSize[0x0250] - InheritedSize[0x0211])
class UMenu_InGame_MainMenu_C : public UMenu_InGame_Panel_ROOT_C
{
public:
	unsigned char                                      UnknownData_U2J8[0x7];                                     // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0218(0x0008) (Transient, DuplicateTransient)
	class UMenu_Item_C*                                Exit;                                                      // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenu_Item_C*                                Menu_Item;                                                 // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenu_Item_C*                                Menu_Item_2;                                               // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenu_Item_C*                                Options;                                                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenu_Item_C*                                Return;                                                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenu_InGameMenuBase_C*                      Parent;                                                    // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(63522);
		return ptr;
	}



	void STATIC_Construct();
	void STATIC_BndEvt__Menu_Item_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	void STATIC_BndEvt__Menu_Item_0_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature();
	void STATIC_BndEvt__Menu_Item_2_K2Node_ComponentBoundEvent_23_OnClick__DelegateSignature();
	void STATIC_BndEvt__Menu_Item_K2Node_ComponentBoundEvent_15_OnClick__DelegateSignature();
	void STATIC_BndEvt__Menu_Item_1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void STATIC_ExecuteUbergraph_Menu_InGame_MainMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
