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

// BlueprintGeneratedClass Cv2_AdminPawn.Cv2_AdminPawn_C
// 0x0064 (FullSize[0x042C] - InheritedSize[0x03C8])
class ACv2_AdminPawn_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        brusok;                                                    // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            Camera;                                                    // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm;                                                 // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class APawn*>                               TargetPawn;                                                // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               isPressMouseButton;                                        // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SRC6[0x3];                                     // 0x0401(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                IndexTargetPlayer;                                         // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             TargetNetId;                                               // 0x0408(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      TargetActor;                                               // 0x0418(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     myLocation;                                                // 0x0420(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(56899);
		return ptr;
	}



	void STATIC_UserConstructionScript();
	void STATIC_InpAxisEvt_Turn_K2Node_InputAxisEvent_124(float AxisValue);
	void STATIC_InpAxisEvt_LookUp_K2Node_InputAxisEvent_116(float AxisValue);
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveDestroyed();
	void STATIC_RightButton();
	void STATIC_LeftButton();
	void STATIC_CheckArrayPlayers();
	void STATIC_SetActorLocationServer(const struct FVector& Loca);
	void STATIC_BanPlayerAP();
	void STATIC_KickPlayerAP();
	void STATIC_AddResources();
	void STATIC_CLIENT_ShowPlayerInGUI(const struct FString& NetId);
	void STATIC_SERVER_ShowPlayer(const struct FString& NetId);
	void STATIC_CLIENT_ShowAdminPanel();
	void STATIC_SetPawnLocationServer();
	void STATIC_ExecuteUbergraph_Cv2_AdminPawn(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
