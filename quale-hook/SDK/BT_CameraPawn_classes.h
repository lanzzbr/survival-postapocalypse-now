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

// BlueprintGeneratedClass BT_CameraPawn.BT_CameraPawn_C
// 0x003D (FullSize[0x0405] - InheritedSize[0x03C8])
class ABT_CameraPawn_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C8(0x0008) (Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                    // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm;                                                 // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Speed;                                                     // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6GCG[0x4];                                     // 0x03EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APawn*                                       Player;                                                    // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RotateAlways;                                              // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RotateUpDown;                                              // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Roll;                                                      // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsRoll;                                                    // 0x0404(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(34190);
		return ptr;
	}



	void STATIC_UserConstructionScript();
	void STATIC_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void STATIC_InpActEvt_NumPadEight_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void STATIC_InpActEvt_NumPadSix_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void STATIC_InpActEvt_NumPadFour_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void STATIC_InpActEvt_Delete_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void STATIC_InpActEvt_NumPadFive_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void STATIC_InpAxisEvt_MoveBack_K2Node_InputAxisEvent_1(float AxisValue);
	void STATIC_InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_2(float AxisValue);
	void STATIC_DeleteDynamicCamera();
	void STATIC_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3(float AxisValue);
	void STATIC_InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_32(float AxisValue);
	void STATIC_InpAxisEvt_Turn_K2Node_InputAxisEvent_124(float AxisValue);
	void STATIC_InpAxisEvt_LookUp_K2Node_InputAxisEvent_116(float AxisValue);
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_64(float AxisValue);
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BT_CameraPawn(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
