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

// WidgetBlueprintGeneratedClass PhoneMainWB.PhoneMainWB_C
// 0x0020 (FullSize[0x0220] - InheritedSize[0x0200])
class UPhoneMainWB_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UButton*                                     ButtonFire;                                                // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ButtonReload;                                              // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ACv2_Character_C*                            PlayerCharacter;                                           // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(39128);
		return ptr;
	}



	void STATIC_PreConstruct(bool IsDesignTime);
	void STATIC_BndEvt__ButtonReload_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature();
	void STATIC_BndEvt__ButtonFire_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature();
	void STATIC_BndEvt__ButtonFire_K2Node_ComponentBoundEvent_124_OnButtonPressedEvent__DelegateSignature();
	void STATIC_BndEvt__ButtonFire_K2Node_ComponentBoundEvent_136_OnButtonReleasedEvent__DelegateSignature();
	void STATIC_ExecuteUbergraph_PhoneMainWB(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
