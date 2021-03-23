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

// WidgetBlueprintGeneratedClass OverheadWidgetBASE.OverheadWidgetBASE_C
// 0x0038 (FullSize[0x0238] - InheritedSize[0x0200])
class UOverheadWidgetBASE_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UTextBlock*                                  CountMeters;                                               // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                MessageBox;                                                // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  NickName;                                                  // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Speak;                                                     // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ACv2_Character_C*                            OwningCharacter;                                           // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(64037);
		return ptr;
	}



	void STATIC_CheckIsFriend(const struct FBPUniqueNetId& SteamID, struct FString* UniqNetId, bool* IsFriend);
	void STATIC_SetNickText(const struct FText& NickName, int LobbyIndex, int Meters);
	void STATIC_ReciveChatMessage(const struct FGUI_ChatMessageStructure& ChatStruct);
	void STATIC_ShowSpeak();
	void STATIC_HideSpeak();
	void STATIC_Construct();
	void STATIC_OpenChat();
	void STATIC_EventShowChatText(const struct FText& TextProxy);
	void STATIC_ExecuteUbergraph_OverheadWidgetBASE(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
