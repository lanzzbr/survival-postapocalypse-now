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

// WidgetBlueprintGeneratedClass Tutorial_BASE.Tutorial_BASE_C
// 0x0054 (FullSize[0x0254] - InheritedSize[0x0200])
class UTutorial_BASE_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UTutorialMessage_C*                          TutorialMessage;                                           // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FTimerHandle>                        PlayerTimers;                                              // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurentFrameIndex;                                          // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_X8SC[0x4];                                     // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGUI_Tutorial_Message>               PlayerFrames;                                              // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                CheckersTimer;                                             // 0x0238(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<struct FString>                             CheckersArray;                                             // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentCheckersIndex;                                      // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(58765);
		return ptr;
	}



	void STATIC_End();
	void STATIC_CheckPickAxe();
	void STATIC_CheckStone();
	void STATIC_Frame();
	void STATIC_Construct();
	void STATIC_Play_TutorialPlayer(TArray<struct FGUI_Tutorial_Message> Tut_Message);
	void STATIC_Stop_TutorialPlayer();
	void STATIC_NextCheckers();
	void STATIC_ExecuteUbergraph_Tutorial_BASE(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
