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

// WidgetBlueprintGeneratedClass ChatWidgetBASE.ChatWidgetBASE_C
// 0x02E8 (FullSize[0x04E8] - InheritedSize[0x0200])
class UChatWidgetBASE_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            ShowMainChat;                                              // 0x0208(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Close;                                              // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Send;                                               // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    CHAT_WINDOW;                                               // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                ChatVerticalBox;                                           // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            EditableTextBoxCHAT;                                       // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_3;                                                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                MainChatVB;                                                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     MainChatWindow;                                            // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ScrollBox_1;                                               // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ScrollBox_MainChat;                                        // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                SEND_Panel;                                                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VertBox;                                                   // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               SendToAll;                                                 // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S2JX[0x7];                                     // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidget*                                     String;                                                    // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GUI_ChatMessageType_EGUI_ChatMessageType> CurrentMessageType;                                        // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MJ0X[0x7];                                     // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FButtonStyle                                NormalButoonStyle;                                         // 0x0298(0x0238) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               RemoveWidget;                                              // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W0S4[0x7];                                     // 0x04D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FText>                               MutedPlayers;                                              // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(43446);
		return ptr;
	}



	void STATIC_MutePlayer(const struct FText& PlayerNick, bool Mute);
	void STATIC_EncryptOnClient(const struct FText& Text, bool* LocalEncrypt1);
	void STATIC_SelectButton(TEnumAsByte<GUI_ChatMessageType_EGUI_ChatMessageType> CurrentMessageType);
	struct FText Get_EditableTextBoxCHAT_HintText_1();
	struct FSlateColor GetColorAndOpacity_3();
	struct FSlateColor GetColorAndOpacity_2();
	struct FSlateColor GetColorAndOpacity_1();
	void STATIC_SetMouseOnWidget();
	void STATIC_SetbuttonStyle(class UButton* Target, TEnumAsByte<SlateCore_ESlateBrushDrawType> Draw_As);
	void STATIC_AddChatMessage(const struct FGUI_ChatMessageStructure& ChatStr);
	void STATIC_BndEvt__EditableTextBoxCHAT_K2Node_ComponentBoundEvent_62_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void STATIC_BndEvt__Button_ToAll_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void STATIC_BndEvt__Button_ToTeam_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void STATIC_ReciveChatMessage(const struct FGUI_ChatMessageStructure& ChatStruct);
	void STATIC_CloseMainChatWindow();
	void STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_195_OnButtonClickedEvent__DelegateSignature();
	void STATIC_BndEvt__Button_Close_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature();
	void STATIC_BndEvt__Button_ToFriends_K2Node_ComponentBoundEvent_458_OnButtonClickedEvent__DelegateSignature();
	void STATIC_Construct();
	void STATIC_OpenChat();
	void STATIC_On_OpenMainWindow();
	void STATIC_ExecuteUbergraph_ChatWidgetBASE(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
