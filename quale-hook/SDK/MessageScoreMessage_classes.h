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

// WidgetBlueprintGeneratedClass MessageScoreMessage.MessageScoreMessage_C
// 0x0010 (FullSize[0x0210] - InheritedSize[0x0200])
class UMessageScoreMessage_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UVerticalBox*                                VerticalBox_1;                                             // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(73148);
		return ptr;
	}



	void STATIC_AddMessage(TEnumAsByte<GUI_ScoreMessageType_EGUI_ScoreMessageType> MessageType, const struct FText& MessageText);
	void STATIC_ExecuteUbergraph_MessageScoreMessage(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
