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

// BlueprintGeneratedClass BOT_CreatureAI_Controller.BOT_CreatureAI_Controller_C
// 0x0010 (FullSize[0x0470] - InheritedSize[0x0460])
class ABOT_CreatureAI_Controller_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0460(0x0008) (Transient, DuplicateTransient)
	class ABOT_CreatureBase_C*                         CHAR;                                                      // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(56482);
		return ptr;
	}



	void STATIC_UserConstructionScript();
	void STATIC_OnFail_3A0E037844FC0342739A088A9204102B(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void STATIC_OnSuccess_3A0E037844FC0342739A088A9204102B(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void STATIC_ReceiveBeginPlay();
	void STATIC_MoveTo(const struct FVector& MoveLocation);
	void STATIC_ExecuteUbergraph_BOT_CreatureAI_Controller(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
