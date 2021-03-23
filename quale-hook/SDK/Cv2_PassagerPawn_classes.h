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

// BlueprintGeneratedClass Cv2_PassagerPawn.Cv2_PassagerPawn_C
// 0x0042 (FullSize[0x040A] - InheritedSize[0x03C8])
class ACv2_PassagerPawn_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C8(0x0008) (Transient, DuplicateTransient)
	class UVoiceAudioComponent*                        VoiceAudio;                                                // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVoiceChatComponent*                         VoiceChat;                                                 // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            Camera;                                                    // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm;                                                 // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ACv2_Character_C*                            Character;                                                 // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWheeledVehicle*                             Vehicle;                                                   // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<CrewEnum_ECrewEnum>                    TypeCrew;                                                  // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PushToTalk;                                                // 0x0409(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(58309);
		return ptr;
	}



	void STATIC_UserConstructionScript();
	void STATIC_InpActEvt_Use_K2Node_InputActionEvent_3(const struct FKey& Key);
	void STATIC_InpActEvt_VoiceChat_K2Node_InputActionEvent_2(const struct FKey& Key);
	void STATIC_InpActEvt_VoiceChat_K2Node_InputActionEvent_1(const struct FKey& Key);
	void STATIC_InpAxisEvt_Turn_K2Node_InputAxisEvent_124(float AxisValue);
	void STATIC_InpAxisEvt_LookUp_K2Node_InputAxisEvent_116(float AxisValue);
	void STATIC_ExitVehicle();
	void STATIC_ExitVehicleServerOnly();
	void STATIC_BndEvt__VoiceChat_K2Node_ComponentBoundEvent_0_VoiceDataAvailableSignature__DelegateSignature();
	void STATIC_ServerProcessVoiceData(TArray<unsigned char> Data);
	void STATIC_ClientReceiveVoiceData(TArray<unsigned char> Data, class APawn* FromPlayer);
	void STATIC_ReceivePossessed(class AController* NewController);
	void STATIC_ClientSetPhysics();
	void STATIC_ExecuteUbergraph_Cv2_PassagerPawn(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
