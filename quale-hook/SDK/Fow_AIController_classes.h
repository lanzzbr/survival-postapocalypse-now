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

// BlueprintGeneratedClass Fow_AIController.Fow_AIController_C
// 0x0010 (FullSize[0x0470] - InheritedSize[0x0460])
class AFow_AIController_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0460(0x0008) (Transient, DuplicateTransient)
	class AFow_BOT_C*                                  NPC;                                                       // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(54812);
		return ptr;
	}



	void STATIC_UserConstructionScript();
	void STATIC_OnFail_EC73DAE14142DCD3D694D1861C0867EC(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void STATIC_OnSuccess_EC73DAE14142DCD3D694D1861C0867EC(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void STATIC_StopMove();
	void STATIC_MoveTo(const struct FVector& Location);
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_Fow_AIController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
