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

// WidgetBlueprintGeneratedClass MessageWidgetBASE.MessageWidgetBASE_C
// 0x006C (FullSize[0x026C] - InheritedSize[0x0200])
class UMessageWidgetBASE_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UCv2_HintActionWidget_C*                     Cv2_HintActionWidget;                                      // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKillsMultiplier_WB_C*                       KillsMultiplier_WB;                                        // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMessage_Global_C*                           Message_GlobalMessage;                                     // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMessageHeadshotMessage_C*                   MessageHeadshotMessage;                                    // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMessageKillShip_Base_C*                     MessageKillShip_Base;                                      // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMessageLevelUpString_C*                     MessageLevelUpString;                                      // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMessageZoneInfo_C*                          MessageZoneInfo;                                           // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  NoCraft;                                                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMessageScoreMessage_C*                      ScoreMessage;                                              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       MessageText;                                               // 0x0250(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                MessageTune;                                               // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(73315);
		return ptr;
	}



	void STATIC_Construct();
	void STATIC_ShowHintAction(const struct FText& Text);
	void STATIC_ShowLevelUp(int Index);
	void STATIC_ShowNoCraft(bool Show);
	void STATIC_ShowZoneMessage(TEnumAsByte<GUI_ZoneMessageType_EGUI_ZoneMessageType> ZoneMessageType, class ACv2_ScenarioZone_C* Zone);
	void STATIC_ShowCustomMessage(const struct FText& Text, int Tune);
	void STATIC_ShowEvacuation();
	void STATIC_ShowGlobalMessage(const struct FText& InText, float Speed_0_2_);
	void STATIC_ExecuteUbergraph_MessageWidgetBASE(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
