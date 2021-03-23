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

// WidgetBlueprintGeneratedClass Menu_InGame_OptionsMenu.Menu_InGame_OptionsMenu_C
// 0x0037 (FullSize[0x0248] - InheritedSize[0x0211])
class UMenu_InGame_OptionsMenu_C : public UMenu_InGame_Panel_ROOT_C
{
public:
	unsigned char                                      UnknownData_F4HI[0x7];                                     // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0218(0x0008) (Transient, DuplicateTransient)
	class UMenu_Item_C*                                Audio;                                                     // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenu_Item_C*                                Back;                                                      // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenu_Item_C*                                Keyboard;                                                  // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenu_Item_C*                                Mouse;                                                     // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenu_Item_C*                                Video;                                                     // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(63362);
		return ptr;
	}



	void STATIC_Construct();
	void STATIC_BndEvt__Menu_Item_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	void STATIC_BndEvt__Menu_Item_2_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature();
	void STATIC_BndEvt__Audio_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void STATIC_BndEvt__Controller_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void STATIC_On_Open();
	void STATIC_BndEvt__Keyboard_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void STATIC_ExecuteUbergraph_Menu_InGame_OptionsMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
