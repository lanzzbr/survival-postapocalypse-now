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

// WidgetBlueprintGeneratedClass AfterDeadGUI.AfterDeadGUI_C
// 0x00A9 (FullSize[0x02A9] - InheritedSize[0x0200])
class UAfterDeadGUI_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UBorder*                                     Border_2;                                                  // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ButtonText;                                                // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Play;                                                      // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                                ProgressBar_1;                                             // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  survcoins;                                                 // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  survrecord;                                                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       RespawnText;                                               // 0x0248(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ReadyText;                                                 // 0x0260(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              CurrentTime;                                               // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0SXF[0x4];                                     // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                TimerVar;                                                  // 0x0280(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                              DefaultTime;                                               // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UYCJ[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       PressToRespawn;                                            // 0x0290(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ready;                                                     // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(43683);
		return ptr;
	}



	void STATIC_Timer();
	void STATIC_BndEvt__PLAY_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void STATIC_Destruct();
	void STATIC_Construct();
	void STATIC_BndEvt__PLAY_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void STATIC_BndEvt__PLAY_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void STATIC_SET_READY();
	void STATIC_ON_START();
	void STATIC_ExecuteUbergraph_AfterDeadGUI(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
